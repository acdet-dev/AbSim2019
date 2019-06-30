/* Generated code for Python source for module 'Tracing'
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

/* The _module_Tracing is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_Tracing;
PyDictObject *moduledict_Tracing;

/* The module constants used, if any. */
extern PyObject *const_tuple_int_0_tuple;
static PyObject *const_str_digest_57d7530ff98b1ff1aae87b996e9b0bb2;
static PyObject *const_tuple_str_plain_level_str_plain_what_tuple;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_file;
static PyObject *const_str_digest_5da52f7f7d32adf81203f1fd201e8749;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain___file__;
extern PyObject *const_tuple_str_plain_level_tuple;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_printLine;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_Tracing;
extern PyObject *const_tuple_str_plain_args_str_plain_kwargs_tuple;
extern PyObject *const_str_plain_print;
static PyObject *const_tuple_str_plain_what_tuple;
static PyObject *const_str_plain_my_print;
extern PyObject *const_str_plain_level;
extern PyObject *const_str_digest_f65c0a7d4cdaee5f484bffe48dc96c38;
extern PyObject *const_str_plain_message;
static PyObject *const_str_digest_66791d44f71ec7c510ec54050b9b3535;
extern PyObject *const_tuple_str_plain_message_tuple;
extern PyObject *const_str_plain_what;
static PyObject *const_str_digest_1b56a6f4cc099b10d9b0b5f8820b93ee;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_printError;
static PyObject *const_str_digest_8329435704bc33f603329a1ada9b0836;
extern PyObject *const_str_plain_stderr;
extern PyObject *const_str_plain_stdout;
extern PyObject *const_str_plain_flush;
extern PyObject *const_str_plain_printIndented;
extern PyObject *const_str_plain_printSeparator;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_flushStdout;
extern PyObject *const_str_plain_print_function;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_57d7530ff98b1ff1aae87b996e9b0bb2 = UNSTREAM_STRING( &constant_bin[ 20025 ], 92, 0 );
    const_tuple_str_plain_level_str_plain_what_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_level_str_plain_what_tuple, 0, const_str_plain_level ); Py_INCREF( const_str_plain_level );
    PyTuple_SET_ITEM( const_tuple_str_plain_level_str_plain_what_tuple, 1, const_str_plain_what ); Py_INCREF( const_str_plain_what );
    const_str_digest_5da52f7f7d32adf81203f1fd201e8749 = UNSTREAM_STRING( &constant_bin[ 20117 ], 10, 0 );
    const_tuple_str_plain_what_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_what_tuple, 0, const_str_plain_what ); Py_INCREF( const_str_plain_what );
    const_str_plain_my_print = UNSTREAM_STRING( &constant_bin[ 20127 ], 8, 1 );
    const_str_digest_66791d44f71ec7c510ec54050b9b3535 = UNSTREAM_STRING( &constant_bin[ 20135 ], 118, 0 );
    const_str_digest_1b56a6f4cc099b10d9b0b5f8820b93ee = UNSTREAM_STRING( &constant_bin[ 20253 ], 16, 0 );
    const_str_digest_8329435704bc33f603329a1ada9b0836 = UNSTREAM_STRING( &constant_bin[ 20269 ], 384, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_Tracing( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_ef70aea4dbd523e6b6927fd45e7ace67;
static PyCodeObject *codeobj_c03e31b6931c2c8bd6ed8ab4ddb1ac27;
static PyCodeObject *codeobj_ee1272a5a2d04d74e74b41c861f14108;
static PyCodeObject *codeobj_fa93448d5f8f155323720e37ecd290f7;
static PyCodeObject *codeobj_7131e971c8265d46ffc07b01ad50e318;
static PyCodeObject *codeobj_0c41db8b3acbb45dc3015c011d5ec512;
static PyCodeObject *codeobj_53e52a12d3307f87aa518d17548a0104;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_57d7530ff98b1ff1aae87b996e9b0bb2;
    codeobj_ef70aea4dbd523e6b6927fd45e7ace67 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_1b56a6f4cc099b10d9b0b5f8820b93ee, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_c03e31b6931c2c8bd6ed8ab4ddb1ac27 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_flushStdout, 53, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ee1272a5a2d04d74e74b41c861f14108 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_my_print, 57, const_tuple_str_plain_args_str_plain_kwargs_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_fa93448d5f8f155323720e37ecd290f7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_printError, 46, const_tuple_str_plain_message_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7131e971c8265d46ffc07b01ad50e318 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_printIndented, 34, const_tuple_str_plain_level_str_plain_what_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_0c41db8b3acbb45dc3015c011d5ec512 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_printLine, 42, const_tuple_str_plain_what_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE );
    codeobj_53e52a12d3307f87aa518d17548a0104 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_printSeparator, 38, const_tuple_str_plain_level_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3_complex_call_helper_pos_star_list( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_star_list( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_Tracing$$$function_1_printIndented(  );


static PyObject *MAKE_FUNCTION_Tracing$$$function_2_printSeparator( PyObject *defaults );


static PyObject *MAKE_FUNCTION_Tracing$$$function_3_printLine(  );


static PyObject *MAKE_FUNCTION_Tracing$$$function_4_printError(  );


static PyObject *MAKE_FUNCTION_Tracing$$$function_5_flushStdout(  );


static PyObject *MAKE_FUNCTION_Tracing$$$function_6_my_print(  );


// The module function definitions.
static PyObject *impl_Tracing$$$function_1_printIndented( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_level = python_pars[ 0 ];
    PyObject *par_what = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_7131e971c8265d46ffc07b01ad50e318 = NULL;

    struct Nuitka_FrameObject *frame_7131e971c8265d46ffc07b01ad50e318;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7131e971c8265d46ffc07b01ad50e318, codeobj_7131e971c8265d46ffc07b01ad50e318, module_Tracing, sizeof(void *)+sizeof(void *) );
    frame_7131e971c8265d46ffc07b01ad50e318 = cache_frame_7131e971c8265d46ffc07b01ad50e318;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7131e971c8265d46ffc07b01ad50e318 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7131e971c8265d46ffc07b01ad50e318 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dircall_arg1_1 = LOOKUP_BUILTIN( const_str_plain_print );
    assert( tmp_dircall_arg1_1 != NULL );
    tmp_left_name_1 = const_str_digest_f65c0a7d4cdaee5f484bffe48dc96c38;
    tmp_right_name_1 = par_level;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_tuple_element_1 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = par_what;

    if ( tmp_dircall_arg3_1 == NULL )
    {
        Py_DECREF( tmp_dircall_arg2_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "what" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_unused = impl___internal__$$$function_3_complex_call_helper_pos_star_list( dir_call_args );
    }
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7131e971c8265d46ffc07b01ad50e318 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7131e971c8265d46ffc07b01ad50e318 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7131e971c8265d46ffc07b01ad50e318, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7131e971c8265d46ffc07b01ad50e318->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7131e971c8265d46ffc07b01ad50e318, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7131e971c8265d46ffc07b01ad50e318,
        type_description_1,
        par_level,
        par_what
    );


    // Release cached frame.
    if ( frame_7131e971c8265d46ffc07b01ad50e318 == cache_frame_7131e971c8265d46ffc07b01ad50e318 )
    {
        Py_DECREF( frame_7131e971c8265d46ffc07b01ad50e318 );
    }
    cache_frame_7131e971c8265d46ffc07b01ad50e318 = NULL;

    assertFrameObject( frame_7131e971c8265d46ffc07b01ad50e318 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Tracing$$$function_1_printIndented );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_level );
    par_level = NULL;

    Py_XDECREF( par_what );
    par_what = NULL;

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

    Py_XDECREF( par_level );
    par_level = NULL;

    Py_XDECREF( par_what );
    par_what = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Tracing$$$function_1_printIndented );
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


static PyObject *impl_Tracing$$$function_2_printSeparator( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_level = python_pars[ 0 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_53e52a12d3307f87aa518d17548a0104 = NULL;

    struct Nuitka_FrameObject *frame_53e52a12d3307f87aa518d17548a0104;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_53e52a12d3307f87aa518d17548a0104, codeobj_53e52a12d3307f87aa518d17548a0104, module_Tracing, sizeof(void *) );
    frame_53e52a12d3307f87aa518d17548a0104 = cache_frame_53e52a12d3307f87aa518d17548a0104;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_53e52a12d3307f87aa518d17548a0104 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_53e52a12d3307f87aa518d17548a0104 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_print );
    assert( tmp_called_name_1 != NULL );
    tmp_left_name_1 = const_str_digest_f65c0a7d4cdaee5f484bffe48dc96c38;
    tmp_right_name_1 = par_level;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_args_element_name_1 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = const_str_digest_5da52f7f7d32adf81203f1fd201e8749;
    frame_53e52a12d3307f87aa518d17548a0104->m_frame.f_lineno = 39;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_53e52a12d3307f87aa518d17548a0104 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_53e52a12d3307f87aa518d17548a0104 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_53e52a12d3307f87aa518d17548a0104, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_53e52a12d3307f87aa518d17548a0104->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_53e52a12d3307f87aa518d17548a0104, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_53e52a12d3307f87aa518d17548a0104,
        type_description_1,
        par_level
    );


    // Release cached frame.
    if ( frame_53e52a12d3307f87aa518d17548a0104 == cache_frame_53e52a12d3307f87aa518d17548a0104 )
    {
        Py_DECREF( frame_53e52a12d3307f87aa518d17548a0104 );
    }
    cache_frame_53e52a12d3307f87aa518d17548a0104 = NULL;

    assertFrameObject( frame_53e52a12d3307f87aa518d17548a0104 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Tracing$$$function_2_printSeparator );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_level );
    par_level = NULL;

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

    Py_XDECREF( par_level );
    par_level = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Tracing$$$function_2_printSeparator );
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


static PyObject *impl_Tracing$$$function_3_printLine( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_what = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_0c41db8b3acbb45dc3015c011d5ec512 = NULL;

    struct Nuitka_FrameObject *frame_0c41db8b3acbb45dc3015c011d5ec512;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0c41db8b3acbb45dc3015c011d5ec512, codeobj_0c41db8b3acbb45dc3015c011d5ec512, module_Tracing, sizeof(void *) );
    frame_0c41db8b3acbb45dc3015c011d5ec512 = cache_frame_0c41db8b3acbb45dc3015c011d5ec512;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0c41db8b3acbb45dc3015c011d5ec512 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0c41db8b3acbb45dc3015c011d5ec512 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dircall_arg1_1 = LOOKUP_BUILTIN( const_str_plain_print );
    assert( tmp_dircall_arg1_1 != NULL );
    tmp_dircall_arg2_1 = par_what;

    CHECK_OBJECT( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg2_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
        tmp_unused = impl___internal__$$$function_1_complex_call_helper_star_list( dir_call_args );
    }
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0c41db8b3acbb45dc3015c011d5ec512 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0c41db8b3acbb45dc3015c011d5ec512 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0c41db8b3acbb45dc3015c011d5ec512, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0c41db8b3acbb45dc3015c011d5ec512->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0c41db8b3acbb45dc3015c011d5ec512, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0c41db8b3acbb45dc3015c011d5ec512,
        type_description_1,
        par_what
    );


    // Release cached frame.
    if ( frame_0c41db8b3acbb45dc3015c011d5ec512 == cache_frame_0c41db8b3acbb45dc3015c011d5ec512 )
    {
        Py_DECREF( frame_0c41db8b3acbb45dc3015c011d5ec512 );
    }
    cache_frame_0c41db8b3acbb45dc3015c011d5ec512 = NULL;

    assertFrameObject( frame_0c41db8b3acbb45dc3015c011d5ec512 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Tracing$$$function_3_printLine );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_what );
    Py_DECREF( par_what );
    par_what = NULL;

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

    CHECK_OBJECT( (PyObject *)par_what );
    Py_DECREF( par_what );
    par_what = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Tracing$$$function_3_printLine );
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


static PyObject *impl_Tracing$$$function_4_printError( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_message = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_fa93448d5f8f155323720e37ecd290f7 = NULL;

    struct Nuitka_FrameObject *frame_fa93448d5f8f155323720e37ecd290f7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fa93448d5f8f155323720e37ecd290f7, codeobj_fa93448d5f8f155323720e37ecd290f7, module_Tracing, sizeof(void *) );
    frame_fa93448d5f8f155323720e37ecd290f7 = cache_frame_fa93448d5f8f155323720e37ecd290f7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fa93448d5f8f155323720e37ecd290f7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fa93448d5f8f155323720e37ecd290f7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_print );
    assert( tmp_called_name_1 != NULL );
    tmp_tuple_element_1 = par_message;

    CHECK_OBJECT( tmp_tuple_element_1 );
    tmp_args_name_1 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_dict_key_1 = const_str_plain_file;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Tracing, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 49;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_stderr );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 49;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_fa93448d5f8f155323720e37ecd290f7->m_frame.f_lineno = 47;
    tmp_unused = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fa93448d5f8f155323720e37ecd290f7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fa93448d5f8f155323720e37ecd290f7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fa93448d5f8f155323720e37ecd290f7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fa93448d5f8f155323720e37ecd290f7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fa93448d5f8f155323720e37ecd290f7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fa93448d5f8f155323720e37ecd290f7,
        type_description_1,
        par_message
    );


    // Release cached frame.
    if ( frame_fa93448d5f8f155323720e37ecd290f7 == cache_frame_fa93448d5f8f155323720e37ecd290f7 )
    {
        Py_DECREF( frame_fa93448d5f8f155323720e37ecd290f7 );
    }
    cache_frame_fa93448d5f8f155323720e37ecd290f7 = NULL;

    assertFrameObject( frame_fa93448d5f8f155323720e37ecd290f7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Tracing$$$function_4_printError );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_message );
    par_message = NULL;

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

    Py_XDECREF( par_message );
    par_message = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Tracing$$$function_4_printError );
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


static PyObject *impl_Tracing$$$function_5_flushStdout( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c03e31b6931c2c8bd6ed8ab4ddb1ac27 = NULL;

    struct Nuitka_FrameObject *frame_c03e31b6931c2c8bd6ed8ab4ddb1ac27;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_c03e31b6931c2c8bd6ed8ab4ddb1ac27, codeobj_c03e31b6931c2c8bd6ed8ab4ddb1ac27, module_Tracing, 0 );
    frame_c03e31b6931c2c8bd6ed8ab4ddb1ac27 = cache_frame_c03e31b6931c2c8bd6ed8ab4ddb1ac27;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c03e31b6931c2c8bd6ed8ab4ddb1ac27 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c03e31b6931c2c8bd6ed8ab4ddb1ac27 ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_Tracing, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;

        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_stdout );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto frame_exception_exit_1;
    }
    frame_c03e31b6931c2c8bd6ed8ab4ddb1ac27->m_frame.f_lineno = 54;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_flush );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c03e31b6931c2c8bd6ed8ab4ddb1ac27 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c03e31b6931c2c8bd6ed8ab4ddb1ac27 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c03e31b6931c2c8bd6ed8ab4ddb1ac27, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c03e31b6931c2c8bd6ed8ab4ddb1ac27->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c03e31b6931c2c8bd6ed8ab4ddb1ac27, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c03e31b6931c2c8bd6ed8ab4ddb1ac27,
        type_description_1
    );


    // Release cached frame.
    if ( frame_c03e31b6931c2c8bd6ed8ab4ddb1ac27 == cache_frame_c03e31b6931c2c8bd6ed8ab4ddb1ac27 )
    {
        Py_DECREF( frame_c03e31b6931c2c8bd6ed8ab4ddb1ac27 );
    }
    cache_frame_c03e31b6931c2c8bd6ed8ab4ddb1ac27 = NULL;

    assertFrameObject( frame_c03e31b6931c2c8bd6ed8ab4ddb1ac27 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Tracing$$$function_5_flushStdout );
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


static PyObject *impl_Tracing$$$function_6_my_print( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_ee1272a5a2d04d74e74b41c861f14108 = NULL;

    struct Nuitka_FrameObject *frame_ee1272a5a2d04d74e74b41c861f14108;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ee1272a5a2d04d74e74b41c861f14108, codeobj_ee1272a5a2d04d74e74b41c861f14108, module_Tracing, sizeof(void *)+sizeof(void *) );
    frame_ee1272a5a2d04d74e74b41c861f14108 = cache_frame_ee1272a5a2d04d74e74b41c861f14108;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ee1272a5a2d04d74e74b41c861f14108 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ee1272a5a2d04d74e74b41c861f14108 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dircall_arg1_1 = LOOKUP_BUILTIN( const_str_plain_print );
    assert( tmp_dircall_arg1_1 != NULL );
    tmp_dircall_arg2_1 = par_args;

    CHECK_OBJECT( tmp_dircall_arg2_1 );
    tmp_dircall_arg3_1 = par_kwargs;

    CHECK_OBJECT( tmp_dircall_arg3_1 );
    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_unused = impl___internal__$$$function_5_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_Tracing, (Nuitka_StringObject *)const_str_plain_flushStdout );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_flushStdout );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "flushStdout" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    frame_ee1272a5a2d04d74e74b41c861f14108->m_frame.f_lineno = 65;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ee1272a5a2d04d74e74b41c861f14108 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ee1272a5a2d04d74e74b41c861f14108 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ee1272a5a2d04d74e74b41c861f14108, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ee1272a5a2d04d74e74b41c861f14108->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ee1272a5a2d04d74e74b41c861f14108, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ee1272a5a2d04d74e74b41c861f14108,
        type_description_1,
        par_args,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_ee1272a5a2d04d74e74b41c861f14108 == cache_frame_ee1272a5a2d04d74e74b41c861f14108 )
    {
        Py_DECREF( frame_ee1272a5a2d04d74e74b41c861f14108 );
    }
    cache_frame_ee1272a5a2d04d74e74b41c861f14108 = NULL;

    assertFrameObject( frame_ee1272a5a2d04d74e74b41c861f14108 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( Tracing$$$function_6_my_print );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

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

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( Tracing$$$function_6_my_print );
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



static PyObject *MAKE_FUNCTION_Tracing$$$function_1_printIndented(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Tracing$$$function_1_printIndented,
        const_str_plain_printIndented,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7131e971c8265d46ffc07b01ad50e318,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Tracing,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Tracing$$$function_2_printSeparator( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Tracing$$$function_2_printSeparator,
        const_str_plain_printSeparator,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_53e52a12d3307f87aa518d17548a0104,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Tracing,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Tracing$$$function_3_printLine(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Tracing$$$function_3_printLine,
        const_str_plain_printLine,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0c41db8b3acbb45dc3015c011d5ec512,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Tracing,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Tracing$$$function_4_printError(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Tracing$$$function_4_printError,
        const_str_plain_printError,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fa93448d5f8f155323720e37ecd290f7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Tracing,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Tracing$$$function_5_flushStdout(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Tracing$$$function_5_flushStdout,
        const_str_plain_flushStdout,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c03e31b6931c2c8bd6ed8ab4ddb1ac27,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Tracing,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_Tracing$$$function_6_my_print(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_Tracing$$$function_6_my_print,
        const_str_plain_my_print,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ee1272a5a2d04d74e74b41c861f14108,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_Tracing,
        const_str_digest_66791d44f71ec7c510ec54050b9b3535,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_Tracing =
{
    PyModuleDef_HEAD_INIT,
    "Tracing",   /* m_name */
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

MOD_INIT_DECL( Tracing )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_Tracing );
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
    puts("Tracing: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Tracing: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("Tracing: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initTracing" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_Tracing = Py_InitModule4(
        "Tracing",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_Tracing = PyModule_Create( &mdef_Tracing );
#endif

    moduledict_Tracing = MODULE_DICT( module_Tracing );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Tracing, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_Tracing,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Tracing, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_Tracing,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_Tracing,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_Tracing, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_Tracing,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_Tracing );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_Tracing, module_Tracing );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_Tracing, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_Tracing, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_Tracing, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_Tracing, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_Tracing, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_Tracing, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_defaults_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    struct Nuitka_FrameObject *frame_ef70aea4dbd523e6b6927fd45e7ace67;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_8329435704bc33f603329a1ada9b0836;
    UPDATE_STRING_DICT0( moduledict_Tracing, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_57d7530ff98b1ff1aae87b996e9b0bb2;
    UPDATE_STRING_DICT0( moduledict_Tracing, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_Tracing, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_ef70aea4dbd523e6b6927fd45e7ace67 = MAKE_MODULE_FRAME( codeobj_ef70aea4dbd523e6b6927fd45e7ace67, module_Tracing );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_ef70aea4dbd523e6b6927fd45e7ace67 );
    assert( Py_REFCNT( frame_ef70aea4dbd523e6b6927fd45e7ace67 ) == 2 );

    // Framed code:
    frame_ef70aea4dbd523e6b6927fd45e7ace67->m_frame.f_lineno = 29;
    tmp_import_name_from_1 = PyImport_ImportModule("__future__");
    assert( !(tmp_import_name_from_1 == NULL) );
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_print_function );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_Tracing, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_4 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef70aea4dbd523e6b6927fd45e7ace67 );
#endif
    popFrameStack();

    assertFrameObject( frame_ef70aea4dbd523e6b6927fd45e7ace67 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef70aea4dbd523e6b6927fd45e7ace67 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ef70aea4dbd523e6b6927fd45e7ace67, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ef70aea4dbd523e6b6927fd45e7ace67->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ef70aea4dbd523e6b6927fd45e7ace67, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_name_name_1 = const_str_plain_sys;
    tmp_globals_name_1 = (PyObject *)moduledict_Tracing;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    assert( !(tmp_assign_source_5 == NULL) );
    UPDATE_STRING_DICT1( moduledict_Tracing, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_5 );
    tmp_assign_source_6 = MAKE_FUNCTION_Tracing$$$function_1_printIndented(  );
    UPDATE_STRING_DICT1( moduledict_Tracing, (Nuitka_StringObject *)const_str_plain_printIndented, tmp_assign_source_6 );
    tmp_defaults_1 = const_tuple_int_0_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_7 = MAKE_FUNCTION_Tracing$$$function_2_printSeparator( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_Tracing, (Nuitka_StringObject *)const_str_plain_printSeparator, tmp_assign_source_7 );
    tmp_assign_source_8 = MAKE_FUNCTION_Tracing$$$function_3_printLine(  );
    UPDATE_STRING_DICT1( moduledict_Tracing, (Nuitka_StringObject *)const_str_plain_printLine, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION_Tracing$$$function_4_printError(  );
    UPDATE_STRING_DICT1( moduledict_Tracing, (Nuitka_StringObject *)const_str_plain_printError, tmp_assign_source_9 );
    tmp_assign_source_10 = MAKE_FUNCTION_Tracing$$$function_5_flushStdout(  );
    UPDATE_STRING_DICT1( moduledict_Tracing, (Nuitka_StringObject *)const_str_plain_flushStdout, tmp_assign_source_10 );
    tmp_assign_source_11 = MAKE_FUNCTION_Tracing$$$function_6_my_print(  );
    UPDATE_STRING_DICT1( moduledict_Tracing, (Nuitka_StringObject *)const_str_plain_my_print, tmp_assign_source_11 );

    return MOD_RETURN_VALUE( module_Tracing );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
