/* Generated code for Python source for module 'codegen.AsyncgenCodes'
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

/* The _module_codegen$AsyncgenCodes is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_codegen$AsyncgenCodes;
PyDictObject *moduledict_codegen$AsyncgenCodes;

/* The module constants used, if any. */
extern PyObject *const_tuple_str_plain_indented_tuple;
static PyObject *const_str_plain_asyncgen_exit;
extern PyObject *const_str_plain_needs_generator_return;
extern PyObject *const_str_plain_closure_count;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_function_var_inits;
extern PyObject *const_str_plain_getBody;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_function_body;
extern PyObject *const_str_plain_codes;
extern PyObject *const_str_plain_Indentation;
extern PyObject *const_tuple_str_plain_getClosureCopyCode_tuple;
extern PyObject *const_str_plain_getAsyncgenObjectCode;
extern PyObject *const_str_plain_needs_exception_exit;
extern PyObject *const_str_plain_template_make_asyncgen_template;
extern PyObject *const_str_plain_addCleanupTempName;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_indented;
extern PyObject *const_str_plain_allow_none;
static PyObject *const_str_plain_asyncgen_qualname_obj;
extern PyObject *const_tuple_str_plain_generateStatementSequenceCode_tuple;
extern PyObject *const_str_plain_getClosureCopyCode;
extern PyObject *const_str_plain_getOwner;
extern PyObject *const_tuple_6ab3f38a814666e9212c1d193a1f33c4_tuple;
extern PyObject *const_str_plain_parameters;
extern PyObject *const_str_plain_temp_variables;
static PyObject *const_str_plain_asyncgen_object_body;
extern PyObject *const_str_plain_getCodeName;
static PyObject *const_str_digest_41c12069e282aa4de7e3295b0e1b67bc;
extern PyObject *const_str_plain_Emission;
extern PyObject *const_str_plain_context;
static PyObject *const_str_digest_ee1c4e43b97909bb0a2ff7c46a01535a;
extern PyObject *const_str_plain_SourceCodeCollector;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_template_asyncgen_return_exit;
extern PyObject *const_str_plain_template_asyncgen_exception_exit;
static PyObject *const_tuple_f4025c2a2446069b324bfecd5b319d7b_tuple;
extern PyObject *const_str_plain_function_identifier;
extern PyObject *const_str_plain_generator_exit;
static PyObject *const_str_digest_55cca0f653f40133c9cb66db45a0e611;
extern PyObject *const_str_plain_setupFunctionLocalVariables;
extern PyObject *const_str_plain_generateStatementSequenceCode;
extern PyObject *const_str_plain_function_codes;
extern PyObject *const_str_plain_outline_variables;
extern PyObject *const_str_plain_GeneratorCodes;
extern PyObject *const_str_plain_code_object;
extern PyObject *const_str_plain_getAsyncgenObjectDeclCode;
extern PyObject *const_int_0;
extern PyObject *const_tuple_c6047e60460261820ea9d27b9c1ef774_tuple;
static PyObject *const_str_digest_c5dba4c809f1ad2c291b89ca18d4954a;
extern PyObject *const_tuple_str_plain_function_identifier_tuple;
extern PyObject *const_str_plain_code_identifier;
extern PyObject *const_str_plain_closure_type;
static PyObject *const_str_plain_asyncgen_identifier;
static PyObject *const_str_digest_e341522bc658dea8e8cc77139449e3be;
extern PyObject *const_str_plain_statement_sequence;
extern PyObject *const_str_plain_finalizeFunctionLocalVariables;
static PyObject *const_str_plain_asyncgen_name_obj;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_user_variables;
extern PyObject *const_str_plain_to_name;
extern PyObject *const_str_plain_getFunctionBody;
extern PyObject *const_str_plain_template_asyncgen_object_decl_template;
extern PyObject *const_str_plain_expression;
extern PyObject *const_str_plain_getFunctionName;
extern PyObject *const_str_plain_getCodeObjectHandle;
extern PyObject *const_str_plain_emit;
static PyObject *const_str_digest_44b5fbc6e11dbcfcf5e9111d4a3bf43c;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_closure_copy;
extern PyObject *const_str_plain_getConstantCode;
extern PyObject *const_str_plain_FunctionCodes;
extern PyObject *const_str_plain_getFunctionQualname;
extern PyObject *const_str_plain_function_locals;
extern PyObject *const_str_plain_getAsyncgenRef;
extern PyObject *const_str_plain_generateMakeAsyncgenObjectCode;
extern PyObject *const_str_plain_getClosureVariableVersions;
extern PyObject *const_str_plain_CodeHelpers;
extern PyObject *const_str_plain_template_asyncgen_noexception_exit;
static PyObject *const_tuple_fc0fb9ef29bd7ddc4317f44d4fdbd514_tuple;
extern PyObject *const_str_plain_function_cleanup;
extern PyObject *const_str_plain_closure_variables;
extern PyObject *const_str_plain_constant;
extern PyObject *const_str_plain_getCodeObject;
extern PyObject *const_str_plain_template_asyncgen_object_body_template;
extern PyObject *const_tuple_str_plain_SourceCodeCollector_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_asyncgen_exit = UNSTREAM_STRING( &constant_bin[ 263098 ], 13, 1 );
    const_str_plain_asyncgen_qualname_obj = UNSTREAM_STRING( &constant_bin[ 263111 ], 21, 1 );
    const_str_plain_asyncgen_object_body = UNSTREAM_STRING( &constant_bin[ 263132 ], 20, 1 );
    const_str_digest_41c12069e282aa4de7e3295b0e1b67bc = UNSTREAM_STRING( &constant_bin[ 263152 ], 32, 0 );
    const_str_digest_ee1c4e43b97909bb0a2ff7c46a01535a = UNSTREAM_STRING( &constant_bin[ 263184 ], 21, 0 );
    const_tuple_f4025c2a2446069b324bfecd5b319d7b_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_f4025c2a2446069b324bfecd5b319d7b_tuple, 0, const_str_plain_to_name ); Py_INCREF( const_str_plain_to_name );
    PyTuple_SET_ITEM( const_tuple_f4025c2a2446069b324bfecd5b319d7b_tuple, 1, const_str_plain_expression ); Py_INCREF( const_str_plain_expression );
    PyTuple_SET_ITEM( const_tuple_f4025c2a2446069b324bfecd5b319d7b_tuple, 2, const_str_plain_emit ); Py_INCREF( const_str_plain_emit );
    PyTuple_SET_ITEM( const_tuple_f4025c2a2446069b324bfecd5b319d7b_tuple, 3, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    PyTuple_SET_ITEM( const_tuple_f4025c2a2446069b324bfecd5b319d7b_tuple, 4, const_str_plain_asyncgen_object_body ); Py_INCREF( const_str_plain_asyncgen_object_body );
    PyTuple_SET_ITEM( const_tuple_f4025c2a2446069b324bfecd5b319d7b_tuple, 5, const_str_plain_closure_variables ); Py_INCREF( const_str_plain_closure_variables );
    PyTuple_SET_ITEM( const_tuple_f4025c2a2446069b324bfecd5b319d7b_tuple, 6, const_str_plain_closure_copy ); Py_INCREF( const_str_plain_closure_copy );
    const_str_digest_55cca0f653f40133c9cb66db45a0e611 = UNSTREAM_STRING( &constant_bin[ 263205 ], 30, 0 );
    const_str_digest_c5dba4c809f1ad2c291b89ca18d4954a = UNSTREAM_STRING( &constant_bin[ 263235 ], 106, 0 );
    const_str_plain_asyncgen_identifier = UNSTREAM_STRING( &constant_bin[ 263341 ], 19, 1 );
    const_str_digest_e341522bc658dea8e8cc77139449e3be = UNSTREAM_STRING( &constant_bin[ 263360 ], 30, 0 );
    const_str_plain_asyncgen_name_obj = UNSTREAM_STRING( &constant_bin[ 263390 ], 17, 1 );
    const_str_digest_44b5fbc6e11dbcfcf5e9111d4a3bf43c = UNSTREAM_STRING( &constant_bin[ 263407 ], 64, 0 );
    const_tuple_fc0fb9ef29bd7ddc4317f44d4fdbd514_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_fc0fb9ef29bd7ddc4317f44d4fdbd514_tuple, 0, const_str_plain_template_asyncgen_exception_exit ); Py_INCREF( const_str_plain_template_asyncgen_exception_exit );
    PyTuple_SET_ITEM( const_tuple_fc0fb9ef29bd7ddc4317f44d4fdbd514_tuple, 1, const_str_plain_template_asyncgen_noexception_exit ); Py_INCREF( const_str_plain_template_asyncgen_noexception_exit );
    PyTuple_SET_ITEM( const_tuple_fc0fb9ef29bd7ddc4317f44d4fdbd514_tuple, 2, const_str_plain_template_asyncgen_object_body_template ); Py_INCREF( const_str_plain_template_asyncgen_object_body_template );
    PyTuple_SET_ITEM( const_tuple_fc0fb9ef29bd7ddc4317f44d4fdbd514_tuple, 3, const_str_plain_template_asyncgen_object_decl_template ); Py_INCREF( const_str_plain_template_asyncgen_object_decl_template );
    PyTuple_SET_ITEM( const_tuple_fc0fb9ef29bd7ddc4317f44d4fdbd514_tuple, 4, const_str_plain_template_asyncgen_return_exit ); Py_INCREF( const_str_plain_template_asyncgen_return_exit );
    PyTuple_SET_ITEM( const_tuple_fc0fb9ef29bd7ddc4317f44d4fdbd514_tuple, 5, const_str_plain_template_make_asyncgen_template ); Py_INCREF( const_str_plain_template_make_asyncgen_template );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_codegen$AsyncgenCodes( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_b7faa3a68c1a55063a885969b92580ac;
static PyCodeObject *codeobj_199ff3bb68ee465c85d3dcb4f0730963;
static PyCodeObject *codeobj_fc252c1cf0d6d948a986e70303aa8afe;
static PyCodeObject *codeobj_fd08bb123c126045cc11247603471f0e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_c5dba4c809f1ad2c291b89ca18d4954a;
    codeobj_b7faa3a68c1a55063a885969b92580ac = MAKE_CODEOBJ( module_filename_obj, const_str_digest_e341522bc658dea8e8cc77139449e3be, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_199ff3bb68ee465c85d3dcb4f0730963 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_generateMakeAsyncgenObjectCode, 91, const_tuple_f4025c2a2446069b324bfecd5b319d7b_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fc252c1cf0d6d948a986e70303aa8afe = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getAsyncgenObjectCode, 46, const_tuple_6ab3f38a814666e9212c1d193a1f33c4_tuple, 8, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fd08bb123c126045cc11247603471f0e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getAsyncgenObjectDeclCode, 40, const_tuple_str_plain_function_identifier_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_codegen$AsyncgenCodes$$$function_1_getAsyncgenObjectDeclCode(  );


static PyObject *MAKE_FUNCTION_codegen$AsyncgenCodes$$$function_2_getAsyncgenObjectCode(  );


static PyObject *MAKE_FUNCTION_codegen$AsyncgenCodes$$$function_3_generateMakeAsyncgenObjectCode(  );


// The module function definitions.
static PyObject *impl_codegen$AsyncgenCodes$$$function_1_getAsyncgenObjectDeclCode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_function_identifier = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_left_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    static struct Nuitka_FrameObject *cache_frame_fd08bb123c126045cc11247603471f0e = NULL;

    struct Nuitka_FrameObject *frame_fd08bb123c126045cc11247603471f0e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fd08bb123c126045cc11247603471f0e, codeobj_fd08bb123c126045cc11247603471f0e, module_codegen$AsyncgenCodes, sizeof(void *) );
    frame_fd08bb123c126045cc11247603471f0e = cache_frame_fd08bb123c126045cc11247603471f0e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fd08bb123c126045cc11247603471f0e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fd08bb123c126045cc11247603471f0e ) == 2 ); // Frame stack

    // Framed code:
    tmp_left_name_1 = GET_STRING_DICT_VALUE( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_template_asyncgen_object_decl_template );

    if (unlikely( tmp_left_name_1 == NULL ))
    {
        tmp_left_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_template_asyncgen_object_decl_template );
    }

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "template_asyncgen_object_decl_template" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_function_identifier;
    tmp_dict_value_1 = par_function_identifier;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_right_name_1 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_right_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fd08bb123c126045cc11247603471f0e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fd08bb123c126045cc11247603471f0e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fd08bb123c126045cc11247603471f0e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fd08bb123c126045cc11247603471f0e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fd08bb123c126045cc11247603471f0e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fd08bb123c126045cc11247603471f0e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fd08bb123c126045cc11247603471f0e,
        type_description_1,
        par_function_identifier
    );


    // Release cached frame.
    if ( frame_fd08bb123c126045cc11247603471f0e == cache_frame_fd08bb123c126045cc11247603471f0e )
    {
        Py_DECREF( frame_fd08bb123c126045cc11247603471f0e );
    }
    cache_frame_fd08bb123c126045cc11247603471f0e = NULL;

    assertFrameObject( frame_fd08bb123c126045cc11247603471f0e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codegen$AsyncgenCodes$$$function_1_getAsyncgenObjectDeclCode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_function_identifier );
    par_function_identifier = NULL;

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

    Py_XDECREF( par_function_identifier );
    par_function_identifier = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( codegen$AsyncgenCodes$$$function_1_getAsyncgenObjectDeclCode );
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


static PyObject *impl_codegen$AsyncgenCodes$$$function_2_getAsyncgenObjectCode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_context = python_pars[ 0 ];
    PyObject *par_function_identifier = python_pars[ 1 ];
    PyObject *par_closure_variables = python_pars[ 2 ];
    PyObject *par_user_variables = python_pars[ 3 ];
    PyObject *par_outline_variables = python_pars[ 4 ];
    PyObject *par_temp_variables = python_pars[ 5 ];
    PyObject *par_needs_exception_exit = python_pars[ 6 ];
    PyObject *par_needs_generator_return = python_pars[ 7 ];
    PyObject *var_function_locals = NULL;
    PyObject *var_function_cleanup = NULL;
    PyObject *var_function_codes = NULL;
    PyObject *var_generator_exit = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_key_11;
    PyObject *tmp_dict_key_12;
    PyObject *tmp_dict_key_13;
    PyObject *tmp_dict_key_14;
    PyObject *tmp_dict_key_15;
    PyObject *tmp_dict_key_16;
    PyObject *tmp_dict_key_17;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_dict_value_11;
    PyObject *tmp_dict_value_12;
    PyObject *tmp_dict_value_13;
    PyObject *tmp_dict_value_14;
    PyObject *tmp_dict_value_15;
    PyObject *tmp_dict_value_16;
    PyObject *tmp_dict_value_17;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_source_name_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_fc252c1cf0d6d948a986e70303aa8afe = NULL;

    struct Nuitka_FrameObject *frame_fc252c1cf0d6d948a986e70303aa8afe;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fc252c1cf0d6d948a986e70303aa8afe, codeobj_fc252c1cf0d6d948a986e70303aa8afe, module_codegen$AsyncgenCodes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fc252c1cf0d6d948a986e70303aa8afe = cache_frame_fc252c1cf0d6d948a986e70303aa8afe;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fc252c1cf0d6d948a986e70303aa8afe );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fc252c1cf0d6d948a986e70303aa8afe ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_setupFunctionLocalVariables );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_setupFunctionLocalVariables );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "setupFunctionLocalVariables" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }

    tmp_dict_key_1 = const_str_plain_context;
    tmp_dict_value_1 = par_context;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 5 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_parameters;
    tmp_dict_value_2 = Py_None;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_closure_variables;
    tmp_dict_value_3 = par_closure_variables;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_user_variables;
    tmp_left_name_1 = par_user_variables;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = par_outline_variables;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_dict_value_4 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 54;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_temp_variables;
    tmp_dict_value_5 = par_temp_variables;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "temp_variables" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    frame_fc252c1cf0d6d948a986e70303aa8afe->m_frame.f_lineno = 50;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        type_description_1 = "oooooooooooo";
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
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


        type_description_1 = "oooooooooooo";
        exception_lineno = 50;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_3 == NULL )
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


        type_description_1 = "oooooooooooo";
        exception_lineno = 50;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_iterator_name_1 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "oooooooooooo";
                exception_lineno = 50;
                goto try_except_handler_3;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "oooooooooooo";
        exception_lineno = 50;
        goto try_except_handler_3;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_4 );
    assert( var_function_locals == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_function_locals = tmp_assign_source_4;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_5 );
    assert( var_function_cleanup == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_function_cleanup = tmp_assign_source_5;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_SourceCodeCollector );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SourceCodeCollector );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SourceCodeCollector" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_fc252c1cf0d6d948a986e70303aa8afe->m_frame.f_lineno = 58;
    tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_function_codes == NULL );
    var_function_codes = tmp_assign_source_6;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_generateStatementSequenceCode );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_generateStatementSequenceCode );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "generateStatementSequenceCode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_6 = const_str_plain_statement_sequence;
    tmp_called_instance_2 = par_context;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 61;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_fc252c1cf0d6d948a986e70303aa8afe->m_frame.f_lineno = 61;
    tmp_called_instance_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_getOwner );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_fc252c1cf0d6d948a986e70303aa8afe->m_frame.f_lineno = 61;
    tmp_dict_value_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getBody );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_dict_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_2 = _PyDict_NewPresized( 4 );
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_7 = const_str_plain_allow_none;
    tmp_dict_value_7 = Py_True;
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_8 = const_str_plain_emit;
    tmp_dict_value_8 = var_function_codes;

    if ( tmp_dict_value_8 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "function_codes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_9 = const_str_plain_context;
    tmp_dict_value_9 = par_context;

    if ( tmp_dict_value_9 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    frame_fc252c1cf0d6d948a986e70303aa8afe->m_frame.f_lineno = 60;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_finalizeFunctionLocalVariables );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_finalizeFunctionLocalVariables );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "finalizeFunctionLocalVariables" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_context;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_function_locals;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "function_locals" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = var_function_cleanup;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "function_cleanup" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_fc252c1cf0d6d948a986e70303aa8afe->m_frame.f_lineno = 67;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_cond_value_1 = par_needs_exception_exit;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "needs_exception_exit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        type_description_1 = "oooooooooooo";
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
    tmp_left_name_2 = GET_STRING_DICT_VALUE( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_template_asyncgen_exception_exit );

    if (unlikely( tmp_left_name_2 == NULL ))
    {
        tmp_left_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_template_asyncgen_exception_exit );
    }

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "template_asyncgen_exception_exit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_10 = const_str_plain_function_identifier;
    tmp_dict_value_10 = par_function_identifier;

    if ( tmp_dict_value_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "function_identifier" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 71;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_right_name_2, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_11 = const_str_plain_function_cleanup;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_indented );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_indented );
    }

    if ( tmp_called_name_5 == NULL )
    {
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "indented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = var_function_cleanup;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "function_cleanup" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_fc252c1cf0d6d948a986e70303aa8afe->m_frame.f_lineno = 72;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_dict_value_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_dict_value_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_2 );

        exception_lineno = 72;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_right_name_2, tmp_dict_key_11, tmp_dict_value_11 );
    Py_DECREF( tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    tmp_assign_source_7 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_generator_exit == NULL );
    var_generator_exit = tmp_assign_source_7;

    goto branch_end_1;
    branch_no_1:;
    tmp_left_name_3 = GET_STRING_DICT_VALUE( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_template_asyncgen_noexception_exit );

    if (unlikely( tmp_left_name_3 == NULL ))
    {
        tmp_left_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_template_asyncgen_noexception_exit );
    }

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "template_asyncgen_noexception_exit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_12 = const_str_plain_function_identifier;
    tmp_dict_value_12 = par_function_identifier;

    if ( tmp_dict_value_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "function_identifier" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_right_name_3, tmp_dict_key_12, tmp_dict_value_12 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_13 = const_str_plain_function_cleanup;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_indented );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_indented );
    }

    if ( tmp_called_name_6 == NULL )
    {
        Py_DECREF( tmp_right_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "indented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = var_function_cleanup;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_right_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "function_cleanup" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_fc252c1cf0d6d948a986e70303aa8afe->m_frame.f_lineno = 77;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_dict_value_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    if ( tmp_dict_value_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 77;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_right_name_3, tmp_dict_key_13, tmp_dict_value_13 );
    Py_DECREF( tmp_dict_value_13 );
    assert( !(tmp_res != 0) );
    tmp_assign_source_8 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_generator_exit == NULL );
    var_generator_exit = tmp_assign_source_8;

    branch_end_1:;
    tmp_cond_value_2 = par_needs_generator_return;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "needs_generator_return" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 80;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_left_name_4 = var_generator_exit;

    CHECK_OBJECT( tmp_left_name_4 );
    tmp_left_name_5 = GET_STRING_DICT_VALUE( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_template_asyncgen_return_exit );

    if (unlikely( tmp_left_name_5 == NULL ))
    {
        tmp_left_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_template_asyncgen_return_exit );
    }

    if ( tmp_left_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "template_asyncgen_return_exit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 81;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_5 = PyDict_New();
    tmp_right_name_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
    tmp_assign_source_9 = tmp_left_name_4;
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    var_generator_exit = tmp_assign_source_9;

    branch_no_2:;
    tmp_left_name_6 = GET_STRING_DICT_VALUE( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_template_asyncgen_object_body_template );

    if (unlikely( tmp_left_name_6 == NULL ))
    {
        tmp_left_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_template_asyncgen_object_body_template );
    }

    if ( tmp_left_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "template_asyncgen_object_body_template" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_14 = const_str_plain_function_identifier;
    tmp_dict_value_14 = par_function_identifier;

    if ( tmp_dict_value_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "function_identifier" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_6 = _PyDict_NewPresized( 4 );
    tmp_res = PyDict_SetItem( tmp_right_name_6, tmp_dict_key_14, tmp_dict_value_14 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_15 = const_str_plain_function_body;
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_indented );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_indented );
    }

    if ( tmp_called_name_7 == NULL )
    {
        Py_DECREF( tmp_right_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "indented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = var_function_codes;

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_right_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "function_codes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_codes );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_6 );

        exception_lineno = 85;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_fc252c1cf0d6d948a986e70303aa8afe->m_frame.f_lineno = 85;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_dict_value_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_dict_value_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_6 );

        exception_lineno = 85;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_right_name_6, tmp_dict_key_15, tmp_dict_value_15 );
    Py_DECREF( tmp_dict_value_15 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_16 = const_str_plain_function_var_inits;
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_indented );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_indented );
    }

    if ( tmp_called_name_8 == NULL )
    {
        Py_DECREF( tmp_right_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "indented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = var_function_locals;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_right_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "function_locals" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_fc252c1cf0d6d948a986e70303aa8afe->m_frame.f_lineno = 86;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_dict_value_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    if ( tmp_dict_value_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_6 );

        exception_lineno = 86;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_right_name_6, tmp_dict_key_16, tmp_dict_value_16 );
    Py_DECREF( tmp_dict_value_16 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_17 = const_str_plain_asyncgen_exit;
    tmp_dict_value_17 = var_generator_exit;

    if ( tmp_dict_value_17 == NULL )
    {
        Py_DECREF( tmp_right_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "generator_exit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_right_name_6, tmp_dict_key_17, tmp_dict_value_17 );
    assert( !(tmp_res != 0) );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "oooooooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fc252c1cf0d6d948a986e70303aa8afe );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fc252c1cf0d6d948a986e70303aa8afe );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fc252c1cf0d6d948a986e70303aa8afe );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fc252c1cf0d6d948a986e70303aa8afe, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fc252c1cf0d6d948a986e70303aa8afe->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fc252c1cf0d6d948a986e70303aa8afe, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fc252c1cf0d6d948a986e70303aa8afe,
        type_description_1,
        par_context,
        par_function_identifier,
        par_closure_variables,
        par_user_variables,
        par_outline_variables,
        par_temp_variables,
        par_needs_exception_exit,
        par_needs_generator_return,
        var_function_locals,
        var_function_cleanup,
        var_function_codes,
        var_generator_exit
    );


    // Release cached frame.
    if ( frame_fc252c1cf0d6d948a986e70303aa8afe == cache_frame_fc252c1cf0d6d948a986e70303aa8afe )
    {
        Py_DECREF( frame_fc252c1cf0d6d948a986e70303aa8afe );
    }
    cache_frame_fc252c1cf0d6d948a986e70303aa8afe = NULL;

    assertFrameObject( frame_fc252c1cf0d6d948a986e70303aa8afe );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codegen$AsyncgenCodes$$$function_2_getAsyncgenObjectCode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_context );
    par_context = NULL;

    Py_XDECREF( par_function_identifier );
    par_function_identifier = NULL;

    Py_XDECREF( par_closure_variables );
    par_closure_variables = NULL;

    Py_XDECREF( par_user_variables );
    par_user_variables = NULL;

    Py_XDECREF( par_outline_variables );
    par_outline_variables = NULL;

    Py_XDECREF( par_temp_variables );
    par_temp_variables = NULL;

    Py_XDECREF( par_needs_exception_exit );
    par_needs_exception_exit = NULL;

    Py_XDECREF( par_needs_generator_return );
    par_needs_generator_return = NULL;

    Py_XDECREF( var_function_locals );
    var_function_locals = NULL;

    Py_XDECREF( var_function_cleanup );
    var_function_cleanup = NULL;

    Py_XDECREF( var_function_codes );
    var_function_codes = NULL;

    Py_XDECREF( var_generator_exit );
    var_generator_exit = NULL;

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

    Py_XDECREF( par_context );
    par_context = NULL;

    Py_XDECREF( par_function_identifier );
    par_function_identifier = NULL;

    Py_XDECREF( par_closure_variables );
    par_closure_variables = NULL;

    Py_XDECREF( par_user_variables );
    par_user_variables = NULL;

    Py_XDECREF( par_outline_variables );
    par_outline_variables = NULL;

    Py_XDECREF( par_temp_variables );
    par_temp_variables = NULL;

    Py_XDECREF( par_needs_exception_exit );
    par_needs_exception_exit = NULL;

    Py_XDECREF( par_needs_generator_return );
    par_needs_generator_return = NULL;

    Py_XDECREF( var_function_locals );
    var_function_locals = NULL;

    Py_XDECREF( var_function_cleanup );
    var_function_cleanup = NULL;

    Py_XDECREF( var_function_codes );
    var_function_codes = NULL;

    Py_XDECREF( var_generator_exit );
    var_generator_exit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( codegen$AsyncgenCodes$$$function_2_getAsyncgenObjectCode );
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


static PyObject *impl_codegen$AsyncgenCodes$$$function_3_generateMakeAsyncgenObjectCode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *var_asyncgen_object_body = NULL;
    PyObject *var_closure_variables = NULL;
    PyObject *var_closure_copy = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_instance_7;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_key_11;
    PyObject *tmp_dict_key_12;
    PyObject *tmp_dict_key_13;
    PyObject *tmp_dict_key_14;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_dict_value_11;
    PyObject *tmp_dict_value_12;
    PyObject *tmp_dict_value_13;
    PyObject *tmp_dict_value_14;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_199ff3bb68ee465c85d3dcb4f0730963 = NULL;

    struct Nuitka_FrameObject *frame_199ff3bb68ee465c85d3dcb4f0730963;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_199ff3bb68ee465c85d3dcb4f0730963, codeobj_199ff3bb68ee465c85d3dcb4f0730963, module_codegen$AsyncgenCodes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_199ff3bb68ee465c85d3dcb4f0730963 = cache_frame_199ff3bb68ee465c85d3dcb4f0730963;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_199ff3bb68ee465c85d3dcb4f0730963 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_199ff3bb68ee465c85d3dcb4f0730963 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_2 = par_expression;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_199ff3bb68ee465c85d3dcb4f0730963->m_frame.f_lineno = 92;
    tmp_called_instance_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_getAsyncgenRef );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_199ff3bb68ee465c85d3dcb4f0730963->m_frame.f_lineno = 92;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getFunctionBody );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_asyncgen_object_body == NULL );
    var_asyncgen_object_body = tmp_assign_source_1;

    tmp_called_instance_3 = par_expression;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "expression" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_199ff3bb68ee465c85d3dcb4f0730963->m_frame.f_lineno = 94;
    tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_getClosureVariableVersions );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_closure_variables == NULL );
    var_closure_variables = tmp_assign_source_2;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_getClosureCopyCode );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getClosureCopyCode );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getClosureCopyCode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_to_name;
    tmp_dict_value_1 = par_to_name;

    if ( tmp_dict_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "to_name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 4 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_closure_type;
    tmp_dict_value_2 = const_str_digest_55cca0f653f40133c9cb66db45a0e611;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_closure_variables;
    tmp_dict_value_3 = var_closure_variables;

    CHECK_OBJECT( tmp_dict_value_3 );
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

        exception_lineno = 100;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    frame_199ff3bb68ee465c85d3dcb4f0730963->m_frame.f_lineno = 96;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_closure_copy == NULL );
    var_closure_copy = tmp_assign_source_3;

    tmp_called_name_2 = par_emit;

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "emit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 103;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = GET_STRING_DICT_VALUE( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_template_make_asyncgen_template );

    if (unlikely( tmp_left_name_1 == NULL ))
    {
        tmp_left_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_template_make_asyncgen_template );
    }

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "template_make_asyncgen_template" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_5 = const_str_plain_closure_copy;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_indented );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_indented );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "indented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 105;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_closure_copy;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = const_int_0;
    tmp_args_element_name_4 = Py_True;
    frame_199ff3bb68ee465c85d3dcb4f0730963->m_frame.f_lineno = 105;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_dict_value_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = _PyDict_NewPresized( 7 );
    tmp_res = PyDict_SetItem( tmp_right_name_1, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain_to_name;
    tmp_dict_value_6 = par_to_name;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "to_name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 106;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_right_name_1, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_7 = const_str_plain_asyncgen_identifier;
    tmp_called_instance_4 = var_asyncgen_object_body;

    if ( tmp_called_instance_4 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "asyncgen_object_body" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_199ff3bb68ee465c85d3dcb4f0730963->m_frame.f_lineno = 107;
    tmp_dict_value_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_getCodeName );
    if ( tmp_dict_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 107;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_right_name_1, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_8 = const_str_plain_asyncgen_name_obj;
    tmp_source_name_1 = par_context;

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_getConstantCode );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 108;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_9 = const_str_plain_constant;
    tmp_called_instance_5 = var_asyncgen_object_body;

    if ( tmp_called_instance_5 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "asyncgen_object_body" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 109;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_199ff3bb68ee465c85d3dcb4f0730963->m_frame.f_lineno = 109;
    tmp_dict_value_9 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_getFunctionName );
    if ( tmp_dict_value_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 109;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_9, tmp_dict_value_9 );
    Py_DECREF( tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    frame_199ff3bb68ee465c85d3dcb4f0730963->m_frame.f_lineno = 108;
    tmp_dict_value_8 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_dict_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 108;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_right_name_1, tmp_dict_key_8, tmp_dict_value_8 );
    Py_DECREF( tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_10 = const_str_plain_asyncgen_qualname_obj;
    tmp_source_name_2 = par_context;

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_getConstantCode );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 111;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_11 = const_str_plain_constant;
    tmp_called_instance_6 = var_asyncgen_object_body;

    if ( tmp_called_instance_6 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "asyncgen_object_body" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_199ff3bb68ee465c85d3dcb4f0730963->m_frame.f_lineno = 112;
    tmp_dict_value_11 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_getFunctionQualname );
    if ( tmp_dict_value_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 112;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_3 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_11, tmp_dict_value_11 );
    Py_DECREF( tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    frame_199ff3bb68ee465c85d3dcb4f0730963->m_frame.f_lineno = 111;
    tmp_dict_value_10 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_5, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_dict_value_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 111;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_right_name_1, tmp_dict_key_10, tmp_dict_value_10 );
    Py_DECREF( tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_12 = const_str_plain_code_identifier;
    tmp_source_name_3 = par_context;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "context" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 114;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_getCodeObjectHandle );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 114;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_13 = const_str_plain_code_object;
    tmp_called_instance_7 = par_expression;

    if ( tmp_called_instance_7 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "expression" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_199ff3bb68ee465c85d3dcb4f0730963->m_frame.f_lineno = 115;
    tmp_dict_value_13 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_getCodeObject );
    if ( tmp_dict_value_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 115;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_4 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_13, tmp_dict_value_13 );
    Py_DECREF( tmp_dict_value_13 );
    assert( !(tmp_res != 0) );
    frame_199ff3bb68ee465c85d3dcb4f0730963->m_frame.f_lineno = 114;
    tmp_dict_value_12 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_6, tmp_kw_name_4 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_kw_name_4 );
    if ( tmp_dict_value_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 114;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_right_name_1, tmp_dict_key_12, tmp_dict_value_12 );
    Py_DECREF( tmp_dict_value_12 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_14 = const_str_plain_closure_count;
    tmp_len_arg_1 = var_closure_variables;

    if ( tmp_len_arg_1 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "closure_variables" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_14 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_dict_value_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 117;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_right_name_1, tmp_dict_key_14, tmp_dict_value_14 );
    Py_DECREF( tmp_dict_value_14 );
    assert( !(tmp_res != 0) );
    tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    frame_199ff3bb68ee465c85d3dcb4f0730963->m_frame.f_lineno = 103;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "ooooooo";
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

        exception_lineno = 121;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_addCleanupTempName );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = par_to_name;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "to_name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_199ff3bb68ee465c85d3dcb4f0730963->m_frame.f_lineno = 121;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_199ff3bb68ee465c85d3dcb4f0730963 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_199ff3bb68ee465c85d3dcb4f0730963 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_199ff3bb68ee465c85d3dcb4f0730963, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_199ff3bb68ee465c85d3dcb4f0730963->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_199ff3bb68ee465c85d3dcb4f0730963, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_199ff3bb68ee465c85d3dcb4f0730963,
        type_description_1,
        par_to_name,
        par_expression,
        par_emit,
        par_context,
        var_asyncgen_object_body,
        var_closure_variables,
        var_closure_copy
    );


    // Release cached frame.
    if ( frame_199ff3bb68ee465c85d3dcb4f0730963 == cache_frame_199ff3bb68ee465c85d3dcb4f0730963 )
    {
        Py_DECREF( frame_199ff3bb68ee465c85d3dcb4f0730963 );
    }
    cache_frame_199ff3bb68ee465c85d3dcb4f0730963 = NULL;

    assertFrameObject( frame_199ff3bb68ee465c85d3dcb4f0730963 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codegen$AsyncgenCodes$$$function_3_generateMakeAsyncgenObjectCode );
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

    Py_XDECREF( var_asyncgen_object_body );
    var_asyncgen_object_body = NULL;

    Py_XDECREF( var_closure_variables );
    var_closure_variables = NULL;

    Py_XDECREF( var_closure_copy );
    var_closure_copy = NULL;

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

    Py_XDECREF( var_asyncgen_object_body );
    var_asyncgen_object_body = NULL;

    Py_XDECREF( var_closure_variables );
    var_closure_variables = NULL;

    Py_XDECREF( var_closure_copy );
    var_closure_copy = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( codegen$AsyncgenCodes$$$function_3_generateMakeAsyncgenObjectCode );
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



static PyObject *MAKE_FUNCTION_codegen$AsyncgenCodes$$$function_1_getAsyncgenObjectDeclCode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codegen$AsyncgenCodes$$$function_1_getAsyncgenObjectDeclCode,
        const_str_plain_getAsyncgenObjectDeclCode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fd08bb123c126045cc11247603471f0e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_codegen$AsyncgenCodes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_codegen$AsyncgenCodes$$$function_2_getAsyncgenObjectCode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codegen$AsyncgenCodes$$$function_2_getAsyncgenObjectCode,
        const_str_plain_getAsyncgenObjectCode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fc252c1cf0d6d948a986e70303aa8afe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_codegen$AsyncgenCodes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_codegen$AsyncgenCodes$$$function_3_generateMakeAsyncgenObjectCode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codegen$AsyncgenCodes$$$function_3_generateMakeAsyncgenObjectCode,
        const_str_plain_generateMakeAsyncgenObjectCode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_199ff3bb68ee465c85d3dcb4f0730963,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_codegen$AsyncgenCodes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_codegen$AsyncgenCodes =
{
    PyModuleDef_HEAD_INIT,
    "codegen.AsyncgenCodes",   /* m_name */
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

MOD_INIT_DECL( codegen$AsyncgenCodes )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_codegen$AsyncgenCodes );
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
    puts("codegen.AsyncgenCodes: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("codegen.AsyncgenCodes: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("codegen.AsyncgenCodes: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcodegen$AsyncgenCodes" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_codegen$AsyncgenCodes = Py_InitModule4(
        "codegen.AsyncgenCodes",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_codegen$AsyncgenCodes = PyModule_Create( &mdef_codegen$AsyncgenCodes );
#endif

    moduledict_codegen$AsyncgenCodes = MODULE_DICT( module_codegen$AsyncgenCodes );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_codegen$AsyncgenCodes,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_codegen$AsyncgenCodes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_codegen$AsyncgenCodes,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_codegen$AsyncgenCodes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_codegen$AsyncgenCodes );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_ee1c4e43b97909bb0a2ff7c46a01535a, module_codegen$AsyncgenCodes );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
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
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_import_name_from_9;
    PyObject *tmp_import_name_from_10;
    PyObject *tmp_import_name_from_11;
    PyObject *tmp_import_name_from_12;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    struct Nuitka_FrameObject *frame_b7faa3a68c1a55063a885969b92580ac;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_44b5fbc6e11dbcfcf5e9111d4a3bf43c;
    UPDATE_STRING_DICT0( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_c5dba4c809f1ad2c291b89ca18d4954a;
    UPDATE_STRING_DICT0( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_b7faa3a68c1a55063a885969b92580ac = MAKE_MODULE_FRAME( codeobj_b7faa3a68c1a55063a885969b92580ac, module_codegen$AsyncgenCodes );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_b7faa3a68c1a55063a885969b92580ac );
    assert( Py_REFCNT( frame_b7faa3a68c1a55063a885969b92580ac ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_CodeHelpers;
    tmp_globals_name_1 = (PyObject *)moduledict_codegen$AsyncgenCodes;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_generateStatementSequenceCode_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_b7faa3a68c1a55063a885969b92580ac->m_frame.f_lineno = 22;
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


        exception_lineno = 22;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_generateStatementSequenceCode, tmp_assign_source_4 );
    tmp_name_name_2 = const_str_plain_Emission;
    tmp_globals_name_2 = (PyObject *)moduledict_codegen$AsyncgenCodes;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_SourceCodeCollector_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_b7faa3a68c1a55063a885969b92580ac->m_frame.f_lineno = 23;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_2 ) )
    {
       tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_2,
            (PyObject *)MODULE_DICT(tmp_import_name_from_2),
            const_str_plain_SourceCodeCollector,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_SourceCodeCollector );
    }

    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_SourceCodeCollector, tmp_assign_source_5 );
    tmp_name_name_3 = const_str_plain_FunctionCodes;
    tmp_globals_name_3 = (PyObject *)moduledict_codegen$AsyncgenCodes;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_c6047e60460261820ea9d27b9c1ef774_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_b7faa3a68c1a55063a885969b92580ac->m_frame.f_lineno = 24;
    tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_6;

    // Tried code:
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    if ( PyModule_Check( tmp_import_name_from_3 ) )
    {
       tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_3,
            (PyObject *)MODULE_DICT(tmp_import_name_from_3),
            const_str_plain_finalizeFunctionLocalVariables,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_finalizeFunctionLocalVariables );
    }

    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_finalizeFunctionLocalVariables, tmp_assign_source_7 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    if ( PyModule_Check( tmp_import_name_from_4 ) )
    {
       tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_4,
            (PyObject *)MODULE_DICT(tmp_import_name_from_4),
            const_str_plain_setupFunctionLocalVariables,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_setupFunctionLocalVariables );
    }

    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_setupFunctionLocalVariables, tmp_assign_source_8 );
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
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    tmp_name_name_4 = const_str_plain_GeneratorCodes;
    tmp_globals_name_4 = (PyObject *)moduledict_codegen$AsyncgenCodes;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_getClosureCopyCode_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_b7faa3a68c1a55063a885969b92580ac->m_frame.f_lineno = 28;
    tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_5 ) )
    {
       tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_5,
            (PyObject *)MODULE_DICT(tmp_import_name_from_5),
            const_str_plain_getClosureCopyCode,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_getClosureCopyCode );
    }

    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_getClosureCopyCode, tmp_assign_source_9 );
    tmp_name_name_5 = const_str_plain_Indentation;
    tmp_globals_name_5 = (PyObject *)moduledict_codegen$AsyncgenCodes;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_indented_tuple;
    tmp_level_name_5 = const_int_pos_1;
    frame_b7faa3a68c1a55063a885969b92580ac->m_frame.f_lineno = 29;
    tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_6 ) )
    {
       tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_6,
            (PyObject *)MODULE_DICT(tmp_import_name_from_6),
            const_str_plain_indented,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_indented );
    }

    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_indented, tmp_assign_source_10 );
    tmp_name_name_6 = const_str_digest_41c12069e282aa4de7e3295b0e1b67bc;
    tmp_globals_name_6 = (PyObject *)moduledict_codegen$AsyncgenCodes;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_fc0fb9ef29bd7ddc4317f44d4fdbd514_tuple;
    tmp_level_name_6 = const_int_pos_1;
    frame_b7faa3a68c1a55063a885969b92580ac->m_frame.f_lineno = 30;
    tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_11;

    // Tried code:
    tmp_import_name_from_7 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    if ( PyModule_Check( tmp_import_name_from_7 ) )
    {
       tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_7,
            (PyObject *)MODULE_DICT(tmp_import_name_from_7),
            const_str_plain_template_asyncgen_exception_exit,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_template_asyncgen_exception_exit );
    }

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_template_asyncgen_exception_exit, tmp_assign_source_12 );
    tmp_import_name_from_8 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    if ( PyModule_Check( tmp_import_name_from_8 ) )
    {
       tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_8,
            (PyObject *)MODULE_DICT(tmp_import_name_from_8),
            const_str_plain_template_asyncgen_noexception_exit,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_template_asyncgen_noexception_exit );
    }

    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_template_asyncgen_noexception_exit, tmp_assign_source_13 );
    tmp_import_name_from_9 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    if ( PyModule_Check( tmp_import_name_from_9 ) )
    {
       tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_9,
            (PyObject *)MODULE_DICT(tmp_import_name_from_9),
            const_str_plain_template_asyncgen_object_body_template,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_template_asyncgen_object_body_template );
    }

    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_template_asyncgen_object_body_template, tmp_assign_source_14 );
    tmp_import_name_from_10 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    if ( PyModule_Check( tmp_import_name_from_10 ) )
    {
       tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_10,
            (PyObject *)MODULE_DICT(tmp_import_name_from_10),
            const_str_plain_template_asyncgen_object_decl_template,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_template_asyncgen_object_decl_template );
    }

    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_template_asyncgen_object_decl_template, tmp_assign_source_15 );
    tmp_import_name_from_11 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    if ( PyModule_Check( tmp_import_name_from_11 ) )
    {
       tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_11,
            (PyObject *)MODULE_DICT(tmp_import_name_from_11),
            const_str_plain_template_asyncgen_return_exit,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_template_asyncgen_return_exit );
    }

    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_template_asyncgen_return_exit, tmp_assign_source_16 );
    tmp_import_name_from_12 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    if ( PyModule_Check( tmp_import_name_from_12 ) )
    {
       tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_12,
            (PyObject *)MODULE_DICT(tmp_import_name_from_12),
            const_str_plain_template_make_asyncgen_template,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_template_make_asyncgen_template );
    }

    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_template_make_asyncgen_template, tmp_assign_source_17 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7faa3a68c1a55063a885969b92580ac );
#endif
    popFrameStack();

    assertFrameObject( frame_b7faa3a68c1a55063a885969b92580ac );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b7faa3a68c1a55063a885969b92580ac );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b7faa3a68c1a55063a885969b92580ac, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b7faa3a68c1a55063a885969b92580ac->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b7faa3a68c1a55063a885969b92580ac, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    tmp_assign_source_18 = MAKE_FUNCTION_codegen$AsyncgenCodes$$$function_1_getAsyncgenObjectDeclCode(  );
    UPDATE_STRING_DICT1( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_getAsyncgenObjectDeclCode, tmp_assign_source_18 );
    tmp_assign_source_19 = MAKE_FUNCTION_codegen$AsyncgenCodes$$$function_2_getAsyncgenObjectCode(  );
    UPDATE_STRING_DICT1( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_getAsyncgenObjectCode, tmp_assign_source_19 );
    tmp_assign_source_20 = MAKE_FUNCTION_codegen$AsyncgenCodes$$$function_3_generateMakeAsyncgenObjectCode(  );
    UPDATE_STRING_DICT1( moduledict_codegen$AsyncgenCodes, (Nuitka_StringObject *)const_str_plain_generateMakeAsyncgenObjectCode, tmp_assign_source_20 );

    return MOD_RETURN_VALUE( module_codegen$AsyncgenCodes );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
