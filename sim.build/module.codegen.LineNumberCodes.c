/* Generated code for Python source for module 'codegen.LineNumberCodes'
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

/* The _module_codegen$LineNumberCodes is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_codegen$LineNumberCodes;
PyDictObject *moduledict_codegen$LineNumberCodes;

/* The module constants used, if any. */
static PyObject *const_str_digest_7412231d020590e69e38e81c2b68b669;
static PyObject *const_str_plain_getLineNumberCode;
extern PyObject *const_str_plain_to_name;
extern PyObject *const_str_plain_source_ref;
static PyObject *const_tuple_str_plain_context_str_plain_lineno_value_tuple;
extern PyObject *const_str_plain_emitLineNumberUpdateCode;
extern PyObject *const_str_plain_getLineNumber;
extern PyObject *const_str_plain_emit;
extern PyObject *const_dict_empty;
static PyObject *const_str_digest_0b17bfdbdfb4bd22e643650650ff5ce9;
static PyObject *const_str_digest_81df6988614c3c66d42cc9eedccd6040;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_getCurrentLineNumberCode;
extern PyObject *const_str_plain_frame_handle;
static PyObject *const_tuple_7d00d829c7dc9f01a2a82e7e86831a71_tuple;
static PyObject *const_str_digest_799b0d03cd6323440d119fa0fb38053c;
extern PyObject *const_str_plain_code;
static PyObject *const_str_digest_d0ab8d1135bc05b992eb47a1a2ba7b63;
static PyObject *const_tuple_str_plain_emit_str_plain_context_str_plain_code_tuple;
static PyObject *const_tuple_str_plain_emit_str_plain_context_str_plain_update_code_tuple;
extern PyObject *const_str_plain_context;
extern PyObject *const_str_plain_getCurrentSourceCodeReference;
extern PyObject *const_str_plain_isInternal;
extern PyObject *const_str_plain_getFrameHandle;
extern PyObject *const_str_plain_emitErrorLineNumberUpdateCode;
extern PyObject *const_tuple_str_plain_to_name_str_plain_emit_str_plain_context_tuple;
static PyObject *const_str_digest_b9db29b495345c2cb0caea7648c8d301;
extern PyObject *const_str_plain_update_code;
static PyObject *const_str_plain_getLineNumberUpdateCode;
extern PyObject *const_str_empty;
static PyObject *const_str_plain_lineno_value;
static PyObject *const_tuple_abb02311847279e5d9c08069dedad896_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_getSetLineNumberCodeRaw;
extern PyObject *const_str_plain_getErrorLineNumberUpdateCode;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_7412231d020590e69e38e81c2b68b669 = UNSTREAM_STRING( &constant_bin[ 300375 ], 51, 0 );
    const_str_plain_getLineNumberCode = UNSTREAM_STRING( &constant_bin[ 300426 ], 17, 1 );
    const_tuple_str_plain_context_str_plain_lineno_value_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_context_str_plain_lineno_value_tuple, 0, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    const_str_plain_lineno_value = UNSTREAM_STRING( &constant_bin[ 300443 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_context_str_plain_lineno_value_tuple, 1, const_str_plain_lineno_value ); Py_INCREF( const_str_plain_lineno_value );
    const_str_digest_0b17bfdbdfb4bd22e643650650ff5ce9 = UNSTREAM_STRING( &constant_bin[ 300455 ], 108, 0 );
    const_str_digest_81df6988614c3c66d42cc9eedccd6040 = UNSTREAM_STRING( &constant_bin[ 300563 ], 23, 0 );
    const_str_plain_getCurrentLineNumberCode = UNSTREAM_STRING( &constant_bin[ 300586 ], 24, 1 );
    const_tuple_7d00d829c7dc9f01a2a82e7e86831a71_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_7d00d829c7dc9f01a2a82e7e86831a71_tuple, 0, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    PyTuple_SET_ITEM( const_tuple_7d00d829c7dc9f01a2a82e7e86831a71_tuple, 1, const_str_plain_lineno_value ); Py_INCREF( const_str_plain_lineno_value );
    PyTuple_SET_ITEM( const_tuple_7d00d829c7dc9f01a2a82e7e86831a71_tuple, 2, const_str_plain_frame_handle ); Py_INCREF( const_str_plain_frame_handle );
    const_str_digest_799b0d03cd6323440d119fa0fb38053c = UNSTREAM_STRING( &constant_bin[ 300610 ], 22, 0 );
    const_str_digest_d0ab8d1135bc05b992eb47a1a2ba7b63 = UNSTREAM_STRING( &constant_bin[ 300632 ], 26, 0 );
    const_tuple_str_plain_emit_str_plain_context_str_plain_code_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_emit_str_plain_context_str_plain_code_tuple, 0, const_str_plain_emit ); Py_INCREF( const_str_plain_emit );
    PyTuple_SET_ITEM( const_tuple_str_plain_emit_str_plain_context_str_plain_code_tuple, 1, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    PyTuple_SET_ITEM( const_tuple_str_plain_emit_str_plain_context_str_plain_code_tuple, 2, const_str_plain_code ); Py_INCREF( const_str_plain_code );
    const_tuple_str_plain_emit_str_plain_context_str_plain_update_code_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_emit_str_plain_context_str_plain_update_code_tuple, 0, const_str_plain_emit ); Py_INCREF( const_str_plain_emit );
    PyTuple_SET_ITEM( const_tuple_str_plain_emit_str_plain_context_str_plain_update_code_tuple, 1, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    PyTuple_SET_ITEM( const_tuple_str_plain_emit_str_plain_context_str_plain_update_code_tuple, 2, const_str_plain_update_code ); Py_INCREF( const_str_plain_update_code );
    const_str_digest_b9db29b495345c2cb0caea7648c8d301 = UNSTREAM_STRING( &constant_bin[ 300658 ], 26, 0 );
    const_str_plain_getLineNumberUpdateCode = UNSTREAM_STRING( &constant_bin[ 300684 ], 23, 1 );
    const_tuple_abb02311847279e5d9c08069dedad896_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_abb02311847279e5d9c08069dedad896_tuple, 0, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    PyTuple_SET_ITEM( const_tuple_abb02311847279e5d9c08069dedad896_tuple, 1, const_str_plain_frame_handle ); Py_INCREF( const_str_plain_frame_handle );
    PyTuple_SET_ITEM( const_tuple_abb02311847279e5d9c08069dedad896_tuple, 2, const_str_plain_source_ref ); Py_INCREF( const_str_plain_source_ref );
    const_str_plain_getSetLineNumberCodeRaw = UNSTREAM_STRING( &constant_bin[ 300707 ], 23, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_codegen$LineNumberCodes( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_e05ddd0839f563d3b8748d8cf8dbe5ba;
static PyCodeObject *codeobj_6757f4b0c6cd8712b05e49c75549184f;
static PyCodeObject *codeobj_90455b84f5922a378c44b07093018413;
static PyCodeObject *codeobj_992093c2a70d02151c23acedd034fe26;
static PyCodeObject *codeobj_0dceba2bc117176a4140f106c64d2c93;
static PyCodeObject *codeobj_901b049f6ec8e5dd78681feccc567394;
static PyCodeObject *codeobj_b4982e794c99a4295e995f0fa20f6dee;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_0b17bfdbdfb4bd22e643650650ff5ce9;
    codeobj_e05ddd0839f563d3b8748d8cf8dbe5ba = MAKE_CODEOBJ( module_filename_obj, const_str_plain_emitErrorLineNumberUpdateCode, 60, const_tuple_str_plain_emit_str_plain_context_str_plain_update_code_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6757f4b0c6cd8712b05e49c75549184f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_emitLineNumberUpdateCode, 67, const_tuple_str_plain_emit_str_plain_context_str_plain_code_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_90455b84f5922a378c44b07093018413 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getCurrentLineNumberCode, 22, const_tuple_abb02311847279e5d9c08069dedad896_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_992093c2a70d02151c23acedd034fe26 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getErrorLineNumberUpdateCode, 49, const_tuple_str_plain_context_str_plain_lineno_value_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0dceba2bc117176a4140f106c64d2c93 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getLineNumberCode, 85, const_tuple_str_plain_to_name_str_plain_emit_str_plain_context_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_901b049f6ec8e5dd78681feccc567394 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getLineNumberUpdateCode, 35, const_tuple_7d00d829c7dc9f01a2a82e7e86831a71_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b4982e794c99a4295e995f0fa20f6dee = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getSetLineNumberCodeRaw, 74, const_tuple_str_plain_to_name_str_plain_emit_str_plain_context_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_codegen$LineNumberCodes$$$function_1_getCurrentLineNumberCode(  );


static PyObject *MAKE_FUNCTION_codegen$LineNumberCodes$$$function_2_getLineNumberUpdateCode(  );


static PyObject *MAKE_FUNCTION_codegen$LineNumberCodes$$$function_3_getErrorLineNumberUpdateCode(  );


static PyObject *MAKE_FUNCTION_codegen$LineNumberCodes$$$function_4_emitErrorLineNumberUpdateCode(  );


static PyObject *MAKE_FUNCTION_codegen$LineNumberCodes$$$function_5_emitLineNumberUpdateCode(  );


static PyObject *MAKE_FUNCTION_codegen$LineNumberCodes$$$function_6_getSetLineNumberCodeRaw(  );


static PyObject *MAKE_FUNCTION_codegen$LineNumberCodes$$$function_7_getLineNumberCode(  );


// The module function definitions.
static PyObject *impl_codegen$LineNumberCodes$$$function_1_getCurrentLineNumberCode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_context = python_pars[ 0 ];
    PyObject *var_frame_handle = NULL;
    PyObject *var_source_ref = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    bool tmp_is_1;
    PyObject *tmp_return_value;
    PyObject *tmp_unicode_arg_1;
    static struct Nuitka_FrameObject *cache_frame_90455b84f5922a378c44b07093018413 = NULL;

    struct Nuitka_FrameObject *frame_90455b84f5922a378c44b07093018413;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_90455b84f5922a378c44b07093018413, codeobj_90455b84f5922a378c44b07093018413, module_codegen$LineNumberCodes, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_90455b84f5922a378c44b07093018413 = cache_frame_90455b84f5922a378c44b07093018413;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_90455b84f5922a378c44b07093018413 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_90455b84f5922a378c44b07093018413 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_context;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_90455b84f5922a378c44b07093018413->m_frame.f_lineno = 23;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getFrameHandle );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_frame_handle == NULL );
    var_frame_handle = tmp_assign_source_1;

    tmp_compare_left_1 = var_frame_handle;

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
    tmp_return_value = const_str_empty;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_called_instance_2 = par_context;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 28;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_90455b84f5922a378c44b07093018413->m_frame.f_lineno = 28;
    tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_getCurrentSourceCodeReference );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_source_ref == NULL );
    var_source_ref = tmp_assign_source_2;

    tmp_called_instance_3 = var_source_ref;

    CHECK_OBJECT( tmp_called_instance_3 );
    frame_90455b84f5922a378c44b07093018413->m_frame.f_lineno = 30;
    tmp_cond_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_isInternal );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 30;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = const_str_empty;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_called_instance_4 = var_source_ref;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source_ref" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_90455b84f5922a378c44b07093018413->m_frame.f_lineno = 33;
    tmp_unicode_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_getLineNumber );
    if ( tmp_unicode_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = PyObject_Unicode( tmp_unicode_arg_1 );
    Py_DECREF( tmp_unicode_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_90455b84f5922a378c44b07093018413 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_90455b84f5922a378c44b07093018413 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_90455b84f5922a378c44b07093018413 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_90455b84f5922a378c44b07093018413, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_90455b84f5922a378c44b07093018413->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_90455b84f5922a378c44b07093018413, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_90455b84f5922a378c44b07093018413,
        type_description_1,
        par_context,
        var_frame_handle,
        var_source_ref
    );


    // Release cached frame.
    if ( frame_90455b84f5922a378c44b07093018413 == cache_frame_90455b84f5922a378c44b07093018413 )
    {
        Py_DECREF( frame_90455b84f5922a378c44b07093018413 );
    }
    cache_frame_90455b84f5922a378c44b07093018413 = NULL;

    assertFrameObject( frame_90455b84f5922a378c44b07093018413 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codegen$LineNumberCodes$$$function_1_getCurrentLineNumberCode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_context );
    par_context = NULL;

    Py_XDECREF( var_frame_handle );
    var_frame_handle = NULL;

    Py_XDECREF( var_source_ref );
    var_source_ref = NULL;

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

    Py_XDECREF( par_context );
    par_context = NULL;

    Py_XDECREF( var_frame_handle );
    var_frame_handle = NULL;

    Py_XDECREF( var_source_ref );
    var_source_ref = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( codegen$LineNumberCodes$$$function_1_getCurrentLineNumberCode );
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


static PyObject *impl_codegen$LineNumberCodes$$$function_2_getLineNumberUpdateCode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_context = python_pars[ 0 ];
    PyObject *var_lineno_value = NULL;
    PyObject *var_frame_handle = NULL;
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
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_901b049f6ec8e5dd78681feccc567394 = NULL;

    struct Nuitka_FrameObject *frame_901b049f6ec8e5dd78681feccc567394;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_901b049f6ec8e5dd78681feccc567394, codeobj_901b049f6ec8e5dd78681feccc567394, module_codegen$LineNumberCodes, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_901b049f6ec8e5dd78681feccc567394 = cache_frame_901b049f6ec8e5dd78681feccc567394;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_901b049f6ec8e5dd78681feccc567394 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_901b049f6ec8e5dd78681feccc567394 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_codegen$LineNumberCodes, (Nuitka_StringObject *)const_str_plain_getCurrentLineNumberCode );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getCurrentLineNumberCode );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getCurrentLineNumberCode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_context;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_901b049f6ec8e5dd78681feccc567394->m_frame.f_lineno = 36;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_lineno_value == NULL );
    var_lineno_value = tmp_assign_source_1;

    tmp_cond_value_1 = var_lineno_value;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_instance_1 = par_context;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 39;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_901b049f6ec8e5dd78681feccc567394->m_frame.f_lineno = 39;
    tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getFrameHandle );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_frame_handle == NULL );
    var_frame_handle = tmp_assign_source_2;

    tmp_left_name_1 = const_str_digest_d0ab8d1135bc05b992eb47a1a2ba7b63;
    tmp_tuple_element_1 = var_frame_handle;

    CHECK_OBJECT( tmp_tuple_element_1 );
    tmp_right_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_lineno_value;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "lineno_value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_return_value = const_str_empty;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_901b049f6ec8e5dd78681feccc567394 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_901b049f6ec8e5dd78681feccc567394 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_901b049f6ec8e5dd78681feccc567394 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_901b049f6ec8e5dd78681feccc567394, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_901b049f6ec8e5dd78681feccc567394->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_901b049f6ec8e5dd78681feccc567394, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_901b049f6ec8e5dd78681feccc567394,
        type_description_1,
        par_context,
        var_lineno_value,
        var_frame_handle
    );


    // Release cached frame.
    if ( frame_901b049f6ec8e5dd78681feccc567394 == cache_frame_901b049f6ec8e5dd78681feccc567394 )
    {
        Py_DECREF( frame_901b049f6ec8e5dd78681feccc567394 );
    }
    cache_frame_901b049f6ec8e5dd78681feccc567394 = NULL;

    assertFrameObject( frame_901b049f6ec8e5dd78681feccc567394 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codegen$LineNumberCodes$$$function_2_getLineNumberUpdateCode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_context );
    par_context = NULL;

    Py_XDECREF( var_lineno_value );
    var_lineno_value = NULL;

    Py_XDECREF( var_frame_handle );
    var_frame_handle = NULL;

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

    Py_XDECREF( par_context );
    par_context = NULL;

    Py_XDECREF( var_lineno_value );
    var_lineno_value = NULL;

    Py_XDECREF( var_frame_handle );
    var_frame_handle = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( codegen$LineNumberCodes$$$function_2_getLineNumberUpdateCode );
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


static PyObject *impl_codegen$LineNumberCodes$$$function_3_getErrorLineNumberUpdateCode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_context = python_pars[ 0 ];
    PyObject *var_lineno_value = NULL;
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    static struct Nuitka_FrameObject *cache_frame_992093c2a70d02151c23acedd034fe26 = NULL;

    struct Nuitka_FrameObject *frame_992093c2a70d02151c23acedd034fe26;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_992093c2a70d02151c23acedd034fe26, codeobj_992093c2a70d02151c23acedd034fe26, module_codegen$LineNumberCodes, sizeof(void *)+sizeof(void *) );
    frame_992093c2a70d02151c23acedd034fe26 = cache_frame_992093c2a70d02151c23acedd034fe26;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_992093c2a70d02151c23acedd034fe26 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_992093c2a70d02151c23acedd034fe26 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_codegen$LineNumberCodes, (Nuitka_StringObject *)const_str_plain_getCurrentLineNumberCode );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getCurrentLineNumberCode );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getCurrentLineNumberCode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_context;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_992093c2a70d02151c23acedd034fe26->m_frame.f_lineno = 50;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    assert( var_lineno_value == NULL );
    var_lineno_value = tmp_assign_source_1;

    tmp_cond_value_1 = var_lineno_value;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_left_name_1 = const_str_digest_799b0d03cd6323440d119fa0fb38053c;
    tmp_right_name_1 = var_lineno_value;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_return_value = const_str_empty;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_992093c2a70d02151c23acedd034fe26 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_992093c2a70d02151c23acedd034fe26 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_992093c2a70d02151c23acedd034fe26 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_992093c2a70d02151c23acedd034fe26, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_992093c2a70d02151c23acedd034fe26->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_992093c2a70d02151c23acedd034fe26, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_992093c2a70d02151c23acedd034fe26,
        type_description_1,
        par_context,
        var_lineno_value
    );


    // Release cached frame.
    if ( frame_992093c2a70d02151c23acedd034fe26 == cache_frame_992093c2a70d02151c23acedd034fe26 )
    {
        Py_DECREF( frame_992093c2a70d02151c23acedd034fe26 );
    }
    cache_frame_992093c2a70d02151c23acedd034fe26 = NULL;

    assertFrameObject( frame_992093c2a70d02151c23acedd034fe26 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codegen$LineNumberCodes$$$function_3_getErrorLineNumberUpdateCode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_context );
    par_context = NULL;

    Py_XDECREF( var_lineno_value );
    var_lineno_value = NULL;

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

    Py_XDECREF( par_context );
    par_context = NULL;

    Py_XDECREF( var_lineno_value );
    var_lineno_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( codegen$LineNumberCodes$$$function_3_getErrorLineNumberUpdateCode );
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


static PyObject *impl_codegen$LineNumberCodes$$$function_4_emitErrorLineNumberUpdateCode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_emit = python_pars[ 0 ];
    PyObject *par_context = python_pars[ 1 ];
    PyObject *var_update_code = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e05ddd0839f563d3b8748d8cf8dbe5ba = NULL;

    struct Nuitka_FrameObject *frame_e05ddd0839f563d3b8748d8cf8dbe5ba;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e05ddd0839f563d3b8748d8cf8dbe5ba, codeobj_e05ddd0839f563d3b8748d8cf8dbe5ba, module_codegen$LineNumberCodes, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e05ddd0839f563d3b8748d8cf8dbe5ba = cache_frame_e05ddd0839f563d3b8748d8cf8dbe5ba;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e05ddd0839f563d3b8748d8cf8dbe5ba );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e05ddd0839f563d3b8748d8cf8dbe5ba ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_codegen$LineNumberCodes, (Nuitka_StringObject *)const_str_plain_getErrorLineNumberUpdateCode );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getErrorLineNumberUpdateCode );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getErrorLineNumberUpdateCode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_context;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_e05ddd0839f563d3b8748d8cf8dbe5ba->m_frame.f_lineno = 61;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_update_code == NULL );
    var_update_code = tmp_assign_source_1;

    tmp_cond_value_1 = var_update_code;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_2 = par_emit;

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "emit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_update_code;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_e05ddd0839f563d3b8748d8cf8dbe5ba->m_frame.f_lineno = 64;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e05ddd0839f563d3b8748d8cf8dbe5ba );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e05ddd0839f563d3b8748d8cf8dbe5ba );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e05ddd0839f563d3b8748d8cf8dbe5ba, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e05ddd0839f563d3b8748d8cf8dbe5ba->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e05ddd0839f563d3b8748d8cf8dbe5ba, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e05ddd0839f563d3b8748d8cf8dbe5ba,
        type_description_1,
        par_emit,
        par_context,
        var_update_code
    );


    // Release cached frame.
    if ( frame_e05ddd0839f563d3b8748d8cf8dbe5ba == cache_frame_e05ddd0839f563d3b8748d8cf8dbe5ba )
    {
        Py_DECREF( frame_e05ddd0839f563d3b8748d8cf8dbe5ba );
    }
    cache_frame_e05ddd0839f563d3b8748d8cf8dbe5ba = NULL;

    assertFrameObject( frame_e05ddd0839f563d3b8748d8cf8dbe5ba );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codegen$LineNumberCodes$$$function_4_emitErrorLineNumberUpdateCode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_emit );
    par_emit = NULL;

    Py_XDECREF( par_context );
    par_context = NULL;

    Py_XDECREF( var_update_code );
    var_update_code = NULL;

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

    Py_XDECREF( par_emit );
    par_emit = NULL;

    Py_XDECREF( par_context );
    par_context = NULL;

    Py_XDECREF( var_update_code );
    var_update_code = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( codegen$LineNumberCodes$$$function_4_emitErrorLineNumberUpdateCode );
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


static PyObject *impl_codegen$LineNumberCodes$$$function_5_emitLineNumberUpdateCode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_emit = python_pars[ 0 ];
    PyObject *par_context = python_pars[ 1 ];
    PyObject *var_code = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6757f4b0c6cd8712b05e49c75549184f = NULL;

    struct Nuitka_FrameObject *frame_6757f4b0c6cd8712b05e49c75549184f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6757f4b0c6cd8712b05e49c75549184f, codeobj_6757f4b0c6cd8712b05e49c75549184f, module_codegen$LineNumberCodes, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6757f4b0c6cd8712b05e49c75549184f = cache_frame_6757f4b0c6cd8712b05e49c75549184f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6757f4b0c6cd8712b05e49c75549184f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6757f4b0c6cd8712b05e49c75549184f ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_codegen$LineNumberCodes, (Nuitka_StringObject *)const_str_plain_getLineNumberUpdateCode );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getLineNumberUpdateCode );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getLineNumberUpdateCode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_context;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_6757f4b0c6cd8712b05e49c75549184f->m_frame.f_lineno = 68;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_code == NULL );
    var_code = tmp_assign_source_1;

    tmp_cond_value_1 = var_code;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_2 = par_emit;

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "emit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_code;

    CHECK_OBJECT( tmp_args_element_name_2 );
    frame_6757f4b0c6cd8712b05e49c75549184f->m_frame.f_lineno = 71;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6757f4b0c6cd8712b05e49c75549184f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6757f4b0c6cd8712b05e49c75549184f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6757f4b0c6cd8712b05e49c75549184f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6757f4b0c6cd8712b05e49c75549184f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6757f4b0c6cd8712b05e49c75549184f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6757f4b0c6cd8712b05e49c75549184f,
        type_description_1,
        par_emit,
        par_context,
        var_code
    );


    // Release cached frame.
    if ( frame_6757f4b0c6cd8712b05e49c75549184f == cache_frame_6757f4b0c6cd8712b05e49c75549184f )
    {
        Py_DECREF( frame_6757f4b0c6cd8712b05e49c75549184f );
    }
    cache_frame_6757f4b0c6cd8712b05e49c75549184f = NULL;

    assertFrameObject( frame_6757f4b0c6cd8712b05e49c75549184f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codegen$LineNumberCodes$$$function_5_emitLineNumberUpdateCode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_emit );
    par_emit = NULL;

    Py_XDECREF( par_context );
    par_context = NULL;

    Py_XDECREF( var_code );
    var_code = NULL;

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

    Py_XDECREF( par_emit );
    par_emit = NULL;

    Py_XDECREF( par_context );
    par_context = NULL;

    Py_XDECREF( var_code );
    var_code = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( codegen$LineNumberCodes$$$function_5_emitLineNumberUpdateCode );
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


static PyObject *impl_codegen$LineNumberCodes$$$function_6_getSetLineNumberCodeRaw( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_to_name = python_pars[ 0 ];
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_is_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_b4982e794c99a4295e995f0fa20f6dee = NULL;

    struct Nuitka_FrameObject *frame_b4982e794c99a4295e995f0fa20f6dee;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b4982e794c99a4295e995f0fa20f6dee, codeobj_b4982e794c99a4295e995f0fa20f6dee, module_codegen$LineNumberCodes, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b4982e794c99a4295e995f0fa20f6dee = cache_frame_b4982e794c99a4295e995f0fa20f6dee;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b4982e794c99a4295e995f0fa20f6dee );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b4982e794c99a4295e995f0fa20f6dee ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_context;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_b4982e794c99a4295e995f0fa20f6dee->m_frame.f_lineno = 75;
    tmp_compare_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getFrameHandle );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_raise_type_1 = PyExc_AssertionError;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 75;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_name_1 = par_emit;

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "emit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = const_str_digest_d0ab8d1135bc05b992eb47a1a2ba7b63;
    tmp_called_instance_2 = par_context;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_b4982e794c99a4295e995f0fa20f6dee->m_frame.f_lineno = 79;
    tmp_tuple_element_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_getFrameHandle );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_to_name;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "to_name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_b4982e794c99a4295e995f0fa20f6dee->m_frame.f_lineno = 77;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4982e794c99a4295e995f0fa20f6dee );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b4982e794c99a4295e995f0fa20f6dee );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b4982e794c99a4295e995f0fa20f6dee, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b4982e794c99a4295e995f0fa20f6dee->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b4982e794c99a4295e995f0fa20f6dee, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b4982e794c99a4295e995f0fa20f6dee,
        type_description_1,
        par_to_name,
        par_emit,
        par_context
    );


    // Release cached frame.
    if ( frame_b4982e794c99a4295e995f0fa20f6dee == cache_frame_b4982e794c99a4295e995f0fa20f6dee )
    {
        Py_DECREF( frame_b4982e794c99a4295e995f0fa20f6dee );
    }
    cache_frame_b4982e794c99a4295e995f0fa20f6dee = NULL;

    assertFrameObject( frame_b4982e794c99a4295e995f0fa20f6dee );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codegen$LineNumberCodes$$$function_6_getSetLineNumberCodeRaw );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_to_name );
    par_to_name = NULL;

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
    NUITKA_CANNOT_GET_HERE( codegen$LineNumberCodes$$$function_6_getSetLineNumberCodeRaw );
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


static PyObject *impl_codegen$LineNumberCodes$$$function_7_getLineNumberCode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_to_name = python_pars[ 0 ];
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_is_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_0dceba2bc117176a4140f106c64d2c93 = NULL;

    struct Nuitka_FrameObject *frame_0dceba2bc117176a4140f106c64d2c93;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0dceba2bc117176a4140f106c64d2c93, codeobj_0dceba2bc117176a4140f106c64d2c93, module_codegen$LineNumberCodes, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0dceba2bc117176a4140f106c64d2c93 = cache_frame_0dceba2bc117176a4140f106c64d2c93;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0dceba2bc117176a4140f106c64d2c93 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0dceba2bc117176a4140f106c64d2c93 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_context;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_0dceba2bc117176a4140f106c64d2c93->m_frame.f_lineno = 86;
    tmp_compare_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getFrameHandle );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_raise_type_1 = PyExc_AssertionError;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 86;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_name_1 = par_emit;

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "emit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = const_str_digest_b9db29b495345c2cb0caea7648c8d301;
    tmp_tuple_element_1 = par_to_name;

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "to_name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_called_instance_2 = par_context;

    if ( tmp_called_instance_2 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_0dceba2bc117176a4140f106c64d2c93->m_frame.f_lineno = 91;
    tmp_tuple_element_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_getFrameHandle );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 91;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    frame_0dceba2bc117176a4140f106c64d2c93->m_frame.f_lineno = 88;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0dceba2bc117176a4140f106c64d2c93 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0dceba2bc117176a4140f106c64d2c93 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0dceba2bc117176a4140f106c64d2c93, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0dceba2bc117176a4140f106c64d2c93->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0dceba2bc117176a4140f106c64d2c93, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0dceba2bc117176a4140f106c64d2c93,
        type_description_1,
        par_to_name,
        par_emit,
        par_context
    );


    // Release cached frame.
    if ( frame_0dceba2bc117176a4140f106c64d2c93 == cache_frame_0dceba2bc117176a4140f106c64d2c93 )
    {
        Py_DECREF( frame_0dceba2bc117176a4140f106c64d2c93 );
    }
    cache_frame_0dceba2bc117176a4140f106c64d2c93 = NULL;

    assertFrameObject( frame_0dceba2bc117176a4140f106c64d2c93 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codegen$LineNumberCodes$$$function_7_getLineNumberCode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_to_name );
    par_to_name = NULL;

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
    NUITKA_CANNOT_GET_HERE( codegen$LineNumberCodes$$$function_7_getLineNumberCode );
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



static PyObject *MAKE_FUNCTION_codegen$LineNumberCodes$$$function_1_getCurrentLineNumberCode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codegen$LineNumberCodes$$$function_1_getCurrentLineNumberCode,
        const_str_plain_getCurrentLineNumberCode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_90455b84f5922a378c44b07093018413,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_codegen$LineNumberCodes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_codegen$LineNumberCodes$$$function_2_getLineNumberUpdateCode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codegen$LineNumberCodes$$$function_2_getLineNumberUpdateCode,
        const_str_plain_getLineNumberUpdateCode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_901b049f6ec8e5dd78681feccc567394,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_codegen$LineNumberCodes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_codegen$LineNumberCodes$$$function_3_getErrorLineNumberUpdateCode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codegen$LineNumberCodes$$$function_3_getErrorLineNumberUpdateCode,
        const_str_plain_getErrorLineNumberUpdateCode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_992093c2a70d02151c23acedd034fe26,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_codegen$LineNumberCodes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_codegen$LineNumberCodes$$$function_4_emitErrorLineNumberUpdateCode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codegen$LineNumberCodes$$$function_4_emitErrorLineNumberUpdateCode,
        const_str_plain_emitErrorLineNumberUpdateCode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e05ddd0839f563d3b8748d8cf8dbe5ba,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_codegen$LineNumberCodes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_codegen$LineNumberCodes$$$function_5_emitLineNumberUpdateCode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codegen$LineNumberCodes$$$function_5_emitLineNumberUpdateCode,
        const_str_plain_emitLineNumberUpdateCode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6757f4b0c6cd8712b05e49c75549184f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_codegen$LineNumberCodes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_codegen$LineNumberCodes$$$function_6_getSetLineNumberCodeRaw(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codegen$LineNumberCodes$$$function_6_getSetLineNumberCodeRaw,
        const_str_plain_getSetLineNumberCodeRaw,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b4982e794c99a4295e995f0fa20f6dee,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_codegen$LineNumberCodes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_codegen$LineNumberCodes$$$function_7_getLineNumberCode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codegen$LineNumberCodes$$$function_7_getLineNumberCode,
        const_str_plain_getLineNumberCode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0dceba2bc117176a4140f106c64d2c93,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_codegen$LineNumberCodes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_codegen$LineNumberCodes =
{
    PyModuleDef_HEAD_INIT,
    "codegen.LineNumberCodes",   /* m_name */
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

MOD_INIT_DECL( codegen$LineNumberCodes )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_codegen$LineNumberCodes );
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
    puts("codegen.LineNumberCodes: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("codegen.LineNumberCodes: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("codegen.LineNumberCodes: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcodegen$LineNumberCodes" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_codegen$LineNumberCodes = Py_InitModule4(
        "codegen.LineNumberCodes",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_codegen$LineNumberCodes = PyModule_Create( &mdef_codegen$LineNumberCodes );
#endif

    moduledict_codegen$LineNumberCodes = MODULE_DICT( module_codegen$LineNumberCodes );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$LineNumberCodes, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_codegen$LineNumberCodes,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$LineNumberCodes, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_codegen$LineNumberCodes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_codegen$LineNumberCodes,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$LineNumberCodes, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_codegen$LineNumberCodes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_codegen$LineNumberCodes );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_81df6988614c3c66d42cc9eedccd6040, module_codegen$LineNumberCodes );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_codegen$LineNumberCodes, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_codegen$LineNumberCodes, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_codegen$LineNumberCodes, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_codegen$LineNumberCodes, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_codegen$LineNumberCodes, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_codegen$LineNumberCodes, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_assign_source_10;

    // Module code.
    tmp_assign_source_1 = const_str_digest_7412231d020590e69e38e81c2b68b669;
    UPDATE_STRING_DICT0( moduledict_codegen$LineNumberCodes, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_0b17bfdbdfb4bd22e643650650ff5ce9;
    UPDATE_STRING_DICT0( moduledict_codegen$LineNumberCodes, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_codegen$LineNumberCodes, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = MAKE_FUNCTION_codegen$LineNumberCodes$$$function_1_getCurrentLineNumberCode(  );
    UPDATE_STRING_DICT1( moduledict_codegen$LineNumberCodes, (Nuitka_StringObject *)const_str_plain_getCurrentLineNumberCode, tmp_assign_source_4 );
    tmp_assign_source_5 = MAKE_FUNCTION_codegen$LineNumberCodes$$$function_2_getLineNumberUpdateCode(  );
    UPDATE_STRING_DICT1( moduledict_codegen$LineNumberCodes, (Nuitka_StringObject *)const_str_plain_getLineNumberUpdateCode, tmp_assign_source_5 );
    tmp_assign_source_6 = MAKE_FUNCTION_codegen$LineNumberCodes$$$function_3_getErrorLineNumberUpdateCode(  );
    UPDATE_STRING_DICT1( moduledict_codegen$LineNumberCodes, (Nuitka_StringObject *)const_str_plain_getErrorLineNumberUpdateCode, tmp_assign_source_6 );
    tmp_assign_source_7 = MAKE_FUNCTION_codegen$LineNumberCodes$$$function_4_emitErrorLineNumberUpdateCode(  );
    UPDATE_STRING_DICT1( moduledict_codegen$LineNumberCodes, (Nuitka_StringObject *)const_str_plain_emitErrorLineNumberUpdateCode, tmp_assign_source_7 );
    tmp_assign_source_8 = MAKE_FUNCTION_codegen$LineNumberCodes$$$function_5_emitLineNumberUpdateCode(  );
    UPDATE_STRING_DICT1( moduledict_codegen$LineNumberCodes, (Nuitka_StringObject *)const_str_plain_emitLineNumberUpdateCode, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION_codegen$LineNumberCodes$$$function_6_getSetLineNumberCodeRaw(  );
    UPDATE_STRING_DICT1( moduledict_codegen$LineNumberCodes, (Nuitka_StringObject *)const_str_plain_getSetLineNumberCodeRaw, tmp_assign_source_9 );
    tmp_assign_source_10 = MAKE_FUNCTION_codegen$LineNumberCodes$$$function_7_getLineNumberCode(  );
    UPDATE_STRING_DICT1( moduledict_codegen$LineNumberCodes, (Nuitka_StringObject *)const_str_plain_getLineNumberCode, tmp_assign_source_10 );

    return MOD_RETURN_VALUE( module_codegen$LineNumberCodes );
}
