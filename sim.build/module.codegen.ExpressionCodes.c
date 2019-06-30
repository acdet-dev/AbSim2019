/* Generated code for Python source for module 'codegen.ExpressionCodes'
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

/* The _module_codegen$ExpressionCodes is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_codegen$ExpressionCodes;
PyDictObject *moduledict_codegen$ExpressionCodes;

/* The module constants used, if any. */
extern PyObject *const_str_plain_to_name;
static PyObject *const_str_digest_91ec771c39bbefa2fd14520e91a16c2b;
extern PyObject *const_str_plain_getSideEffects;
extern PyObject *const_str_plain_expression;
extern PyObject *const_str_plain_release_name;
extern PyObject *const_str_plain_type_name;
extern PyObject *const_str_plain_getExpression;
static PyObject *const_str_digest_cd7aee56dada9496ca3ed0ed350e7c88;
static PyObject *const_str_digest_cbca074e61b4db510ebe1eed7c904345;
extern PyObject *const_str_plain_emit;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_generateExpressionCode;
extern PyObject *const_dict_empty;
extern PyObject *const_tuple_str_plain_statement_str_plain_emit_str_plain_context_tuple;
extern PyObject *const_str_plain_tmp_name;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_getReleaseCode;
extern PyObject *const_str_plain_generateExpressionOnlyCode;
extern PyObject *const_str_plain_generateSideEffectsCode;
static PyObject *const_str_plain_unused;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_side_effect;
extern PyObject *const_str_plain_base_name;
extern PyObject *const_tuple_str_plain_generateExpressionCode_tuple;
extern PyObject *const_str_plain_ErrorCodes;
extern PyObject *const_str_plain_context;
static PyObject *const_tuple_str_plain_getReleaseCode_tuple;
extern PyObject *const_str_plain_CodeHelpers;
static PyObject *const_str_plain_getStatementOnlyCode;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_164ad4aca0eec9d3b4a7086580c3e171_tuple;
extern PyObject *const_str_plain_statement;
static PyObject *const_tuple_261be494e07ccaea118275be329e3645_tuple;
extern PyObject *const_str_plain_unique;
static PyObject *const_str_digest_edf7f354f2dd135679b015b9e0fcd1b0;
static PyObject *const_str_digest_ca0ed227db8c429c2e5738ff3fae9010;
static PyObject *const_dict_f4de77d2dd41afb2a0f16d58195da89d;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_allocateTempName;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_91ec771c39bbefa2fd14520e91a16c2b = UNSTREAM_STRING( &constant_bin[ 291146 ], 177, 0 );
    const_str_digest_cd7aee56dada9496ca3ed0ed350e7c88 = UNSTREAM_STRING( &constant_bin[ 291323 ], 31, 0 );
    const_str_digest_cbca074e61b4db510ebe1eed7c904345 = UNSTREAM_STRING( &constant_bin[ 291354 ], 108, 0 );
    const_str_plain_unused = UNSTREAM_STRING( &constant_bin[ 279792 ], 6, 1 );
    const_tuple_str_plain_getReleaseCode_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_getReleaseCode_tuple, 0, const_str_plain_getReleaseCode ); Py_INCREF( const_str_plain_getReleaseCode );
    const_str_plain_getStatementOnlyCode = UNSTREAM_STRING( &constant_bin[ 291462 ], 20, 1 );
    const_tuple_164ad4aca0eec9d3b4a7086580c3e171_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_164ad4aca0eec9d3b4a7086580c3e171_tuple, 0, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_164ad4aca0eec9d3b4a7086580c3e171_tuple, 1, const_str_plain_emit ); Py_INCREF( const_str_plain_emit );
    PyTuple_SET_ITEM( const_tuple_164ad4aca0eec9d3b4a7086580c3e171_tuple, 2, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    PyTuple_SET_ITEM( const_tuple_164ad4aca0eec9d3b4a7086580c3e171_tuple, 3, const_str_plain_tmp_name ); Py_INCREF( const_str_plain_tmp_name );
    const_tuple_261be494e07ccaea118275be329e3645_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_261be494e07ccaea118275be329e3645_tuple, 0, const_str_plain_to_name ); Py_INCREF( const_str_plain_to_name );
    PyTuple_SET_ITEM( const_tuple_261be494e07ccaea118275be329e3645_tuple, 1, const_str_plain_expression ); Py_INCREF( const_str_plain_expression );
    PyTuple_SET_ITEM( const_tuple_261be494e07ccaea118275be329e3645_tuple, 2, const_str_plain_emit ); Py_INCREF( const_str_plain_emit );
    PyTuple_SET_ITEM( const_tuple_261be494e07ccaea118275be329e3645_tuple, 3, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    PyTuple_SET_ITEM( const_tuple_261be494e07ccaea118275be329e3645_tuple, 4, const_str_plain_side_effect ); Py_INCREF( const_str_plain_side_effect );
    const_str_digest_edf7f354f2dd135679b015b9e0fcd1b0 = UNSTREAM_STRING( &constant_bin[ 291482 ], 23, 0 );
    const_str_digest_ca0ed227db8c429c2e5738ff3fae9010 = UNSTREAM_STRING( &constant_bin[ 291505 ], 32, 0 );
    const_dict_f4de77d2dd41afb2a0f16d58195da89d = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_f4de77d2dd41afb2a0f16d58195da89d, const_str_plain_base_name, const_str_plain_unused );
    PyDict_SetItem( const_dict_f4de77d2dd41afb2a0f16d58195da89d, const_str_plain_type_name, const_str_digest_cd7aee56dada9496ca3ed0ed350e7c88 );
    PyDict_SetItem( const_dict_f4de77d2dd41afb2a0f16d58195da89d, const_str_plain_unique, Py_True );
    assert( PyDict_Size( const_dict_f4de77d2dd41afb2a0f16d58195da89d ) == 3 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_codegen$ExpressionCodes( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a152e2a436aa1bd1e563e69b0d00b392;
static PyCodeObject *codeobj_4ac470bbeb2963b33c6d301a4e4f9fad;
static PyCodeObject *codeobj_b81f2783b2c057b807a7bb5212eb2cb3;
static PyCodeObject *codeobj_f6d6f1f2986ca84337c1d0091e154b57;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_cbca074e61b4db510ebe1eed7c904345;
    codeobj_a152e2a436aa1bd1e563e69b0d00b392 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_ca0ed227db8c429c2e5738ff3fae9010, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_4ac470bbeb2963b33c6d301a4e4f9fad = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generateExpressionOnlyCode, 29, const_tuple_str_plain_statement_str_plain_emit_str_plain_context_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b81f2783b2c057b807a7bb5212eb2cb3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generateSideEffectsCode, 60, const_tuple_261be494e07ccaea118275be329e3645_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_f6d6f1f2986ca84337c1d0091e154b57 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getStatementOnlyCode, 37, const_tuple_164ad4aca0eec9d3b4a7086580c3e171_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_codegen$ExpressionCodes$$$function_1_generateExpressionOnlyCode(  );


static PyObject *MAKE_FUNCTION_codegen$ExpressionCodes$$$function_2_getStatementOnlyCode(  );


static PyObject *MAKE_FUNCTION_codegen$ExpressionCodes$$$function_3_generateSideEffectsCode(  );


// The module function definitions.
static PyObject *impl_codegen$ExpressionCodes$$$function_1_generateExpressionOnlyCode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_statement = python_pars[ 0 ];
    PyObject *par_emit = python_pars[ 1 ];
    PyObject *par_context = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_4ac470bbeb2963b33c6d301a4e4f9fad = NULL;

    struct Nuitka_FrameObject *frame_4ac470bbeb2963b33c6d301a4e4f9fad;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4ac470bbeb2963b33c6d301a4e4f9fad, codeobj_4ac470bbeb2963b33c6d301a4e4f9fad, module_codegen$ExpressionCodes, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4ac470bbeb2963b33c6d301a4e4f9fad = cache_frame_4ac470bbeb2963b33c6d301a4e4f9fad;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4ac470bbeb2963b33c6d301a4e4f9fad );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4ac470bbeb2963b33c6d301a4e4f9fad ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_codegen$ExpressionCodes, (Nuitka_StringObject *)const_str_plain_getStatementOnlyCode );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getStatementOnlyCode );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getStatementOnlyCode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 30;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_value;
    tmp_called_instance_1 = par_statement;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_4ac470bbeb2963b33c6d301a4e4f9fad->m_frame.f_lineno = 31;
    tmp_dict_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getExpression );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_emit;
    tmp_dict_value_2 = par_emit;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "emit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_context;
    tmp_dict_value_3 = par_context;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_4ac470bbeb2963b33c6d301a4e4f9fad->m_frame.f_lineno = 30;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ac470bbeb2963b33c6d301a4e4f9fad );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ac470bbeb2963b33c6d301a4e4f9fad );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ac470bbeb2963b33c6d301a4e4f9fad );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4ac470bbeb2963b33c6d301a4e4f9fad, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4ac470bbeb2963b33c6d301a4e4f9fad->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4ac470bbeb2963b33c6d301a4e4f9fad, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4ac470bbeb2963b33c6d301a4e4f9fad,
        type_description_1,
        par_statement,
        par_emit,
        par_context
    );


    // Release cached frame.
    if ( frame_4ac470bbeb2963b33c6d301a4e4f9fad == cache_frame_4ac470bbeb2963b33c6d301a4e4f9fad )
    {
        Py_DECREF( frame_4ac470bbeb2963b33c6d301a4e4f9fad );
    }
    cache_frame_4ac470bbeb2963b33c6d301a4e4f9fad = NULL;

    assertFrameObject( frame_4ac470bbeb2963b33c6d301a4e4f9fad );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codegen$ExpressionCodes$$$function_1_generateExpressionOnlyCode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_statement );
    par_statement = NULL;

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

    Py_XDECREF( par_statement );
    par_statement = NULL;

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
    NUITKA_CANNOT_GET_HERE( codegen$ExpressionCodes$$$function_1_generateExpressionOnlyCode );
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


static PyObject *impl_codegen$ExpressionCodes$$$function_2_getStatementOnlyCode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[ 0 ];
    PyObject *par_emit = python_pars[ 1 ];
    PyObject *par_context = python_pars[ 2 ];
    PyObject *var_tmp_name = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
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
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_f6d6f1f2986ca84337c1d0091e154b57 = NULL;

    struct Nuitka_FrameObject *frame_f6d6f1f2986ca84337c1d0091e154b57;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f6d6f1f2986ca84337c1d0091e154b57, codeobj_f6d6f1f2986ca84337c1d0091e154b57, module_codegen$ExpressionCodes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f6d6f1f2986ca84337c1d0091e154b57 = cache_frame_f6d6f1f2986ca84337c1d0091e154b57;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f6d6f1f2986ca84337c1d0091e154b57 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f6d6f1f2986ca84337c1d0091e154b57 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_context;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_allocateTempName );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = PyDict_Copy( const_dict_f4de77d2dd41afb2a0f16d58195da89d );
    frame_f6d6f1f2986ca84337c1d0091e154b57->m_frame.f_lineno = 38;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_tmp_name == NULL );
    var_tmp_name = tmp_assign_source_1;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_codegen$ExpressionCodes, (Nuitka_StringObject *)const_str_plain_generateExpressionCode );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_generateExpressionCode );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "generateExpressionCode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_expression;
    tmp_dict_value_1 = par_value;

    if ( tmp_dict_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_2 = _PyDict_NewPresized( 4 );
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_to_name;
    tmp_dict_value_2 = var_tmp_name;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_emit;
    tmp_dict_value_3 = par_emit;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "emit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_context;
    tmp_dict_value_4 = par_context;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    frame_f6d6f1f2986ca84337c1d0091e154b57->m_frame.f_lineno = 44;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_codegen$ExpressionCodes, (Nuitka_StringObject *)const_str_plain_getReleaseCode );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getReleaseCode );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getReleaseCode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_5 = const_str_plain_release_name;
    tmp_dict_value_5 = var_tmp_name;

    if ( tmp_dict_value_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "tmp_name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_3 = _PyDict_NewPresized( 3 );
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain_emit;
    tmp_dict_value_6 = par_emit;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "emit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_7 = const_str_plain_context;
    tmp_dict_value_7 = par_context;

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    frame_f6d6f1f2986ca84337c1d0091e154b57->m_frame.f_lineno = 53;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f6d6f1f2986ca84337c1d0091e154b57 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f6d6f1f2986ca84337c1d0091e154b57 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f6d6f1f2986ca84337c1d0091e154b57, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f6d6f1f2986ca84337c1d0091e154b57->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f6d6f1f2986ca84337c1d0091e154b57, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f6d6f1f2986ca84337c1d0091e154b57,
        type_description_1,
        par_value,
        par_emit,
        par_context,
        var_tmp_name
    );


    // Release cached frame.
    if ( frame_f6d6f1f2986ca84337c1d0091e154b57 == cache_frame_f6d6f1f2986ca84337c1d0091e154b57 )
    {
        Py_DECREF( frame_f6d6f1f2986ca84337c1d0091e154b57 );
    }
    cache_frame_f6d6f1f2986ca84337c1d0091e154b57 = NULL;

    assertFrameObject( frame_f6d6f1f2986ca84337c1d0091e154b57 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codegen$ExpressionCodes$$$function_2_getStatementOnlyCode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( par_emit );
    par_emit = NULL;

    Py_XDECREF( par_context );
    par_context = NULL;

    Py_XDECREF( var_tmp_name );
    var_tmp_name = NULL;

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

    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( par_emit );
    par_emit = NULL;

    Py_XDECREF( par_context );
    par_context = NULL;

    Py_XDECREF( var_tmp_name );
    var_tmp_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( codegen$ExpressionCodes$$$function_2_getStatementOnlyCode );
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


static PyObject *impl_codegen$ExpressionCodes$$$function_3_generateSideEffectsCode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *var_side_effect = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
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
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    int tmp_res;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_b81f2783b2c057b807a7bb5212eb2cb3 = NULL;

    struct Nuitka_FrameObject *frame_b81f2783b2c057b807a7bb5212eb2cb3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b81f2783b2c057b807a7bb5212eb2cb3, codeobj_b81f2783b2c057b807a7bb5212eb2cb3, module_codegen$ExpressionCodes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b81f2783b2c057b807a7bb5212eb2cb3 = cache_frame_b81f2783b2c057b807a7bb5212eb2cb3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b81f2783b2c057b807a7bb5212eb2cb3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b81f2783b2c057b807a7bb5212eb2cb3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_expression;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_b81f2783b2c057b807a7bb5212eb2cb3->m_frame.f_lineno = 61;
    tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getSideEffects );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_2 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "ooooo";
        exception_lineno = 61;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

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

    tmp_compare_left_1 = exception_keeper_type_1;
    tmp_compare_right_1 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 61;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_1;
    branch_no_1:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    branch_end_1:;
    // End of try:
    try_end_1:;
    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_3 );
    {
        PyObject *old = var_side_effect;
        var_side_effect = tmp_assign_source_3;
        Py_INCREF( var_side_effect );
        Py_XDECREF( old );
    }

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_codegen$ExpressionCodes, (Nuitka_StringObject *)const_str_plain_getStatementOnlyCode );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getStatementOnlyCode );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getStatementOnlyCode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_dict_key_1 = const_str_plain_value;
    tmp_dict_value_1 = var_side_effect;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_emit;
    tmp_dict_value_2 = par_emit;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "emit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_context;
    tmp_dict_value_3 = par_context;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_b81f2783b2c057b807a7bb5212eb2cb3->m_frame.f_lineno = 62;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_codegen$ExpressionCodes, (Nuitka_StringObject *)const_str_plain_generateExpressionCode );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_generateExpressionCode );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "generateExpressionCode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain_to_name;
    tmp_dict_value_4 = par_to_name;

    if ( tmp_dict_value_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "to_name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_2 = _PyDict_NewPresized( 4 );
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_expression;
    tmp_called_instance_2 = par_expression;

    if ( tmp_called_instance_2 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "expression" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_b81f2783b2c057b807a7bb5212eb2cb3->m_frame.f_lineno = 70;
    tmp_dict_value_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_getExpression );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 70;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain_emit;
    tmp_dict_value_6 = par_emit;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "emit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_7 = const_str_plain_context;
    tmp_dict_value_7 = par_context;

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    frame_b81f2783b2c057b807a7bb5212eb2cb3->m_frame.f_lineno = 68;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b81f2783b2c057b807a7bb5212eb2cb3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b81f2783b2c057b807a7bb5212eb2cb3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b81f2783b2c057b807a7bb5212eb2cb3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b81f2783b2c057b807a7bb5212eb2cb3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b81f2783b2c057b807a7bb5212eb2cb3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b81f2783b2c057b807a7bb5212eb2cb3,
        type_description_1,
        par_to_name,
        par_expression,
        par_emit,
        par_context,
        var_side_effect
    );


    // Release cached frame.
    if ( frame_b81f2783b2c057b807a7bb5212eb2cb3 == cache_frame_b81f2783b2c057b807a7bb5212eb2cb3 )
    {
        Py_DECREF( frame_b81f2783b2c057b807a7bb5212eb2cb3 );
    }
    cache_frame_b81f2783b2c057b807a7bb5212eb2cb3 = NULL;

    assertFrameObject( frame_b81f2783b2c057b807a7bb5212eb2cb3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codegen$ExpressionCodes$$$function_3_generateSideEffectsCode );
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

    Py_XDECREF( var_side_effect );
    var_side_effect = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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

    Py_XDECREF( var_side_effect );
    var_side_effect = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( codegen$ExpressionCodes$$$function_3_generateSideEffectsCode );
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



static PyObject *MAKE_FUNCTION_codegen$ExpressionCodes$$$function_1_generateExpressionOnlyCode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codegen$ExpressionCodes$$$function_1_generateExpressionOnlyCode,
        const_str_plain_generateExpressionOnlyCode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4ac470bbeb2963b33c6d301a4e4f9fad,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_codegen$ExpressionCodes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_codegen$ExpressionCodes$$$function_2_getStatementOnlyCode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codegen$ExpressionCodes$$$function_2_getStatementOnlyCode,
        const_str_plain_getStatementOnlyCode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f6d6f1f2986ca84337c1d0091e154b57,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_codegen$ExpressionCodes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_codegen$ExpressionCodes$$$function_3_generateSideEffectsCode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codegen$ExpressionCodes$$$function_3_generateSideEffectsCode,
        const_str_plain_generateSideEffectsCode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b81f2783b2c057b807a7bb5212eb2cb3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_codegen$ExpressionCodes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_codegen$ExpressionCodes =
{
    PyModuleDef_HEAD_INIT,
    "codegen.ExpressionCodes",   /* m_name */
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

MOD_INIT_DECL( codegen$ExpressionCodes )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_codegen$ExpressionCodes );
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
    puts("codegen.ExpressionCodes: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("codegen.ExpressionCodes: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("codegen.ExpressionCodes: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcodegen$ExpressionCodes" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_codegen$ExpressionCodes = Py_InitModule4(
        "codegen.ExpressionCodes",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_codegen$ExpressionCodes = PyModule_Create( &mdef_codegen$ExpressionCodes );
#endif

    moduledict_codegen$ExpressionCodes = MODULE_DICT( module_codegen$ExpressionCodes );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$ExpressionCodes, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_codegen$ExpressionCodes,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$ExpressionCodes, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_codegen$ExpressionCodes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_codegen$ExpressionCodes,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$ExpressionCodes, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_codegen$ExpressionCodes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_codegen$ExpressionCodes );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_edf7f354f2dd135679b015b9e0fcd1b0, module_codegen$ExpressionCodes );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_codegen$ExpressionCodes, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_codegen$ExpressionCodes, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_codegen$ExpressionCodes, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_codegen$ExpressionCodes, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_codegen$ExpressionCodes, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_codegen$ExpressionCodes, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    struct Nuitka_FrameObject *frame_a152e2a436aa1bd1e563e69b0d00b392;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_91ec771c39bbefa2fd14520e91a16c2b;
    UPDATE_STRING_DICT0( moduledict_codegen$ExpressionCodes, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_cbca074e61b4db510ebe1eed7c904345;
    UPDATE_STRING_DICT0( moduledict_codegen$ExpressionCodes, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_codegen$ExpressionCodes, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_a152e2a436aa1bd1e563e69b0d00b392 = MAKE_MODULE_FRAME( codeobj_a152e2a436aa1bd1e563e69b0d00b392, module_codegen$ExpressionCodes );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_a152e2a436aa1bd1e563e69b0d00b392 );
    assert( Py_REFCNT( frame_a152e2a436aa1bd1e563e69b0d00b392 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_CodeHelpers;
    tmp_globals_name_1 = (PyObject *)moduledict_codegen$ExpressionCodes;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_generateExpressionCode_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_a152e2a436aa1bd1e563e69b0d00b392->m_frame.f_lineno = 25;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_generateExpressionCode,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_generateExpressionCode );
    }

    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$ExpressionCodes, (Nuitka_StringObject *)const_str_plain_generateExpressionCode, tmp_assign_source_4 );
    tmp_name_name_2 = const_str_plain_ErrorCodes;
    tmp_globals_name_2 = (PyObject *)moduledict_codegen$ExpressionCodes;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_getReleaseCode_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_a152e2a436aa1bd1e563e69b0d00b392->m_frame.f_lineno = 26;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_2 ) )
    {
       tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_2,
            (PyObject *)MODULE_DICT(tmp_import_name_from_2),
            const_str_plain_getReleaseCode,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_getReleaseCode );
    }

    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$ExpressionCodes, (Nuitka_StringObject *)const_str_plain_getReleaseCode, tmp_assign_source_5 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a152e2a436aa1bd1e563e69b0d00b392 );
#endif
    popFrameStack();

    assertFrameObject( frame_a152e2a436aa1bd1e563e69b0d00b392 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a152e2a436aa1bd1e563e69b0d00b392 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a152e2a436aa1bd1e563e69b0d00b392, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a152e2a436aa1bd1e563e69b0d00b392->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a152e2a436aa1bd1e563e69b0d00b392, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_6 = MAKE_FUNCTION_codegen$ExpressionCodes$$$function_1_generateExpressionOnlyCode(  );
    UPDATE_STRING_DICT1( moduledict_codegen$ExpressionCodes, (Nuitka_StringObject *)const_str_plain_generateExpressionOnlyCode, tmp_assign_source_6 );
    tmp_assign_source_7 = MAKE_FUNCTION_codegen$ExpressionCodes$$$function_2_getStatementOnlyCode(  );
    UPDATE_STRING_DICT1( moduledict_codegen$ExpressionCodes, (Nuitka_StringObject *)const_str_plain_getStatementOnlyCode, tmp_assign_source_7 );
    tmp_assign_source_8 = MAKE_FUNCTION_codegen$ExpressionCodes$$$function_3_generateSideEffectsCode(  );
    UPDATE_STRING_DICT1( moduledict_codegen$ExpressionCodes, (Nuitka_StringObject *)const_str_plain_generateSideEffectsCode, tmp_assign_source_8 );

    return MOD_RETURN_VALUE( module_codegen$ExpressionCodes );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
