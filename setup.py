from distutils.core import setup 
import py2exe 
import sys, os, site, shutil
import glob

def find_data_files(source,target,patterns):
    """Locates the specified data-files and returns the matches
    in a data_files compatible format.

    source is the root of the source data tree.
        Use '' or '.' for current directory.
    target is the root of the target data tree.
        Use '' or '.' for the distribution directory.
    patterns is a sequence of glob-patterns for the
        files you want to copy.
    """
    if glob.has_magic(source) or glob.has_magic(target):
        raise ValueError("Magic not allowed in src, target")
    ret = {}
    for pattern in patterns:
        pattern = os.path.join(source,pattern)
        for filename in glob.glob(pattern):
            if os.path.isfile(filename):
                targetpath = os.path.join(target,os.path.relpath(filename,source))
                path = os.path.dirname(targetpath)
                ret.setdefault(path,[]).append(filename)
    return sorted(ret.items())

site_dir = site.getsitepackages()[1] 
include_dll_path = os.path.join(site_dir, "gnome") 

gtk_dirs_to_include = ['etc', 'lib\\gtk-3.0', 'lib\\girepository-1.0', 'lib\\gio', 'lib\\gdk-pixbuf-2.0', 'share\\glib-2.0', 'share\\fonts', 'share\\icons', 'share\\themes\\Default', 'share\\themes\\HighContrast'] 

gtk_dlls = [] 
tmp_dlls = [] 
cdir = os.getcwd() 
for dll in os.listdir(include_dll_path): 
    if dll.lower().endswith('.dll'): 
        gtk_dlls.append(os.path.join(include_dll_path, dll)) 
        tmp_dlls.append(os.path.join(cdir, dll)) 

for dll in gtk_dlls: 
    shutil.copy(dll, cdir) 

os.makedirs('C:\\Python34\\sim\\dist\\Tools\\i18n')
os.makedirs('C:\\Python34\\sim\\dist\\lib')

shutil.copytree('voices', os.path.join('dist', 'voices'))
shutil.copytree('i18n', os.path.join('dist', 'i18n'))
shutil.copytree('img', os.path.join('dist', 'img'))
shutil.copytree('drivers', os.path.join('dist', 'drivers'))
shutil.copytree('html', os.path.join('dist', 'html'))
shutil.copytree('glade', os.path.join('dist', 'glade'))
shutil.copytree('AbSim Arduino Software', os.path.join('dist', 'AbSim Arduino Software'))
shutil.copy('iso-639-3_20070205.tab', 'dist')
shutil.copy('locale.json', 'dist')
shutil.copy('cnc_adjustments.json', 'dist')
shutil.copy('icon.ico', 'dist')
shutil.copy('abMenu.xml', 'dist')
shutil.copy('tare.json', 'dist')
shutil.copy('sensitivity.json', 'dist')
shutil.copy('C:\\Python34\\absim\\python-sim\\lib\\libxml2-2.dll', 'dist\\lib')
shutil.copy('C:\\Python34\\Tools\\i18n\\msgfmt.py', 'dist\\Tools\\i18n')
shutil.copy('C:\\Python34\\sim\\Tools\\i18n\\python.exe', 'dist\\Tools\\i18n')
# Special files for distribution


img = [
    os.path.join('img', 'no_x.png'),
    os.path.join('img', 'yes_check.png'),
    os.path.join('img', 'acdet-logo.gif'),
]

svg = [
    os.path.join('html', 'appendix_up.svg'),
    os.path.join('html', 'bladder_up.svg'),
    os.path.join('html', 'body_show_all.svg'),
    os.path.join('html', 'colon_up.svg'),
    os.path.join('html', 'dummy_imitation.svg'),
    os.path.join('html', 'dummy_imitation_female.svg'),
    os.path.join('html', 'dummy_imitation_question.svg'),
    os.path.join('html', 'dummy_imitation_show_all.svg'),
    os.path.join('html', 'gallbladder_up.svg'),
    os.path.join('html', 'Gray1220.svg'),
    os.path.join('html', 'guarding_enlarged_bladder.svg'),
    os.path.join('html', 'guarding_hepatomegaly.svg'),
    os.path.join('html', 'guarding_llq.svg'),
    os.path.join('html', 'guarding_luq.svg'),
    os.path.join('html', 'guarding_rlq.svg'),
    os.path.join('html', 'guarding_ruq.svg'),
    os.path.join('html', 'guarding_splenomegaly.svg'),
    os.path.join('html', 'ovary_left_up.svg'),
    os.path.join('html', 'ovary_right_up.svg'),
    os.path.join('html', 'pancreas_up.svg'),
    os.path.join('html', 'ugi_up.svg'),
]

glade = [
    os.path.join('glade', 'case_selector.glade'),
    os.path.join('glade', 'student_ddx_interface_expanders.ui'),
]

drivers = [
    os.path.join('drivers', 'arduino.cat'),
    os.path.join('drivers', 'arduino.inf'),
    os.path.join('drivers', 'arduino-org.cat'),
    os.path.join('drivers', 'arduino-org.inf'),
    os.path.join('drivers', 'dpinst-amd64.exe'),
    os.path.join('drivers', 'dpinst-x86.exe'),
]

# -- change main.py if needed -- #
setup(windows=['defineUser.py'], options={ 
    'py2exe': { 
        'includes' : ['gi'], 
        'packages': ['gi', 'encodings', 'cairo'],
    } 
  },


  data_files=find_data_files('data','',[
    'img/*',
    'html/*',
    'drivers/*',
    'glade/*',
    'icon.ico',
    'locale.json',
    'cnc_adjustments.json'


    ]))




dest_dir = os.path.join(cdir, 'dist') 

if not os.path.exists(dest_dir):
    os.makedirs(dest_dir)

for dll in tmp_dlls: 
    shutil.copy(dll, dest_dir) 
    #sos.remove(dll) 

for d  in gtk_dirs_to_include: 
    shutil.copytree(os.path.join('C:\\Python34\\Lib\\site-packages', "gnome", d), os.path.join(dest_dir, d))