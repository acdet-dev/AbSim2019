/* Generated code for Python source for module 'unittest'
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

/* The _module_unittest is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_unittest;
PyDictObject *moduledict_unittest;

/* The module constants used, if any. */
static PyObject *const_tuple_str_plain_TestProgram_str_plain_main_tuple;
static PyObject *const_tuple_str_plain_BaseTestSuite_str_plain_TestSuite_tuple;
extern PyObject *const_str_plain_SkipTest;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain_TestLoader;
extern PyObject *const_str_plain_removeHandler;
extern PyObject *const_str_plain_main;
static PyObject *const_str_digest_3f1676b85460debbf2e04d657860d652;
static PyObject *const_str_digest_9e86029fc0cac1a2a05a353528c99c2b;
extern PyObject *const_str_plain_findTestCases;
extern PyObject *const_str_plain___unittest;
extern PyObject *const_str_plain_expectedFailure;
extern PyObject *const_str_plain_skip;
static PyObject *const_str_plain__TextTestResult;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_runner;
extern PyObject *const_str_plain_removeResult;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_fc8c7e19e3ce48ab8190e98be8ffe351_tuple;
extern PyObject *const_dict_empty;
static PyObject *const_str_plain_this_dir;
extern PyObject *const_str_plain_registerResult;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_case;
static PyObject *const_str_digest_cb5bfdd8091df648666aeb421751d075;
extern PyObject *const_str_plain_suite;
extern PyObject *const_str_digest_e399ba4554180f37de594a6743234f17;
static PyObject *const_list_str_digest_cb5bfdd8091df648666aeb421751d075_list;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_path;
static PyObject *const_tuple_67aac855d620523c035ccc1d7e3457a9_tuple;
static PyObject *const_list_cbfdf307027060106ba3821db33dfd66_list;
static PyObject *const_tuple_str_plain_TextTestRunner_str_plain_TextTestResult_tuple;
extern PyObject *const_str_plain_FunctionTestCase;
extern PyObject *const_str_plain_signals;
extern PyObject *const_str_plain_unittest;
extern PyObject *const_str_plain_pattern;
extern PyObject *const_str_plain_tests;
extern PyObject *const_str_plain_TestCase;
extern PyObject *const_str_plain_BaseTestSuite;
static PyObject *const_list_fd16d68eab66967073de98a58a3f21a0_list;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_27d43546aec0a862badd0f98608dc9b7_tuple;
extern PyObject *const_str_plain_skipUnless;
extern PyObject *const_str_plain_discover;
static PyObject *const_str_digest_06a159257b0ee50baa855d06426b7276;
extern PyObject *const_str_plain_TextTestRunner;
extern PyObject *const_str_plain_TestSuite;
extern PyObject *const_str_plain_defaultTestLoader;
extern PyObject *const_str_plain_makeSuite;
extern PyObject *const_str_plain_skipIf;
extern PyObject *const_str_plain_installHandler;
extern PyObject *const_str_plain_dirname;
static PyObject *const_tuple_str_plain_TestResult_tuple;
static PyObject *const_tuple_61646aa3e725fac25d25edd5ff90e344_tuple;
extern PyObject *const_str_plain_getTestCaseNames;
extern PyObject *const_str_plain_TextTestResult;
extern PyObject *const_str_plain_TestProgram;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_load_tests;
extern PyObject *const_str_plain_TestResult;
extern PyObject *const_str_plain_start_dir;
extern PyObject *const_str_plain_extend;
extern PyObject *const_str_plain_loader;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_plain_TestProgram_str_plain_main_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_TestProgram_str_plain_main_tuple, 0, const_str_plain_TestProgram ); Py_INCREF( const_str_plain_TestProgram );
    PyTuple_SET_ITEM( const_tuple_str_plain_TestProgram_str_plain_main_tuple, 1, const_str_plain_main ); Py_INCREF( const_str_plain_main );
    const_tuple_str_plain_BaseTestSuite_str_plain_TestSuite_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_BaseTestSuite_str_plain_TestSuite_tuple, 0, const_str_plain_BaseTestSuite ); Py_INCREF( const_str_plain_BaseTestSuite );
    PyTuple_SET_ITEM( const_tuple_str_plain_BaseTestSuite_str_plain_TestSuite_tuple, 1, const_str_plain_TestSuite ); Py_INCREF( const_str_plain_TestSuite );
    const_str_digest_3f1676b85460debbf2e04d657860d652 = UNSTREAM_STRING( &constant_bin[ 2075461 ], 17, 0 );
    const_str_digest_9e86029fc0cac1a2a05a353528c99c2b = UNSTREAM_STRING( &constant_bin[ 2075478 ], 52, 0 );
    const_str_plain__TextTestResult = UNSTREAM_STRING( &constant_bin[ 2075530 ], 15, 1 );
    const_tuple_fc8c7e19e3ce48ab8190e98be8ffe351_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_fc8c7e19e3ce48ab8190e98be8ffe351_tuple, 0, const_str_plain_installHandler ); Py_INCREF( const_str_plain_installHandler );
    PyTuple_SET_ITEM( const_tuple_fc8c7e19e3ce48ab8190e98be8ffe351_tuple, 1, const_str_plain_registerResult ); Py_INCREF( const_str_plain_registerResult );
    PyTuple_SET_ITEM( const_tuple_fc8c7e19e3ce48ab8190e98be8ffe351_tuple, 2, const_str_plain_removeResult ); Py_INCREF( const_str_plain_removeResult );
    PyTuple_SET_ITEM( const_tuple_fc8c7e19e3ce48ab8190e98be8ffe351_tuple, 3, const_str_plain_removeHandler ); Py_INCREF( const_str_plain_removeHandler );
    const_str_plain_this_dir = UNSTREAM_STRING( &constant_bin[ 2075545 ], 8, 1 );
    const_str_digest_cb5bfdd8091df648666aeb421751d075 = UNSTREAM_STRING( &constant_bin[ 2075478 ], 40, 0 );
    const_list_str_digest_cb5bfdd8091df648666aeb421751d075_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_cb5bfdd8091df648666aeb421751d075_list, 0, const_str_digest_cb5bfdd8091df648666aeb421751d075 ); Py_INCREF( const_str_digest_cb5bfdd8091df648666aeb421751d075 );
    const_tuple_67aac855d620523c035ccc1d7e3457a9_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_67aac855d620523c035ccc1d7e3457a9_tuple, 0, const_str_plain_loader ); Py_INCREF( const_str_plain_loader );
    PyTuple_SET_ITEM( const_tuple_67aac855d620523c035ccc1d7e3457a9_tuple, 1, const_str_plain_tests ); Py_INCREF( const_str_plain_tests );
    PyTuple_SET_ITEM( const_tuple_67aac855d620523c035ccc1d7e3457a9_tuple, 2, const_str_plain_pattern ); Py_INCREF( const_str_plain_pattern );
    PyTuple_SET_ITEM( const_tuple_67aac855d620523c035ccc1d7e3457a9_tuple, 3, const_str_plain_os ); Py_INCREF( const_str_plain_os );
    PyTuple_SET_ITEM( const_tuple_67aac855d620523c035ccc1d7e3457a9_tuple, 4, const_str_plain_this_dir ); Py_INCREF( const_str_plain_this_dir );
    const_list_cbfdf307027060106ba3821db33dfd66_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_cbfdf307027060106ba3821db33dfd66_list, 0, const_str_plain_getTestCaseNames ); Py_INCREF( const_str_plain_getTestCaseNames );
    PyList_SET_ITEM( const_list_cbfdf307027060106ba3821db33dfd66_list, 1, const_str_plain_makeSuite ); Py_INCREF( const_str_plain_makeSuite );
    PyList_SET_ITEM( const_list_cbfdf307027060106ba3821db33dfd66_list, 2, const_str_plain_findTestCases ); Py_INCREF( const_str_plain_findTestCases );
    const_tuple_str_plain_TextTestRunner_str_plain_TextTestResult_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_TextTestRunner_str_plain_TextTestResult_tuple, 0, const_str_plain_TextTestRunner ); Py_INCREF( const_str_plain_TextTestRunner );
    PyTuple_SET_ITEM( const_tuple_str_plain_TextTestRunner_str_plain_TextTestResult_tuple, 1, const_str_plain_TextTestResult ); Py_INCREF( const_str_plain_TextTestResult );
    const_list_fd16d68eab66967073de98a58a3f21a0_list = PyList_New( 18 );
    PyList_SET_ITEM( const_list_fd16d68eab66967073de98a58a3f21a0_list, 0, const_str_plain_TestResult ); Py_INCREF( const_str_plain_TestResult );
    PyList_SET_ITEM( const_list_fd16d68eab66967073de98a58a3f21a0_list, 1, const_str_plain_TestCase ); Py_INCREF( const_str_plain_TestCase );
    PyList_SET_ITEM( const_list_fd16d68eab66967073de98a58a3f21a0_list, 2, const_str_plain_TestSuite ); Py_INCREF( const_str_plain_TestSuite );
    PyList_SET_ITEM( const_list_fd16d68eab66967073de98a58a3f21a0_list, 3, const_str_plain_TextTestRunner ); Py_INCREF( const_str_plain_TextTestRunner );
    PyList_SET_ITEM( const_list_fd16d68eab66967073de98a58a3f21a0_list, 4, const_str_plain_TestLoader ); Py_INCREF( const_str_plain_TestLoader );
    PyList_SET_ITEM( const_list_fd16d68eab66967073de98a58a3f21a0_list, 5, const_str_plain_FunctionTestCase ); Py_INCREF( const_str_plain_FunctionTestCase );
    PyList_SET_ITEM( const_list_fd16d68eab66967073de98a58a3f21a0_list, 6, const_str_plain_main ); Py_INCREF( const_str_plain_main );
    PyList_SET_ITEM( const_list_fd16d68eab66967073de98a58a3f21a0_list, 7, const_str_plain_defaultTestLoader ); Py_INCREF( const_str_plain_defaultTestLoader );
    PyList_SET_ITEM( const_list_fd16d68eab66967073de98a58a3f21a0_list, 8, const_str_plain_SkipTest ); Py_INCREF( const_str_plain_SkipTest );
    PyList_SET_ITEM( const_list_fd16d68eab66967073de98a58a3f21a0_list, 9, const_str_plain_skip ); Py_INCREF( const_str_plain_skip );
    PyList_SET_ITEM( const_list_fd16d68eab66967073de98a58a3f21a0_list, 10, const_str_plain_skipIf ); Py_INCREF( const_str_plain_skipIf );
    PyList_SET_ITEM( const_list_fd16d68eab66967073de98a58a3f21a0_list, 11, const_str_plain_skipUnless ); Py_INCREF( const_str_plain_skipUnless );
    PyList_SET_ITEM( const_list_fd16d68eab66967073de98a58a3f21a0_list, 12, const_str_plain_expectedFailure ); Py_INCREF( const_str_plain_expectedFailure );
    PyList_SET_ITEM( const_list_fd16d68eab66967073de98a58a3f21a0_list, 13, const_str_plain_TextTestResult ); Py_INCREF( const_str_plain_TextTestResult );
    PyList_SET_ITEM( const_list_fd16d68eab66967073de98a58a3f21a0_list, 14, const_str_plain_installHandler ); Py_INCREF( const_str_plain_installHandler );
    PyList_SET_ITEM( const_list_fd16d68eab66967073de98a58a3f21a0_list, 15, const_str_plain_registerResult ); Py_INCREF( const_str_plain_registerResult );
    PyList_SET_ITEM( const_list_fd16d68eab66967073de98a58a3f21a0_list, 16, const_str_plain_removeResult ); Py_INCREF( const_str_plain_removeResult );
    PyList_SET_ITEM( const_list_fd16d68eab66967073de98a58a3f21a0_list, 17, const_str_plain_removeHandler ); Py_INCREF( const_str_plain_removeHandler );
    const_tuple_27d43546aec0a862badd0f98608dc9b7_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_27d43546aec0a862badd0f98608dc9b7_tuple, 0, const_str_plain_TestCase ); Py_INCREF( const_str_plain_TestCase );
    PyTuple_SET_ITEM( const_tuple_27d43546aec0a862badd0f98608dc9b7_tuple, 1, const_str_plain_FunctionTestCase ); Py_INCREF( const_str_plain_FunctionTestCase );
    PyTuple_SET_ITEM( const_tuple_27d43546aec0a862badd0f98608dc9b7_tuple, 2, const_str_plain_SkipTest ); Py_INCREF( const_str_plain_SkipTest );
    PyTuple_SET_ITEM( const_tuple_27d43546aec0a862badd0f98608dc9b7_tuple, 3, const_str_plain_skip ); Py_INCREF( const_str_plain_skip );
    PyTuple_SET_ITEM( const_tuple_27d43546aec0a862badd0f98608dc9b7_tuple, 4, const_str_plain_skipIf ); Py_INCREF( const_str_plain_skipIf );
    PyTuple_SET_ITEM( const_tuple_27d43546aec0a862badd0f98608dc9b7_tuple, 5, const_str_plain_skipUnless ); Py_INCREF( const_str_plain_skipUnless );
    PyTuple_SET_ITEM( const_tuple_27d43546aec0a862badd0f98608dc9b7_tuple, 6, const_str_plain_expectedFailure ); Py_INCREF( const_str_plain_expectedFailure );
    const_str_digest_06a159257b0ee50baa855d06426b7276 = UNSTREAM_STRING( &constant_bin[ 2075553 ], 1741, 0 );
    const_tuple_str_plain_TestResult_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_TestResult_tuple, 0, const_str_plain_TestResult ); Py_INCREF( const_str_plain_TestResult );
    const_tuple_61646aa3e725fac25d25edd5ff90e344_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_61646aa3e725fac25d25edd5ff90e344_tuple, 0, const_str_plain_TestLoader ); Py_INCREF( const_str_plain_TestLoader );
    PyTuple_SET_ITEM( const_tuple_61646aa3e725fac25d25edd5ff90e344_tuple, 1, const_str_plain_defaultTestLoader ); Py_INCREF( const_str_plain_defaultTestLoader );
    PyTuple_SET_ITEM( const_tuple_61646aa3e725fac25d25edd5ff90e344_tuple, 2, const_str_plain_makeSuite ); Py_INCREF( const_str_plain_makeSuite );
    PyTuple_SET_ITEM( const_tuple_61646aa3e725fac25d25edd5ff90e344_tuple, 3, const_str_plain_getTestCaseNames ); Py_INCREF( const_str_plain_getTestCaseNames );
    PyTuple_SET_ITEM( const_tuple_61646aa3e725fac25d25edd5ff90e344_tuple, 4, const_str_plain_findTestCases ); Py_INCREF( const_str_plain_findTestCases );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_unittest( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_e4490beaf00ad9ef23d6adb1d071279b;
static PyCodeObject *codeobj_ef3aca53b5fe35334a8f7263c355ab61;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_9e86029fc0cac1a2a05a353528c99c2b;
    codeobj_e4490beaf00ad9ef23d6adb1d071279b = MAKE_CODEOBJ( module_filename_obj, const_str_digest_3f1676b85460debbf2e04d657860d652, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_ef3aca53b5fe35334a8f7263c355ab61 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_tests, 74, const_tuple_67aac855d620523c035ccc1d7e3457a9_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_unittest$$$function_1_load_tests(  );


// The module function definitions.
static PyObject *impl_unittest$$$function_1_load_tests( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_loader = python_pars[ 0 ];
    PyObject *par_tests = python_pars[ 1 ];
    PyObject *par_pattern = python_pars[ 2 ];
    PyObject *var_os = NULL;
    PyObject *var_this_dir = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static struct Nuitka_FrameObject *cache_frame_ef3aca53b5fe35334a8f7263c355ab61 = NULL;

    struct Nuitka_FrameObject *frame_ef3aca53b5fe35334a8f7263c355ab61;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ef3aca53b5fe35334a8f7263c355ab61, codeobj_ef3aca53b5fe35334a8f7263c355ab61, module_unittest, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ef3aca53b5fe35334a8f7263c355ab61 = cache_frame_ef3aca53b5fe35334a8f7263c355ab61;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ef3aca53b5fe35334a8f7263c355ab61 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ef3aca53b5fe35334a8f7263c355ab61 ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_digest_e399ba4554180f37de594a6743234f17;
    tmp_globals_name_1 = (PyObject *)moduledict_unittest;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_ef3aca53b5fe35334a8f7263c355ab61->m_frame.f_lineno = 75;
    tmp_assign_source_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_os == NULL );
    var_os = tmp_assign_source_1;

    tmp_source_name_2 = var_os;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_dirname );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_unittest, (Nuitka_StringObject *)const_str_plain___file__ );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___file__ );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__file__" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 77;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_ef3aca53b5fe35334a8f7263c355ab61->m_frame.f_lineno = 77;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_this_dir == NULL );
    var_this_dir = tmp_assign_source_2;

    tmp_source_name_3 = par_loader;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "loader" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_discover );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_start_dir;
    tmp_dict_value_1 = var_this_dir;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "this_dir" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_pattern;
    tmp_dict_value_2 = par_pattern;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "pattern" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 78;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_ef3aca53b5fe35334a8f7263c355ab61->m_frame.f_lineno = 78;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef3aca53b5fe35334a8f7263c355ab61 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef3aca53b5fe35334a8f7263c355ab61 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ef3aca53b5fe35334a8f7263c355ab61 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ef3aca53b5fe35334a8f7263c355ab61, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ef3aca53b5fe35334a8f7263c355ab61->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ef3aca53b5fe35334a8f7263c355ab61, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ef3aca53b5fe35334a8f7263c355ab61,
        type_description_1,
        par_loader,
        par_tests,
        par_pattern,
        var_os,
        var_this_dir
    );


    // Release cached frame.
    if ( frame_ef3aca53b5fe35334a8f7263c355ab61 == cache_frame_ef3aca53b5fe35334a8f7263c355ab61 )
    {
        Py_DECREF( frame_ef3aca53b5fe35334a8f7263c355ab61 );
    }
    cache_frame_ef3aca53b5fe35334a8f7263c355ab61 = NULL;

    assertFrameObject( frame_ef3aca53b5fe35334a8f7263c355ab61 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( unittest$$$function_1_load_tests );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_loader );
    par_loader = NULL;

    Py_XDECREF( par_tests );
    par_tests = NULL;

    Py_XDECREF( par_pattern );
    par_pattern = NULL;

    Py_XDECREF( var_os );
    var_os = NULL;

    Py_XDECREF( var_this_dir );
    var_this_dir = NULL;

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

    Py_XDECREF( par_loader );
    par_loader = NULL;

    Py_XDECREF( par_tests );
    par_tests = NULL;

    Py_XDECREF( par_pattern );
    par_pattern = NULL;

    Py_XDECREF( var_os );
    var_os = NULL;

    Py_XDECREF( var_this_dir );
    var_this_dir = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( unittest$$$function_1_load_tests );
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



static PyObject *MAKE_FUNCTION_unittest$$$function_1_load_tests(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_unittest$$$function_1_load_tests,
        const_str_plain_load_tests,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ef3aca53b5fe35334a8f7263c355ab61,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_unittest,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_unittest =
{
    PyModuleDef_HEAD_INIT,
    "unittest",   /* m_name */
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

MOD_INIT_DECL( unittest )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_unittest );
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
    puts("unittest: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("unittest: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("unittest: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initunittest" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_unittest = Py_InitModule4(
        "unittest",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_unittest = PyModule_Create( &mdef_unittest );
#endif

    moduledict_unittest = MODULE_DICT( module_unittest );

    // Update "__package__" value to what it ought to be.
    {
#if 1
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_unittest, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_unittest,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_unittest, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_unittest,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_unittest,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_unittest, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_unittest,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_unittest );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_unittest, module_unittest );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_unittest, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_unittest, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_unittest, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_unittest, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_unittest, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_unittest, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
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
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
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
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_assign_source_37;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
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
    PyObject *tmp_import_name_from_13;
    PyObject *tmp_import_name_from_14;
    PyObject *tmp_import_name_from_15;
    PyObject *tmp_import_name_from_16;
    PyObject *tmp_import_name_from_17;
    PyObject *tmp_import_name_from_18;
    PyObject *tmp_import_name_from_19;
    PyObject *tmp_import_name_from_20;
    PyObject *tmp_import_name_from_21;
    PyObject *tmp_import_name_from_22;
    PyObject *tmp_import_name_from_23;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    struct Nuitka_FrameObject *frame_e4490beaf00ad9ef23d6adb1d071279b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_06a159257b0ee50baa855d06426b7276;
    UPDATE_STRING_DICT0( moduledict_unittest, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_9e86029fc0cac1a2a05a353528c99c2b;
    UPDATE_STRING_DICT0( moduledict_unittest, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_cb5bfdd8091df648666aeb421751d075_list );
    UPDATE_STRING_DICT1( moduledict_unittest, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_unittest, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    tmp_assign_source_5 = LIST_COPY( const_list_fd16d68eab66967073de98a58a3f21a0_list );
    UPDATE_STRING_DICT1( moduledict_unittest, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_5 );
    // Frame without reuse.
    frame_e4490beaf00ad9ef23d6adb1d071279b = MAKE_MODULE_FRAME( codeobj_e4490beaf00ad9ef23d6adb1d071279b, module_unittest );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_e4490beaf00ad9ef23d6adb1d071279b );
    assert( Py_REFCNT( frame_e4490beaf00ad9ef23d6adb1d071279b ) == 2 );

    // Framed code:
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_unittest, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_call_arg_element_1 = LIST_COPY( const_list_cbfdf307027060106ba3821db33dfd66_list );
    frame_e4490beaf00ad9ef23d6adb1d071279b->m_frame.f_lineno = 54;
    {
        PyObject *call_args[] = { tmp_call_arg_element_1 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_extend, call_args );
    }

    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_6 = Py_True;
    UPDATE_STRING_DICT0( moduledict_unittest, (Nuitka_StringObject *)const_str_plain___unittest, tmp_assign_source_6 );
    tmp_name_name_1 = const_str_plain_result;
    tmp_globals_name_1 = (PyObject *)moduledict_unittest;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_TestResult_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_e4490beaf00ad9ef23d6adb1d071279b->m_frame.f_lineno = 58;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_TestResult,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_TestResult );
    }

    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_unittest, (Nuitka_StringObject *)const_str_plain_TestResult, tmp_assign_source_7 );
    tmp_name_name_2 = const_str_plain_case;
    tmp_globals_name_2 = (PyObject *)moduledict_unittest;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_27d43546aec0a862badd0f98608dc9b7_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_e4490beaf00ad9ef23d6adb1d071279b->m_frame.f_lineno = 59;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_8;

    // Tried code:
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    if ( PyModule_Check( tmp_import_name_from_2 ) )
    {
       tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_2,
            (PyObject *)MODULE_DICT(tmp_import_name_from_2),
            const_str_plain_TestCase,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_TestCase );
    }

    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_unittest, (Nuitka_StringObject *)const_str_plain_TestCase, tmp_assign_source_9 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    if ( PyModule_Check( tmp_import_name_from_3 ) )
    {
       tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_3,
            (PyObject *)MODULE_DICT(tmp_import_name_from_3),
            const_str_plain_FunctionTestCase,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_FunctionTestCase );
    }

    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_unittest, (Nuitka_StringObject *)const_str_plain_FunctionTestCase, tmp_assign_source_10 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    if ( PyModule_Check( tmp_import_name_from_4 ) )
    {
       tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_4,
            (PyObject *)MODULE_DICT(tmp_import_name_from_4),
            const_str_plain_SkipTest,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_SkipTest );
    }

    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_unittest, (Nuitka_StringObject *)const_str_plain_SkipTest, tmp_assign_source_11 );
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    if ( PyModule_Check( tmp_import_name_from_5 ) )
    {
       tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_5,
            (PyObject *)MODULE_DICT(tmp_import_name_from_5),
            const_str_plain_skip,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_skip );
    }

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_unittest, (Nuitka_StringObject *)const_str_plain_skip, tmp_assign_source_12 );
    tmp_import_name_from_6 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    if ( PyModule_Check( tmp_import_name_from_6 ) )
    {
       tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_6,
            (PyObject *)MODULE_DICT(tmp_import_name_from_6),
            const_str_plain_skipIf,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_skipIf );
    }

    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_unittest, (Nuitka_StringObject *)const_str_plain_skipIf, tmp_assign_source_13 );
    tmp_import_name_from_7 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    if ( PyModule_Check( tmp_import_name_from_7 ) )
    {
       tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_7,
            (PyObject *)MODULE_DICT(tmp_import_name_from_7),
            const_str_plain_skipUnless,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_skipUnless );
    }

    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_unittest, (Nuitka_StringObject *)const_str_plain_skipUnless, tmp_assign_source_14 );
    tmp_import_name_from_8 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    if ( PyModule_Check( tmp_import_name_from_8 ) )
    {
       tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_8,
            (PyObject *)MODULE_DICT(tmp_import_name_from_8),
            const_str_plain_expectedFailure,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_expectedFailure );
    }

    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_unittest, (Nuitka_StringObject *)const_str_plain_expectedFailure, tmp_assign_source_15 );
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

    tmp_name_name_3 = const_str_plain_suite;
    tmp_globals_name_3 = (PyObject *)moduledict_unittest;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_BaseTestSuite_str_plain_TestSuite_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_e4490beaf00ad9ef23d6adb1d071279b->m_frame.f_lineno = 61;
    tmp_assign_source_16 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_2__module == NULL );
    tmp_import_from_2__module = tmp_assign_source_16;

    // Tried code:
    tmp_import_name_from_9 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    if ( PyModule_Check( tmp_import_name_from_9 ) )
    {
       tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_9,
            (PyObject *)MODULE_DICT(tmp_import_name_from_9),
            const_str_plain_BaseTestSuite,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_BaseTestSuite );
    }

    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_unittest, (Nuitka_StringObject *)const_str_plain_BaseTestSuite, tmp_assign_source_17 );
    tmp_import_name_from_10 = tmp_import_from_2__module;

    CHECK_OBJECT( tmp_import_name_from_10 );
    if ( PyModule_Check( tmp_import_name_from_10 ) )
    {
       tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_10,
            (PyObject *)MODULE_DICT(tmp_import_name_from_10),
            const_str_plain_TestSuite,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_TestSuite );
    }

    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;

        goto try_except_handler_2;
    }
    UPDATE_STRING_DICT1( moduledict_unittest, (Nuitka_StringObject *)const_str_plain_TestSuite, tmp_assign_source_18 );
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
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    tmp_name_name_4 = const_str_plain_loader;
    tmp_globals_name_4 = (PyObject *)moduledict_unittest;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_61646aa3e725fac25d25edd5ff90e344_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_e4490beaf00ad9ef23d6adb1d071279b->m_frame.f_lineno = 62;
    tmp_assign_source_19 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_3__module == NULL );
    tmp_import_from_3__module = tmp_assign_source_19;

    // Tried code:
    tmp_import_name_from_11 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_11 );
    if ( PyModule_Check( tmp_import_name_from_11 ) )
    {
       tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_11,
            (PyObject *)MODULE_DICT(tmp_import_name_from_11),
            const_str_plain_TestLoader,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_TestLoader );
    }

    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_unittest, (Nuitka_StringObject *)const_str_plain_TestLoader, tmp_assign_source_20 );
    tmp_import_name_from_12 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_12 );
    if ( PyModule_Check( tmp_import_name_from_12 ) )
    {
       tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_12,
            (PyObject *)MODULE_DICT(tmp_import_name_from_12),
            const_str_plain_defaultTestLoader,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_defaultTestLoader );
    }

    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_unittest, (Nuitka_StringObject *)const_str_plain_defaultTestLoader, tmp_assign_source_21 );
    tmp_import_name_from_13 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_13 );
    if ( PyModule_Check( tmp_import_name_from_13 ) )
    {
       tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_13,
            (PyObject *)MODULE_DICT(tmp_import_name_from_13),
            const_str_plain_makeSuite,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_makeSuite );
    }

    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_unittest, (Nuitka_StringObject *)const_str_plain_makeSuite, tmp_assign_source_22 );
    tmp_import_name_from_14 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_14 );
    if ( PyModule_Check( tmp_import_name_from_14 ) )
    {
       tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_14,
            (PyObject *)MODULE_DICT(tmp_import_name_from_14),
            const_str_plain_getTestCaseNames,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_getTestCaseNames );
    }

    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_unittest, (Nuitka_StringObject *)const_str_plain_getTestCaseNames, tmp_assign_source_23 );
    tmp_import_name_from_15 = tmp_import_from_3__module;

    CHECK_OBJECT( tmp_import_name_from_15 );
    if ( PyModule_Check( tmp_import_name_from_15 ) )
    {
       tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_15,
            (PyObject *)MODULE_DICT(tmp_import_name_from_15),
            const_str_plain_findTestCases,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_findTestCases );
    }

    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;

        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_unittest, (Nuitka_StringObject *)const_str_plain_findTestCases, tmp_assign_source_24 );
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    tmp_name_name_5 = const_str_plain_main;
    tmp_globals_name_5 = (PyObject *)moduledict_unittest;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_TestProgram_str_plain_main_tuple;
    tmp_level_name_5 = const_int_pos_1;
    frame_e4490beaf00ad9ef23d6adb1d071279b->m_frame.f_lineno = 64;
    tmp_assign_source_25 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_4__module == NULL );
    tmp_import_from_4__module = tmp_assign_source_25;

    // Tried code:
    tmp_import_name_from_16 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_16 );
    if ( PyModule_Check( tmp_import_name_from_16 ) )
    {
       tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_16,
            (PyObject *)MODULE_DICT(tmp_import_name_from_16),
            const_str_plain_TestProgram,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_TestProgram );
    }

    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_unittest, (Nuitka_StringObject *)const_str_plain_TestProgram, tmp_assign_source_26 );
    tmp_import_name_from_17 = tmp_import_from_4__module;

    CHECK_OBJECT( tmp_import_name_from_17 );
    if ( PyModule_Check( tmp_import_name_from_17 ) )
    {
       tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_17,
            (PyObject *)MODULE_DICT(tmp_import_name_from_17),
            const_str_plain_main,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_main );
    }

    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto try_except_handler_4;
    }
    UPDATE_STRING_DICT1( moduledict_unittest, (Nuitka_StringObject *)const_str_plain_main, tmp_assign_source_27 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    tmp_name_name_6 = const_str_plain_runner;
    tmp_globals_name_6 = (PyObject *)moduledict_unittest;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_TextTestRunner_str_plain_TextTestResult_tuple;
    tmp_level_name_6 = const_int_pos_1;
    frame_e4490beaf00ad9ef23d6adb1d071279b->m_frame.f_lineno = 65;
    tmp_assign_source_28 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_5__module == NULL );
    tmp_import_from_5__module = tmp_assign_source_28;

    // Tried code:
    tmp_import_name_from_18 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_18 );
    if ( PyModule_Check( tmp_import_name_from_18 ) )
    {
       tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_18,
            (PyObject *)MODULE_DICT(tmp_import_name_from_18),
            const_str_plain_TextTestRunner,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_TextTestRunner );
    }

    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_unittest, (Nuitka_StringObject *)const_str_plain_TextTestRunner, tmp_assign_source_29 );
    tmp_import_name_from_19 = tmp_import_from_5__module;

    CHECK_OBJECT( tmp_import_name_from_19 );
    if ( PyModule_Check( tmp_import_name_from_19 ) )
    {
       tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_19,
            (PyObject *)MODULE_DICT(tmp_import_name_from_19),
            const_str_plain_TextTestResult,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_TextTestResult );
    }

    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto try_except_handler_5;
    }
    UPDATE_STRING_DICT1( moduledict_unittest, (Nuitka_StringObject *)const_str_plain_TextTestResult, tmp_assign_source_30 );
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_5__module );
    Py_DECREF( tmp_import_from_5__module );
    tmp_import_from_5__module = NULL;

    tmp_name_name_7 = const_str_plain_signals;
    tmp_globals_name_7 = (PyObject *)moduledict_unittest;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_fc8c7e19e3ce48ab8190e98be8ffe351_tuple;
    tmp_level_name_7 = const_int_pos_1;
    frame_e4490beaf00ad9ef23d6adb1d071279b->m_frame.f_lineno = 66;
    tmp_assign_source_31 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_6__module == NULL );
    tmp_import_from_6__module = tmp_assign_source_31;

    // Tried code:
    tmp_import_name_from_20 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_20 );
    if ( PyModule_Check( tmp_import_name_from_20 ) )
    {
       tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_20,
            (PyObject *)MODULE_DICT(tmp_import_name_from_20),
            const_str_plain_installHandler,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_installHandler );
    }

    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_unittest, (Nuitka_StringObject *)const_str_plain_installHandler, tmp_assign_source_32 );
    tmp_import_name_from_21 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_21 );
    if ( PyModule_Check( tmp_import_name_from_21 ) )
    {
       tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_21,
            (PyObject *)MODULE_DICT(tmp_import_name_from_21),
            const_str_plain_registerResult,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_registerResult );
    }

    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_unittest, (Nuitka_StringObject *)const_str_plain_registerResult, tmp_assign_source_33 );
    tmp_import_name_from_22 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_22 );
    if ( PyModule_Check( tmp_import_name_from_22 ) )
    {
       tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_22,
            (PyObject *)MODULE_DICT(tmp_import_name_from_22),
            const_str_plain_removeResult,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_removeResult );
    }

    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_unittest, (Nuitka_StringObject *)const_str_plain_removeResult, tmp_assign_source_34 );
    tmp_import_name_from_23 = tmp_import_from_6__module;

    CHECK_OBJECT( tmp_import_name_from_23 );
    if ( PyModule_Check( tmp_import_name_from_23 ) )
    {
       tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_23,
            (PyObject *)MODULE_DICT(tmp_import_name_from_23),
            const_str_plain_removeHandler,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_35 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_removeHandler );
    }

    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto try_except_handler_6;
    }
    UPDATE_STRING_DICT1( moduledict_unittest, (Nuitka_StringObject *)const_str_plain_removeHandler, tmp_assign_source_35 );
    goto try_end_6;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_6__module );
    Py_DECREF( tmp_import_from_6__module );
    tmp_import_from_6__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_6__module );
    Py_DECREF( tmp_import_from_6__module );
    tmp_import_from_6__module = NULL;

    tmp_assign_source_36 = GET_STRING_DICT_VALUE( moduledict_unittest, (Nuitka_StringObject *)const_str_plain_TextTestResult );

    if (unlikely( tmp_assign_source_36 == NULL ))
    {
        tmp_assign_source_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TextTestResult );
    }

    if ( tmp_assign_source_36 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "TextTestResult" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_unittest, (Nuitka_StringObject *)const_str_plain__TextTestResult, tmp_assign_source_36 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e4490beaf00ad9ef23d6adb1d071279b );
#endif
    popFrameStack();

    assertFrameObject( frame_e4490beaf00ad9ef23d6adb1d071279b );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e4490beaf00ad9ef23d6adb1d071279b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e4490beaf00ad9ef23d6adb1d071279b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e4490beaf00ad9ef23d6adb1d071279b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e4490beaf00ad9ef23d6adb1d071279b, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_37 = MAKE_FUNCTION_unittest$$$function_1_load_tests(  );
    UPDATE_STRING_DICT1( moduledict_unittest, (Nuitka_StringObject *)const_str_plain_load_tests, tmp_assign_source_37 );

    return MOD_RETURN_VALUE( module_unittest );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
