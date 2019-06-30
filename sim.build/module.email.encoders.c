/* Generated code for Python source for module 'email.encoders'
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

/* The _module_email$encoders is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_email$encoders;
PyDictObject *moduledict_email$encoders;

/* The module constants used, if any. */
static PyObject *const_str_plain_encdata;
static PyObject *const_tuple_str_plain_msg_str_plain_orig_tuple;
static PyObject *const_str_digest_4b5c2f5d33471bc04c85e3ffbee867cb;
static PyObject *const_str_digest_975072652d8bc3b6b1e2321796c82f83;
extern PyObject *const_tuple_str_plain_ascii_tuple;
extern PyObject *const_str_plain_encodestring;
static PyObject *const_tuple_str_plain_s_str_plain_enc_tuple;
extern PyObject *const_str_plain_s;
static PyObject *const_str_digest_2c716c33b3d532b98486b307f6c712bf;
extern PyObject *const_str_plain_decode;
static PyObject *const_str_plain__encodestring;
extern PyObject *const_str_plain_get_payload;
extern PyObject *const_str_plain_8bit;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_plain_encode_noop;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_encode_7or8bit;
extern PyObject *const_str_plain_replace;
extern PyObject *const_str_plain___file__;
static PyObject *const_dict_bed19614c277b1c0bea82d5e5511e70b;
extern PyObject *const_str_digest_f1e7d5332b8d0fa234d6298507bc3b5c;
static PyObject *const_tuple_str_plain_msg_str_plain_orig_str_plain_encdata_tuple;
static PyObject *const_str_plain_encode_quopri;
static PyObject *const_tuple_str_plain_encodestring_tuple;
extern PyObject *const_dict_2bff2b21e051914bc164d310fa2587cd;
extern PyObject *const_int_0;
static PyObject *const_bytes_digest_568df3c1c38c69f550a70073fd0f3fb0;
extern PyObject *const_str_plain_encodebytes;
static PyObject *const_str_plain_encode_base64;
static PyObject *const_str_plain_orig;
static PyObject *const_str_plain__bencode;
static PyObject *const_str_digest_ef53727f978b320b17cd768d0967251f;
extern PyObject *const_str_plain_msg;
extern PyObject *const_tuple_str_plain_msg_tuple;
extern PyObject *const_str_plain_set_payload;
static PyObject *const_list_399c494defcef3497146c39d838909e6_list;
extern PyObject *const_str_plain_base64;
extern PyObject *const_str_digest_7859f84632cb1c0e4436643bdd578752;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_7bit;
extern PyObject *const_str_plain_enc;
static PyObject *const_tuple_str_plain_encodebytes_tuple;
extern PyObject *const_str_plain_ascii;
static PyObject *const_tuple_bytes_chr_32_bytes_digest_568df3c1c38c69f550a70073fd0f3fb0_tuple;
static PyObject *const_str_plain__qencode;
extern PyObject *const_str_plain_quopri;
extern PyObject *const_str_plain_quotetabs;
static PyObject *const_str_digest_53a9d6d29a048105e5d761d9d9ee3da1;
static PyObject *const_str_digest_6426d24ed46e96a3d8b14b5d4f0810cf;
extern PyObject *const_str_digest_3293e85292556cc6d800009076416580;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_1b2836d4179ad4e0ca4ac548be7ff32f;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_bytes_chr_32;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_encdata = UNSTREAM_STRING( &constant_bin[ 595759 ], 7, 1 );
    const_tuple_str_plain_msg_str_plain_orig_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_msg_str_plain_orig_tuple, 0, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    const_str_plain_orig = UNSTREAM_STRING( &constant_bin[ 2648 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_msg_str_plain_orig_tuple, 1, const_str_plain_orig ); Py_INCREF( const_str_plain_orig );
    const_str_digest_4b5c2f5d33471bc04c85e3ffbee867cb = UNSTREAM_STRING( &constant_bin[ 595766 ], 118, 0 );
    const_str_digest_975072652d8bc3b6b1e2321796c82f83 = UNSTREAM_STRING( &constant_bin[ 595884 ], 108, 0 );
    const_tuple_str_plain_s_str_plain_enc_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_enc_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_enc_tuple, 1, const_str_plain_enc ); Py_INCREF( const_str_plain_enc );
    const_str_digest_2c716c33b3d532b98486b307f6c712bf = UNSTREAM_STRING( &constant_bin[ 595992 ], 49, 0 );
    const_str_plain__encodestring = UNSTREAM_STRING( &constant_bin[ 596041 ], 13, 1 );
    const_str_plain_encode_noop = UNSTREAM_STRING( &constant_bin[ 596054 ], 11, 1 );
    const_dict_bed19614c277b1c0bea82d5e5511e70b = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_bed19614c277b1c0bea82d5e5511e70b, const_str_plain_quotetabs, Py_True );
    assert( PyDict_Size( const_dict_bed19614c277b1c0bea82d5e5511e70b ) == 1 );
    const_tuple_str_plain_msg_str_plain_orig_str_plain_encdata_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_msg_str_plain_orig_str_plain_encdata_tuple, 0, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_str_plain_msg_str_plain_orig_str_plain_encdata_tuple, 1, const_str_plain_orig ); Py_INCREF( const_str_plain_orig );
    PyTuple_SET_ITEM( const_tuple_str_plain_msg_str_plain_orig_str_plain_encdata_tuple, 2, const_str_plain_encdata ); Py_INCREF( const_str_plain_encdata );
    const_str_plain_encode_quopri = UNSTREAM_STRING( &constant_bin[ 596065 ], 13, 1 );
    const_tuple_str_plain_encodestring_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_encodestring_tuple, 0, const_str_plain_encodestring ); Py_INCREF( const_str_plain_encodestring );
    const_bytes_digest_568df3c1c38c69f550a70073fd0f3fb0 = UNSTREAM_BYTES( &constant_bin[ 238412 ], 3 );
    const_str_plain_encode_base64 = UNSTREAM_STRING( &constant_bin[ 596078 ], 13, 1 );
    const_str_plain__bencode = UNSTREAM_STRING( &constant_bin[ 545441 ], 8, 1 );
    const_str_digest_ef53727f978b320b17cd768d0967251f = UNSTREAM_STRING( &constant_bin[ 596091 ], 11, 0 );
    const_list_399c494defcef3497146c39d838909e6_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_399c494defcef3497146c39d838909e6_list, 0, const_str_plain_encode_7or8bit ); Py_INCREF( const_str_plain_encode_7or8bit );
    PyList_SET_ITEM( const_list_399c494defcef3497146c39d838909e6_list, 1, const_str_plain_encode_base64 ); Py_INCREF( const_str_plain_encode_base64 );
    PyList_SET_ITEM( const_list_399c494defcef3497146c39d838909e6_list, 2, const_str_plain_encode_noop ); Py_INCREF( const_str_plain_encode_noop );
    PyList_SET_ITEM( const_list_399c494defcef3497146c39d838909e6_list, 3, const_str_plain_encode_quopri ); Py_INCREF( const_str_plain_encode_quopri );
    const_tuple_str_plain_encodebytes_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_encodebytes_tuple, 0, const_str_plain_encodebytes ); Py_INCREF( const_str_plain_encodebytes );
    const_tuple_bytes_chr_32_bytes_digest_568df3c1c38c69f550a70073fd0f3fb0_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_bytes_chr_32_bytes_digest_568df3c1c38c69f550a70073fd0f3fb0_tuple, 0, const_bytes_chr_32 ); Py_INCREF( const_bytes_chr_32 );
    PyTuple_SET_ITEM( const_tuple_bytes_chr_32_bytes_digest_568df3c1c38c69f550a70073fd0f3fb0_tuple, 1, const_bytes_digest_568df3c1c38c69f550a70073fd0f3fb0 ); Py_INCREF( const_bytes_digest_568df3c1c38c69f550a70073fd0f3fb0 );
    const_str_plain__qencode = UNSTREAM_STRING( &constant_bin[ 596102 ], 8, 1 );
    const_str_digest_53a9d6d29a048105e5d761d9d9ee3da1 = UNSTREAM_STRING( &constant_bin[ 596110 ], 23, 0 );
    const_str_digest_6426d24ed46e96a3d8b14b5d4f0810cf = UNSTREAM_STRING( &constant_bin[ 596133 ], 57, 0 );
    const_str_digest_1b2836d4179ad4e0ca4ac548be7ff32f = UNSTREAM_STRING( &constant_bin[ 596190 ], 32, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_email$encoders( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_dce07c7e9692210c145aab6d8a12d005;
static PyCodeObject *codeobj_29b965fe520c9b49a96a14baf032b39f;
static PyCodeObject *codeobj_b75f24e04490a1cf3ba91513256220c2;
static PyCodeObject *codeobj_4bb8238bee8598a27085dacfa25743f4;
static PyCodeObject *codeobj_b8eafb7f83053b3030eb9a8938207a84;
static PyCodeObject *codeobj_54545172054d37d43723e91d3fe191f3;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_2c716c33b3d532b98486b307f6c712bf;
    codeobj_dce07c7e9692210c145aab6d8a12d005 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_53a9d6d29a048105e5d761d9d9ee3da1, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_29b965fe520c9b49a96a14baf032b39f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__qencode, 20, const_tuple_str_plain_s_str_plain_enc_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b75f24e04490a1cf3ba91513256220c2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encode_7or8bit, 50, const_tuple_str_plain_msg_str_plain_orig_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4bb8238bee8598a27085dacfa25743f4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encode_base64, 26, const_tuple_str_plain_msg_str_plain_orig_str_plain_encdata_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b8eafb7f83053b3030eb9a8938207a84 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encode_noop, 68, const_tuple_str_plain_msg_tuple, 1, 0, CO_NOFREE );
    codeobj_54545172054d37d43723e91d3fe191f3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_encode_quopri, 38, const_tuple_str_plain_msg_str_plain_orig_str_plain_encdata_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_email$encoders$$$function_1__qencode(  );


static PyObject *MAKE_FUNCTION_email$encoders$$$function_2_encode_base64(  );


static PyObject *MAKE_FUNCTION_email$encoders$$$function_3_encode_quopri(  );


static PyObject *MAKE_FUNCTION_email$encoders$$$function_4_encode_7or8bit(  );


static PyObject *MAKE_FUNCTION_email$encoders$$$function_5_encode_noop(  );


// The module function definitions.
static PyObject *impl_email$encoders$$$function_1__qencode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *var_enc = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_29b965fe520c9b49a96a14baf032b39f = NULL;

    struct Nuitka_FrameObject *frame_29b965fe520c9b49a96a14baf032b39f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_29b965fe520c9b49a96a14baf032b39f, codeobj_29b965fe520c9b49a96a14baf032b39f, module_email$encoders, sizeof(void *)+sizeof(void *) );
    frame_29b965fe520c9b49a96a14baf032b39f = cache_frame_29b965fe520c9b49a96a14baf032b39f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_29b965fe520c9b49a96a14baf032b39f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_29b965fe520c9b49a96a14baf032b39f ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain__encodestring );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__encodestring );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_encodestring" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 21;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = par_s;

    CHECK_OBJECT( tmp_tuple_element_1 );
    tmp_args_name_1 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_bed19614c277b1c0bea82d5e5511e70b );
    frame_29b965fe520c9b49a96a14baf032b39f->m_frame.f_lineno = 21;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_enc == NULL );
    var_enc = tmp_assign_source_1;

    tmp_called_instance_1 = var_enc;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_29b965fe520c9b49a96a14baf032b39f->m_frame.f_lineno = 23;
    tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_replace, &PyTuple_GET_ITEM( const_tuple_bytes_chr_32_bytes_digest_568df3c1c38c69f550a70073fd0f3fb0_tuple, 0 ) );

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_29b965fe520c9b49a96a14baf032b39f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_29b965fe520c9b49a96a14baf032b39f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_29b965fe520c9b49a96a14baf032b39f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_29b965fe520c9b49a96a14baf032b39f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_29b965fe520c9b49a96a14baf032b39f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_29b965fe520c9b49a96a14baf032b39f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_29b965fe520c9b49a96a14baf032b39f,
        type_description_1,
        par_s,
        var_enc
    );


    // Release cached frame.
    if ( frame_29b965fe520c9b49a96a14baf032b39f == cache_frame_29b965fe520c9b49a96a14baf032b39f )
    {
        Py_DECREF( frame_29b965fe520c9b49a96a14baf032b39f );
    }
    cache_frame_29b965fe520c9b49a96a14baf032b39f = NULL;

    assertFrameObject( frame_29b965fe520c9b49a96a14baf032b39f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$encoders$$$function_1__qencode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_s );
    par_s = NULL;

    Py_XDECREF( var_enc );
    var_enc = NULL;

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

    Py_XDECREF( var_enc );
    var_enc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$encoders$$$function_1__qencode );
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


static PyObject *impl_email$encoders$$$function_2_encode_base64( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[ 0 ];
    PyObject *var_orig = NULL;
    PyObject *var_encdata = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_unicode_arg_1;
    PyObject *tmp_unicode_encoding_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_4bb8238bee8598a27085dacfa25743f4 = NULL;

    struct Nuitka_FrameObject *frame_4bb8238bee8598a27085dacfa25743f4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4bb8238bee8598a27085dacfa25743f4, codeobj_4bb8238bee8598a27085dacfa25743f4, module_email$encoders, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4bb8238bee8598a27085dacfa25743f4 = cache_frame_4bb8238bee8598a27085dacfa25743f4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4bb8238bee8598a27085dacfa25743f4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4bb8238bee8598a27085dacfa25743f4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_msg;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_payload );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = PyDict_Copy( const_dict_2bff2b21e051914bc164d310fa2587cd );
    frame_4bb8238bee8598a27085dacfa25743f4->m_frame.f_lineno = 31;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_orig == NULL );
    var_orig = tmp_assign_source_1;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain__bencode );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__bencode );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_bencode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = var_orig;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_4bb8238bee8598a27085dacfa25743f4->m_frame.f_lineno = 32;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unicode_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_unicode_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_unicode_encoding_1 = const_str_plain_ascii;
    tmp_assign_source_2 = TO_UNICODE3( tmp_unicode_arg_1, tmp_unicode_encoding_1, NULL );
    Py_DECREF( tmp_unicode_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_encdata == NULL );
    var_encdata = tmp_assign_source_2;

    tmp_source_name_2 = par_msg;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "msg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_set_payload );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_encdata;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "encdata" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_4bb8238bee8598a27085dacfa25743f4->m_frame.f_lineno = 33;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_ass_subvalue_1 = const_str_plain_base64;
    tmp_ass_subscribed_1 = par_msg;

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "msg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_digest_7859f84632cb1c0e4436643bdd578752;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4bb8238bee8598a27085dacfa25743f4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4bb8238bee8598a27085dacfa25743f4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4bb8238bee8598a27085dacfa25743f4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4bb8238bee8598a27085dacfa25743f4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4bb8238bee8598a27085dacfa25743f4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4bb8238bee8598a27085dacfa25743f4,
        type_description_1,
        par_msg,
        var_orig,
        var_encdata
    );


    // Release cached frame.
    if ( frame_4bb8238bee8598a27085dacfa25743f4 == cache_frame_4bb8238bee8598a27085dacfa25743f4 )
    {
        Py_DECREF( frame_4bb8238bee8598a27085dacfa25743f4 );
    }
    cache_frame_4bb8238bee8598a27085dacfa25743f4 = NULL;

    assertFrameObject( frame_4bb8238bee8598a27085dacfa25743f4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$encoders$$$function_2_encode_base64 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_msg );
    par_msg = NULL;

    Py_XDECREF( var_orig );
    var_orig = NULL;

    Py_XDECREF( var_encdata );
    var_encdata = NULL;

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

    Py_XDECREF( par_msg );
    par_msg = NULL;

    Py_XDECREF( var_orig );
    var_orig = NULL;

    Py_XDECREF( var_encdata );
    var_encdata = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$encoders$$$function_2_encode_base64 );
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


static PyObject *impl_email$encoders$$$function_3_encode_quopri( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[ 0 ];
    PyObject *var_orig = NULL;
    PyObject *var_encdata = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_54545172054d37d43723e91d3fe191f3 = NULL;

    struct Nuitka_FrameObject *frame_54545172054d37d43723e91d3fe191f3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_54545172054d37d43723e91d3fe191f3, codeobj_54545172054d37d43723e91d3fe191f3, module_email$encoders, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_54545172054d37d43723e91d3fe191f3 = cache_frame_54545172054d37d43723e91d3fe191f3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_54545172054d37d43723e91d3fe191f3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_54545172054d37d43723e91d3fe191f3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_msg;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_payload );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = PyDict_Copy( const_dict_2bff2b21e051914bc164d310fa2587cd );
    frame_54545172054d37d43723e91d3fe191f3->m_frame.f_lineno = 43;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_orig == NULL );
    var_orig = tmp_assign_source_1;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain__qencode );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__qencode );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_qencode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = var_orig;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_54545172054d37d43723e91d3fe191f3->m_frame.f_lineno = 44;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_encdata == NULL );
    var_encdata = tmp_assign_source_2;

    tmp_source_name_2 = par_msg;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "msg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_set_payload );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_encdata;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "encdata" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_54545172054d37d43723e91d3fe191f3->m_frame.f_lineno = 45;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_ass_subvalue_1 = const_str_digest_3293e85292556cc6d800009076416580;
    tmp_ass_subscribed_1 = par_msg;

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "msg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_digest_7859f84632cb1c0e4436643bdd578752;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_54545172054d37d43723e91d3fe191f3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_54545172054d37d43723e91d3fe191f3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_54545172054d37d43723e91d3fe191f3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_54545172054d37d43723e91d3fe191f3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_54545172054d37d43723e91d3fe191f3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_54545172054d37d43723e91d3fe191f3,
        type_description_1,
        par_msg,
        var_orig,
        var_encdata
    );


    // Release cached frame.
    if ( frame_54545172054d37d43723e91d3fe191f3 == cache_frame_54545172054d37d43723e91d3fe191f3 )
    {
        Py_DECREF( frame_54545172054d37d43723e91d3fe191f3 );
    }
    cache_frame_54545172054d37d43723e91d3fe191f3 = NULL;

    assertFrameObject( frame_54545172054d37d43723e91d3fe191f3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$encoders$$$function_3_encode_quopri );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_msg );
    par_msg = NULL;

    Py_XDECREF( var_orig );
    var_orig = NULL;

    Py_XDECREF( var_encdata );
    var_encdata = NULL;

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

    Py_XDECREF( par_msg );
    par_msg = NULL;

    Py_XDECREF( var_orig );
    var_orig = NULL;

    Py_XDECREF( var_encdata );
    var_encdata = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$encoders$$$function_3_encode_quopri );
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


static PyObject *impl_email$encoders$$$function_4_encode_7or8bit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[ 0 ];
    PyObject *var_orig = NULL;
    PyObject *tmp_try_except_1__unhandled_indicator = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_exc_match_exception_match_1;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b75f24e04490a1cf3ba91513256220c2 = NULL;

    struct Nuitka_FrameObject *frame_b75f24e04490a1cf3ba91513256220c2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b75f24e04490a1cf3ba91513256220c2, codeobj_b75f24e04490a1cf3ba91513256220c2, module_email$encoders, sizeof(void *)+sizeof(void *) );
    frame_b75f24e04490a1cf3ba91513256220c2 = cache_frame_b75f24e04490a1cf3ba91513256220c2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b75f24e04490a1cf3ba91513256220c2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b75f24e04490a1cf3ba91513256220c2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_msg;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_payload );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = PyDict_Copy( const_dict_2bff2b21e051914bc164d310fa2587cd );
    frame_b75f24e04490a1cf3ba91513256220c2->m_frame.f_lineno = 52;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_orig == NULL );
    var_orig = tmp_assign_source_1;

    tmp_compare_left_1 = var_orig;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_ass_subvalue_1 = const_str_plain_7bit;
    tmp_ass_subscribed_1 = par_msg;

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "msg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_digest_7859f84632cb1c0e4436643bdd578752;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_assign_source_2 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator == NULL );
    Py_INCREF( tmp_assign_source_2 );
    tmp_try_except_1__unhandled_indicator = tmp_assign_source_2;

    // Tried code:
    // Tried code:
    tmp_called_instance_1 = var_orig;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "orig" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }

    frame_b75f24e04490a1cf3ba91513256220c2->m_frame.f_lineno = 60;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_plain_ascii_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "oo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_assign_source_3 = Py_False;
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator;
        assert( old != NULL );
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_3;
        Py_INCREF( tmp_try_except_1__unhandled_indicator );
        Py_DECREF( old );
    }

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_b75f24e04490a1cf3ba91513256220c2, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_b75f24e04490a1cf3ba91513256220c2, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_2 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_2 = PyExc_UnicodeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_ass_subvalue_2 = const_str_plain_8bit;
    tmp_ass_subscribed_2 = par_msg;

    if ( tmp_ass_subscribed_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "msg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }

    tmp_ass_subscript_2 = const_str_digest_7859f84632cb1c0e4436643bdd578752;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "oo";
        goto try_except_handler_4;
    }
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 59;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b75f24e04490a1cf3ba91513256220c2->m_frame) frame_b75f24e04490a1cf3ba91513256220c2->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_4;
    branch_end_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$encoders$$$function_4_encode_7or8bit );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_compare_left_3 = tmp_try_except_1__unhandled_indicator;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = Py_True;
    tmp_is_2 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if ( tmp_is_2 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_ass_subvalue_3 = const_str_plain_7bit;
    tmp_ass_subscribed_3 = par_msg;

    if ( tmp_ass_subscribed_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "msg" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }

    tmp_ass_subscript_3 = const_str_digest_7859f84632cb1c0e4436643bdd578752;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "oo";
        goto try_except_handler_2;
    }
    branch_no_3:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b75f24e04490a1cf3ba91513256220c2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b75f24e04490a1cf3ba91513256220c2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b75f24e04490a1cf3ba91513256220c2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b75f24e04490a1cf3ba91513256220c2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b75f24e04490a1cf3ba91513256220c2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b75f24e04490a1cf3ba91513256220c2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b75f24e04490a1cf3ba91513256220c2,
        type_description_1,
        par_msg,
        var_orig
    );


    // Release cached frame.
    if ( frame_b75f24e04490a1cf3ba91513256220c2 == cache_frame_b75f24e04490a1cf3ba91513256220c2 )
    {
        Py_DECREF( frame_b75f24e04490a1cf3ba91513256220c2 );
    }
    cache_frame_b75f24e04490a1cf3ba91513256220c2 = NULL;

    assertFrameObject( frame_b75f24e04490a1cf3ba91513256220c2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$encoders$$$function_4_encode_7or8bit );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_msg );
    par_msg = NULL;

    Py_XDECREF( var_orig );
    var_orig = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_msg );
    par_msg = NULL;

    Py_XDECREF( var_orig );
    var_orig = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$encoders$$$function_4_encode_7or8bit );
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


static PyObject *impl_email$encoders$$$function_5_encode_noop( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( email$encoders$$$function_5_encode_noop );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( email$encoders$$$function_5_encode_noop );
    return NULL;

function_return_exit:

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_email$encoders$$$function_1__qencode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$encoders$$$function_1__qencode,
        const_str_plain__qencode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_29b965fe520c9b49a96a14baf032b39f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_email$encoders,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$encoders$$$function_2_encode_base64(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$encoders$$$function_2_encode_base64,
        const_str_plain_encode_base64,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4bb8238bee8598a27085dacfa25743f4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_email$encoders,
        const_str_digest_975072652d8bc3b6b1e2321796c82f83,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$encoders$$$function_3_encode_quopri(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$encoders$$$function_3_encode_quopri,
        const_str_plain_encode_quopri,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_54545172054d37d43723e91d3fe191f3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_email$encoders,
        const_str_digest_4b5c2f5d33471bc04c85e3ffbee867cb,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$encoders$$$function_4_encode_7or8bit(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$encoders$$$function_4_encode_7or8bit,
        const_str_plain_encode_7or8bit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b75f24e04490a1cf3ba91513256220c2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_email$encoders,
        const_str_digest_6426d24ed46e96a3d8b14b5d4f0810cf,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_email$encoders$$$function_5_encode_noop(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_email$encoders$$$function_5_encode_noop,
        const_str_plain_encode_noop,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b8eafb7f83053b3030eb9a8938207a84,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_email$encoders,
        const_str_digest_ef53727f978b320b17cd768d0967251f,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_email$encoders =
{
    PyModuleDef_HEAD_INIT,
    "email.encoders",   /* m_name */
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

MOD_INIT_DECL( email$encoders )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_email$encoders );
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
    puts("email.encoders: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("email.encoders: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("email.encoders: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initemail$encoders" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_email$encoders = Py_InitModule4(
        "email.encoders",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_email$encoders = PyModule_Create( &mdef_email$encoders );
#endif

    moduledict_email$encoders = MODULE_DICT( module_email$encoders );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_email$encoders,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_email$encoders,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_email$encoders,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_email$encoders,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_email$encoders );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_f1e7d5332b8d0fa234d6298507bc3b5c, module_email$encoders );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    struct Nuitka_FrameObject *frame_dce07c7e9692210c145aab6d8a12d005;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_1b2836d4179ad4e0ca4ac548be7ff32f;
    UPDATE_STRING_DICT0( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_2c716c33b3d532b98486b307f6c712bf;
    UPDATE_STRING_DICT0( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = LIST_COPY( const_list_399c494defcef3497146c39d838909e6_list );
    UPDATE_STRING_DICT1( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_dce07c7e9692210c145aab6d8a12d005 = MAKE_MODULE_FRAME( codeobj_dce07c7e9692210c145aab6d8a12d005, module_email$encoders );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_dce07c7e9692210c145aab6d8a12d005 );
    assert( Py_REFCNT( frame_dce07c7e9692210c145aab6d8a12d005 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_base64;
    tmp_globals_name_1 = (PyObject *)moduledict_email$encoders;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_encodebytes_tuple;
    tmp_level_name_1 = const_int_0;
    frame_dce07c7e9692210c145aab6d8a12d005->m_frame.f_lineno = 15;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_encodebytes );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain__bencode, tmp_assign_source_5 );
    tmp_name_name_2 = const_str_plain_quopri;
    tmp_globals_name_2 = (PyObject *)moduledict_email$encoders;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_encodestring_tuple;
    tmp_level_name_2 = const_int_0;
    frame_dce07c7e9692210c145aab6d8a12d005->m_frame.f_lineno = 16;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_encodestring );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain__encodestring, tmp_assign_source_6 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dce07c7e9692210c145aab6d8a12d005 );
#endif
    popFrameStack();

    assertFrameObject( frame_dce07c7e9692210c145aab6d8a12d005 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dce07c7e9692210c145aab6d8a12d005 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dce07c7e9692210c145aab6d8a12d005, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dce07c7e9692210c145aab6d8a12d005->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dce07c7e9692210c145aab6d8a12d005, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_7 = MAKE_FUNCTION_email$encoders$$$function_1__qencode(  );
    UPDATE_STRING_DICT1( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain__qencode, tmp_assign_source_7 );
    tmp_assign_source_8 = MAKE_FUNCTION_email$encoders$$$function_2_encode_base64(  );
    UPDATE_STRING_DICT1( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain_encode_base64, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION_email$encoders$$$function_3_encode_quopri(  );
    UPDATE_STRING_DICT1( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain_encode_quopri, tmp_assign_source_9 );
    tmp_assign_source_10 = MAKE_FUNCTION_email$encoders$$$function_4_encode_7or8bit(  );
    UPDATE_STRING_DICT1( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain_encode_7or8bit, tmp_assign_source_10 );
    tmp_assign_source_11 = MAKE_FUNCTION_email$encoders$$$function_5_encode_noop(  );
    UPDATE_STRING_DICT1( moduledict_email$encoders, (Nuitka_StringObject *)const_str_plain_encode_noop, tmp_assign_source_11 );

    return MOD_RETURN_VALUE( module_email$encoders );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
