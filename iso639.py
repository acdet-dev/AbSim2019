# (C)2008 Terry Hancock
#---------------------------------------------------------------------
# iso639
"""
ISO 639 language code services

Validate ISO 639 language codes, translate to language names,
and provide selection lists.
"""
import logging


# This list of common language codes was based on the
# languages listed in a Wikipedia article:
#   List_of_official_languages_by_institution.txt
# which lists 27 languages used by international
# institutions. I figure that's a good enough criterion
# for "notable" languages that ought to appear in
# combo boxes (they are in decreasing order of frequency):
common_languages = [
    'en', 'fr', 'es', 'pt', 'ar', 'ru', 'zh', 'de', 'it', 'sv',
    'ro', 'nl', 'da', 'et', 'bg', 'la', 'hu', 'no', 'lt', 'ca',
    'fi', 'mt', 'lv', 'ga', 'cs', 'sk', 'pl']



def _extract_language_tables():
    # Read ISO 639-3 table
    iso639f = open('iso-639-3_20070205.tab', 'rt', -1, 'UTF-8')
    rows = []
    for row in iso639f:
        rows.append(row.split('\t'))
    
    rows = rows[1:] # Omit headers
    
    # Extract ISO 639-1 codes
    iso639_1 = [row for row in rows if row[3]]
    iso639_1_codes = [(row[3],row[6].strip()) for row in iso639_1]
    
    iso639_1_to_name = dict(iso639_1_codes)
    name_to_iso639_1 = dict([(b,a) for (a,b) in iso639_1_codes])
    if len(iso639_1_to_name) != len(name_to_iso639_1):
        logging.debug("ISO 639-1 not 1:1... bug?")

    # Extract ISO 639-2 codes
    iso639_2 = [row for row in rows if row[2]]
    iso639_2_codes = [(row[2],row[6].strip()) for row in iso639_2]
    
    iso639_2_to_name = dict(iso639_2_codes)
    name_to_iso639_2 = dict([(b,a) for (a,b) in iso639_2_codes])
    if len(iso639_2_to_name) != len(name_to_iso639_2):
        logging.debug("ISO 639-2 not 1:1... bug?")

    # Extract ISO 639-3 codes
    iso639_3 = [row for row in rows if row[1]]
    iso639_3_codes = [(row[1],row[6].strip()) for row in iso639_3]
    
    iso639_3_to_name = dict(iso639_3_codes)
    name_to_iso639_3 = dict([(b,a) for (a,b) in iso639_3_codes])
    if len(iso639_3_to_name) != len(name_to_iso639_3):
        logging.debug("ISO 639-3 not 1:1... bug?")

    name_to_iso639 = name_to_iso639_3
    name_to_iso639.update(name_to_iso639_2)
    name_to_iso639.update(name_to_iso639_1)

    iso639_to_name = iso639_3_to_name
    iso639_to_name.update(iso639_2_to_name)
    iso639_to_name.update(iso639_1_to_name)

    # Note that these maps are not 1:1, there is
    # more than one code for some language names

    return (iso639_to_name, name_to_iso639)

iso639_to_name, name_to_iso639 = _extract_language_tables()

iso639_to_name_reduced = dict([(b,a) for (a,b) in name_to_iso639.items()])

def get_common_languages():
    return common_languages

def get_language_name(code):
    if code in iso639_to_name:
        return iso639_to_name[code]
    else:
        return None

def get_language_code(name):
    if name in name_to_iso639:
        return name_to_iso639[name]
    else:
        return None

