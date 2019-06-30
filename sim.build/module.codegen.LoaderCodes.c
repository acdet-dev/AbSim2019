/* Generated code for Python source for module 'codegen.LoaderCodes'
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

/* The _module_codegen$LoaderCodes is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_codegen$LoaderCodes;
PyDictObject *moduledict_codegen$LoaderCodes;

/* The module constants used, if any. */
extern PyObject *const_tuple_str_plain_indented_tuple;
extern PyObject *const_str_plain_flags;
static PyObject *const_str_digest_cc5a4434242c0ddc59866a06d08bcb86;
static PyObject *const_str_plain_NUITKA_BYTECODE_FLAG;
static PyObject *const_str_digest_3e56736f47e27718d3687a0da4bea2d2;
static PyObject *const_tuple_str_plain_getUncompiledNonTechnicalModules_tuple;
static PyObject *const_tuple_str_plain_NUITKA_PACKAGE_FLAG_tuple;
static PyObject *const_tuple_d45c6b8018e6e2a62264d4d3a730e20e_tuple;
extern PyObject *const_tuple_str_plain_ConstantCodes_tuple;
extern PyObject *const_str_digest_a880304eaba979f83ceede9eab4d9258;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_getByteCode;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_isPythonShlibModule;
extern PyObject *const_str_plain_isCompiledPythonPackage;
extern PyObject *const_str_plain_module_name;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_ff335fb943b4c67a41631fc9ea53ac5f_tuple;
extern PyObject *const_str_plain_isUncompiledPythonPackage;
extern PyObject *const_int_0;
static PyObject *const_tuple_d2b88c2d4d12f4b37be3a28e46e289d8_tuple;
extern PyObject *const_str_plain_template_metapath_loader_body;
extern PyObject *const_str_plain_ConstantCodes;
static PyObject *const_str_digest_0041ebd010cd709d50801ef2822f0bea;
static PyObject *const_str_digest_df2762eed8b377446e50a11527ddd20c;
extern PyObject *const_str_plain_bytecode;
extern PyObject *const_str_plain_getUncompiledNonTechnicalModules;
extern PyObject *const_str_digest_a3210846bc24ef2d00ca5413358af89f;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_getFullName;
extern PyObject *const_str_plain_getCodeName;
extern PyObject *const_str_plain_ModuleRegistry;
extern PyObject *const_str_plain_Indentation;
static PyObject *const_str_plain_metapath_module_decls;
extern PyObject *const_str_plain_getStreamDataOffset;
static PyObject *const_str_plain_NUITKA_PACKAGE_FLAG;
extern PyObject *const_str_plain_stream_data;
extern PyObject *const_str_plain_uncompiled_module;
extern PyObject *const_str_plain_isCompiledPythonModule;
extern PyObject *const_str_plain_module_identifier;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_09653370e403d35438983467ddedc0e8;
static PyObject *const_str_plain_other_module;
extern PyObject *const_str_plain_code_data;
static PyObject *const_str_plain_metapath_loader_inittab;
extern PyObject *const_str_plain_getMetapathLoaderBodyCode;
static PyObject *const_str_digest_88a79365d08c3db7e8c1c90f237d5a98;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_is_package;
static PyObject *const_str_digest_c7408fe70f6f3ed0c4be0c93dab0cc1c;
static PyObject *const_str_plain_getModuleMetapathLoaderEntryCode;
static PyObject *const_list_str_plain_NUITKA_BYTECODE_FLAG_list;
extern PyObject *const_str_plain___main__;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_isUncompiledPythonModule;
extern PyObject *const_str_digest_a4d9d63e1419807903f679aa4f18d454;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_other_modules;
extern PyObject *const_str_digest_3e12364e6eae797aad5331e1f9618e84;
extern PyObject *const_str_plain_is_shlib;
extern PyObject *const_str_plain_indented;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_cc5a4434242c0ddc59866a06d08bcb86 = UNSTREAM_STRING( &constant_bin[ 301178 ], 28, 0 );
    const_str_plain_NUITKA_BYTECODE_FLAG = UNSTREAM_STRING( &constant_bin[ 301206 ], 20, 1 );
    const_str_digest_3e56736f47e27718d3687a0da4bea2d2 = UNSTREAM_STRING( &constant_bin[ 301226 ], 20, 0 );
    const_tuple_str_plain_getUncompiledNonTechnicalModules_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_getUncompiledNonTechnicalModules_tuple, 0, const_str_plain_getUncompiledNonTechnicalModules ); Py_INCREF( const_str_plain_getUncompiledNonTechnicalModules );
    const_tuple_str_plain_NUITKA_PACKAGE_FLAG_tuple = PyTuple_New( 1 );
    const_str_plain_NUITKA_PACKAGE_FLAG = UNSTREAM_STRING( &constant_bin[ 301246 ], 19, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_NUITKA_PACKAGE_FLAG_tuple, 0, const_str_plain_NUITKA_PACKAGE_FLAG ); Py_INCREF( const_str_plain_NUITKA_PACKAGE_FLAG );
    const_tuple_d45c6b8018e6e2a62264d4d3a730e20e_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_d45c6b8018e6e2a62264d4d3a730e20e_tuple, 0, const_str_plain_module_name ); Py_INCREF( const_str_plain_module_name );
    PyTuple_SET_ITEM( const_tuple_d45c6b8018e6e2a62264d4d3a730e20e_tuple, 1, const_str_plain_module_identifier ); Py_INCREF( const_str_plain_module_identifier );
    PyTuple_SET_ITEM( const_tuple_d45c6b8018e6e2a62264d4d3a730e20e_tuple, 2, const_str_plain_is_shlib ); Py_INCREF( const_str_plain_is_shlib );
    PyTuple_SET_ITEM( const_tuple_d45c6b8018e6e2a62264d4d3a730e20e_tuple, 3, const_str_plain_is_package ); Py_INCREF( const_str_plain_is_package );
    const_tuple_ff335fb943b4c67a41631fc9ea53ac5f_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_ff335fb943b4c67a41631fc9ea53ac5f_tuple, 0, const_str_plain_other_modules ); Py_INCREF( const_str_plain_other_modules );
    const_str_plain_metapath_loader_inittab = UNSTREAM_STRING( &constant_bin[ 301265 ], 23, 1 );
    PyTuple_SET_ITEM( const_tuple_ff335fb943b4c67a41631fc9ea53ac5f_tuple, 1, const_str_plain_metapath_loader_inittab ); Py_INCREF( const_str_plain_metapath_loader_inittab );
    const_str_plain_metapath_module_decls = UNSTREAM_STRING( &constant_bin[ 301288 ], 21, 1 );
    PyTuple_SET_ITEM( const_tuple_ff335fb943b4c67a41631fc9ea53ac5f_tuple, 2, const_str_plain_metapath_module_decls ); Py_INCREF( const_str_plain_metapath_module_decls );
    const_str_plain_other_module = UNSTREAM_STRING( &constant_bin[ 301309 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_ff335fb943b4c67a41631fc9ea53ac5f_tuple, 3, const_str_plain_other_module ); Py_INCREF( const_str_plain_other_module );
    PyTuple_SET_ITEM( const_tuple_ff335fb943b4c67a41631fc9ea53ac5f_tuple, 4, const_str_plain_code_data ); Py_INCREF( const_str_plain_code_data );
    PyTuple_SET_ITEM( const_tuple_ff335fb943b4c67a41631fc9ea53ac5f_tuple, 5, const_str_plain_is_package ); Py_INCREF( const_str_plain_is_package );
    PyTuple_SET_ITEM( const_tuple_ff335fb943b4c67a41631fc9ea53ac5f_tuple, 6, const_str_plain_flags ); Py_INCREF( const_str_plain_flags );
    PyTuple_SET_ITEM( const_tuple_ff335fb943b4c67a41631fc9ea53ac5f_tuple, 7, const_str_plain_uncompiled_module ); Py_INCREF( const_str_plain_uncompiled_module );
    const_tuple_d2b88c2d4d12f4b37be3a28e46e289d8_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_d2b88c2d4d12f4b37be3a28e46e289d8_tuple, 0, const_str_plain_template_metapath_loader_body ); Py_INCREF( const_str_plain_template_metapath_loader_body );
    PyTuple_SET_ITEM( const_tuple_d2b88c2d4d12f4b37be3a28e46e289d8_tuple, 1, const_str_digest_a3210846bc24ef2d00ca5413358af89f ); Py_INCREF( const_str_digest_a3210846bc24ef2d00ca5413358af89f );
    PyTuple_SET_ITEM( const_tuple_d2b88c2d4d12f4b37be3a28e46e289d8_tuple, 2, const_str_digest_a880304eaba979f83ceede9eab4d9258 ); Py_INCREF( const_str_digest_a880304eaba979f83ceede9eab4d9258 );
    PyTuple_SET_ITEM( const_tuple_d2b88c2d4d12f4b37be3a28e46e289d8_tuple, 3, const_str_digest_a4d9d63e1419807903f679aa4f18d454 ); Py_INCREF( const_str_digest_a4d9d63e1419807903f679aa4f18d454 );
    PyTuple_SET_ITEM( const_tuple_d2b88c2d4d12f4b37be3a28e46e289d8_tuple, 4, const_str_digest_09653370e403d35438983467ddedc0e8 ); Py_INCREF( const_str_digest_09653370e403d35438983467ddedc0e8 );
    const_str_digest_0041ebd010cd709d50801ef2822f0bea = UNSTREAM_STRING( &constant_bin[ 301321 ], 29, 0 );
    const_str_digest_df2762eed8b377446e50a11527ddd20c = UNSTREAM_STRING( &constant_bin[ 301350 ], 155, 0 );
    const_str_digest_88a79365d08c3db7e8c1c90f237d5a98 = UNSTREAM_STRING( &constant_bin[ 301505 ], 104, 0 );
    const_str_digest_c7408fe70f6f3ed0c4be0c93dab0cc1c = UNSTREAM_STRING( &constant_bin[ 301186 ], 19, 0 );
    const_str_plain_getModuleMetapathLoaderEntryCode = UNSTREAM_STRING( &constant_bin[ 301609 ], 32, 1 );
    const_list_str_plain_NUITKA_BYTECODE_FLAG_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_NUITKA_BYTECODE_FLAG_list, 0, const_str_plain_NUITKA_BYTECODE_FLAG ); Py_INCREF( const_str_plain_NUITKA_BYTECODE_FLAG );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_codegen$LoaderCodes( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_19bc346fbb3170c81bd81625d102f705;
static PyCodeObject *codeobj_03bdb18922b0edfa5e2ae45814d13f0e;
static PyCodeObject *codeobj_530ee71509b7f314d180aec2958ad7a9;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_88a79365d08c3db7e8c1c90f237d5a98;
    codeobj_19bc346fbb3170c81bd81625d102f705 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_cc5a4434242c0ddc59866a06d08bcb86, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_03bdb18922b0edfa5e2ae45814d13f0e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getMetapathLoaderBodyCode, 61, const_tuple_ff335fb943b4c67a41631fc9ea53ac5f_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_530ee71509b7f314d180aec2958ad7a9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getModuleMetapathLoaderEntryCode, 38, const_tuple_d45c6b8018e6e2a62264d4d3a730e20e_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_codegen$LoaderCodes$$$function_1_getModuleMetapathLoaderEntryCode(  );


static PyObject *MAKE_FUNCTION_codegen$LoaderCodes$$$function_2_getMetapathLoaderBodyCode(  );


// The module function definitions.
static PyObject *impl_codegen$LoaderCodes$$$function_1_getModuleMetapathLoaderEntryCode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_module_name = python_pars[ 0 ];
    PyObject *par_module_identifier = python_pars[ 1 ];
    PyObject *par_is_shlib = python_pars[ 2 ];
    PyObject *par_is_package = python_pars[ 3 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    static struct Nuitka_FrameObject *cache_frame_530ee71509b7f314d180aec2958ad7a9 = NULL;

    struct Nuitka_FrameObject *frame_530ee71509b7f314d180aec2958ad7a9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_530ee71509b7f314d180aec2958ad7a9, codeobj_530ee71509b7f314d180aec2958ad7a9, module_codegen$LoaderCodes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_530ee71509b7f314d180aec2958ad7a9 = cache_frame_530ee71509b7f314d180aec2958ad7a9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_530ee71509b7f314d180aec2958ad7a9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_530ee71509b7f314d180aec2958ad7a9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_cond_value_1 = par_is_shlib;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "oooo";
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
    tmp_compare_left_1 = par_module_name;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_str_plain___main__;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_raise_type_1 = PyExc_AssertionError;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 41;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_cond_value_2 = par_is_package;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "is_package" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_raise_type_2 = PyExc_AssertionError;
    exception_type = tmp_raise_type_2;
    Py_INCREF( tmp_raise_type_2 );
    exception_lineno = 42;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_left_name_1 = GET_STRING_DICT_VALUE( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_digest_09653370e403d35438983467ddedc0e8 );

    if (unlikely( tmp_left_name_1 == NULL ))
    {
        tmp_left_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_digest_09653370e403d35438983467ddedc0e8 );
    }

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "template_metapath_loader_shlib_module_entry" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_module_name;
    tmp_dict_value_1 = par_module_name;

    if ( tmp_dict_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "module_name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_right_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_cond_value_3 = par_is_package;

    CHECK_OBJECT( tmp_cond_value_3 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_left_name_2 = GET_STRING_DICT_VALUE( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_digest_a4d9d63e1419807903f679aa4f18d454 );

    if (unlikely( tmp_left_name_2 == NULL ))
    {
        tmp_left_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_digest_a4d9d63e1419807903f679aa4f18d454 );
    }

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "template_metapath_loader_compiled_package_entry" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain_module_name;
    tmp_dict_value_2 = par_module_name;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_right_name_2 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_right_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_module_identifier;
    tmp_dict_value_3 = par_module_identifier;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_res = PyDict_SetItem( tmp_right_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_4;
    branch_no_4:;
    tmp_left_name_3 = GET_STRING_DICT_VALUE( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_digest_a880304eaba979f83ceede9eab4d9258 );

    if (unlikely( tmp_left_name_3 == NULL ))
    {
        tmp_left_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_digest_a880304eaba979f83ceede9eab4d9258 );
    }

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "template_metapath_loader_compiled_module_entry" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain_module_name;
    tmp_dict_value_4 = par_module_name;

    CHECK_OBJECT( tmp_dict_value_4 );
    tmp_right_name_3 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_right_name_3, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_module_identifier;
    tmp_dict_value_5 = par_module_identifier;

    CHECK_OBJECT( tmp_dict_value_5 );
    tmp_res = PyDict_SetItem( tmp_right_name_3, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_4:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_530ee71509b7f314d180aec2958ad7a9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_530ee71509b7f314d180aec2958ad7a9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_530ee71509b7f314d180aec2958ad7a9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_530ee71509b7f314d180aec2958ad7a9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_530ee71509b7f314d180aec2958ad7a9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_530ee71509b7f314d180aec2958ad7a9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_530ee71509b7f314d180aec2958ad7a9,
        type_description_1,
        par_module_name,
        par_module_identifier,
        par_is_shlib,
        par_is_package
    );


    // Release cached frame.
    if ( frame_530ee71509b7f314d180aec2958ad7a9 == cache_frame_530ee71509b7f314d180aec2958ad7a9 )
    {
        Py_DECREF( frame_530ee71509b7f314d180aec2958ad7a9 );
    }
    cache_frame_530ee71509b7f314d180aec2958ad7a9 = NULL;

    assertFrameObject( frame_530ee71509b7f314d180aec2958ad7a9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codegen$LoaderCodes$$$function_1_getModuleMetapathLoaderEntryCode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_module_name );
    par_module_name = NULL;

    Py_XDECREF( par_module_identifier );
    par_module_identifier = NULL;

    Py_XDECREF( par_is_shlib );
    par_is_shlib = NULL;

    Py_XDECREF( par_is_package );
    par_is_package = NULL;

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

    Py_XDECREF( par_module_name );
    par_module_name = NULL;

    Py_XDECREF( par_module_identifier );
    par_module_identifier = NULL;

    Py_XDECREF( par_is_shlib );
    par_is_shlib = NULL;

    Py_XDECREF( par_is_package );
    par_is_package = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( codegen$LoaderCodes$$$function_1_getModuleMetapathLoaderEntryCode );
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


static PyObject *impl_codegen$LoaderCodes$$$function_2_getMetapathLoaderBodyCode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_other_modules = python_pars[ 0 ];
    PyObject *var_metapath_loader_inittab = NULL;
    PyObject *var_metapath_module_decls = NULL;
    PyObject *var_other_module = NULL;
    PyObject *var_code_data = NULL;
    PyObject *var_is_package = NULL;
    PyObject *var_flags = NULL;
    PyObject *var_uncompiled_module = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_instance_7;
    PyObject *tmp_called_instance_8;
    PyObject *tmp_called_instance_9;
    PyObject *tmp_called_instance_10;
    PyObject *tmp_called_instance_11;
    PyObject *tmp_called_instance_12;
    PyObject *tmp_called_instance_13;
    PyObject *tmp_called_instance_14;
    PyObject *tmp_called_instance_15;
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
    PyObject *tmp_called_name_12;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
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
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    PyObject *tmp_value_name_2;
    static struct Nuitka_FrameObject *cache_frame_03bdb18922b0edfa5e2ae45814d13f0e = NULL;

    struct Nuitka_FrameObject *frame_03bdb18922b0edfa5e2ae45814d13f0e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_metapath_loader_inittab == NULL );
    var_metapath_loader_inittab = tmp_assign_source_1;

    tmp_assign_source_2 = PyList_New( 0 );
    assert( var_metapath_module_decls == NULL );
    var_metapath_module_decls = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_03bdb18922b0edfa5e2ae45814d13f0e, codeobj_03bdb18922b0edfa5e2ae45814d13f0e, module_codegen$LoaderCodes, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_03bdb18922b0edfa5e2ae45814d13f0e = cache_frame_03bdb18922b0edfa5e2ae45814d13f0e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_03bdb18922b0edfa5e2ae45814d13f0e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_03bdb18922b0edfa5e2ae45814d13f0e ) == 2 ); // Frame stack

    // Framed code:
    tmp_iter_arg_1 = par_other_modules;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_3;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_4 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_4 == NULL )
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


        type_description_1 = "oooooooo";
        exception_lineno = 65;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_4;
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

        exception_lineno = 65;
        type_description_1 = "oooooooo";
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
    tmp_assign_source_5 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_5 );
    {
        PyObject *old = var_other_module;
        var_other_module = tmp_assign_source_5;
        Py_INCREF( var_other_module );
        Py_XDECREF( old );
    }

    tmp_called_instance_1 = var_other_module;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_03bdb18922b0edfa5e2ae45814d13f0e->m_frame.f_lineno = 66;
    tmp_cond_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_isUncompiledPythonModule );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 66;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
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
    tmp_called_instance_2 = var_other_module;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "other_module" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 67;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    frame_03bdb18922b0edfa5e2ae45814d13f0e->m_frame.f_lineno = 67;
    tmp_assign_source_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_getByteCode );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_code_data;
        var_code_data = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_called_instance_3 = var_other_module;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "other_module" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    frame_03bdb18922b0edfa5e2ae45814d13f0e->m_frame.f_lineno = 68;
    tmp_assign_source_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_isUncompiledPythonPackage );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_is_package;
        var_is_package = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_assign_source_8 = LIST_COPY( const_list_str_plain_NUITKA_BYTECODE_FLAG_list );
    {
        PyObject *old = var_flags;
        var_flags = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_cond_value_2 = var_is_package;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_instance_4 = var_flags;

    CHECK_OBJECT( tmp_called_instance_4 );
    frame_03bdb18922b0edfa5e2ae45814d13f0e->m_frame.f_lineno = 72;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_append, &PyTuple_GET_ITEM( const_tuple_str_plain_NUITKA_PACKAGE_FLAG_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    tmp_source_name_1 = var_metapath_loader_inittab;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "metapath_loader_inittab" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 74;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_left_name_1 = GET_STRING_DICT_VALUE( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_digest_a3210846bc24ef2d00ca5413358af89f );

    if (unlikely( tmp_left_name_1 == NULL ))
    {
        tmp_left_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_digest_a3210846bc24ef2d00ca5413358af89f );
    }

    if ( tmp_left_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "template_metapath_loader_bytecode_module_entry" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 75;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_dict_key_1 = const_str_plain_module_name;
    tmp_called_instance_5 = var_other_module;

    if ( tmp_called_instance_5 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "other_module" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 76;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    frame_03bdb18922b0edfa5e2ae45814d13f0e->m_frame.f_lineno = 76;
    tmp_dict_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_getFullName );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 76;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_right_name_1 = _PyDict_NewPresized( 4 );
    tmp_res = PyDict_SetItem( tmp_right_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_bytecode;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_plain_stream_data );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_stream_data );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "stream_data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_getStreamDataOffset );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 77;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_2 = var_code_data;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_right_name_1 );
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "code_data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    frame_03bdb18922b0edfa5e2ae45814d13f0e->m_frame.f_lineno = 77;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 77;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_res = PyDict_SetItem( tmp_right_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_size;
    tmp_len_arg_1 = var_code_data;

    if ( tmp_len_arg_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "code_data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_dict_value_3 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 78;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_res = PyDict_SetItem( tmp_right_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_flags;
    tmp_source_name_3 = const_str_digest_3e12364e6eae797aad5331e1f9618e84;
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_join );
    assert( !(tmp_called_name_3 == NULL) );
    tmp_args_element_name_3 = var_flags;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_right_name_1 );
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "flags" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 79;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    frame_03bdb18922b0edfa5e2ae45814d13f0e->m_frame.f_lineno = 79;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_dict_value_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 79;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_res = PyDict_SetItem( tmp_right_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 75;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    frame_03bdb18922b0edfa5e2ae45814d13f0e->m_frame.f_lineno = 74;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_4 = var_metapath_loader_inittab;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "metapath_loader_inittab" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_plain_getModuleMetapathLoaderEntryCode );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getModuleMetapathLoaderEntryCode );
    }

    if ( tmp_called_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getModuleMetapathLoaderEntryCode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 84;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_dict_key_5 = const_str_plain_module_name;
    tmp_called_instance_6 = var_other_module;

    if ( tmp_called_instance_6 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "other_module" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    frame_03bdb18922b0edfa5e2ae45814d13f0e->m_frame.f_lineno = 85;
    tmp_dict_value_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_getFullName );
    if ( tmp_dict_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 85;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 4 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
    Py_DECREF( tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain_module_identifier;
    tmp_called_instance_7 = var_other_module;

    if ( tmp_called_instance_7 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "other_module" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 86;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    frame_03bdb18922b0edfa5e2ae45814d13f0e->m_frame.f_lineno = 86;
    tmp_dict_value_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_getCodeName );
    if ( tmp_dict_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 86;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_7 = const_str_plain_is_shlib;
    tmp_called_instance_8 = var_other_module;

    if ( tmp_called_instance_8 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "other_module" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    frame_03bdb18922b0edfa5e2ae45814d13f0e->m_frame.f_lineno = 87;
    tmp_dict_value_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_8, const_str_plain_isPythonShlibModule );
    if ( tmp_dict_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 87;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_8 = const_str_plain_is_package;
    tmp_called_instance_9 = var_other_module;

    if ( tmp_called_instance_9 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "other_module" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    frame_03bdb18922b0edfa5e2ae45814d13f0e->m_frame.f_lineno = 88;
    tmp_dict_value_8 = CALL_METHOD_NO_ARGS( tmp_called_instance_9, const_str_plain_isCompiledPythonPackage );
    if ( tmp_dict_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 88;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_8, tmp_dict_value_8 );
    Py_DECREF( tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    frame_03bdb18922b0edfa5e2ae45814d13f0e->m_frame.f_lineno = 84;
    tmp_args_element_name_4 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_5, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 84;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    frame_03bdb18922b0edfa5e2ae45814d13f0e->m_frame.f_lineno = 83;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_end_2:;
    tmp_called_instance_10 = var_other_module;

    if ( tmp_called_instance_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "other_module" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    frame_03bdb18922b0edfa5e2ae45814d13f0e->m_frame.f_lineno = 92;
    tmp_cond_value_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_10, const_str_plain_isCompiledPythonModule );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 92;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_5 = var_metapath_module_decls;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "metapath_module_decls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 93;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_append );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_left_name_2 = const_str_digest_3e56736f47e27718d3687a0da4bea2d2;
    tmp_called_instance_11 = var_other_module;

    if ( tmp_called_instance_11 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "other_module" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 94;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    frame_03bdb18922b0edfa5e2ae45814d13f0e->m_frame.f_lineno = 94;
    tmp_right_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_11, const_str_plain_getCodeName );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 94;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_5 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 94;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    frame_03bdb18922b0edfa5e2ae45814d13f0e->m_frame.f_lineno = 93;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_4:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        type_description_1 = "oooooooo";
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

    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_plain_getUncompiledNonTechnicalModules );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getUncompiledNonTechnicalModules );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "getUncompiledNonTechnicalModules" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_03bdb18922b0edfa5e2ae45814d13f0e->m_frame.f_lineno = 97;
    tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_7 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_9;

    // Tried code:
    loop_start_2:;
    // Tried code:
    tmp_value_name_2 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_value_name_2 );
    tmp_assign_source_10 = ITERATOR_NEXT( tmp_value_name_2 );
    if ( tmp_assign_source_10 == NULL )
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


        type_description_1 = "oooooooo";
        exception_lineno = 97;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_2 = exception_keeper_type_3;
    tmp_compare_right_2 = PyExc_StopIteration;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_3 );
        Py_XDECREF( exception_keeper_value_3 );
        Py_XDECREF( exception_keeper_tb_3 );

        exception_lineno = 97;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    Py_DECREF( exception_keeper_type_3 );
    Py_XDECREF( exception_keeper_value_3 );
    Py_XDECREF( exception_keeper_tb_3 );
    goto loop_end_2;
    goto branch_end_5;
    branch_no_5:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    branch_end_5:;
    // End of try:
    try_end_3:;
    tmp_assign_source_11 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_assign_source_11 );
    {
        PyObject *old = var_uncompiled_module;
        var_uncompiled_module = tmp_assign_source_11;
        Py_INCREF( var_uncompiled_module );
        Py_XDECREF( old );
    }

    tmp_called_instance_12 = var_uncompiled_module;

    CHECK_OBJECT( tmp_called_instance_12 );
    frame_03bdb18922b0edfa5e2ae45814d13f0e->m_frame.f_lineno = 98;
    tmp_assign_source_12 = CALL_METHOD_NO_ARGS( tmp_called_instance_12, const_str_plain_getByteCode );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = var_code_data;
        var_code_data = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    tmp_called_instance_13 = var_uncompiled_module;

    if ( tmp_called_instance_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "uncompiled_module" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 99;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    frame_03bdb18922b0edfa5e2ae45814d13f0e->m_frame.f_lineno = 99;
    tmp_assign_source_13 = CALL_METHOD_NO_ARGS( tmp_called_instance_13, const_str_plain_isUncompiledPythonPackage );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = var_is_package;
        var_is_package = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_assign_source_14 = LIST_COPY( const_list_str_plain_NUITKA_BYTECODE_FLAG_list );
    {
        PyObject *old = var_flags;
        var_flags = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    tmp_cond_value_4 = var_is_package;

    CHECK_OBJECT( tmp_cond_value_4 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_instance_14 = var_flags;

    CHECK_OBJECT( tmp_called_instance_14 );
    frame_03bdb18922b0edfa5e2ae45814d13f0e->m_frame.f_lineno = 103;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_14, const_str_plain_append, &PyTuple_GET_ITEM( const_tuple_str_plain_NUITKA_PACKAGE_FLAG_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    tmp_source_name_6 = var_metapath_loader_inittab;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "metapath_loader_inittab" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 105;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_append );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    tmp_left_name_3 = GET_STRING_DICT_VALUE( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_digest_a3210846bc24ef2d00ca5413358af89f );

    if (unlikely( tmp_left_name_3 == NULL ))
    {
        tmp_left_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_digest_a3210846bc24ef2d00ca5413358af89f );
    }

    if ( tmp_left_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "template_metapath_loader_bytecode_module_entry" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 106;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    tmp_dict_key_9 = const_str_plain_module_name;
    tmp_called_instance_15 = var_uncompiled_module;

    if ( tmp_called_instance_15 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "uncompiled_module" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    frame_03bdb18922b0edfa5e2ae45814d13f0e->m_frame.f_lineno = 107;
    tmp_dict_value_9 = CALL_METHOD_NO_ARGS( tmp_called_instance_15, const_str_plain_getFullName );
    if ( tmp_dict_value_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 107;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    tmp_right_name_3 = _PyDict_NewPresized( 4 );
    tmp_res = PyDict_SetItem( tmp_right_name_3, tmp_dict_key_9, tmp_dict_value_9 );
    Py_DECREF( tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_10 = const_str_plain_bytecode;
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_plain_stream_data );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_stream_data );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_right_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "stream_data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_getStreamDataOffset );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 108;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    tmp_args_element_name_7 = var_code_data;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_right_name_3 );
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "code_data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 108;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    frame_03bdb18922b0edfa5e2ae45814d13f0e->m_frame.f_lineno = 108;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_dict_value_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_dict_value_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 108;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    tmp_res = PyDict_SetItem( tmp_right_name_3, tmp_dict_key_10, tmp_dict_value_10 );
    Py_DECREF( tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_11 = const_str_plain_size;
    tmp_len_arg_2 = var_code_data;

    if ( tmp_len_arg_2 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_right_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "code_data" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 109;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    tmp_dict_value_11 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_dict_value_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 109;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    tmp_res = PyDict_SetItem( tmp_right_name_3, tmp_dict_key_11, tmp_dict_value_11 );
    Py_DECREF( tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_12 = const_str_plain_flags;
    tmp_source_name_8 = const_str_digest_3e12364e6eae797aad5331e1f9618e84;
    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_join );
    assert( !(tmp_called_name_10 == NULL) );
    tmp_args_element_name_8 = var_flags;

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_right_name_3 );
        Py_DECREF( tmp_called_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "flags" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 110;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }

    frame_03bdb18922b0edfa5e2ae45814d13f0e->m_frame.f_lineno = 110;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_dict_value_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    if ( tmp_dict_value_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 110;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    tmp_res = PyDict_SetItem( tmp_right_name_3, tmp_dict_key_12, tmp_dict_value_12 );
    Py_DECREF( tmp_dict_value_12 );
    assert( !(tmp_res != 0) );
    tmp_args_element_name_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 106;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    frame_03bdb18922b0edfa5e2ae45814d13f0e->m_frame.f_lineno = 105;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_left_name_4 = GET_STRING_DICT_VALUE( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_plain_template_metapath_loader_body );

    if (unlikely( tmp_left_name_4 == NULL ))
    {
        tmp_left_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_template_metapath_loader_body );
    }

    if ( tmp_left_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "template_metapath_loader_body" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_13 = const_str_plain_metapath_module_decls;
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_plain_indented );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_indented );
    }

    if ( tmp_called_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "indented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 116;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = var_metapath_module_decls;

    if ( tmp_args_element_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "metapath_module_decls" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 116;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = const_int_0;
    frame_03bdb18922b0edfa5e2ae45814d13f0e->m_frame.f_lineno = 116;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_dict_value_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
    }

    if ( tmp_dict_value_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_right_name_4, tmp_dict_key_13, tmp_dict_value_13 );
    Py_DECREF( tmp_dict_value_13 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_14 = const_str_plain_metapath_loader_inittab;
    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_plain_indented );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_indented );
    }

    if ( tmp_called_name_12 == NULL )
    {
        Py_DECREF( tmp_right_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "indented" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = var_metapath_loader_inittab;

    if ( tmp_args_element_name_11 == NULL )
    {
        Py_DECREF( tmp_right_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "metapath_loader_inittab" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    frame_03bdb18922b0edfa5e2ae45814d13f0e->m_frame.f_lineno = 117;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_dict_value_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    if ( tmp_dict_value_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_4 );

        exception_lineno = 117;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_right_name_4, tmp_dict_key_14, tmp_dict_value_14 );
    Py_DECREF( tmp_dict_value_14 );
    assert( !(tmp_res != 0) );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_03bdb18922b0edfa5e2ae45814d13f0e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_03bdb18922b0edfa5e2ae45814d13f0e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_03bdb18922b0edfa5e2ae45814d13f0e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_03bdb18922b0edfa5e2ae45814d13f0e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_03bdb18922b0edfa5e2ae45814d13f0e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_03bdb18922b0edfa5e2ae45814d13f0e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_03bdb18922b0edfa5e2ae45814d13f0e,
        type_description_1,
        par_other_modules,
        var_metapath_loader_inittab,
        var_metapath_module_decls,
        var_other_module,
        var_code_data,
        var_is_package,
        var_flags,
        var_uncompiled_module
    );


    // Release cached frame.
    if ( frame_03bdb18922b0edfa5e2ae45814d13f0e == cache_frame_03bdb18922b0edfa5e2ae45814d13f0e )
    {
        Py_DECREF( frame_03bdb18922b0edfa5e2ae45814d13f0e );
    }
    cache_frame_03bdb18922b0edfa5e2ae45814d13f0e = NULL;

    assertFrameObject( frame_03bdb18922b0edfa5e2ae45814d13f0e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( codegen$LoaderCodes$$$function_2_getMetapathLoaderBodyCode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_other_modules );
    par_other_modules = NULL;

    Py_XDECREF( var_metapath_loader_inittab );
    var_metapath_loader_inittab = NULL;

    Py_XDECREF( var_metapath_module_decls );
    var_metapath_module_decls = NULL;

    Py_XDECREF( var_other_module );
    var_other_module = NULL;

    Py_XDECREF( var_code_data );
    var_code_data = NULL;

    Py_XDECREF( var_is_package );
    var_is_package = NULL;

    Py_XDECREF( var_flags );
    var_flags = NULL;

    Py_XDECREF( var_uncompiled_module );
    var_uncompiled_module = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_other_modules );
    par_other_modules = NULL;

    Py_XDECREF( var_metapath_loader_inittab );
    var_metapath_loader_inittab = NULL;

    Py_XDECREF( var_metapath_module_decls );
    var_metapath_module_decls = NULL;

    Py_XDECREF( var_other_module );
    var_other_module = NULL;

    Py_XDECREF( var_code_data );
    var_code_data = NULL;

    Py_XDECREF( var_is_package );
    var_is_package = NULL;

    Py_XDECREF( var_flags );
    var_flags = NULL;

    Py_XDECREF( var_uncompiled_module );
    var_uncompiled_module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( codegen$LoaderCodes$$$function_2_getMetapathLoaderBodyCode );
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



static PyObject *MAKE_FUNCTION_codegen$LoaderCodes$$$function_1_getModuleMetapathLoaderEntryCode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codegen$LoaderCodes$$$function_1_getModuleMetapathLoaderEntryCode,
        const_str_plain_getModuleMetapathLoaderEntryCode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_530ee71509b7f314d180aec2958ad7a9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_codegen$LoaderCodes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_codegen$LoaderCodes$$$function_2_getMetapathLoaderBodyCode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_codegen$LoaderCodes$$$function_2_getMetapathLoaderBodyCode,
        const_str_plain_getMetapathLoaderBodyCode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_03bdb18922b0edfa5e2ae45814d13f0e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_codegen$LoaderCodes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_codegen$LoaderCodes =
{
    PyModuleDef_HEAD_INIT,
    "codegen.LoaderCodes",   /* m_name */
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

MOD_INIT_DECL( codegen$LoaderCodes )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_codegen$LoaderCodes );
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
    puts("codegen.LoaderCodes: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("codegen.LoaderCodes: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("codegen.LoaderCodes: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcodegen$LoaderCodes" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_codegen$LoaderCodes = Py_InitModule4(
        "codegen.LoaderCodes",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_codegen$LoaderCodes = PyModule_Create( &mdef_codegen$LoaderCodes );
#endif

    moduledict_codegen$LoaderCodes = MODULE_DICT( module_codegen$LoaderCodes );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_codegen$LoaderCodes,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_codegen$LoaderCodes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_codegen$LoaderCodes,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_codegen$LoaderCodes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_codegen$LoaderCodes );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_c7408fe70f6f3ed0c4be0c93dab0cc1c, module_codegen$LoaderCodes );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_assign_source_15;
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
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
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
    PyObject *tmp_source_name_1;
    struct Nuitka_FrameObject *frame_19bc346fbb3170c81bd81625d102f705;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_df2762eed8b377446e50a11527ddd20c;
    UPDATE_STRING_DICT0( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_88a79365d08c3db7e8c1c90f237d5a98;
    UPDATE_STRING_DICT0( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_19bc346fbb3170c81bd81625d102f705 = MAKE_MODULE_FRAME( codeobj_19bc346fbb3170c81bd81625d102f705, module_codegen$LoaderCodes );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_19bc346fbb3170c81bd81625d102f705 );
    assert( Py_REFCNT( frame_19bc346fbb3170c81bd81625d102f705 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_ModuleRegistry;
    tmp_globals_name_1 = (PyObject *)moduledict_codegen$LoaderCodes;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_getUncompiledNonTechnicalModules_tuple;
    tmp_level_name_1 = const_int_0;
    frame_19bc346fbb3170c81bd81625d102f705->m_frame.f_lineno = 25;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_getUncompiledNonTechnicalModules );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_plain_getUncompiledNonTechnicalModules, tmp_assign_source_4 );
    tmp_name_name_2 = const_str_empty;
    tmp_globals_name_2 = (PyObject *)moduledict_codegen$LoaderCodes;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_ConstantCodes_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_19bc346fbb3170c81bd81625d102f705->m_frame.f_lineno = 27;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_2 ) )
    {
       tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_2,
            (PyObject *)MODULE_DICT(tmp_import_name_from_2),
            const_str_plain_ConstantCodes,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_ConstantCodes );
    }

    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_plain_ConstantCodes, tmp_assign_source_5 );
    tmp_name_name_3 = const_str_plain_Indentation;
    tmp_globals_name_3 = (PyObject *)moduledict_codegen$LoaderCodes;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_indented_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_19bc346fbb3170c81bd81625d102f705->m_frame.f_lineno = 28;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_3 ) )
    {
       tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_3,
            (PyObject *)MODULE_DICT(tmp_import_name_from_3),
            const_str_plain_indented,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_indented );
    }

    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_plain_indented, tmp_assign_source_6 );
    tmp_name_name_4 = const_str_digest_0041ebd010cd709d50801ef2822f0bea;
    tmp_globals_name_4 = (PyObject *)moduledict_codegen$LoaderCodes;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_d2b88c2d4d12f4b37be3a28e46e289d8_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_19bc346fbb3170c81bd81625d102f705->m_frame.f_lineno = 29;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

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
            const_str_plain_template_metapath_loader_body,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_template_metapath_loader_body );
    }

    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_plain_template_metapath_loader_body, tmp_assign_source_8 );
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    if ( PyModule_Check( tmp_import_name_from_5 ) )
    {
       tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_5,
            (PyObject *)MODULE_DICT(tmp_import_name_from_5),
            const_str_digest_a3210846bc24ef2d00ca5413358af89f,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_digest_a3210846bc24ef2d00ca5413358af89f );
    }

    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_digest_a3210846bc24ef2d00ca5413358af89f, tmp_assign_source_9 );
    tmp_import_name_from_6 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    if ( PyModule_Check( tmp_import_name_from_6 ) )
    {
       tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_6,
            (PyObject *)MODULE_DICT(tmp_import_name_from_6),
            const_str_digest_a880304eaba979f83ceede9eab4d9258,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_6, const_str_digest_a880304eaba979f83ceede9eab4d9258 );
    }

    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_digest_a880304eaba979f83ceede9eab4d9258, tmp_assign_source_10 );
    tmp_import_name_from_7 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    if ( PyModule_Check( tmp_import_name_from_7 ) )
    {
       tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_7,
            (PyObject *)MODULE_DICT(tmp_import_name_from_7),
            const_str_digest_a4d9d63e1419807903f679aa4f18d454,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_7, const_str_digest_a4d9d63e1419807903f679aa4f18d454 );
    }

    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_digest_a4d9d63e1419807903f679aa4f18d454, tmp_assign_source_11 );
    tmp_import_name_from_8 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    if ( PyModule_Check( tmp_import_name_from_8 ) )
    {
       tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_8,
            (PyObject *)MODULE_DICT(tmp_import_name_from_8),
            const_str_digest_09653370e403d35438983467ddedc0e8,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_8, const_str_digest_09653370e403d35438983467ddedc0e8 );
    }

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_digest_09653370e403d35438983467ddedc0e8, tmp_assign_source_12 );
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

    tmp_assign_source_13 = MAKE_FUNCTION_codegen$LoaderCodes$$$function_1_getModuleMetapathLoaderEntryCode(  );
    UPDATE_STRING_DICT1( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_plain_getModuleMetapathLoaderEntryCode, tmp_assign_source_13 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_plain_ConstantCodes );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConstantCodes );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ConstantCodes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_14 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_stream_data );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_plain_stream_data, tmp_assign_source_14 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_19bc346fbb3170c81bd81625d102f705 );
#endif
    popFrameStack();

    assertFrameObject( frame_19bc346fbb3170c81bd81625d102f705 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_19bc346fbb3170c81bd81625d102f705 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_19bc346fbb3170c81bd81625d102f705, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_19bc346fbb3170c81bd81625d102f705->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_19bc346fbb3170c81bd81625d102f705, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_15 = MAKE_FUNCTION_codegen$LoaderCodes$$$function_2_getMetapathLoaderBodyCode(  );
    UPDATE_STRING_DICT1( moduledict_codegen$LoaderCodes, (Nuitka_StringObject *)const_str_plain_getMetapathLoaderBodyCode, tmp_assign_source_15 );

    return MOD_RETURN_VALUE( module_codegen$LoaderCodes );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
