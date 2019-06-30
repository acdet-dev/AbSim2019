/* Generated code for Python source for module 'codegen.templates.CodeTemplatesFrames'
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

/* The _module_codegen$templates$CodeTemplatesFrames is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_codegen$templates$CodeTemplatesFrames;
PyDictObject *moduledict_codegen$templates$CodeTemplatesFrames;

/* The module constants used, if any. */
extern PyObject *const_str_digest_0249a1ae4935d4e8c6c144a0f6db24fb;
static PyObject *const_str_digest_d6cdd35dffed3db8153a35d97a770f68;
extern PyObject *const_str_plain_template_frame_guard_once;
static PyObject *const_str_digest_fe5a42ee5d0a99cd2ccc1589488667c8;
extern PyObject *const_str_plain_template_frame_guard_full_return_handler;
extern PyObject *const_str_plain_TemplateDebugWrapper;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_template_frame_guard_cache_decl;
static PyObject *const_str_digest_eee87733921b133f064d5825079ef254;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_template_frame_guard_frame_decl;
extern PyObject *const_str_plain_template_frame_guard_generator;
static PyObject *const_str_digest_5ff88e114f9ee7b6c4d7cbcc4e7cc0c5;
extern PyObject *const_str_digest_27303522a73b720fda513681217de0a2;
static PyObject *const_str_digest_5d3fdc121e96db5fc44b8499656b2943;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_digest_bcc321226f4996d44ab57d1988cbd9ce;
extern PyObject *const_str_plain_checkDebug;
static PyObject *const_str_digest_b9ecc1e0db1cf13daa26e6c9e80a54d1;
static PyObject *const_str_digest_7f5f8649d5028adb441a40424c656999;
static PyObject *const_str_digest_cb9ee4935134a34a0ed5915a9b4204fd;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_fd2a87216bd8e62ebc51350746592854;
static PyObject *const_str_digest_de8d9da281c8c211f2715341dfe74894;
static PyObject *const_str_digest_592b2222cc27680d423db76d2a2c53c3;
extern PyObject *const_str_plain_template_frame_guard_full_block;
static PyObject *const_str_digest_e3a3b30e15063d2b9e9f19d78ed58f08;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_template_frame_attach_locals;
static PyObject *const_str_digest_b91836cb27f8d84ddbed4f1664ebf789;
extern PyObject *const_tuple_str_plain_TemplateDebugWrapper_tuple;
static PyObject *const_str_digest_2f5a68e1d4dbcd2bbd042940290cfe27;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_d6cdd35dffed3db8153a35d97a770f68 = UNSTREAM_STRING( &constant_bin[ 345828 ], 133, 0 );
    const_str_digest_fe5a42ee5d0a99cd2ccc1589488667c8 = UNSTREAM_STRING( &constant_bin[ 345961 ], 2872, 0 );
    const_str_digest_eee87733921b133f064d5825079ef254 = UNSTREAM_STRING( &constant_bin[ 348833 ], 122, 0 );
    const_str_digest_5ff88e114f9ee7b6c4d7cbcc4e7cc0c5 = UNSTREAM_STRING( &constant_bin[ 348955 ], 584, 0 );
    const_str_digest_5d3fdc121e96db5fc44b8499656b2943 = UNSTREAM_STRING( &constant_bin[ 349539 ], 708, 0 );
    const_str_digest_bcc321226f4996d44ab57d1988cbd9ce = UNSTREAM_STRING( &constant_bin[ 350247 ], 46, 0 );
    const_str_digest_b9ecc1e0db1cf13daa26e6c9e80a54d1 = UNSTREAM_STRING( &constant_bin[ 350255 ], 37, 0 );
    const_str_digest_7f5f8649d5028adb441a40424c656999 = UNSTREAM_STRING( &constant_bin[ 350293 ], 69, 0 );
    const_str_digest_cb9ee4935134a34a0ed5915a9b4204fd = UNSTREAM_STRING( &constant_bin[ 350362 ], 1171, 0 );
    const_str_digest_de8d9da281c8c211f2715341dfe74894 = UNSTREAM_STRING( &constant_bin[ 351533 ], 49, 0 );
    const_str_digest_592b2222cc27680d423db76d2a2c53c3 = UNSTREAM_STRING( &constant_bin[ 351582 ], 183, 0 );
    const_str_digest_e3a3b30e15063d2b9e9f19d78ed58f08 = UNSTREAM_STRING( &constant_bin[ 351765 ], 492, 0 );
    const_str_digest_b91836cb27f8d84ddbed4f1664ebf789 = UNSTREAM_STRING( &constant_bin[ 352257 ], 1005, 0 );
    const_str_digest_2f5a68e1d4dbcd2bbd042940290cfe27 = UNSTREAM_STRING( &constant_bin[ 353262 ], 42, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_codegen$templates$CodeTemplatesFrames( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_69e72c25ea3ec1154a207e82ff08940b;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_eee87733921b133f064d5825079ef254;
    codeobj_69e72c25ea3ec1154a207e82ff08940b = MAKE_CODEOBJ( module_filename_obj, const_str_digest_bcc321226f4996d44ab57d1988cbd9ce, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_codegen$templates$CodeTemplatesFrames =
{
    PyModuleDef_HEAD_INIT,
    "codegen.templates.CodeTemplatesFrames",   /* m_name */
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

MOD_INIT_DECL( codegen$templates$CodeTemplatesFrames )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_codegen$templates$CodeTemplatesFrames );
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
    puts("codegen.templates.CodeTemplatesFrames: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("codegen.templates.CodeTemplatesFrames: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("codegen.templates.CodeTemplatesFrames: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcodegen$templates$CodeTemplatesFrames" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_codegen$templates$CodeTemplatesFrames = Py_InitModule4(
        "codegen.templates.CodeTemplatesFrames",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_codegen$templates$CodeTemplatesFrames = PyModule_Create( &mdef_codegen$templates$CodeTemplatesFrames );
#endif

    moduledict_codegen$templates$CodeTemplatesFrames = MODULE_DICT( module_codegen$templates$CodeTemplatesFrames );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesFrames, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_codegen$templates$CodeTemplatesFrames,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesFrames, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_codegen$templates$CodeTemplatesFrames,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_codegen$templates$CodeTemplatesFrames,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesFrames, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_codegen$templates$CodeTemplatesFrames,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_codegen$templates$CodeTemplatesFrames );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_b9ecc1e0db1cf13daa26e6c9e80a54d1, module_codegen$templates$CodeTemplatesFrames );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesFrames, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesFrames, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesFrames, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesFrames, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesFrames, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_codegen$templates$CodeTemplatesFrames, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_args_element_name_1;
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
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    struct Nuitka_FrameObject *frame_69e72c25ea3ec1154a207e82ff08940b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_2f5a68e1d4dbcd2bbd042940290cfe27;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesFrames, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_eee87733921b133f064d5825079ef254;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesFrames, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesFrames, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_7f5f8649d5028adb441a40424c656999;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesFrames, (Nuitka_StringObject *)const_str_plain_template_frame_guard_cache_decl, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_digest_de8d9da281c8c211f2715341dfe74894;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesFrames, (Nuitka_StringObject *)const_str_plain_template_frame_guard_frame_decl, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_5ff88e114f9ee7b6c4d7cbcc4e7cc0c5;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesFrames, (Nuitka_StringObject *)const_str_plain_template_frame_guard_full_block, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_592b2222cc27680d423db76d2a2c53c3;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesFrames, (Nuitka_StringObject *)const_str_plain_template_frame_guard_full_return_handler, tmp_assign_source_7 );
    tmp_assign_source_8 = const_str_digest_d6cdd35dffed3db8153a35d97a770f68;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesFrames, (Nuitka_StringObject *)const_str_plain_template_frame_attach_locals, tmp_assign_source_8 );
    tmp_assign_source_9 = const_str_digest_5d3fdc121e96db5fc44b8499656b2943;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesFrames, (Nuitka_StringObject *)const_str_digest_0249a1ae4935d4e8c6c144a0f6db24fb, tmp_assign_source_9 );
    tmp_assign_source_10 = const_str_digest_b91836cb27f8d84ddbed4f1664ebf789;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesFrames, (Nuitka_StringObject *)const_str_plain_template_frame_guard_once, tmp_assign_source_10 );
    tmp_assign_source_11 = const_str_digest_fe5a42ee5d0a99cd2ccc1589488667c8;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesFrames, (Nuitka_StringObject *)const_str_plain_template_frame_guard_generator, tmp_assign_source_11 );
    tmp_assign_source_12 = const_str_digest_e3a3b30e15063d2b9e9f19d78ed58f08;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesFrames, (Nuitka_StringObject *)const_str_digest_27303522a73b720fda513681217de0a2, tmp_assign_source_12 );
    tmp_assign_source_13 = const_str_digest_cb9ee4935134a34a0ed5915a9b4204fd;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesFrames, (Nuitka_StringObject *)const_str_digest_fd2a87216bd8e62ebc51350746592854, tmp_assign_source_13 );
    // Frame without reuse.
    frame_69e72c25ea3ec1154a207e82ff08940b = MAKE_MODULE_FRAME( codeobj_69e72c25ea3ec1154a207e82ff08940b, module_codegen$templates$CodeTemplatesFrames );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_69e72c25ea3ec1154a207e82ff08940b );
    assert( Py_REFCNT( frame_69e72c25ea3ec1154a207e82ff08940b ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_empty;
    tmp_globals_name_1 = (PyObject *)moduledict_codegen$templates$CodeTemplatesFrames;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_TemplateDebugWrapper_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_69e72c25ea3ec1154a207e82ff08940b->m_frame.f_lineno = 285;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_TemplateDebugWrapper,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_TemplateDebugWrapper );
    }

    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$templates$CodeTemplatesFrames, (Nuitka_StringObject *)const_str_plain_TemplateDebugWrapper, tmp_assign_source_14 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesFrames, (Nuitka_StringObject *)const_str_plain_TemplateDebugWrapper );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TemplateDebugWrapper );
    }

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = (PyObject *)moduledict_codegen$templates$CodeTemplatesFrames;
    frame_69e72c25ea3ec1154a207e82ff08940b->m_frame.f_lineno = 286;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_checkDebug, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_69e72c25ea3ec1154a207e82ff08940b );
#endif
    popFrameStack();

    assertFrameObject( frame_69e72c25ea3ec1154a207e82ff08940b );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_69e72c25ea3ec1154a207e82ff08940b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_69e72c25ea3ec1154a207e82ff08940b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_69e72c25ea3ec1154a207e82ff08940b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_69e72c25ea3ec1154a207e82ff08940b, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_codegen$templates$CodeTemplatesFrames );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
