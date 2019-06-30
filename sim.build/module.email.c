/* Generated code for Python source for module 'email'
 * created by Nuitka version 0.5.31
 *
 * This code is in part copyright 2018 Kay Hayen.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "nuitka/prelude.h"

#include "__helpers.h"

/* The _module_email is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_email;
PyDictObject *moduledict_email;

/* The module constants used, if any. */
extern PyObject *const_str_plain_message_from_string;
extern PyObject *const_str_plain_parsestr;
static PyObject *const_tuple_str_plain_s_str_plain_args_str_plain_kws_str_plain_Parser_tuple;
static PyObject *const_str_plain_message_from_file;
extern PyObject *const_str_plain_s;
static PyObject *const_tuple_str_plain_BytesParser_tuple;
static PyObject *const_str_digest_b4f3811ed36bb93a81c79920c69342f4;
static PyObject *const_list_str_digest_b4f3811ed36bb93a81c79920c69342f4_list;
static PyObject *const_str_plain_mime;
extern PyObject *const_str_plain_parser;
static PyObject *const_str_plain_message_from_binary_file;
static PyObject *const_str_digest_7021414e710b97d4b9ffdc814b3e115b;
extern PyObject *const_str_plain___all__;
extern PyObject *const_dict_empty;
static PyObject *const_tuple_f2076a9f721fadbab7d7e64a5a79dc3f_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_plain_fp_str_plain_args_str_plain_kws_str_plain_Parser_tuple;
static PyObject *const_str_digest_7bfaa95c45d4e704c39b2624db1c6416;
static PyObject *const_str_digest_08d10d57919f136e5926547f0ad1ad73;
extern PyObject *const_str_plain_args;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_feedparser;
extern PyObject *const_str_plain_quoprimime;
extern PyObject *const_str_plain_parsebytes;
extern PyObject *const_str_plain_Parser;
extern PyObject *const_str_plain_parse;
static PyObject *const_str_plain_message_from_bytes;
extern PyObject *const_str_plain_message;
extern PyObject *const_str_plain_email;
static PyObject *const_str_digest_3b7932806a101349ea3f70a5ea1b2d62;
extern PyObject *const_str_digest_83b73b72bdc078f56a1611a452ee7e4b;
static PyObject *const_tuple_str_plain_Parser_tuple;
extern PyObject *const_str_plain_charset;
extern PyObject *const_str_plain_fp;
extern PyObject *const_str_plain_kws;
extern PyObject *const_str_plain___path__;
static PyObject *const_str_plain_iterators;
extern PyObject *const_str_plain_generator;
static PyObject *const_str_digest_8241d94f3f38fd04f85017d6481c999f;
extern PyObject *const_str_plain_header;
static PyObject *const_list_9388672962fa6ddff96479f2b76a53a6_list;
extern PyObject *const_str_plain_BytesParser;
extern PyObject *const_str_plain_errors;
extern PyObject *const_str_plain_utils;
static PyObject *const_tuple_ea5769b86ffca871976b136a6f086911_tuple;
static PyObject *const_str_plain_encoders;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_9be3b7477143c298d0d99ee8f2ddca56;
extern PyObject *const_str_plain_base64mime;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_plain_s_str_plain_args_str_plain_kws_str_plain_Parser_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 2, const_str_plain_kws ); Py_INCREF( const_str_plain_kws );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 3, const_str_plain_Parser ); Py_INCREF( const_str_plain_Parser );
    const_str_plain_message_from_file = UNSTREAM_STRING( &constant_bin[ 544649 ], 17, 1 );
    const_tuple_str_plain_BytesParser_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_BytesParser_tuple, 0, const_str_plain_BytesParser ); Py_INCREF( const_str_plain_BytesParser );
    const_str_digest_b4f3811ed36bb93a81c79920c69342f4 = UNSTREAM_STRING( &constant_bin[ 544666 ], 37, 0 );
    const_list_str_digest_b4f3811ed36bb93a81c79920c69342f4_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_b4f3811ed36bb93a81c79920c69342f4_list, 0, const_str_digest_b4f3811ed36bb93a81c79920c69342f4 ); Py_INCREF( const_str_digest_b4f3811ed36bb93a81c79920c69342f4 );
    const_str_plain_mime = UNSTREAM_STRING( &constant_bin[ 544703 ], 4, 1 );
    const_str_plain_message_from_binary_file = UNSTREAM_STRING( &constant_bin[ 544707 ], 24, 1 );
    const_str_digest_7021414e710b97d4b9ffdc814b3e115b = UNSTREAM_STRING( &constant_bin[ 544731 ], 138, 0 );
    const_tuple_f2076a9f721fadbab7d7e64a5a79dc3f_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_f2076a9f721fadbab7d7e64a5a79dc3f_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_f2076a9f721fadbab7d7e64a5a79dc3f_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_f2076a9f721fadbab7d7e64a5a79dc3f_tuple, 2, const_str_plain_kws ); Py_INCREF( const_str_plain_kws );
    PyTuple_SET_ITEM( const_tuple_f2076a9f721fadbab7d7e64a5a79dc3f_tuple, 3, const_str_plain_BytesParser ); Py_INCREF( const_str_plain_BytesParser );
    const_tuple_str_plain_fp_str_plain_args_str_plain_kws_str_plain_Parser_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_fp_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 0, const_str_plain_fp ); Py_INCREF( const_str_plain_fp );
    PyTuple_SET_ITEM( const_tuple_str_plain_fp_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_str_plain_fp_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 2, const_str_plain_kws ); Py_INCREF( const_str_plain_kws );
    PyTuple_SET_ITEM( const_tuple_str_plain_fp_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 3, const_str_plain_Parser ); Py_INCREF( const_str_plain_Parser );
    const_str_digest_7bfaa95c45d4e704c39b2624db1c6416 = UNSTREAM_STRING( &constant_bin[ 544869 ], 63, 0 );
    const_str_digest_08d10d57919f136e5926547f0ad1ad73 = UNSTREAM_STRING( &constant_bin[ 544932 ], 49, 0 );
    const_str_plain_message_from_bytes = UNSTREAM_STRING( &constant_bin[ 544981 ], 18, 1 );
    const_str_digest_3b7932806a101349ea3f70a5ea1b2d62 = UNSTREAM_STRING( &constant_bin[ 544999 ], 124, 0 );
    const_tuple_str_plain_Parser_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Parser_tuple, 0, const_str_plain_Parser ); Py_INCREF( const_str_plain_Parser );
    const_str_plain_iterators = UNSTREAM_STRING( &constant_bin[ 29129 ], 9, 1 );
    const_str_digest_8241d94f3f38fd04f85017d6481c999f = UNSTREAM_STRING( &constant_bin[ 545123 ], 118, 0 );
    const_list_9388672962fa6ddff96479f2b76a53a6_list = PyList_New( 17 );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 0, const_str_plain_base64mime ); Py_INCREF( const_str_plain_base64mime );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 1, const_str_plain_charset ); Py_INCREF( const_str_plain_charset );
    const_str_plain_encoders = UNSTREAM_STRING( &constant_bin[ 251179 ], 8, 1 );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 2, const_str_plain_encoders ); Py_INCREF( const_str_plain_encoders );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 3, const_str_plain_errors ); Py_INCREF( const_str_plain_errors );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 4, const_str_plain_feedparser ); Py_INCREF( const_str_plain_feedparser );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 5, const_str_plain_generator ); Py_INCREF( const_str_plain_generator );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 6, const_str_plain_header ); Py_INCREF( const_str_plain_header );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 7, const_str_plain_iterators ); Py_INCREF( const_str_plain_iterators );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 8, const_str_plain_message ); Py_INCREF( const_str_plain_message );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 9, const_str_plain_message_from_file ); Py_INCREF( const_str_plain_message_from_file );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 10, const_str_plain_message_from_binary_file ); Py_INCREF( const_str_plain_message_from_binary_file );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 11, const_str_plain_message_from_string ); Py_INCREF( const_str_plain_message_from_string );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 12, const_str_plain_message_from_bytes ); Py_INCREF( const_str_plain_message_from_bytes );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 13, const_str_plain_mime ); Py_INCREF( const_str_plain_mime );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 14, const_str_plain_parser ); Py_INCREF( const_str_plain_parser );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 15, const_str_plain_quoprimime ); Py_INCREF( const_str_plain_quoprimime );
    PyList_SET_ITEM( const_list_9388672962fa6ddff96479f2b76a53a6_list, 16, const_str_plain_utils ); Py_INCREF( const_str_plain_utils );
    const_tuple_ea5769b86ffca871976b136a6f086911_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_ea5769b86ffca871976b136a6f086911_tuple, 0, const_str_plain_fp ); Py_INCREF( const_str_plain_fp );
    PyTuple_SET_ITEM( const_tuple_ea5769b86ffca871976b136a6f086911_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_ea5769b86ffca871976b136a6f086911_tuple, 2, const_str_plain_kws ); Py_INCREF( const_str_plain_kws );
    PyTuple_SET_ITEM( const_tuple_ea5769b86ffca871976b136a6f086911_tuple, 3, const_str_plain_BytesParser ); Py_INCREF( const_str_plain_BytesParser );
    const_str_digest_9be3b7477143c298d0d99ee8f2ddca56 = UNSTREAM_STRING( &constant_bin[ 545241 ], 145, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_email( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a1996f4da3bdc953ae004c19ba22a303;
static PyCodeObject *codeobj_44a78571a4bfd63359fd392998cfd83c;
static PyCodeObject *codeobj_bbf2560ae818ce0ed612f56a22252c20;
static PyCodeObject *codeobj_c5d0bf4e95fc263363dc9e810ca405d7;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_08d10d57919f136e5926547f0ad1ad73;
    codeobj_a1996f4da3bdc953ae004c19ba22a303 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_message_from_binary_file, 56, const_tuple_ea5769b86ffca871976b136a6f086911_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_44a78571a4bfd63359fd392998cfd83c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_message_from_bytes, 40, const_tuple_f2076a9f721fadbab7d7e64a5a79dc3f_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_bbf2560ae818ce0ed612f56a22252c20 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_message_from_file, 48, const_tuple_str_plain_fp_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_c5d0bf4e95fc263363dc9e810ca405d7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_message_from_string, 32, const_tuple_str_plain_s_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_email$$$function_1_message_from_string(  );


static PyObject *MAKE_FUNCTION_email$$$function_2_message_from_bytes(  );


static PyObject *MAKE_FUNCTION_email$$$function_3_message_from_file(  );


static PyObject *MAKE_FUNCTION_email$$$function_4_message_from_binary_file(  );


// The module function definitions.
static PyObject *impl_email$$$function_1_message_from_string( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kws = python_pars[ 2 ];
    PyObject *var_Parser = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_c5d0bf4e95fc263363dc9e810ca405d7 = NULL;

    struct Nuitka_FrameObject *frame_c5d0bf4e95fc263363dc9e810ca405d7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c5d0bf4e95fc263363dc9e810ca405d7, codeobj_c5d0bf4e95fc263363dc9e810ca405d7, module_email, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c5d0bf4e95fc263363dc9e810ca405d7 = cache_frame_c5d0bf4e95fc263363dc9e810ca405d7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c5d0bf4e95fc263363dc9e810ca405d7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c5d0bf4e95fc263363dc9e810ca405d7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_digest_83b73b72bdc078f56a1611a452ee7e4b;
    tmp_globals_name_1 = (PyObject *)moduledict_email;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_Parser_tuple;
    tmp_level_name_1 = const_int_0;
    frame_c5d0bf4e95fc263363dc9e810ca405d7->m_frame.f_lineno = 37;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Parser );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_Parser == NULL );
    var_Parser = tmp_assign_source_1;

    tmp_dircall_arg1_1 = var_Parser;

    CHECK_OBJECT( tmp_dircall_arg1_1 );
    tmp_dircall_arg2_1 = par_args;

    if ( tmp_dircall_arg2_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "args" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg3_1 = par_kws;

    if ( tmp_dircall_arg3_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kws" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_source_name_1 = impl___internal__$$$function_5_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_parsestr );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_s;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_c5d0bf4e95fc263363dc9e810ca405d7->m_frame.f_lineno = 38;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c5d0bf4e95fc263363dc9e810ca405d7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c5d0bf4e95fc263363dc9e810ca405d7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c5d0bf4e95fc263363dc9e810ca405d7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c5d0bf4e95fc263363dc9e810ca405d7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c5d0bf4e95fc263363dc9e810ca405d7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c5d0bf4e95fc263363dc9e810ca405d7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c5d0bf4e95fc263363dc9e810ca405d7,
        type_description_1,
        par_s,
        par_args,
        par_kws,
        var_Parser
    );


    // Release cached frame.
    if ( frame_c5d0bf4e95fc263363dc9e810ca405d7 == cache_frame_c5d0bf4e95fc263363dc9e810ca405d7 )
    {
        Py_DECREF( frame_c5d0bf4e95fc263363dc9e810ca405d7 );
    }
    cache_frame_c5d0bf4e95fc263363dc9e810ca405d7 = NULL;

    assertFrameObject( frame_c5d0bf4e95fc263363dc9e810ca405d7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$$$function_1_message_from_string );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_s );
    par_s = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kws );
    par_kws = NULL;

    Py_XDECREF( var_Parser );
    var_Parser = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_s );
    par_s = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kws );
    par_kws = NULL;

    Py_XDECREF( var_Parser );
    var_Parser = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$$$function_1_message_from_string );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_email$$$function_2_message_from_bytes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kws = python_pars[ 2 ];
    PyObject *var_BytesParser = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_44a78571a4bfd63359fd392998cfd83c = NULL;

    struct Nuitka_FrameObject *frame_44a78571a4bfd63359fd392998cfd83c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_44a78571a4bfd63359fd392998cfd83c, codeobj_44a78571a4bfd63359fd392998cfd83c, module_email, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_44a78571a4bfd63359fd392998cfd83c = cache_frame_44a78571a4bfd63359fd392998cfd83c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_44a78571a4bfd63359fd392998cfd83c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_44a78571a4bfd63359fd392998cfd83c ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_digest_83b73b72bdc078f56a1611a452ee7e4b;
    tmp_globals_name_1 = (PyObject *)moduledict_email;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_BytesParser_tuple;
    tmp_level_name_1 = const_int_0;
    frame_44a78571a4bfd63359fd392998cfd83c->m_frame.f_lineno = 45;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_BytesParser );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_BytesParser == NULL );
    var_BytesParser = tmp_assign_source_1;

    tmp_dircall_arg1_1 = var_BytesParser;

    CHECK_OBJECT( tmp_dircall_arg1_1 );
    tmp_dircall_arg2_1 = par_args;

    if ( tmp_dircall_arg2_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "args" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg3_1 = par_kws;

    if ( tmp_dircall_arg3_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kws" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_source_name_1 = impl___internal__$$$function_5_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_parsebytes );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_s;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "s" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_44a78571a4bfd63359fd392998cfd83c->m_frame.f_lineno = 46;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_44a78571a4bfd63359fd392998cfd83c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_44a78571a4bfd63359fd392998cfd83c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_44a78571a4bfd63359fd392998cfd83c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_44a78571a4bfd63359fd392998cfd83c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_44a78571a4bfd63359fd392998cfd83c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_44a78571a4bfd63359fd392998cfd83c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_44a78571a4bfd63359fd392998cfd83c,
        type_description_1,
        par_s,
        par_args,
        par_kws,
        var_BytesParser
    );


    // Release cached frame.
    if ( frame_44a78571a4bfd63359fd392998cfd83c == cache_frame_44a78571a4bfd63359fd392998cfd83c )
    {
        Py_DECREF( frame_44a78571a4bfd63359fd392998cfd83c );
    }
    cache_frame_44a78571a4bfd63359fd392998cfd83c = NULL;

    assertFrameObject( frame_44a78571a4bfd63359fd392998cfd83c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$$$function_2_message_from_bytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_s );
    par_s = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kws );
    par_kws = NULL;

    Py_XDECREF( var_BytesParser );
    var_BytesParser = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_s );
    par_s = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kws );
    par_kws = NULL;

    Py_XDECREF( var_BytesParser );
    var_BytesParser = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$$$function_2_message_from_bytes );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_email$$$function_3_message_from_file( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fp = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kws = python_pars[ 2 ];
    PyObject *var_Parser = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_bbf2560ae818ce0ed612f56a22252c20 = NULL;

    struct Nuitka_FrameObject *frame_bbf2560ae818ce0ed612f56a22252c20;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bbf2560ae818ce0ed612f56a22252c20, codeobj_bbf2560ae818ce0ed612f56a22252c20, module_email, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bbf2560ae818ce0ed612f56a22252c20 = cache_frame_bbf2560ae818ce0ed612f56a22252c20;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bbf2560ae818ce0ed612f56a22252c20 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bbf2560ae818ce0ed612f56a22252c20 ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_digest_83b73b72bdc078f56a1611a452ee7e4b;
    tmp_globals_name_1 = (PyObject *)moduledict_email;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_Parser_tuple;
    tmp_level_name_1 = const_int_0;
    frame_bbf2560ae818ce0ed612f56a22252c20->m_frame.f_lineno = 53;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Parser );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_Parser == NULL );
    var_Parser = tmp_assign_source_1;

    tmp_dircall_arg1_1 = var_Parser;

    CHECK_OBJECT( tmp_dircall_arg1_1 );
    tmp_dircall_arg2_1 = par_args;

    if ( tmp_dircall_arg2_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "args" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg3_1 = par_kws;

    if ( tmp_dircall_arg3_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kws" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_source_name_1 = impl___internal__$$$function_5_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_parse );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_fp;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_bbf2560ae818ce0ed612f56a22252c20->m_frame.f_lineno = 54;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bbf2560ae818ce0ed612f56a22252c20 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bbf2560ae818ce0ed612f56a22252c20 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bbf2560ae818ce0ed612f56a22252c20 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bbf2560ae818ce0ed612f56a22252c20, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bbf2560ae818ce0ed612f56a22252c20->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bbf2560ae818ce0ed612f56a22252c20, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bbf2560ae818ce0ed612f56a22252c20,
        type_description_1,
        par_fp,
        par_args,
        par_kws,
        var_Parser
    );


    // Release cached frame.
    if ( frame_bbf2560ae818ce0ed612f56a22252c20 == cache_frame_bbf2560ae818ce0ed612f56a22252c20 )
    {
        Py_DECREF( frame_bbf2560ae818ce0ed612f56a22252c20 );
    }
    cache_frame_bbf2560ae818ce0ed612f56a22252c20 = NULL;

    assertFrameObject( frame_bbf2560ae818ce0ed612f56a22252c20 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$$$function_3_message_from_file );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_fp );
    par_fp = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kws );
    par_kws = NULL;

    Py_XDECREF( var_Parser );
    var_Parser = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_fp );
    par_fp = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kws );
    par_kws = NULL;

    Py_XDECREF( var_Parser );
    var_Parser = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$$$function_3_message_from_file );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_email$$$function_4_message_from_binary_file( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fp = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kws = python_pars[ 2 ];
    PyObject *var_BytesParser = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_a1996f4da3bdc953ae004c19ba22a303 = NULL;

    struct Nuitka_FrameObject *frame_a1996f4da3bdc953ae004c19ba22a303;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a1996f4da3bdc953ae004c19ba22a303, codeobj_a1996f4da3bdc953ae004c19ba22a303, module_email, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a1996f4da3bdc953ae004c19ba22a303 = cache_frame_a1996f4da3bdc953ae004c19ba22a303;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a1996f4da3bdc953ae004c19ba22a303 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a1996f4da3bdc953ae004c19ba22a303 ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_digest_83b73b72bdc078f56a1611a452ee7e4b;
    tmp_globals_name_1 = (PyObject *)moduledict_email;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_BytesParser_tuple;
    tmp_level_name_1 = const_int_0;
    frame_a1996f4da3bdc953ae004c19ba22a303->m_frame.f_lineno = 61;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_BytesParser );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_BytesParser == NULL );
    var_BytesParser = tmp_assign_source_1;

    tmp_dircall_arg1_1 = var_BytesParser;

    CHECK_OBJECT( tmp_dircall_arg1_1 );
    tmp_dircall_arg2_1 = par_args;

    if ( tmp_dircall_arg2_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "args" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg3_1 = par_kws;

    if ( tmp_dircall_arg3_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "kws" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_source_name_1 = impl___internal__$$$function_5_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_parse );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_fp;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "fp" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_a1996f4da3bdc953ae004c19ba22a303->m_frame.f_lineno = 62;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a1996f4da3bdc953ae004c19ba22a303 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a1996f4da3bdc953ae004c19ba22a303 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a1996f4da3bdc953ae004c19ba22a303 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a1996f4da3bdc953ae004c19ba22a303, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a1996f4da3bdc953ae004c19ba22a303->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a1996f4da3bdc953ae004c19ba22a303, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a1996f4da3bdc953ae004c19ba22a303,
        type_description_1,
        par_fp,
        par_args,
        par_kws,
        var_BytesParser
    );


    // Release cached frame.
    if ( frame_a1996f4da3bdc953ae004c19ba22a303 == cache_frame_a1996f4da3bdc953ae004c19ba22a303 )
    {
        Py_DECREF( frame_a1996f4da3bdc953ae004c19ba22a303 );
    }
    cache_frame_a1996f4da3bdc953ae004c19ba22a303 = NULL;

    assertFrameObject( frame_a1996f4da3bdc953ae004c19ba22a303 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$$$function_4_message_from_binary_file );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_fp );
    par_fp = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kws );
    par_kws = NULL;

    Py_XDECREF( var_BytesParser );
    var_BytesParser = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_fp );
    par_fp = NULL;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kws );
    par_kws = NULL;

    Py_XDECREF( var_BytesParser );
    var_BytesParser = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$$$function_4_message_from_binary_file );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_email$$$function_1_message_from_string(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$$$function_1_message_from_string,
        const_str_plain_message_from_string,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c5d0bf4e95fc263363dc9e810ca405d7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_email,
        const_str_digest_8241d94f3f38fd04f85017d6481c999f,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$$$function_2_message_from_bytes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$$$function_2_message_from_bytes,
        const_str_plain_message_from_bytes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_44a78571a4bfd63359fd392998cfd83c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_email,
        const_str_digest_3b7932806a101349ea3f70a5ea1b2d62,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$$$function_3_message_from_file(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$$$function_3_message_from_file,
        const_str_plain_message_from_file,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bbf2560ae818ce0ed612f56a22252c20,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_email,
        const_str_digest_7021414e710b97d4b9ffdc814b3e115b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$$$function_4_message_from_binary_file(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$$$function_4_message_from_binary_file,
        const_str_plain_message_from_binary_file,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a1996f4da3bdc953ae004c19ba22a303,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_email,
        const_str_digest_9be3b7477143c298d0d99ee8f2ddca56,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_email =
{
    PyModuleDef_HEAD_INIT,
    "email",   /* m_name */
    NULL,                /* m_doc */
    -1,                  /* m_size */
    NULL,                /* m_methods */
    NULL,                /* m_reload */
    NULL,                /* m_traverse */
    NULL,                /* m_clear */
    NULL,                /* m_free */
  };
#endif

extern PyObject *const_str_plain___package__;

#if PYTHON_VERSION >= 300
extern PyObject *const_str_dot;
#endif
#if PYTHON_VERSION >= 330
extern PyObject *const_str_plain___loader__;
extern PyObject *metapath_based_loader;
#endif
#if PYTHON_VERSION >= 330
extern PyObject *const_str_plain___spec__;
#endif

extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();
#if PYTHON_VERSION >= 350
extern void _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
extern void _initCompiledAsyncgenTypes();
#endif

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( email )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_email );
    }
    else
    {
        _init_done = true;
    }
#endif

#ifdef _NUITKA_MODULE
    // In case of a stand alone extension module, need to call initialization
    // the init here because that's the first and only time we are going to get
    // called here.

    // Initialize the constant values used.
    _initBuiltinModule();
    createGlobalConstants();

    /* Initialize the compiled types of Nuitka. */
    _initCompiledCellType();
    _initCompiledGeneratorType();
    _initCompiledFunctionType();
    _initCompiledMethodType();
    _initCompiledFrameType();
#if PYTHON_VERSION >= 350
    _initCompiledCoroutineTypes();
#endif
#if PYTHON_VERSION >= 360
    _initCompiledAsyncgenTypes();
#endif

#if PYTHON_VERSION < 300
    _initSlotCompare();
#endif
#if PYTHON_VERSION >= 270
    _initSlotIternext();
#endif

    patchBuiltinModule();
    patchTypeComparison();

    // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
    puts("email: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("email: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("email: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initemail" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_email = Py_InitModule4(
        "email",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_email = PyModule_Create( &mdef_email );
#endif

    moduledict_email = MODULE_DICT( module_email );

    // Update "__package__" value to what it ought to be.
    {
#if 1
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_email, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_email,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_email, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_email,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_email,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_email, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_email,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_email );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_email, module_email );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_email, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_email, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_email, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_email, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_email, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_email, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;

    // Module code.
    tmp_assign_source_1 = const_str_digest_7bfaa95c45d4e704c39b2624db1c6416;
    UPDATE_STRING_DICT0( moduledict_email, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_08d10d57919f136e5926547f0ad1ad73;
    UPDATE_STRING_DICT0( moduledict_email, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_b4f3811ed36bb93a81c79920c69342f4_list );
    UPDATE_STRING_DICT1( moduledict_email, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_email, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    tmp_assign_source_5 = LIST_COPY( const_list_9388672962fa6ddff96479f2b76a53a6_list );
    UPDATE_STRING_DICT1( moduledict_email, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_5 );
    tmp_assign_source_6 = MAKE_FUNCTION_email$$$function_1_message_from_string(  );
    UPDATE_STRING_DICT1( moduledict_email, (Nuitka_StringObject *)const_str_plain_message_from_string, tmp_assign_source_6 );
    tmp_assign_source_7 = MAKE_FUNCTION_email$$$function_2_message_from_bytes(  );
    UPDATE_STRING_DICT1( moduledict_email, (Nuitka_StringObject *)const_str_plain_message_from_bytes, tmp_assign_source_7 );
    tmp_assign_source_8 = MAKE_FUNCTION_email$$$function_3_message_from_file(  );
    UPDATE_STRING_DICT1( moduledict_email, (Nuitka_StringObject *)const_str_plain_message_from_file, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION_email$$$function_4_message_from_binary_file(  );
    UPDATE_STRING_DICT1( moduledict_email, (Nuitka_StringObject *)const_str_plain_message_from_binary_file, tmp_assign_source_9 );

    return MOD_RETURN_VALUE( module_email );
}
