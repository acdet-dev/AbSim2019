# i18ntrans2
"""
Generate a single internationalization translator for whole package.
"""
VERBOSE = True  # For debugging messages.

import gi
gi.require_version('Gtk', '3.0')
import gettext, inspect, os, locale, ctypes, re, subprocess, sys, shutil
from gi.repository import Gtk, GLib
import iso639, iso3166
import logging
import config


class MessageDialogWindow(Gtk.Window):

    def __init__(self, wlang):
        Gtk.Window.__init__(self, title="MessageDialog Example")

        self.wlang = wlang
        self.hide()
        self.message = "Absim failed to load " + self.wlang + " ; defaulting to English."
        self.TranslationDialog(self.message)

    def TranslationDialog(self, message):

        dialogWindow = Gtk.MessageDialog(self, 0, Gtk.MessageType.INFO, Gtk.ButtonsType.OK, message)
        dialogWindow.set_icon_from_file('icon.ico')
        dialogWindow.show_all()
        dialogWindow.run()
        dialogWindow.destroy()


# potentially try installing everything to this directory from installer
path = os.getcwd()

app_data = os.getenv('LOCALAPPDATA')
if not os.path.exists(app_data + '\\AbSim2019'):
    os.mkdir(app_data + '\\AbSim2019')
    shutil.copy(path + '\\locale.json', app_data + '\\AbSim2019\\locale.json')
    shutil.copy(path + '\\tare.json', app_data + '\\AbSim2019\\tare.json')
    shutil.copy(path + '\\sensitivity.json', app_data + '\\AbSim2019\\sensitivity.json')
    shutil.copy(path + '\\cnc_adjustments.json', app_data + '\\AbSim2019\\cnc_adjustments.json')

loglevels = { 'CRITICAL': logging.CRITICAL,
              'ERROR': logging.ERROR,
              'WARNING': logging.WARNING,
              'INFO': logging.INFO,
              'DEBUG': logging.DEBUG}

loglevel = os.getenv('ABSIMLOG', 'WARNING')
logging.basicConfig(filename=app_data + '\\AbSim2019\\log.txt', filemode='w', level=logging.DEBUG)

# Load our locale override setting (persistent from last run of program)
locale_config = config.Config("locale.json")
locale_config.read_config()
locale_override = locale_config.get_default("override")

# Introspect location of gettext library
gettext_dir = os.path.dirname(inspect.getsourcefile(gettext))
logging.debug("We have i18n gettext directory: " + gettext_dir)

# Introspect location of Ab-Sim source code:
source = os.getcwd()
app_data = os.getenv('LOCALAPPDATA')
if not os.path.exists(app_data + '\\AbSim2019\\i18n'):
    shutil.copytree(os.path.join(source, 'i18n'), app_data + '\\AbSim2019\\i18n')

if os.path.exists(app_data + '\\AbSim2019\\i18n'):
    source = app_data + '\\AbSim2019'

# Reset the locale to system default.
locale.setlocale(locale.LC_ALL, '')


def locale_tab():
    locale_table = [
      ('af', 'ZA', 'UTF-8', 'Afrikaans', 'South Africa', '1252'),
      ('ar', 'SA', 'UTF-8', 'Arabic', 'Saudi Arabia', '1256'),
      ('be', 'BY', 'UTF-8', 'Belarusian', 'Belarus', '1251'),
      ('bg', 'BG', 'UTF-8', 'Bulgarian', 'Bulgaria', '1251'),
      ('bs', 'BA', 'UTF-8', None, None, None),
      ('ca', 'ES', 'UTF-8', 'Catalan', 'Spain', '1252'),
      ('cs', 'CZ', 'UTF-8', 'Czech', 'Czech Republic', '1250'),
      ('da', 'DK', 'UTF-8', 'Danish', 'Denmark', '1252'),
      ('de', 'DE', 'UTF-8', 'German', 'Germany', '1252'),
      ('el', 'GR', 'UTF-8', 'Greek', 'Greece', '1253'),
      ('en', 'US', 'UTF-8', 'English', 'United States', '1252'),
      #('en', 'utf8', None, 'en', None, None),
      ('es', 'ES', 'UTF-8', 'Spanish', 'Spain', '1252'),
      ('et', 'EE', 'UTF-8', 'Estonian', 'Estonia', '1257'),
      ('eu', 'ES', 'UTF-8', 'Basque', 'Spain', '1252'),
      ('fa', 'IR', 'UTF-8', 'Farsi', 'Iran', '1256'),
      ('fi', 'FI', 'UTF-8', 'Finnish', 'Finland', '1252'),
      ('fr', 'BE', 'UTF-8', 'French', 'France', '1252'),
      ('fr', 'CA', 'UTF-8', 'French', 'Canada', '1252'),
      ('fr', 'CH', 'UTF-8', 'French', 'France', '1252'),
      ('fr', 'FR', 'UTF-8', 'French', 'France', '1252'),
      ('ga', None, 'UTF-8', None, None, None),
      ('gl', 'ES', 'UTF-8', 'Galician', 'Spain', '1252'),
      ('gu', None, 'UTF-8', 'Gujarati', 'India', '0'),
      ('he', 'IL', 'utf8', 'Hebrew', 'Israel', '1255'),
      ('hi', 'IN', 'UTF-8', 'Hindi', None, '65001'),
      ('hr', 'HR', 'UTF-8', 'Croatian', 'Croatia', '1250'),
      ('hu', None, 'UTF-8', 'Hungarian', 'Hungary', '1250'),
      ('id', 'ID', 'UTF-8', 'Indonesian', 'indonesia', '1252'),
      ('is', 'IS', 'UTF-8', 'Icelandic', 'Iceland', '1252'),
      ('it', 'IT', 'UTF-8', 'Italian', 'Italy', '1252'),
      ('ja', 'JP', 'UTF-8', 'Japanese', 'Japan', '932'),
      ('ka', 'GE', 'UTF-8', 'Georgian', 'Georgia', '65001'),
      ('km', 'KH', 'UTF-8', 'Khmer', None, '65001'),
      ('kn', 'IN', 'UTF-8', 'Kannada', None, '65001'),
      ('ko', 'KR', 'UTF-8', 'Korean', 'Korea', '949'),
      ('lat', None, 'UTF-8', 'Latvian', 'Latvia', '1257'),
      ('lo', 'LA', 'UTF-8', 'Lao', 'Laos', 'UTF-8'),
      ('lt', 'LT', 'UTF-8', 'Lithuanian', 'Lithuania', '1257'),
      ('mi', 'NZ', 'UTF-8', 'Maori', None, '1252'),
      ('ml', 'IN', 'UTF-8', 'Malayalam', 'India', 'x-iscii-ma'),
      ('mn', None, 'UTF-8', 'Cyrillic', 'Mongolian', '1251'),
      ('ms', 'MY', 'UTF-8', 'Malay', 'malaysia', '1252'),
      ('nl', 'NL', 'UTF-8', 'Dutch', 'Netherlands', '1252'),
      ('nn', 'NO', 'UTF-8', 'Norwegian-Nynorsk', 'Norway', '1252'),
      ('no', 'NO', 'UTF-8', 'no', None, None),
      ('ph', 'PH', 'UTF-8', 'Filipino', 'Philippines', '1252'),
      ('pl', None, 'UTF-8', 'Polish', 'Poland', '1250'),
      ('pt', 'BR', 'UTF-8', 'Portuguese', 'Brazil', '1252'),
      ('pt', 'PT', 'UTF-8', 'Portuguese', 'Portugal', '1252'),
      ('ro', 'RO', 'UTF-8', 'Romanian', 'Romania', '1250'),
      ('ru', 'RU', 'UTF-8', 'Russian', 'Russia', '1251'),
      ('sk', 'SK', 'UTF-8', 'Slovak', 'Slovakia', '1250'),
      ('sl', 'SI', 'UTF-8', 'Slovenian', 'Slovenia', '1250'),
      ('so', 'SO', 'UTF-8', None, None, None),
      ('sq', 'AL', 'UTF-8', 'Albanian', 'Albania', '1250'),
      ('sr', 'CS', 'UTF-8', None, None, None),
      ('sv', 'SE', 'UTF-8', 'Swedish', 'Sweden', '1252'),
      #('ta', 'IN', 'UTF-8', 'English', 'Australia', '1252'),
      ('th', 'TH', 'UTF-8', 'Thai', 'Thailand', '874'),
      ('tl', None, 'UTF-8', None, None, None),
      ('tr', 'TR', 'UTF-8', 'Turkish', 'Turkey', '1254'),
      ('uk', 'UA', 'UTF-8', 'Ukrainian', 'Ukraine', '1251'),
      ('vi', 'VN', 'UTF-8', 'Vietnamese', 'Viet Nam', '1258'),
      ('zh', 'CN', 'UTF-8', 'Chinese', 'China', '936'),
      ('zh', 'TW', 'UTF-8', 'Chinese', 'Taiwan', '950')]

    # Construct mappings from Windows locale to ISO locale
    win2iso_full = {}
    iso2win_full = {}
    win2iso_loc = {}
    iso2win_loc = {}
    win2iso_lang = {}
    iso2win_lang = {}
    iso2win_enc = {}
    win2iso_enc = {}
    for lang, loc, enc, wlang, wloc, wenc in locale_table:
        if wloc:
            win2iso_full["%s_%s" % (wlang, wloc)] = "%s_%s" % (lang, loc)
            win2iso_loc[wloc] = loc
        if wlang:
            win2iso_lang[wlang] = lang
        if loc:
            iso2win_full["%s_%s" % (lang, loc)] = "%s_%s" % (wlang, wloc)
            iso2win_loc[loc] = wloc
        if lang:
            iso2win_lang[lang] = wlang
        if wenc:
            iso2win_enc[wlang] = wenc
        if enc:
            win2iso_enc[lang] = enc
    #}
    return win2iso_full, iso2win_full, win2iso_loc, iso2win_loc, win2iso_lang, iso2win_lang, iso2win_enc, win2iso_enc


def _detect_windows_locale(win2iso_full, iso2win_full, win2iso_loc, iso2win_loc,
    win2iso_lang, iso2win_lang, iso2win_enc, win2iso_enc):
    """
    Attempt to detect the locale from Windows O/S.
    """
    # Get locale (assumed to be Windows locale)
    test = locale.getlocale(locale.LC_ALL)

    wfull = locale.getlocale(locale.LC_ALL)[0]

    parts = wfull.split('_')
    wlang = parts[0]
    if len(parts)>1:
        wloc = parts[1]
    wlang = parts[0]

    result = [(key, value) for key, value in win2iso_full.items() if key.startswith(wlang)]

    # try except blocks to get locale_tab mappings
    try:
        full = result[0][0].split('_') #Japanese_Japan
        wloc = full[1]  # Japan
        const = result[0][1]  # ja_JP
        loc = const.split('_')[1]  # JP
        lang = win2iso_lang[wlang]  # ja
        wenc = iso2win_enc[wlang]  # 932 wlang = japanese
        enc = win2iso_enc[lang]  # UTF-8

        # List of locales in decreasing order of preference, with any omitted mappings left out:
        locale_preferences = [e for e in (lang, loc, enc, wlang, wloc, wenc) if e is not None]
        logging.debug("i18ntrans:235:Detected Locale Preferences.")
        return locale_preferences
    except IndexError:
        logging.debug('Could not get preferences on first pass. Trying different mapping.')
        result = [(key, value) for key, value in win2iso_lang.items() if key.startswith(wlang)]
        try:
            full = result[0][0].split('_')
            loc = full[1]  # CA
            const_list = [wlang, loc]
            const = '_'.join(const_list)  # fr_CA
            wloc = iso2win_loc[loc]  # Canada
            lang = wlang  # fr
            wlang = iso2win[lang]
            wenc = iso2win_enc[wlang]  # 932
            enc = win2iso_enc[lang]  # UTF-8

            # List of locales in decreasing order of preference, with any omitted mappings left out:
            locale_preferences = [e for e in (lang, loc, enc, wlang, wloc, wenc) if e is not None]
            logging.debug("i18ntrans:235:Detected Locale Preferences.")

            return locale_preferences
        except IndexError:
            logging.debug('Could not get preferences on second pass. Trying different mapping.')
            result = [(key, value) for key, value in iso2win_full.items() if key.startswith(wlang)]
            try:
                full = result[0][0].split('_') #[fr, CA]
                loc = full[1]  # CA
                const_list = [wlang, loc]
                const = '_'.join(const_list) #fr_CA
                wloc = iso2win_loc[loc]
                lang = wlang #fr
                hello = iso2win_full["%s_%s" % (lang, loc)]
                wlang = hello.split('_')[0]
                wenc = iso2win_enc[wlang]  # 932
                enc = win2iso_enc[lang]  # UTF-8

                # List of locales in decreasing order of preference, with any omitted mappings left out:
                locale_preferences = [e for e in (lang, loc, enc, wlang, wloc, wenc) if e is not None]
                logging.debug("i18ntrans:235:Detected Locale Preferences.")

                return locale_preferences
            except IndexError:
                result = [(key, value) for key, value in iso2win_loc.items() if key.startswith(wlang)]
                try:
                    full = result[0][0].split('_')

                except IndexError:
                    result = [(key, value) for key, value in iso2win_lang.items() if key.startswith(wlang)]
                    try:
                        full = result[0][0].split('_')

                    except IndexError:
                        result = [(key, value) for key, value in win2iso_loc.items() if key.startswith(wlang)]
                        try:
                            full = result[0][0].split('_')

                        except IndexError:
                            logging.debug("i18ntrans did not work. Defaulting to English.")
                            locale_preferences = ['en', 'US', 'UTF-8', 'English', 'United States', '1252']
                            return locale_preferences


# somehow link to _get_locale_configs() function?
win2iso_full, iso2win_full, win2iso_loc, iso2win_loc,win2iso_lang, iso2win_lang, iso2win_enc, win2iso_enc = \
    locale_tab()

locale_preferences = _detect_windows_locale(win2iso_full, iso2win_full, win2iso_loc, iso2win_loc, win2iso_lang,
                                            iso2win_lang, iso2win_enc, win2iso_enc)


def _gen_locale_re():
    """
    Generate utility regular expressions for parsing locale filenames (PO, MO, locale string).
    """
    locale_domain = r'[A-Za-z_]*'
    locale_iso_lang = r'[a-z]{2,3}'
    locale_win_lang = r'[A-Za-z ]*'
    locale_iso_country = r'[A-Z]{2,3}'
    locale_win_country = r'[A-Za-z ]*'
    locale_encoding = r'[A-Za-z0-9]*'

    # Regular expression modifiers
    def optional(s, greedy=True):
        if greedy:
            return r'(?:%s)?' % s
        else:
            return r'(?:%s)??' % s
    def named(s, name):
        return r'(?P<%s>%s)' % (name, s)

    locale_re_str = (
      named(locale_iso_lang, 'language') +
      optional(r'_' + named(locale_iso_country, 'country')) +
      optional(r'\.' + named(locale_encoding, 'encoding'), greedy=False))

    win_locale_re_str = (
      named(locale_win_lang, 'language') +
      optional(r'_' + named(locale_win_country, 'country')) +
      optional(r'\.' + named(locale_encoding, 'encoding'), greedy=False))

    po_re_str =  locale_domain + r'-' + locale_re_str + r'\.po$'
    mo_re_str =  locale_domain + r'-' + locale_re_str + r'\.mo$'
    return re.compile(po_re_str), re.compile(mo_re_str), re.compile(locale_re_str)


po_re, mo_re, lo_re = _gen_locale_re()


def get_locale_options():
    """
    Uses introspection to generate the list of available locales for the "Locale" menu.
    Generates an option for each available MO file, plus the Automatic option
    (which turns off the override, reverting to automatic detection).
    """
    options = []
    try:
        for mo in sorted(_list_mo()):
            if mo[3]:
                country_s = '(%s)' % mo[3]
            else:
                country_s = ''
            if mo[2]:
                language_s = mo[2]
            else:
                language_s = mo[0]
            if locale_override and locale.normalize(locale_override) == mo[0]:
                prefix = ' '
                #menu.MenuBar.on_menu_choices_changed()
            else:
                prefix = ' '
            options.append( (prefix + language_s + country_s, mo[0]) )
    except TypeError:

        logging.debug('No language binaries to be found.')

    if locale_override is None:
      options.append( ('*Automatic', None))
    else:
      options.append( (' Automatic', None))
    return options


def _list_mo():
    """
    List locale info for all MO translation binary files under the i18n directory of the source tree.
    """
    #source = os.path.dirname(os.path.abspath(inspect.getfile(inspect.currentframe())))

    i18n = os.path.join(source, 'i18n')
    mo_list = []
    for f in os.listdir(i18n):
        if os.path.isdir(os.path.join(i18n, f)):
            m = lo_re.match(f)
            if m:
                g = m.groupdict()
                loc_str = g['language']
                if g['country']:
                  loc_str += ('_' + g['country'])
                if g['encoding']:
                  loc_str += ('.' + g['encoding'])
                mo_list.append((
                    locale.normalize(loc_str),
                    loc_str,
                    iso639.get_language_name(g['language']),
                    iso3166.get_country_name(g['country']),
                    f))
    return mo_list


def _list_po():
    """
    List locale info for all PO translation source files in the i18n directory of the source tree.
    """
    #source = os.path.dirname(os.path.abspath(inspect.getfile(inspect.currentframe())))
    i18n = os.path.join(source, 'i18n')
    po_list = []
    for f in os.listdir(i18n):
        m = po_re.match(f)
        if m:
          g = m.groupdict()
          loc_str = g['language']
          if g['country']:
            loc_str += ('_' + g['country'])
          if g['encoding']:
            loc_str += ('.' + g['encoding'])
          po_list.append((
            locale.normalize(loc_str),
            loc_str,
            iso639.get_language_name(g['language']),
            iso3166.get_country_name(g['country']),
            os.path.join(i18n,f)))
    return po_list


def _parse_locale_iso_spec(spec):
    """
    Parse an ISO locale specification into components.
    """
    a = str(locale.getlocale())
    m = lo_re.match(str(locale.getlocale()[1]))
    #m = lo_re.match()
    if m:
        g = m.groupdict()
        logging.debug("i18ntrans:175:Parse Locale ISO: " + repr(g))
        return( g.get('language', None), g.get('country',  None), g.get('encoding', None) )
    else:
        raise TypeError


def _expand_iso_spec(spec):
    language, country, encoding = spec[0], spec[1], spec[2]
    windows_language = iso2win_lang.get(language, 'English')
    windows_country  = iso2win_loc.get(country, 'United States')
    specs = []
    #specs.append(spec)
    specs.append(language)
    if encoding:
        specs.append('%s_%s.%s' % (language, country, encoding))
    else:
        specs.append('%s_%s' % (language, country))
    if windows_country:
        specs.append('%s_%s' % (windows_language, windows_country))
    else:
        specs.append(windows_language)

    return specs


def set_locale(loc_prefs):
    logging.debug("Attempting to set locale to" + repr(loc_prefs))
    # Get the source directory to load configuration files:
    #source = os.path.dirname(os.path.abspath(inspect.getfile(inspect.currentframe())))
    i18n = os.path.join(source, 'i18n')

    try:
        t = gettext.translation('ab_sim', os.path.join(source, 'i18n'), [loc_prefs[0]])
        logging.debug('gettext translation object created for lang: ' + loc_prefs[0])
    except FileNotFoundError:
        logging.debug("No translation file found for target language; defaulting to English")
        wlang = loc_prefs[3]
        MessageDialogWindow(wlang)
        loc_prefs = ['en', 'US', 'UTF-8', 'English', 'United States', '1252']
        t = gettext.translation('ab_sim', os.path.join(source, 'i18n'), [loc_prefs[0]])

    t.install()

    translator = t.gettext

    # Set C locale for Glade UI & bind ab_sim domain

    # This is sensitive to the particular library version in use
    # by the Gnome GTK3 PyGI installation:
    libintl = ctypes.cdll.LoadLibrary("libintl-8.dll")

    expanded_loc_prefs = []

    expanded_loc_prefs.extend(_expand_iso_spec(loc_prefs)) #breaking here
    try:
        logging.debug("i18ntrans:312:SETTING LOCALE DOMAIN FOR GTK/GLADE...")
        libintl.bindtextdomain('ab_sim', i18n)
        libintl.bind_textdomain_codeset('ab_sim', 'UTF-8')
        libintl.textdomain('ab_sim')
        logging.debug("i18ntrans:316:('ab_sim'). Done.")
        #cloc = locale.getlocale(locale.LC_ALL)
    except locale.Error:
        logging.debug("i18ntrans:319:Unable to bind text domain for Glade UI.")
        logging.debug("i18ntrans:320:Some on-screen messages will not be translated.")

    # To maximize compatibility, try permutations of ISO and Windows locales to
    # find one that works

    loc = expanded_loc_prefs[1]
    try:
      logging.debug("i18ntrans:327:Print trying locale (%s)...")
      os.putenv('LANG', loc)
      locale.setlocale(locale.LC_ALL, '') #IT WORKS!!!!!!!
      logging.debug("i18ntrans:330:Done.")
    except locale.Error:
      logging.debug('Locale error encountered.')
      #continue
    else:
      logging.debug("i18ntrans:335:Successfully set locale")
      logging.debug("i18ntrans:336:Check system locale is done.")
      #break
    os.environ['LANG'] = loc
    logging.debug("i18ntrans:339:LANG")
    return translator


def _new_loc_prefs(loc_prefs, win2iso_full, iso2win_full, win2iso_loc, iso2win_loc,
win2iso_lang, iso2win_lang, iso2win_enc, win2iso_enc):
    """
    Attempt to detect the locale from Windows O/S.
    """
    # Get locale (assumed to be Windows locale)
    #full ja_JP, const= ja_JP, loc = JP, lang = ja
    wlang = loc_prefs #Japanese
    result = [(key, value) for key, value in win2iso_full.items() if key.startswith(wlang)]

    full = result[0][0].split('_') #Japanese_Japan
    wloc = full[1] #Japan
    const = result[0][1] #ja_JP
    loc = const.split('_')[1] #JP
    lang = win2iso_lang[wlang] #ja
    wenc = iso2win_enc[wlang] #932
    enc = win2iso_enc[lang] #UTF-8

    # List of locales in decreasing order of preference, with any omitted mappings left out:
    locale_preferences = [e for e in (lang, loc, enc, wlang, wloc, wenc) if e is not None]
    logging.debug("i18ntrans:235:Detected Locale Preferences: " + repr(locale_preferences))
    return locale_preferences


def set_menu_locale(loc_prefs):
    i18n = os.path.join(source, 'i18n')

    t = gettext.translation('menu_sim', os.path.join(source, 'i18n'), [loc_prefs[0]])
    t.install()

    translator2 = t.gettext
    return translator2


def set_locale_handler(lbl, loc, popup):
    from aStringResources import AStringResources
    global translator

    string_resources = AStringResources("i18n_trans").get_by_identifier()

    locale_config.set_default("override", loc) #from _list_mo()
    locale_config.write_config({"override":loc})
    if loc is None:
        loc = 'None'

    locale_preferences = _new_loc_prefs(loc, win2iso_full, iso2win_full, win2iso_loc, iso2win_loc, win2iso_lang,
                                        iso2win_lang, iso2win_enc, win2iso_enc)

    translator = set_locale(locale_preferences)
    popup(string_resources["message_1"] + " " + "({lbl}/{loc})".format(lbl=lbl, loc=loc)
          + " " + string_resources["message_2"])

    return translator


translator = set_locale(locale_preferences)


def _(s):
    return translator(s)