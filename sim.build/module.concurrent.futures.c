/* Generated code for Python source for module 'concurrent.futures'
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

/* The _module_concurrent$futures is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_concurrent$futures;
PyDictObject *moduledict_concurrent$futures;

/* The module constants used, if any. */
extern PyObject *const_str_plain_FIRST_EXCEPTION;
extern PyObject *const_str_plain_TimeoutError;
extern PyObject *const_str_plain_Future;
extern PyObject *const_str_digest_f5b3339efb207101e63b036ce416d989;
extern PyObject *const_str_plain_CancelledError;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_46debb36a702e1e6b47854e4ae34595b_tuple;
extern PyObject *const_int_0;
extern PyObject *const_str_digest_cf6aaf0dfa66843c683b1f36eb60ae6c;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_wait;
static PyObject *const_tuple_str_plain_ThreadPoolExecutor_tuple;
static PyObject *const_str_digest_b1aeed3e2373e79f7e87d52936c3884f;
extern PyObject *const_str_plain___author__;
static PyObject *const_tuple_str_plain_ProcessPoolExecutor_tuple;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_digest_df4e61d07511311104eb98f9e26df441;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_ALL_COMPLETED;
extern PyObject *const_str_plain_Executor;
extern PyObject *const_str_plain_ProcessPoolExecutor;
static PyObject *const_str_digest_a67dca1a3909a1ad314d86ac1647c1d8;
extern PyObject *const_str_digest_c50e682a5a69db9ae9ab532419bdc181;
static PyObject *const_list_str_digest_f3ad882c7e479561e7d0e7542745d897_list;
static PyObject *const_str_digest_f3ad882c7e479561e7d0e7542745d897;
extern PyObject *const_str_digest_84be1dd7dc6b48bde0effbb2256abb93;
extern PyObject *const_str_plain_FIRST_COMPLETED;
extern PyObject *const_str_plain_ThreadPoolExecutor;
extern PyObject *const_str_plain_as_completed;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_59e6c0180f79774a5067989b7a02d357;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_46debb36a702e1e6b47854e4ae34595b_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_46debb36a702e1e6b47854e4ae34595b_tuple, 0, const_str_plain_FIRST_COMPLETED ); Py_INCREF( const_str_plain_FIRST_COMPLETED );
    PyTuple_SET_ITEM( const_tuple_46debb36a702e1e6b47854e4ae34595b_tuple, 1, const_str_plain_FIRST_EXCEPTION ); Py_INCREF( const_str_plain_FIRST_EXCEPTION );
    PyTuple_SET_ITEM( const_tuple_46debb36a702e1e6b47854e4ae34595b_tuple, 2, const_str_plain_ALL_COMPLETED ); Py_INCREF( const_str_plain_ALL_COMPLETED );
    PyTuple_SET_ITEM( const_tuple_46debb36a702e1e6b47854e4ae34595b_tuple, 3, const_str_plain_CancelledError ); Py_INCREF( const_str_plain_CancelledError );
    PyTuple_SET_ITEM( const_tuple_46debb36a702e1e6b47854e4ae34595b_tuple, 4, const_str_plain_TimeoutError ); Py_INCREF( const_str_plain_TimeoutError );
    PyTuple_SET_ITEM( const_tuple_46debb36a702e1e6b47854e4ae34595b_tuple, 5, const_str_plain_Future ); Py_INCREF( const_str_plain_Future );
    PyTuple_SET_ITEM( const_tuple_46debb36a702e1e6b47854e4ae34595b_tuple, 6, const_str_plain_Executor ); Py_INCREF( const_str_plain_Executor );
    PyTuple_SET_ITEM( const_tuple_46debb36a702e1e6b47854e4ae34595b_tuple, 7, const_str_plain_wait ); Py_INCREF( const_str_plain_wait );
    PyTuple_SET_ITEM( const_tuple_46debb36a702e1e6b47854e4ae34595b_tuple, 8, const_str_plain_as_completed ); Py_INCREF( const_str_plain_as_completed );
    const_tuple_str_plain_ThreadPoolExecutor_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ThreadPoolExecutor_tuple, 0, const_str_plain_ThreadPoolExecutor ); Py_INCREF( const_str_plain_ThreadPoolExecutor );
    const_str_digest_b1aeed3e2373e79f7e87d52936c3884f = UNSTREAM_STRING( &constant_bin[ 398365 ], 63, 0 );
    const_tuple_str_plain_ProcessPoolExecutor_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ProcessPoolExecutor_tuple, 0, const_str_plain_ProcessPoolExecutor ); Py_INCREF( const_str_plain_ProcessPoolExecutor );
    const_str_digest_a67dca1a3909a1ad314d86ac1647c1d8 = UNSTREAM_STRING( &constant_bin[ 398428 ], 27, 0 );
    const_list_str_digest_f3ad882c7e479561e7d0e7542745d897_list = PyList_New( 1 );
    const_str_digest_f3ad882c7e479561e7d0e7542745d897 = UNSTREAM_STRING( &constant_bin[ 398455 ], 50, 0 );
    PyList_SET_ITEM( const_list_str_digest_f3ad882c7e479561e7d0e7542745d897_list, 0, const_str_digest_f3ad882c7e479561e7d0e7542745d897 ); Py_INCREF( const_str_digest_f3ad882c7e479561e7d0e7542745d897 );
    const_str_digest_59e6c0180f79774a5067989b7a02d357 = UNSTREAM_STRING( &constant_bin[ 398505 ], 62, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_concurrent$futures( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_43bdacd0eeb63d65de24b12df6467a3e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_59e6c0180f79774a5067989b7a02d357;
    codeobj_43bdacd0eeb63d65de24b12df6467a3e = MAKE_CODEOBJ( module_filename_obj, const_str_digest_a67dca1a3909a1ad314d86ac1647c1d8, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_concurrent$futures =
{
    PyModuleDef_HEAD_INIT,
    "concurrent.futures",   /* m_name */
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

MOD_INIT_DECL( concurrent$futures )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_concurrent$futures );
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
    puts("concurrent.futures: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("concurrent.futures: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("concurrent.futures: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initconcurrent$futures" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_concurrent$futures = Py_InitModule4(
        "concurrent.futures",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_concurrent$futures = PyModule_Create( &mdef_concurrent$futures );
#endif

    moduledict_concurrent$futures = MODULE_DICT( module_concurrent$futures );

    // Update "__package__" value to what it ought to be.
    {
#if 1
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_concurrent$futures, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_concurrent$futures,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_concurrent$futures, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_concurrent$futures,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_concurrent$futures,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_concurrent$futures, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_concurrent$futures,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_concurrent$futures );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_cf6aaf0dfa66843c683b1f36eb60ae6c, module_concurrent$futures );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_concurrent$futures, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_concurrent$futures, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_concurrent$futures, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_concurrent$futures, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_concurrent$futures, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_concurrent$futures, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_assign_source_16;
    PyObject *tmp_assign_source_17;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
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
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    struct Nuitka_FrameObject *frame_43bdacd0eeb63d65de24b12df6467a3e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_b1aeed3e2373e79f7e87d52936c3884f;
    UPDATE_STRING_DICT0( moduledict_concurrent$futures, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_59e6c0180f79774a5067989b7a02d357;
    UPDATE_STRING_DICT0( moduledict_concurrent$futures, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_f3ad882c7e479561e7d0e7542745d897_list );
    UPDATE_STRING_DICT1( moduledict_concurrent$futures, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = Py_None;
    UPDATE_STRING_DICT0( moduledict_concurrent$futures, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_digest_c50e682a5a69db9ae9ab532419bdc181;
    UPDATE_STRING_DICT0( moduledict_concurrent$futures, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_5 );
    // Frame without reuse.
    frame_43bdacd0eeb63d65de24b12df6467a3e = MAKE_MODULE_FRAME( codeobj_43bdacd0eeb63d65de24b12df6467a3e, module_concurrent$futures );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_43bdacd0eeb63d65de24b12df6467a3e );
    assert( Py_REFCNT( frame_43bdacd0eeb63d65de24b12df6467a3e ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_digest_84be1dd7dc6b48bde0effbb2256abb93;
    tmp_globals_name_1 = (PyObject *)moduledict_concurrent$futures;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_46debb36a702e1e6b47854e4ae34595b_tuple;
    tmp_level_name_1 = const_int_0;
    frame_43bdacd0eeb63d65de24b12df6467a3e->m_frame.f_lineno = 8;
    tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_6;

    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_FIRST_COMPLETED );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_concurrent$futures, (Nuitka_StringObject *)const_str_plain_FIRST_COMPLETED, tmp_assign_source_7 );
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_FIRST_EXCEPTION );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_concurrent$futures, (Nuitka_StringObject *)const_str_plain_FIRST_EXCEPTION, tmp_assign_source_8 );
    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_ALL_COMPLETED );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_concurrent$futures, (Nuitka_StringObject *)const_str_plain_ALL_COMPLETED, tmp_assign_source_9 );
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_CancelledError );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_concurrent$futures, (Nuitka_StringObject *)const_str_plain_CancelledError, tmp_assign_source_10 );
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_TimeoutError );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_concurrent$futures, (Nuitka_StringObject *)const_str_plain_TimeoutError, tmp_assign_source_11 );
    tmp_import_name_from_6 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_Future );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_concurrent$futures, (Nuitka_StringObject *)const_str_plain_Future, tmp_assign_source_12 );
    tmp_import_name_from_7 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_Executor );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_concurrent$futures, (Nuitka_StringObject *)const_str_plain_Executor, tmp_assign_source_13 );
    tmp_import_name_from_8 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_wait );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_concurrent$futures, (Nuitka_StringObject *)const_str_plain_wait, tmp_assign_source_14 );
    tmp_import_name_from_9 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_9 );
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_as_completed );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_concurrent$futures, (Nuitka_StringObject *)const_str_plain_as_completed, tmp_assign_source_15 );
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

    tmp_name_name_2 = const_str_digest_f5b3339efb207101e63b036ce416d989;
    tmp_globals_name_2 = (PyObject *)moduledict_concurrent$futures;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_ProcessPoolExecutor_tuple;
    tmp_level_name_2 = const_int_0;
    frame_43bdacd0eeb63d65de24b12df6467a3e->m_frame.f_lineno = 17;
    tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_ProcessPoolExecutor );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_concurrent$futures, (Nuitka_StringObject *)const_str_plain_ProcessPoolExecutor, tmp_assign_source_16 );
    tmp_name_name_3 = const_str_digest_df4e61d07511311104eb98f9e26df441;
    tmp_globals_name_3 = (PyObject *)moduledict_concurrent$futures;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_ThreadPoolExecutor_tuple;
    tmp_level_name_3 = const_int_0;
    frame_43bdacd0eeb63d65de24b12df6467a3e->m_frame.f_lineno = 18;
    tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_ThreadPoolExecutor );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_concurrent$futures, (Nuitka_StringObject *)const_str_plain_ThreadPoolExecutor, tmp_assign_source_17 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_43bdacd0eeb63d65de24b12df6467a3e );
#endif
    popFrameStack();

    assertFrameObject( frame_43bdacd0eeb63d65de24b12df6467a3e );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_43bdacd0eeb63d65de24b12df6467a3e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_43bdacd0eeb63d65de24b12df6467a3e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_43bdacd0eeb63d65de24b12df6467a3e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_43bdacd0eeb63d65de24b12df6467a3e, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_concurrent$futures );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
