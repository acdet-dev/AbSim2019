/* Generated code for Python source for module 'codegen.IndexCodes'
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

/* The _module_codegen$IndexCodes is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_codegen$IndexCodes;
PyDictObject *moduledict_codegen$IndexCodes;

/* The module constants used, if any. */
extern PyObject *const_str_plain_to_name;
static PyObject *const_str_digest_9bc89f89a3b05214aae02ed559d0f7d3;
static PyObject *const_str_digest_8efdb8e28c84746c3e46fb8af9d26ba8;
static PyObject *const_str_digest_b1f1185a91235786e3a95808d0ad9325;
extern PyObject *const_str_plain_getErrorExitBoolCode;
extern PyObject *const_str_plain_emit;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_0416dfefcb0a3abf24794b31068e92c4_tuple;
extern PyObject *const_dict_empty;
extern PyObject *const_tuple_str_plain_getErrorExitBoolCode_tuple;
static PyObject *const_str_digest_61fcf6846bf39af2a0eb11c7655086fb;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_946fe3d9638b45d5dbae844608e34c81;
static PyObject *const_str_digest_affff2aec3442e0a8ed9b614c55220ae;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_value_name;
extern PyObject *const_str_plain_ErrorCodes;
static PyObject *const_str_digest_c2e3831fbf265e25f597a52808f9a427;
extern PyObject *const_str_plain_context;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_condition;
static PyObject *const_tuple_str_plain_to_name_str_plain_value_str_plain_emit_tuple;
extern PyObject *const_str_plain_getIndexValueCode;
extern PyObject *const_str_plain_getMaxIndexCode;
static PyObject *const_str_digest_c813e21495d812e2e0fe7881442ac0c1;
extern PyObject *const_str_plain_getIndexCode;
static PyObject *const_tuple_str_plain_to_name_str_plain_emit_tuple;
extern PyObject *const_str_plain_getMinIndexCode;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_7cc4a65af0eafbcc63b9e6b6b1de7542;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_9bc89f89a3b05214aae02ed559d0f7d3 = UNSTREAM_STRING( &constant_bin[ 298553 ], 20, 0 );
    const_str_digest_8efdb8e28c84746c3e46fb8af9d26ba8 = UNSTREAM_STRING( &constant_bin[ 298573 ], 27, 0 );
    const_str_digest_b1f1185a91235786e3a95808d0ad9325 = UNSTREAM_STRING( &constant_bin[ 298600 ], 28, 0 );
    const_tuple_0416dfefcb0a3abf24794b31068e92c4_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_0416dfefcb0a3abf24794b31068e92c4_tuple, 0, const_str_plain_to_name ); Py_INCREF( const_str_plain_to_name );
    PyTuple_SET_ITEM( const_tuple_0416dfefcb0a3abf24794b31068e92c4_tuple, 1, const_str_plain_value_name ); Py_INCREF( const_str_plain_value_name );
    PyTuple_SET_ITEM( const_tuple_0416dfefcb0a3abf24794b31068e92c4_tuple, 2, const_str_plain_emit ); Py_INCREF( const_str_plain_emit );
    PyTuple_SET_ITEM( const_tuple_0416dfefcb0a3abf24794b31068e92c4_tuple, 3, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    const_str_digest_61fcf6846bf39af2a0eb11c7655086fb = UNSTREAM_STRING( &constant_bin[ 298628 ], 8, 0 );
    const_str_digest_946fe3d9638b45d5dbae844608e34c81 = UNSTREAM_STRING( &constant_bin[ 298581 ], 18, 0 );
    const_str_digest_affff2aec3442e0a8ed9b614c55220ae = UNSTREAM_STRING( &constant_bin[ 298636 ], 198, 0 );
    const_str_digest_c2e3831fbf265e25f597a52808f9a427 = UNSTREAM_STRING( &constant_bin[ 298834 ], 7, 0 );
    const_tuple_str_plain_to_name_str_plain_value_str_plain_emit_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_to_name_str_plain_value_str_plain_emit_tuple, 0, const_str_plain_to_name ); Py_INCREF( const_str_plain_to_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_to_name_str_plain_value_str_plain_emit_tuple, 1, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_str_plain_to_name_str_plain_value_str_plain_emit_tuple, 2, const_str_plain_emit ); Py_INCREF( const_str_plain_emit );
    const_str_digest_c813e21495d812e2e0fe7881442ac0c1 = UNSTREAM_STRING( &constant_bin[ 298841 ], 28, 0 );
    const_tuple_str_plain_to_name_str_plain_emit_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_to_name_str_plain_emit_tuple, 0, const_str_plain_to_name ); Py_INCREF( const_str_plain_to_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_to_name_str_plain_emit_tuple, 1, const_str_plain_emit ); Py_INCREF( const_str_plain_emit );
    const_str_digest_7cc4a65af0eafbcc63b9e6b6b1de7542 = UNSTREAM_STRING( &constant_bin[ 298869 ], 103, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_codegen$IndexCodes( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_f39457d70e034abcfbf7fdca93177fba;
static PyCodeObject *codeobj_5fd65622ef692e976f06a4f88b78d7a1;
static PyCodeObject *codeobj_e1f8c2be5b45a63b27802d4848bbb98c;
static PyCodeObject *codeobj_ee680a8d578c49dcb0182b309ab17565;
static PyCodeObject *codeobj_680ca1e0ec4ecbefa4b5e5641da16456;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_7cc4a65af0eafbcc63b9e6b6b1de7542;
    codeobj_f39457d70e034abcfbf7fdca93177fba = MAKE_CODEOBJ( module_filename_obj, const_str_digest_8efdb8e28c84746c3e46fb8af9d26ba8, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_5fd65622ef692e976f06a4f88b78d7a1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getIndexCode, 41, const_tuple_0416dfefcb0a3abf24794b31068e92c4_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e1f8c2be5b45a63b27802d4848bbb98c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getIndexValueCode, 56, const_tuple_str_plain_to_name_str_plain_value_str_plain_emit_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ee680a8d578c49dcb0182b309ab17565 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getMaxIndexCode, 29, const_tuple_str_plain_to_name_str_plain_emit_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_680ca1e0ec4ecbefa4b5e5641da16456 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getMinIndexCode, 35, const_tuple_str_plain_to_name_str_plain_emit_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_codegen$IndexCodes$$$function_1_getMaxIndexCode(  );


static PyObject *MAKE_FUNCTION_codegen$IndexCodes$$$function_2_getMinIndexCode(  );


static PyObject *MAKE_FUNCTION_codegen$IndexCodes$$$function_3_getIndexCode(  );


static PyObject *MAKE_FUNCTION_codegen$IndexCodes$$$function_4_getIndexValueCode(  );


// The module function definitions.
static PyObject *impl_codegen$IndexCodes$$$function_1_getMaxIndexCode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_to_name = python_pars[ 0 ];
    PyObject *par_emit = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ee680a8d578c49dcb0182b309ab17565 = NULL;

    struct Nuitka_FrameObject *frame_ee680a8d578c49dcb0182b309ab17565;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ee680a8d578c49dcb0182b309ab17565, codeobj_ee680a8d578c49dcb0182b309ab17565, module_codegen$IndexCodes, sizeof(void *)+sizeof(void *) );
    frame_ee680a8d578c49dcb0182b309ab17565 = cache_frame_ee680a8d578c49dcb0182b309ab17565;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ee680a8d578c49dcb0182b309ab17565 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ee680a8d578c49dcb0182b309ab17565 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = par_emit;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_left_name_1 = const_str_digest_9bc89f89a3b05214aae02ed559d0f7d3;
    tmp_right_name_1 = par_to_name;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_ee680a8d578c49dcb0182b309ab17565->m_frame.f_lineno = 30;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ee680a8d578c49dcb0182b309ab17565 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ee680a8d578c49dcb0182b309ab17565 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ee680a8d578c49dcb0182b309ab17565, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ee680a8d578c49dcb0182b309ab17565->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ee680a8d578c49dcb0182b309ab17565, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ee680a8d578c49dcb0182b309ab17565,
        type_description_1,
        par_to_name,
        par_emit
    );


    // Release cached frame.
    if ( frame_ee680a8d578c49dcb0182b309ab17565 == cache_frame_ee680a8d578c49dcb0182b309ab17565 )
    {
        Py_DECREF( frame_ee680a8d578c49dcb0182b309ab17565 );
    }
    cache_frame_ee680a8d578c49dcb0182b309ab17565 = NULL;

    assertFrameObject( frame_ee680a8d578c49dcb0182b309ab17565 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codegen$IndexCodes$$$function_1_getMaxIndexCode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_to_name );
    par_to_name = NULL;

    Py_XDECREF( par_emit );
    par_emit = NULL;

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

    Py_XDECREF( par_emit );
    par_emit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( codegen$IndexCodes$$$function_1_getMaxIndexCode );
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


static PyObject *impl_codegen$IndexCodes$$$function_2_getMinIndexCode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_to_name = python_pars[ 0 ];
    PyObject *par_emit = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_680ca1e0ec4ecbefa4b5e5641da16456 = NULL;

    struct Nuitka_FrameObject *frame_680ca1e0ec4ecbefa4b5e5641da16456;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_680ca1e0ec4ecbefa4b5e5641da16456, codeobj_680ca1e0ec4ecbefa4b5e5641da16456, module_codegen$IndexCodes, sizeof(void *)+sizeof(void *) );
    frame_680ca1e0ec4ecbefa4b5e5641da16456 = cache_frame_680ca1e0ec4ecbefa4b5e5641da16456;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_680ca1e0ec4ecbefa4b5e5641da16456 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_680ca1e0ec4ecbefa4b5e5641da16456 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = par_emit;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_left_name_1 = const_str_digest_c2e3831fbf265e25f597a52808f9a427;
    tmp_right_name_1 = par_to_name;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_680ca1e0ec4ecbefa4b5e5641da16456->m_frame.f_lineno = 36;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_680ca1e0ec4ecbefa4b5e5641da16456 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_680ca1e0ec4ecbefa4b5e5641da16456 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_680ca1e0ec4ecbefa4b5e5641da16456, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_680ca1e0ec4ecbefa4b5e5641da16456->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_680ca1e0ec4ecbefa4b5e5641da16456, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_680ca1e0ec4ecbefa4b5e5641da16456,
        type_description_1,
        par_to_name,
        par_emit
    );


    // Release cached frame.
    if ( frame_680ca1e0ec4ecbefa4b5e5641da16456 == cache_frame_680ca1e0ec4ecbefa4b5e5641da16456 )
    {
        Py_DECREF( frame_680ca1e0ec4ecbefa4b5e5641da16456 );
    }
    cache_frame_680ca1e0ec4ecbefa4b5e5641da16456 = NULL;

    assertFrameObject( frame_680ca1e0ec4ecbefa4b5e5641da16456 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codegen$IndexCodes$$$function_2_getMinIndexCode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_to_name );
    par_to_name = NULL;

    Py_XDECREF( par_emit );
    par_emit = NULL;

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

    Py_XDECREF( par_emit );
    par_emit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( codegen$IndexCodes$$$function_2_getMinIndexCode );
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


static PyObject *impl_codegen$IndexCodes$$$function_3_getIndexCode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_to_name = python_pars[ 0 ];
    PyObject *par_value_name = python_pars[ 1 ];
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_5fd65622ef692e976f06a4f88b78d7a1 = NULL;

    struct Nuitka_FrameObject *frame_5fd65622ef692e976f06a4f88b78d7a1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5fd65622ef692e976f06a4f88b78d7a1, codeobj_5fd65622ef692e976f06a4f88b78d7a1, module_codegen$IndexCodes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5fd65622ef692e976f06a4f88b78d7a1 = cache_frame_5fd65622ef692e976f06a4f88b78d7a1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5fd65622ef692e976f06a4f88b78d7a1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5fd65622ef692e976f06a4f88b78d7a1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = par_emit;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_left_name_1 = const_str_digest_c813e21495d812e2e0fe7881442ac0c1;
    tmp_tuple_element_1 = par_to_name;

    CHECK_OBJECT( tmp_tuple_element_1 );
    tmp_right_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_value_name;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_5fd65622ef692e976f06a4f88b78d7a1->m_frame.f_lineno = 42;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_codegen$IndexCodes, (Nuitka_StringObject *)const_str_plain_getErrorExitBoolCode );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getErrorExitBoolCode );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getErrorExitBoolCode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 49;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_condition;
    tmp_left_name_2 = const_str_digest_b1f1185a91235786e3a95808d0ad9325;
    tmp_right_name_2 = par_to_name;

    if ( tmp_right_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "to_name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "oooo";
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

        exception_lineno = 51;
        type_description_1 = "oooo";
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

        exception_lineno = 52;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_5fd65622ef692e976f06a4f88b78d7a1->m_frame.f_lineno = 49;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5fd65622ef692e976f06a4f88b78d7a1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5fd65622ef692e976f06a4f88b78d7a1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5fd65622ef692e976f06a4f88b78d7a1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5fd65622ef692e976f06a4f88b78d7a1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5fd65622ef692e976f06a4f88b78d7a1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5fd65622ef692e976f06a4f88b78d7a1,
        type_description_1,
        par_to_name,
        par_value_name,
        par_emit,
        par_context
    );


    // Release cached frame.
    if ( frame_5fd65622ef692e976f06a4f88b78d7a1 == cache_frame_5fd65622ef692e976f06a4f88b78d7a1 )
    {
        Py_DECREF( frame_5fd65622ef692e976f06a4f88b78d7a1 );
    }
    cache_frame_5fd65622ef692e976f06a4f88b78d7a1 = NULL;

    assertFrameObject( frame_5fd65622ef692e976f06a4f88b78d7a1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codegen$IndexCodes$$$function_3_getIndexCode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_to_name );
    par_to_name = NULL;

    Py_XDECREF( par_value_name );
    par_value_name = NULL;

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

    Py_XDECREF( par_value_name );
    par_value_name = NULL;

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
    NUITKA_CANNOT_GET_HERE( codegen$IndexCodes$$$function_3_getIndexCode );
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


static PyObject *impl_codegen$IndexCodes$$$function_4_getIndexValueCode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_to_name = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
    PyObject *par_emit = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e1f8c2be5b45a63b27802d4848bbb98c = NULL;

    struct Nuitka_FrameObject *frame_e1f8c2be5b45a63b27802d4848bbb98c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e1f8c2be5b45a63b27802d4848bbb98c, codeobj_e1f8c2be5b45a63b27802d4848bbb98c, module_codegen$IndexCodes, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e1f8c2be5b45a63b27802d4848bbb98c = cache_frame_e1f8c2be5b45a63b27802d4848bbb98c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e1f8c2be5b45a63b27802d4848bbb98c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e1f8c2be5b45a63b27802d4848bbb98c ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = par_emit;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_left_name_1 = const_str_digest_61fcf6846bf39af2a0eb11c7655086fb;
    tmp_tuple_element_1 = par_to_name;

    CHECK_OBJECT( tmp_tuple_element_1 );
    tmp_right_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_value;

    CHECK_OBJECT( tmp_tuple_element_1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_e1f8c2be5b45a63b27802d4848bbb98c->m_frame.f_lineno = 57;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1f8c2be5b45a63b27802d4848bbb98c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e1f8c2be5b45a63b27802d4848bbb98c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e1f8c2be5b45a63b27802d4848bbb98c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e1f8c2be5b45a63b27802d4848bbb98c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e1f8c2be5b45a63b27802d4848bbb98c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e1f8c2be5b45a63b27802d4848bbb98c,
        type_description_1,
        par_to_name,
        par_value,
        par_emit
    );


    // Release cached frame.
    if ( frame_e1f8c2be5b45a63b27802d4848bbb98c == cache_frame_e1f8c2be5b45a63b27802d4848bbb98c )
    {
        Py_DECREF( frame_e1f8c2be5b45a63b27802d4848bbb98c );
    }
    cache_frame_e1f8c2be5b45a63b27802d4848bbb98c = NULL;

    assertFrameObject( frame_e1f8c2be5b45a63b27802d4848bbb98c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codegen$IndexCodes$$$function_4_getIndexValueCode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_to_name );
    par_to_name = NULL;

    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( par_emit );
    par_emit = NULL;

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

    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( par_emit );
    par_emit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( codegen$IndexCodes$$$function_4_getIndexValueCode );
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



static PyObject *MAKE_FUNCTION_codegen$IndexCodes$$$function_1_getMaxIndexCode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codegen$IndexCodes$$$function_1_getMaxIndexCode,
        const_str_plain_getMaxIndexCode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ee680a8d578c49dcb0182b309ab17565,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_codegen$IndexCodes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_codegen$IndexCodes$$$function_2_getMinIndexCode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codegen$IndexCodes$$$function_2_getMinIndexCode,
        const_str_plain_getMinIndexCode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_680ca1e0ec4ecbefa4b5e5641da16456,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_codegen$IndexCodes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_codegen$IndexCodes$$$function_3_getIndexCode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codegen$IndexCodes$$$function_3_getIndexCode,
        const_str_plain_getIndexCode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5fd65622ef692e976f06a4f88b78d7a1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_codegen$IndexCodes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_codegen$IndexCodes$$$function_4_getIndexValueCode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codegen$IndexCodes$$$function_4_getIndexValueCode,
        const_str_plain_getIndexValueCode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e1f8c2be5b45a63b27802d4848bbb98c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_codegen$IndexCodes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_codegen$IndexCodes =
{
    PyModuleDef_HEAD_INIT,
    "codegen.IndexCodes",   /* m_name */
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

MOD_INIT_DECL( codegen$IndexCodes )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_codegen$IndexCodes );
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
    puts("codegen.IndexCodes: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("codegen.IndexCodes: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("codegen.IndexCodes: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcodegen$IndexCodes" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_codegen$IndexCodes = Py_InitModule4(
        "codegen.IndexCodes",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_codegen$IndexCodes = PyModule_Create( &mdef_codegen$IndexCodes );
#endif

    moduledict_codegen$IndexCodes = MODULE_DICT( module_codegen$IndexCodes );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$IndexCodes, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_codegen$IndexCodes,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$IndexCodes, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_codegen$IndexCodes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_codegen$IndexCodes,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$IndexCodes, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_codegen$IndexCodes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_codegen$IndexCodes );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_946fe3d9638b45d5dbae844608e34c81, module_codegen$IndexCodes );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_codegen$IndexCodes, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_codegen$IndexCodes, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_codegen$IndexCodes, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_codegen$IndexCodes, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_codegen$IndexCodes, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_codegen$IndexCodes, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    struct Nuitka_FrameObject *frame_f39457d70e034abcfbf7fdca93177fba;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_affff2aec3442e0a8ed9b614c55220ae;
    UPDATE_STRING_DICT0( moduledict_codegen$IndexCodes, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_7cc4a65af0eafbcc63b9e6b6b1de7542;
    UPDATE_STRING_DICT0( moduledict_codegen$IndexCodes, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_codegen$IndexCodes, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_f39457d70e034abcfbf7fdca93177fba = MAKE_MODULE_FRAME( codeobj_f39457d70e034abcfbf7fdca93177fba, module_codegen$IndexCodes );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_f39457d70e034abcfbf7fdca93177fba );
    assert( Py_REFCNT( frame_f39457d70e034abcfbf7fdca93177fba ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_ErrorCodes;
    tmp_globals_name_1 = (PyObject *)moduledict_codegen$IndexCodes;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_getErrorExitBoolCode_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_f39457d70e034abcfbf7fdca93177fba->m_frame.f_lineno = 26;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_getErrorExitBoolCode,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_getErrorExitBoolCode );
    }

    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$IndexCodes, (Nuitka_StringObject *)const_str_plain_getErrorExitBoolCode, tmp_assign_source_4 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f39457d70e034abcfbf7fdca93177fba );
#endif
    popFrameStack();

    assertFrameObject( frame_f39457d70e034abcfbf7fdca93177fba );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f39457d70e034abcfbf7fdca93177fba );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f39457d70e034abcfbf7fdca93177fba, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f39457d70e034abcfbf7fdca93177fba->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f39457d70e034abcfbf7fdca93177fba, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_5 = MAKE_FUNCTION_codegen$IndexCodes$$$function_1_getMaxIndexCode(  );
    UPDATE_STRING_DICT1( moduledict_codegen$IndexCodes, (Nuitka_StringObject *)const_str_plain_getMaxIndexCode, tmp_assign_source_5 );
    tmp_assign_source_6 = MAKE_FUNCTION_codegen$IndexCodes$$$function_2_getMinIndexCode(  );
    UPDATE_STRING_DICT1( moduledict_codegen$IndexCodes, (Nuitka_StringObject *)const_str_plain_getMinIndexCode, tmp_assign_source_6 );
    tmp_assign_source_7 = MAKE_FUNCTION_codegen$IndexCodes$$$function_3_getIndexCode(  );
    UPDATE_STRING_DICT1( moduledict_codegen$IndexCodes, (Nuitka_StringObject *)const_str_plain_getIndexCode, tmp_assign_source_7 );
    tmp_assign_source_8 = MAKE_FUNCTION_codegen$IndexCodes$$$function_4_getIndexValueCode(  );
    UPDATE_STRING_DICT1( moduledict_codegen$IndexCodes, (Nuitka_StringObject *)const_str_plain_getIndexValueCode, tmp_assign_source_8 );

    return MOD_RETURN_VALUE( module_codegen$IndexCodes );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
