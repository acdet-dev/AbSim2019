/* Generated code for Python source for module 'codegen.LoopCodes'
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

/* The _module_codegen$LoopCodes is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_codegen$LoopCodes;
PyDictObject *moduledict_codegen$LoopCodes;

/* The module constants used, if any. */
static PyObject *const_tuple_ad142698e277d08ee1acda9a498b0021_tuple;
extern PyObject *const_str_plain_LabelCodes;
extern PyObject *const_str_plain_allow_none;
extern PyObject *const_str_plain_old_source_ref;
extern PyObject *const_tuple_str_plain_generateStatementSequenceCode_tuple;
extern PyObject *const_str_plain_getErrorExitBoolCode;
extern PyObject *const_str_plain_generateLoopBreakCode;
extern PyObject *const_str_plain_emit;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_old_loop_break;
extern PyObject *const_tuple_str_plain_getErrorExitBoolCode_tuple;
extern PyObject *const_dict_empty;
static PyObject *const_str_digest_0a49245485e1403c0210b6da896f8510;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_ExceptionCodes;
extern PyObject *const_str_plain_break_target;
extern PyObject *const_str_plain_getLabelCode;
static PyObject *const_str_digest_7c030a05910f33383bd6c12b90caac3e;
extern PyObject *const_str_plain_setLoopBreakTarget;
static PyObject *const_str_plain_loop_end;
static PyObject *const_tuple_str_plain_loop_start_tuple;
static PyObject *const_tuple_str_plain_loop_end_tuple;
static PyObject *const_str_plain_loop_end_label;
extern PyObject *const_str_plain_getGotoCode;
static PyObject *const_str_digest_6a68524519709d2a00d892b356f58321;
extern PyObject *const_str_plain_generateLoopContinueCode;
static PyObject *const_str_plain_old_loop_continue;
extern PyObject *const_tuple_str_plain_getExceptionUnpublishedReleaseCode_tuple;
extern PyObject *const_str_plain_getExceptionUnpublishedReleaseCode;
static PyObject *const_tuple_76644d1668cf9bb4a19779f4592a0da0_tuple;
extern PyObject *const_str_plain_isStatementAborting;
extern PyObject *const_str_plain_ErrorCodes;
extern PyObject *const_str_plain_context;
extern PyObject *const_str_plain_setLoopContinueTarget;
extern PyObject *const_tuple_str_plain_getGotoCode_str_plain_getLabelCode_tuple;
extern PyObject *const_str_plain_CodeHelpers;
extern PyObject *const_str_plain_setCurrentSourceCodeReference;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_statement;
extern PyObject *const_str_plain_condition;
static PyObject *const_str_plain_loop_start;
static PyObject *const_str_plain_continue_target;
static PyObject *const_tuple_74096b855e265ec9fbc60388383a127d_tuple;
extern PyObject *const_str_plain_getLoopBreakTarget;
extern PyObject *const_str_plain_allocateLabel;
extern PyObject *const_str_plain_statement_sequence;
extern PyObject *const_str_plain_getLoopBody;
extern PyObject *const_str_plain_generateLoopCode;
extern PyObject *const_str_plain_getLoopContinueTarget;
extern PyObject *const_str_plain_getSourceReference;
static PyObject *const_str_digest_c927f85a9ab0190a095979df84cbe928;
static PyObject *const_str_digest_4deca512193568b7c9a461fcbc0d0dd1;
static PyObject *const_str_plain_loop_start_label;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_generateStatementSequenceCode;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_ad142698e277d08ee1acda9a498b0021_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_ad142698e277d08ee1acda9a498b0021_tuple, 0, const_str_plain_statement ); Py_INCREF( const_str_plain_statement );
    PyTuple_SET_ITEM( const_tuple_ad142698e277d08ee1acda9a498b0021_tuple, 1, const_str_plain_emit ); Py_INCREF( const_str_plain_emit );
    PyTuple_SET_ITEM( const_tuple_ad142698e277d08ee1acda9a498b0021_tuple, 2, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    const_str_plain_continue_target = UNSTREAM_STRING( &constant_bin[ 302400 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_ad142698e277d08ee1acda9a498b0021_tuple, 3, const_str_plain_continue_target ); Py_INCREF( const_str_plain_continue_target );
    const_str_plain_old_loop_break = UNSTREAM_STRING( &constant_bin[ 302415 ], 14, 1 );
    const_str_digest_0a49245485e1403c0210b6da896f8510 = UNSTREAM_STRING( &constant_bin[ 302429 ], 26, 0 );
    const_str_digest_7c030a05910f33383bd6c12b90caac3e = UNSTREAM_STRING( &constant_bin[ 302455 ], 102, 0 );
    const_str_plain_loop_end = UNSTREAM_STRING( &constant_bin[ 302557 ], 8, 1 );
    const_tuple_str_plain_loop_start_tuple = PyTuple_New( 1 );
    const_str_plain_loop_start = UNSTREAM_STRING( &constant_bin[ 302565 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_loop_start_tuple, 0, const_str_plain_loop_start ); Py_INCREF( const_str_plain_loop_start );
    const_tuple_str_plain_loop_end_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_loop_end_tuple, 0, const_str_plain_loop_end ); Py_INCREF( const_str_plain_loop_end );
    const_str_plain_loop_end_label = UNSTREAM_STRING( &constant_bin[ 302575 ], 14, 1 );
    const_str_digest_6a68524519709d2a00d892b356f58321 = UNSTREAM_STRING( &constant_bin[ 302589 ], 344, 0 );
    const_str_plain_old_loop_continue = UNSTREAM_STRING( &constant_bin[ 302933 ], 17, 1 );
    const_tuple_76644d1668cf9bb4a19779f4592a0da0_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_76644d1668cf9bb4a19779f4592a0da0_tuple, 0, const_str_plain_statement ); Py_INCREF( const_str_plain_statement );
    PyTuple_SET_ITEM( const_tuple_76644d1668cf9bb4a19779f4592a0da0_tuple, 1, const_str_plain_emit ); Py_INCREF( const_str_plain_emit );
    PyTuple_SET_ITEM( const_tuple_76644d1668cf9bb4a19779f4592a0da0_tuple, 2, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    const_str_plain_loop_start_label = UNSTREAM_STRING( &constant_bin[ 302950 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_76644d1668cf9bb4a19779f4592a0da0_tuple, 3, const_str_plain_loop_start_label ); Py_INCREF( const_str_plain_loop_start_label );
    PyTuple_SET_ITEM( const_tuple_76644d1668cf9bb4a19779f4592a0da0_tuple, 4, const_str_plain_loop_end_label ); Py_INCREF( const_str_plain_loop_end_label );
    PyTuple_SET_ITEM( const_tuple_76644d1668cf9bb4a19779f4592a0da0_tuple, 5, const_str_plain_old_loop_break ); Py_INCREF( const_str_plain_old_loop_break );
    PyTuple_SET_ITEM( const_tuple_76644d1668cf9bb4a19779f4592a0da0_tuple, 6, const_str_plain_old_loop_continue ); Py_INCREF( const_str_plain_old_loop_continue );
    PyTuple_SET_ITEM( const_tuple_76644d1668cf9bb4a19779f4592a0da0_tuple, 7, const_str_plain_old_source_ref ); Py_INCREF( const_str_plain_old_source_ref );
    const_tuple_74096b855e265ec9fbc60388383a127d_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_74096b855e265ec9fbc60388383a127d_tuple, 0, const_str_plain_statement ); Py_INCREF( const_str_plain_statement );
    PyTuple_SET_ITEM( const_tuple_74096b855e265ec9fbc60388383a127d_tuple, 1, const_str_plain_emit ); Py_INCREF( const_str_plain_emit );
    PyTuple_SET_ITEM( const_tuple_74096b855e265ec9fbc60388383a127d_tuple, 2, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    PyTuple_SET_ITEM( const_tuple_74096b855e265ec9fbc60388383a127d_tuple, 3, const_str_plain_break_target ); Py_INCREF( const_str_plain_break_target );
    const_str_digest_c927f85a9ab0190a095979df84cbe928 = UNSTREAM_STRING( &constant_bin[ 302437 ], 17, 0 );
    const_str_digest_4deca512193568b7c9a461fcbc0d0dd1 = UNSTREAM_STRING( &constant_bin[ 302966 ], 29, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_codegen$LoopCodes( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_09471a143175354e3089e74307f07b37;
static PyCodeObject *codeobj_334d198b9e7bdbe67c6f62c7bd590ab9;
static PyCodeObject *codeobj_5472efbd340ad9d5c1cc435bdc678217;
static PyCodeObject *codeobj_c898ac03c9f699e7517b47f58f0e5f91;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_7c030a05910f33383bd6c12b90caac3e;
    codeobj_09471a143175354e3089e74307f07b37 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_0a49245485e1403c0210b6da896f8510, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_334d198b9e7bdbe67c6f62c7bd590ab9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generateLoopBreakCode, 34, const_tuple_74096b855e265ec9fbc60388383a127d_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5472efbd340ad9d5c1cc435bdc678217 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generateLoopCode, 54, const_tuple_76644d1668cf9bb4a19779f4592a0da0_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c898ac03c9f699e7517b47f58f0e5f91 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generateLoopContinueCode, 44, const_tuple_ad142698e277d08ee1acda9a498b0021_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_codegen$LoopCodes$$$function_1_generateLoopBreakCode(  );


static PyObject *MAKE_FUNCTION_codegen$LoopCodes$$$function_2_generateLoopContinueCode(  );


static PyObject *MAKE_FUNCTION_codegen$LoopCodes$$$function_3_generateLoopCode(  );


// The module function definitions.
static PyObject *impl_codegen$LoopCodes$$$function_1_generateLoopBreakCode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_statement = python_pars[ 0 ];
    PyObject *par_emit = python_pars[ 1 ];
    PyObject *par_context = python_pars[ 2 ];
    PyObject *var_break_target = NULL;
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
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_334d198b9e7bdbe67c6f62c7bd590ab9 = NULL;

    struct Nuitka_FrameObject *frame_334d198b9e7bdbe67c6f62c7bd590ab9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_334d198b9e7bdbe67c6f62c7bd590ab9, codeobj_334d198b9e7bdbe67c6f62c7bd590ab9, module_codegen$LoopCodes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_334d198b9e7bdbe67c6f62c7bd590ab9 = cache_frame_334d198b9e7bdbe67c6f62c7bd590ab9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_334d198b9e7bdbe67c6f62c7bd590ab9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_334d198b9e7bdbe67c6f62c7bd590ab9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_codegen$LoopCodes, (Nuitka_StringObject *)const_str_plain_getExceptionUnpublishedReleaseCode );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getExceptionUnpublishedReleaseCode );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getExceptionUnpublishedReleaseCode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_emit;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_context;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_334d198b9e7bdbe67c6f62c7bd590ab9->m_frame.f_lineno = 38;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_1 = par_context;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 40;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_334d198b9e7bdbe67c6f62c7bd590ab9->m_frame.f_lineno = 40;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getLoopBreakTarget );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_break_target == NULL );
    var_break_target = tmp_assign_source_1;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_codegen$LoopCodes, (Nuitka_StringObject *)const_str_plain_getGotoCode );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getGotoCode );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getGotoCode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_break_target;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = par_emit;

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "emit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_334d198b9e7bdbe67c6f62c7bd590ab9->m_frame.f_lineno = 41;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_334d198b9e7bdbe67c6f62c7bd590ab9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_334d198b9e7bdbe67c6f62c7bd590ab9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_334d198b9e7bdbe67c6f62c7bd590ab9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_334d198b9e7bdbe67c6f62c7bd590ab9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_334d198b9e7bdbe67c6f62c7bd590ab9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_334d198b9e7bdbe67c6f62c7bd590ab9,
        type_description_1,
        par_statement,
        par_emit,
        par_context,
        var_break_target
    );


    // Release cached frame.
    if ( frame_334d198b9e7bdbe67c6f62c7bd590ab9 == cache_frame_334d198b9e7bdbe67c6f62c7bd590ab9 )
    {
        Py_DECREF( frame_334d198b9e7bdbe67c6f62c7bd590ab9 );
    }
    cache_frame_334d198b9e7bdbe67c6f62c7bd590ab9 = NULL;

    assertFrameObject( frame_334d198b9e7bdbe67c6f62c7bd590ab9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codegen$LoopCodes$$$function_1_generateLoopBreakCode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_statement );
    par_statement = NULL;

    Py_XDECREF( par_emit );
    par_emit = NULL;

    Py_XDECREF( par_context );
    par_context = NULL;

    Py_XDECREF( var_break_target );
    var_break_target = NULL;

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

    Py_XDECREF( var_break_target );
    var_break_target = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( codegen$LoopCodes$$$function_1_generateLoopBreakCode );
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


static PyObject *impl_codegen$LoopCodes$$$function_2_generateLoopContinueCode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_statement = python_pars[ 0 ];
    PyObject *par_emit = python_pars[ 1 ];
    PyObject *par_context = python_pars[ 2 ];
    PyObject *var_continue_target = NULL;
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
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_c898ac03c9f699e7517b47f58f0e5f91 = NULL;

    struct Nuitka_FrameObject *frame_c898ac03c9f699e7517b47f58f0e5f91;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c898ac03c9f699e7517b47f58f0e5f91, codeobj_c898ac03c9f699e7517b47f58f0e5f91, module_codegen$LoopCodes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c898ac03c9f699e7517b47f58f0e5f91 = cache_frame_c898ac03c9f699e7517b47f58f0e5f91;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c898ac03c9f699e7517b47f58f0e5f91 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c898ac03c9f699e7517b47f58f0e5f91 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_codegen$LoopCodes, (Nuitka_StringObject *)const_str_plain_getExceptionUnpublishedReleaseCode );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getExceptionUnpublishedReleaseCode );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getExceptionUnpublishedReleaseCode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_emit;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_context;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_c898ac03c9f699e7517b47f58f0e5f91->m_frame.f_lineno = 48;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_instance_1 = par_context;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_c898ac03c9f699e7517b47f58f0e5f91->m_frame.f_lineno = 50;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getLoopContinueTarget );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_continue_target == NULL );
    var_continue_target = tmp_assign_source_1;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_codegen$LoopCodes, (Nuitka_StringObject *)const_str_plain_getGotoCode );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getGotoCode );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getGotoCode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_continue_target;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = par_emit;

    if ( tmp_args_element_name_4 == NULL )
    {

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

    frame_c898ac03c9f699e7517b47f58f0e5f91->m_frame.f_lineno = 51;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c898ac03c9f699e7517b47f58f0e5f91 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c898ac03c9f699e7517b47f58f0e5f91 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c898ac03c9f699e7517b47f58f0e5f91, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c898ac03c9f699e7517b47f58f0e5f91->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c898ac03c9f699e7517b47f58f0e5f91, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c898ac03c9f699e7517b47f58f0e5f91,
        type_description_1,
        par_statement,
        par_emit,
        par_context,
        var_continue_target
    );


    // Release cached frame.
    if ( frame_c898ac03c9f699e7517b47f58f0e5f91 == cache_frame_c898ac03c9f699e7517b47f58f0e5f91 )
    {
        Py_DECREF( frame_c898ac03c9f699e7517b47f58f0e5f91 );
    }
    cache_frame_c898ac03c9f699e7517b47f58f0e5f91 = NULL;

    assertFrameObject( frame_c898ac03c9f699e7517b47f58f0e5f91 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codegen$LoopCodes$$$function_2_generateLoopContinueCode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_statement );
    par_statement = NULL;

    Py_XDECREF( par_emit );
    par_emit = NULL;

    Py_XDECREF( par_context );
    par_context = NULL;

    Py_XDECREF( var_continue_target );
    var_continue_target = NULL;

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

    Py_XDECREF( var_continue_target );
    var_continue_target = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( codegen$LoopCodes$$$function_2_generateLoopContinueCode );
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


static PyObject *impl_codegen$LoopCodes$$$function_3_generateLoopCode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_statement = python_pars[ 0 ];
    PyObject *par_emit = python_pars[ 1 ];
    PyObject *par_context = python_pars[ 2 ];
    PyObject *var_loop_start_label = NULL;
    PyObject *var_loop_end_label = NULL;
    PyObject *var_old_loop_break = NULL;
    PyObject *var_old_loop_continue = NULL;
    PyObject *var_old_source_ref = NULL;
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
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
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
    bool tmp_isnot_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_5472efbd340ad9d5c1cc435bdc678217 = NULL;

    struct Nuitka_FrameObject *frame_5472efbd340ad9d5c1cc435bdc678217;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5472efbd340ad9d5c1cc435bdc678217, codeobj_5472efbd340ad9d5c1cc435bdc678217, module_codegen$LoopCodes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5472efbd340ad9d5c1cc435bdc678217 = cache_frame_5472efbd340ad9d5c1cc435bdc678217;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5472efbd340ad9d5c1cc435bdc678217 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5472efbd340ad9d5c1cc435bdc678217 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_context;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_5472efbd340ad9d5c1cc435bdc678217->m_frame.f_lineno = 55;
    tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_allocateLabel, &PyTuple_GET_ITEM( const_tuple_str_plain_loop_start_tuple, 0 ) );

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_loop_start_label == NULL );
    var_loop_start_label = tmp_assign_source_1;

    tmp_called_instance_2 = par_statement;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "statement" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 57;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_5472efbd340ad9d5c1cc435bdc678217->m_frame.f_lineno = 57;
    tmp_cond_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_isStatementAborting );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 57;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_called_instance_3 = par_context;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_5472efbd340ad9d5c1cc435bdc678217->m_frame.f_lineno = 58;
    tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_allocateLabel, &PyTuple_GET_ITEM( const_tuple_str_plain_loop_end_tuple, 0 ) );

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_loop_end_label == NULL );
    var_loop_end_label = tmp_assign_source_2;

    goto branch_end_1;
    branch_no_1:;
    tmp_assign_source_3 = Py_None;
    assert( var_loop_end_label == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_loop_end_label = tmp_assign_source_3;

    branch_end_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_codegen$LoopCodes, (Nuitka_StringObject *)const_str_plain_getLabelCode );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getLabelCode );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getLabelCode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = var_loop_start_label;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "loop_start_label" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_emit;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "emit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 62;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_5472efbd340ad9d5c1cc435bdc678217->m_frame.f_lineno = 62;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_1 = par_context;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_setLoopBreakTarget );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_loop_end_label;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "loop_end_label" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_5472efbd340ad9d5c1cc435bdc678217->m_frame.f_lineno = 64;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_old_loop_break == NULL );
    var_old_loop_break = tmp_assign_source_4;

    tmp_source_name_2 = par_context;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_setLoopContinueTarget );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_loop_start_label;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "loop_start_label" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_5472efbd340ad9d5c1cc435bdc678217->m_frame.f_lineno = 65;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_old_loop_continue == NULL );
    var_old_loop_continue = tmp_assign_source_5;

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_codegen$LoopCodes, (Nuitka_StringObject *)const_str_plain_generateStatementSequenceCode );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_generateStatementSequenceCode );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "generateStatementSequenceCode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_statement_sequence;
    tmp_called_instance_4 = par_statement;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "statement" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_5472efbd340ad9d5c1cc435bdc678217->m_frame.f_lineno = 68;
    tmp_dict_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_getLoopBody );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 4 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_allow_none;
    tmp_dict_value_2 = Py_True;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_emit;
    tmp_dict_value_3 = par_emit;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "emit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_context;
    tmp_dict_value_4 = par_context;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    frame_5472efbd340ad9d5c1cc435bdc678217->m_frame.f_lineno = 67;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = par_context;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_setLoopBreakTarget );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = var_old_loop_break;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "old_loop_break" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_5472efbd340ad9d5c1cc435bdc678217->m_frame.f_lineno = 74;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_4 = par_context;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_setLoopContinueTarget );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = var_old_loop_continue;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "old_loop_continue" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_5472efbd340ad9d5c1cc435bdc678217->m_frame.f_lineno = 75;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_5 = par_context;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_setCurrentSourceCodeReference );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_instance_5 = par_statement;

    if ( tmp_called_instance_5 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "statement" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_5472efbd340ad9d5c1cc435bdc678217->m_frame.f_lineno = 78;
    tmp_args_element_name_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_getSourceReference );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 78;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    frame_5472efbd340ad9d5c1cc435bdc678217->m_frame.f_lineno = 78;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_old_source_ref == NULL );
    var_old_source_ref = tmp_assign_source_6;

    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_codegen$LoopCodes, (Nuitka_StringObject *)const_str_plain_getErrorExitBoolCode );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getErrorExitBoolCode );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getErrorExitBoolCode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_5 = const_str_plain_condition;
    tmp_dict_value_5 = const_str_digest_4deca512193568b7c9a461fcbc0d0dd1;
    tmp_kw_name_2 = _PyDict_NewPresized( 3 );
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
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

        exception_lineno = 82;
        type_description_1 = "oooooooo";
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

        exception_lineno = 83;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    frame_5472efbd340ad9d5c1cc435bdc678217->m_frame.f_lineno = 80;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_8, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_6 = par_context;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_setCurrentSourceCodeReference );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = var_old_source_ref;

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "old_source_ref" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_5472efbd340ad9d5c1cc435bdc678217->m_frame.f_lineno = 86;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_codegen$LoopCodes, (Nuitka_StringObject *)const_str_plain_getGotoCode );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getGotoCode );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getGotoCode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = var_loop_start_label;

    if ( tmp_args_element_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "loop_start_label" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = par_emit;

    if ( tmp_args_element_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "emit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_5472efbd340ad9d5c1cc435bdc678217->m_frame.f_lineno = 88;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_compare_left_1 = var_loop_end_label;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "loop_end_label" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_codegen$LoopCodes, (Nuitka_StringObject *)const_str_plain_getLabelCode );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getLabelCode );
    }

    if ( tmp_called_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getLabelCode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = var_loop_end_label;

    if ( tmp_args_element_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "loop_end_label" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = par_emit;

    if ( tmp_args_element_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "emit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_5472efbd340ad9d5c1cc435bdc678217->m_frame.f_lineno = 91;
    {
        PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5472efbd340ad9d5c1cc435bdc678217 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5472efbd340ad9d5c1cc435bdc678217 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5472efbd340ad9d5c1cc435bdc678217, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5472efbd340ad9d5c1cc435bdc678217->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5472efbd340ad9d5c1cc435bdc678217, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5472efbd340ad9d5c1cc435bdc678217,
        type_description_1,
        par_statement,
        par_emit,
        par_context,
        var_loop_start_label,
        var_loop_end_label,
        var_old_loop_break,
        var_old_loop_continue,
        var_old_source_ref
    );


    // Release cached frame.
    if ( frame_5472efbd340ad9d5c1cc435bdc678217 == cache_frame_5472efbd340ad9d5c1cc435bdc678217 )
    {
        Py_DECREF( frame_5472efbd340ad9d5c1cc435bdc678217 );
    }
    cache_frame_5472efbd340ad9d5c1cc435bdc678217 = NULL;

    assertFrameObject( frame_5472efbd340ad9d5c1cc435bdc678217 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codegen$LoopCodes$$$function_3_generateLoopCode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_statement );
    par_statement = NULL;

    Py_XDECREF( par_emit );
    par_emit = NULL;

    Py_XDECREF( par_context );
    par_context = NULL;

    Py_XDECREF( var_loop_start_label );
    var_loop_start_label = NULL;

    Py_XDECREF( var_loop_end_label );
    var_loop_end_label = NULL;

    Py_XDECREF( var_old_loop_break );
    var_old_loop_break = NULL;

    Py_XDECREF( var_old_loop_continue );
    var_old_loop_continue = NULL;

    Py_XDECREF( var_old_source_ref );
    var_old_source_ref = NULL;

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

    Py_XDECREF( var_loop_start_label );
    var_loop_start_label = NULL;

    Py_XDECREF( var_loop_end_label );
    var_loop_end_label = NULL;

    Py_XDECREF( var_old_loop_break );
    var_old_loop_break = NULL;

    Py_XDECREF( var_old_loop_continue );
    var_old_loop_continue = NULL;

    Py_XDECREF( var_old_source_ref );
    var_old_source_ref = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( codegen$LoopCodes$$$function_3_generateLoopCode );
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



static PyObject *MAKE_FUNCTION_codegen$LoopCodes$$$function_1_generateLoopBreakCode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codegen$LoopCodes$$$function_1_generateLoopBreakCode,
        const_str_plain_generateLoopBreakCode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_334d198b9e7bdbe67c6f62c7bd590ab9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_codegen$LoopCodes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_codegen$LoopCodes$$$function_2_generateLoopContinueCode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codegen$LoopCodes$$$function_2_generateLoopContinueCode,
        const_str_plain_generateLoopContinueCode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c898ac03c9f699e7517b47f58f0e5f91,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_codegen$LoopCodes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_codegen$LoopCodes$$$function_3_generateLoopCode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codegen$LoopCodes$$$function_3_generateLoopCode,
        const_str_plain_generateLoopCode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5472efbd340ad9d5c1cc435bdc678217,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_codegen$LoopCodes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_codegen$LoopCodes =
{
    PyModuleDef_HEAD_INIT,
    "codegen.LoopCodes",   /* m_name */
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

MOD_INIT_DECL( codegen$LoopCodes )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_codegen$LoopCodes );
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
    puts("codegen.LoopCodes: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("codegen.LoopCodes: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("codegen.LoopCodes: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcodegen$LoopCodes" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_codegen$LoopCodes = Py_InitModule4(
        "codegen.LoopCodes",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_codegen$LoopCodes = PyModule_Create( &mdef_codegen$LoopCodes );
#endif

    moduledict_codegen$LoopCodes = MODULE_DICT( module_codegen$LoopCodes );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$LoopCodes, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_codegen$LoopCodes,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$LoopCodes, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_codegen$LoopCodes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_codegen$LoopCodes,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$LoopCodes, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_codegen$LoopCodes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_codegen$LoopCodes );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_c927f85a9ab0190a095979df84cbe928, module_codegen$LoopCodes );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_codegen$LoopCodes, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_codegen$LoopCodes, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_codegen$LoopCodes, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_codegen$LoopCodes, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_codegen$LoopCodes, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_codegen$LoopCodes, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
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
    PyObject *tmp_assign_source_12;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    struct Nuitka_FrameObject *frame_09471a143175354e3089e74307f07b37;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_6a68524519709d2a00d892b356f58321;
    UPDATE_STRING_DICT0( moduledict_codegen$LoopCodes, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_7c030a05910f33383bd6c12b90caac3e;
    UPDATE_STRING_DICT0( moduledict_codegen$LoopCodes, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_codegen$LoopCodes, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_09471a143175354e3089e74307f07b37 = MAKE_MODULE_FRAME( codeobj_09471a143175354e3089e74307f07b37, module_codegen$LoopCodes );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_09471a143175354e3089e74307f07b37 );
    assert( Py_REFCNT( frame_09471a143175354e3089e74307f07b37 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_CodeHelpers;
    tmp_globals_name_1 = (PyObject *)moduledict_codegen$LoopCodes;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_generateStatementSequenceCode_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_09471a143175354e3089e74307f07b37->m_frame.f_lineno = 28;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_generateStatementSequenceCode,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_generateStatementSequenceCode );
    }

    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$LoopCodes, (Nuitka_StringObject *)const_str_plain_generateStatementSequenceCode, tmp_assign_source_4 );
    tmp_name_name_2 = const_str_plain_ErrorCodes;
    tmp_globals_name_2 = (PyObject *)moduledict_codegen$LoopCodes;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_getErrorExitBoolCode_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_09471a143175354e3089e74307f07b37->m_frame.f_lineno = 29;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_2 ) )
    {
       tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_2,
            (PyObject *)MODULE_DICT(tmp_import_name_from_2),
            const_str_plain_getErrorExitBoolCode,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_getErrorExitBoolCode );
    }

    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$LoopCodes, (Nuitka_StringObject *)const_str_plain_getErrorExitBoolCode, tmp_assign_source_5 );
    tmp_name_name_3 = const_str_plain_ExceptionCodes;
    tmp_globals_name_3 = (PyObject *)moduledict_codegen$LoopCodes;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_getExceptionUnpublishedReleaseCode_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_09471a143175354e3089e74307f07b37->m_frame.f_lineno = 30;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_3 ) )
    {
       tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_3,
            (PyObject *)MODULE_DICT(tmp_import_name_from_3),
            const_str_plain_getExceptionUnpublishedReleaseCode,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_getExceptionUnpublishedReleaseCode );
    }

    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$LoopCodes, (Nuitka_StringObject *)const_str_plain_getExceptionUnpublishedReleaseCode, tmp_assign_source_6 );
    tmp_name_name_4 = const_str_plain_LabelCodes;
    tmp_globals_name_4 = (PyObject *)moduledict_codegen$LoopCodes;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_getGotoCode_str_plain_getLabelCode_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_09471a143175354e3089e74307f07b37->m_frame.f_lineno = 31;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_7;

    // Tried code:
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    if ( PyModule_Check( tmp_import_name_from_4 ) )
    {
       tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_4,
            (PyObject *)MODULE_DICT(tmp_import_name_from_4),
            const_str_plain_getGotoCode,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_getGotoCode );
    }

    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$LoopCodes, (Nuitka_StringObject *)const_str_plain_getGotoCode, tmp_assign_source_8 );
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    if ( PyModule_Check( tmp_import_name_from_5 ) )
    {
       tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_5,
            (PyObject *)MODULE_DICT(tmp_import_name_from_5),
            const_str_plain_getLabelCode,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_getLabelCode );
    }

    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$LoopCodes, (Nuitka_StringObject *)const_str_plain_getLabelCode, tmp_assign_source_9 );
    goto try_end_1;
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_09471a143175354e3089e74307f07b37 );
#endif
    popFrameStack();

    assertFrameObject( frame_09471a143175354e3089e74307f07b37 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_09471a143175354e3089e74307f07b37 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_09471a143175354e3089e74307f07b37, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_09471a143175354e3089e74307f07b37->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_09471a143175354e3089e74307f07b37, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    tmp_assign_source_10 = MAKE_FUNCTION_codegen$LoopCodes$$$function_1_generateLoopBreakCode(  );
    UPDATE_STRING_DICT1( moduledict_codegen$LoopCodes, (Nuitka_StringObject *)const_str_plain_generateLoopBreakCode, tmp_assign_source_10 );
    tmp_assign_source_11 = MAKE_FUNCTION_codegen$LoopCodes$$$function_2_generateLoopContinueCode(  );
    UPDATE_STRING_DICT1( moduledict_codegen$LoopCodes, (Nuitka_StringObject *)const_str_plain_generateLoopContinueCode, tmp_assign_source_11 );
    tmp_assign_source_12 = MAKE_FUNCTION_codegen$LoopCodes$$$function_3_generateLoopCode(  );
    UPDATE_STRING_DICT1( moduledict_codegen$LoopCodes, (Nuitka_StringObject *)const_str_plain_generateLoopCode, tmp_assign_source_12 );

    return MOD_RETURN_VALUE( module_codegen$LoopCodes );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
