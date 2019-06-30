/* Generated code for Python source for module 'codegen.IdCodes'
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

/* The _module_codegen$IdCodes is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_codegen$IdCodes;
PyDictObject *moduledict_codegen$IdCodes;

/* The module constants used, if any. */
extern PyObject *const_str_plain_to_name;
extern PyObject *const_tuple_str_plain_generateCAPIObjectCode_tuple;
extern PyObject *const_str_plain_source_ref;
extern PyObject *const_str_plain_expression;
static PyObject *const_str_digest_7924ea946a987dc9c6f2585f65b095fa;
extern PyObject *const_str_plain_generateCAPIObjectCode;
extern PyObject *const_str_plain_capi;
extern PyObject *const_str_plain_mayRaiseException;
static PyObject *const_str_digest_8073832182d5a1991211a3bd6e9aa689;
extern PyObject *const_str_plain_emit;
extern PyObject *const_int_pos_1;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_PythonAPICodes;
static PyObject *const_str_digest_56e7936d3f2b6ee63370677d6d41ef7a;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_generateBuiltinHashCode;
static PyObject *const_str_plain_hash_arg;
extern PyObject *const_str_plain_getValue;
extern PyObject *const_tuple_0f8aed322c8505e7fed258b31234662e_tuple;
extern PyObject *const_tuple_type_BaseException_tuple;
static PyObject *const_str_plain_PyLong_FromVoidPtr;
extern PyObject *const_str_plain_getCompatibleSourceReference;
static PyObject *const_str_plain_id_arg;
extern PyObject *const_str_plain_context;
static PyObject *const_str_plain_BUILTIN_HASH;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_arg_desc;
static PyObject *const_str_digest_ed7bbf3e54a60f209c4c3f5fc49fa8e1;
extern PyObject *const_str_plain_may_raise;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_generateBuiltinIdCode;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_7924ea946a987dc9c6f2585f65b095fa = UNSTREAM_STRING( &constant_bin[ 296846 ], 24, 0 );
    const_str_digest_8073832182d5a1991211a3bd6e9aa689 = UNSTREAM_STRING( &constant_bin[ 296870 ], 24, 0 );
    const_str_digest_56e7936d3f2b6ee63370677d6d41ef7a = UNSTREAM_STRING( &constant_bin[ 296878 ], 15, 0 );
    const_str_plain_hash_arg = UNSTREAM_STRING( &constant_bin[ 296894 ], 8, 1 );
    const_str_plain_PyLong_FromVoidPtr = UNSTREAM_STRING( &constant_bin[ 296902 ], 18, 1 );
    const_str_plain_id_arg = UNSTREAM_STRING( &constant_bin[ 296920 ], 6, 1 );
    const_str_plain_BUILTIN_HASH = UNSTREAM_STRING( &constant_bin[ 296926 ], 12, 1 );
    const_str_digest_ed7bbf3e54a60f209c4c3f5fc49fa8e1 = UNSTREAM_STRING( &constant_bin[ 296938 ], 100, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_codegen$IdCodes( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_ced838b6e4ad2a1b7f5385647df9cb42;
static PyCodeObject *codeobj_3a0ed886974d737a878062abbfa438fd;
static PyCodeObject *codeobj_9bf91fab917081ae0d9a58612dcd8d65;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_ed7bbf3e54a60f209c4c3f5fc49fa8e1;
    codeobj_ced838b6e4ad2a1b7f5385647df9cb42 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_8073832182d5a1991211a3bd6e9aa689, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_3a0ed886974d737a878062abbfa438fd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generateBuiltinHashCode, 39, const_tuple_0f8aed322c8505e7fed258b31234662e_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_9bf91fab917081ae0d9a58612dcd8d65 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generateBuiltinIdCode, 25, const_tuple_0f8aed322c8505e7fed258b31234662e_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_codegen$IdCodes$$$function_1_generateBuiltinIdCode(  );


static PyObject *MAKE_FUNCTION_codegen$IdCodes$$$function_2_generateBuiltinHashCode(  );


// The module function definitions.
static PyObject *impl_codegen$IdCodes$$$function_1_generateBuiltinIdCode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_to_name = python_pars[ 0 ];
    PyObject *par_expression = python_pars[ 1 ];
    PyObject *par_emit = python_pars[ 2 ];
    PyObject *par_context = python_pars[ 3 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_9bf91fab917081ae0d9a58612dcd8d65 = NULL;

    struct Nuitka_FrameObject *frame_9bf91fab917081ae0d9a58612dcd8d65;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9bf91fab917081ae0d9a58612dcd8d65, codeobj_9bf91fab917081ae0d9a58612dcd8d65, module_codegen$IdCodes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9bf91fab917081ae0d9a58612dcd8d65 = cache_frame_9bf91fab917081ae0d9a58612dcd8d65;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9bf91fab917081ae0d9a58612dcd8d65 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9bf91fab917081ae0d9a58612dcd8d65 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_codegen$IdCodes, (Nuitka_StringObject *)const_str_plain_generateCAPIObjectCode );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_generateCAPIObjectCode );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "generateCAPIObjectCode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_to_name;
    tmp_dict_value_1 = par_to_name;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 7 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_capi;
    tmp_dict_value_2 = const_str_plain_PyLong_FromVoidPtr;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_arg_desc;
    tmp_tuple_element_2 = const_str_plain_id_arg;
    tmp_tuple_element_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
    tmp_called_instance_1 = par_expression;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_9bf91fab917081ae0d9a58612dcd8d65->m_frame.f_lineno = 30;
    tmp_tuple_element_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getValue );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );
        Py_DECREF( tmp_tuple_element_1 );

        exception_lineno = 30;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
    tmp_dict_value_3 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_dict_value_3, 0, tmp_tuple_element_1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_may_raise;
    tmp_called_instance_2 = par_expression;

    if ( tmp_called_instance_2 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "expression" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_9bf91fab917081ae0d9a58612dcd8d65->m_frame.f_lineno = 32;
    tmp_dict_value_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_mayRaiseException, &PyTuple_GET_ITEM( const_tuple_type_BaseException_tuple, 0 ) );

    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 32;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_source_ref;
    tmp_called_instance_3 = par_expression;

    if ( tmp_called_instance_3 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "expression" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_9bf91fab917081ae0d9a58612dcd8d65->m_frame.f_lineno = 33;
    tmp_dict_value_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_getCompatibleSourceReference );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 33;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain_emit;
    tmp_dict_value_6 = par_emit;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "emit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 34;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_7 = const_str_plain_context;
    tmp_dict_value_7 = par_context;

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    frame_9bf91fab917081ae0d9a58612dcd8d65->m_frame.f_lineno = 26;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9bf91fab917081ae0d9a58612dcd8d65 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9bf91fab917081ae0d9a58612dcd8d65 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9bf91fab917081ae0d9a58612dcd8d65, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9bf91fab917081ae0d9a58612dcd8d65->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9bf91fab917081ae0d9a58612dcd8d65, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9bf91fab917081ae0d9a58612dcd8d65,
        type_description_1,
        par_to_name,
        par_expression,
        par_emit,
        par_context
    );


    // Release cached frame.
    if ( frame_9bf91fab917081ae0d9a58612dcd8d65 == cache_frame_9bf91fab917081ae0d9a58612dcd8d65 )
    {
        Py_DECREF( frame_9bf91fab917081ae0d9a58612dcd8d65 );
    }
    cache_frame_9bf91fab917081ae0d9a58612dcd8d65 = NULL;

    assertFrameObject( frame_9bf91fab917081ae0d9a58612dcd8d65 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codegen$IdCodes$$$function_1_generateBuiltinIdCode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_to_name );
    par_to_name = NULL;

    Py_XDECREF( par_expression );
    par_expression = NULL;

    Py_XDECREF( par_emit );
    par_emit = NULL;

    Py_XDECREF( par_context );
    par_context = NULL;

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

    Py_XDECREF( par_to_name );
    par_to_name = NULL;

    Py_XDECREF( par_expression );
    par_expression = NULL;

    Py_XDECREF( par_emit );
    par_emit = NULL;

    Py_XDECREF( par_context );
    par_context = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( codegen$IdCodes$$$function_1_generateBuiltinIdCode );
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


static PyObject *impl_codegen$IdCodes$$$function_2_generateBuiltinHashCode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_to_name = python_pars[ 0 ];
    PyObject *par_expression = python_pars[ 1 ];
    PyObject *par_emit = python_pars[ 2 ];
    PyObject *par_context = python_pars[ 3 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_3a0ed886974d737a878062abbfa438fd = NULL;

    struct Nuitka_FrameObject *frame_3a0ed886974d737a878062abbfa438fd;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3a0ed886974d737a878062abbfa438fd, codeobj_3a0ed886974d737a878062abbfa438fd, module_codegen$IdCodes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3a0ed886974d737a878062abbfa438fd = cache_frame_3a0ed886974d737a878062abbfa438fd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3a0ed886974d737a878062abbfa438fd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3a0ed886974d737a878062abbfa438fd ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_codegen$IdCodes, (Nuitka_StringObject *)const_str_plain_generateCAPIObjectCode );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_generateCAPIObjectCode );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "generateCAPIObjectCode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_to_name;
    tmp_dict_value_1 = par_to_name;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 7 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_capi;
    tmp_dict_value_2 = const_str_plain_BUILTIN_HASH;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_arg_desc;
    tmp_tuple_element_2 = const_str_plain_hash_arg;
    tmp_tuple_element_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
    tmp_called_instance_1 = par_expression;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_3a0ed886974d737a878062abbfa438fd->m_frame.f_lineno = 44;
    tmp_tuple_element_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getValue );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );
        Py_DECREF( tmp_tuple_element_1 );

        exception_lineno = 44;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
    tmp_dict_value_3 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_dict_value_3, 0, tmp_tuple_element_1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_may_raise;
    tmp_called_instance_2 = par_expression;

    if ( tmp_called_instance_2 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "expression" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_3a0ed886974d737a878062abbfa438fd->m_frame.f_lineno = 46;
    tmp_dict_value_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_mayRaiseException, &PyTuple_GET_ITEM( const_tuple_type_BaseException_tuple, 0 ) );

    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 46;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_source_ref;
    tmp_called_instance_3 = par_expression;

    if ( tmp_called_instance_3 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "expression" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_3a0ed886974d737a878062abbfa438fd->m_frame.f_lineno = 47;
    tmp_dict_value_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_getCompatibleSourceReference );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 47;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain_emit;
    tmp_dict_value_6 = par_emit;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "emit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_7 = const_str_plain_context;
    tmp_dict_value_7 = par_context;

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 49;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    frame_3a0ed886974d737a878062abbfa438fd->m_frame.f_lineno = 40;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3a0ed886974d737a878062abbfa438fd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3a0ed886974d737a878062abbfa438fd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3a0ed886974d737a878062abbfa438fd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3a0ed886974d737a878062abbfa438fd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3a0ed886974d737a878062abbfa438fd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3a0ed886974d737a878062abbfa438fd,
        type_description_1,
        par_to_name,
        par_expression,
        par_emit,
        par_context
    );


    // Release cached frame.
    if ( frame_3a0ed886974d737a878062abbfa438fd == cache_frame_3a0ed886974d737a878062abbfa438fd )
    {
        Py_DECREF( frame_3a0ed886974d737a878062abbfa438fd );
    }
    cache_frame_3a0ed886974d737a878062abbfa438fd = NULL;

    assertFrameObject( frame_3a0ed886974d737a878062abbfa438fd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codegen$IdCodes$$$function_2_generateBuiltinHashCode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_to_name );
    par_to_name = NULL;

    Py_XDECREF( par_expression );
    par_expression = NULL;

    Py_XDECREF( par_emit );
    par_emit = NULL;

    Py_XDECREF( par_context );
    par_context = NULL;

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

    Py_XDECREF( par_to_name );
    par_to_name = NULL;

    Py_XDECREF( par_expression );
    par_expression = NULL;

    Py_XDECREF( par_emit );
    par_emit = NULL;

    Py_XDECREF( par_context );
    par_context = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( codegen$IdCodes$$$function_2_generateBuiltinHashCode );
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



static PyObject *MAKE_FUNCTION_codegen$IdCodes$$$function_1_generateBuiltinIdCode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codegen$IdCodes$$$function_1_generateBuiltinIdCode,
        const_str_plain_generateBuiltinIdCode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9bf91fab917081ae0d9a58612dcd8d65,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_codegen$IdCodes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_codegen$IdCodes$$$function_2_generateBuiltinHashCode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codegen$IdCodes$$$function_2_generateBuiltinHashCode,
        const_str_plain_generateBuiltinHashCode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3a0ed886974d737a878062abbfa438fd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_codegen$IdCodes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_codegen$IdCodes =
{
    PyModuleDef_HEAD_INIT,
    "codegen.IdCodes",   /* m_name */
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

MOD_INIT_DECL( codegen$IdCodes )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_codegen$IdCodes );
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
    puts("codegen.IdCodes: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("codegen.IdCodes: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("codegen.IdCodes: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcodegen$IdCodes" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_codegen$IdCodes = Py_InitModule4(
        "codegen.IdCodes",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_codegen$IdCodes = PyModule_Create( &mdef_codegen$IdCodes );
#endif

    moduledict_codegen$IdCodes = MODULE_DICT( module_codegen$IdCodes );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$IdCodes, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_codegen$IdCodes,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$IdCodes, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_codegen$IdCodes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_codegen$IdCodes,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$IdCodes, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_codegen$IdCodes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_codegen$IdCodes );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_56e7936d3f2b6ee63370677d6d41ef7a, module_codegen$IdCodes );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_codegen$IdCodes, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_codegen$IdCodes, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_codegen$IdCodes, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_codegen$IdCodes, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_codegen$IdCodes, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_codegen$IdCodes, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    struct Nuitka_FrameObject *frame_ced838b6e4ad2a1b7f5385647df9cb42;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_7924ea946a987dc9c6f2585f65b095fa;
    UPDATE_STRING_DICT0( moduledict_codegen$IdCodes, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_ed7bbf3e54a60f209c4c3f5fc49fa8e1;
    UPDATE_STRING_DICT0( moduledict_codegen$IdCodes, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_codegen$IdCodes, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_ced838b6e4ad2a1b7f5385647df9cb42 = MAKE_MODULE_FRAME( codeobj_ced838b6e4ad2a1b7f5385647df9cb42, module_codegen$IdCodes );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_ced838b6e4ad2a1b7f5385647df9cb42 );
    assert( Py_REFCNT( frame_ced838b6e4ad2a1b7f5385647df9cb42 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_PythonAPICodes;
    tmp_globals_name_1 = (PyObject *)moduledict_codegen$IdCodes;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_generateCAPIObjectCode_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_ced838b6e4ad2a1b7f5385647df9cb42->m_frame.f_lineno = 22;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_generateCAPIObjectCode,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_generateCAPIObjectCode );
    }

    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$IdCodes, (Nuitka_StringObject *)const_str_plain_generateCAPIObjectCode, tmp_assign_source_4 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ced838b6e4ad2a1b7f5385647df9cb42 );
#endif
    popFrameStack();

    assertFrameObject( frame_ced838b6e4ad2a1b7f5385647df9cb42 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ced838b6e4ad2a1b7f5385647df9cb42 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ced838b6e4ad2a1b7f5385647df9cb42, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ced838b6e4ad2a1b7f5385647df9cb42->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ced838b6e4ad2a1b7f5385647df9cb42, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_5 = MAKE_FUNCTION_codegen$IdCodes$$$function_1_generateBuiltinIdCode(  );
    UPDATE_STRING_DICT1( moduledict_codegen$IdCodes, (Nuitka_StringObject *)const_str_plain_generateBuiltinIdCode, tmp_assign_source_5 );
    tmp_assign_source_6 = MAKE_FUNCTION_codegen$IdCodes$$$function_2_generateBuiltinHashCode(  );
    UPDATE_STRING_DICT1( moduledict_codegen$IdCodes, (Nuitka_StringObject *)const_str_plain_generateBuiltinHashCode, tmp_assign_source_6 );

    return MOD_RETURN_VALUE( module_codegen$IdCodes );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
