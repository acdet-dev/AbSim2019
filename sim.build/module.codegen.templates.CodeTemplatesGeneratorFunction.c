/* Generated code for Python source for module 'codegen.templates.CodeTemplatesGeneratorFunction'
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

/* The _module_codegen$templates$CodeTemplatesGeneratorFunction is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_codegen$templates$CodeTemplatesGeneratorFunction;
PyDictObject *moduledict_codegen$templates$CodeTemplatesGeneratorFunction;

/* The module constants used, if any. */
static PyObject *const_str_digest_c74783a390a4934dd744cea0742c5f03;
static PyObject *const_str_digest_12eb249935a63d026c955795228ee88b;
extern PyObject *const_str_plain_template_genfunc_yielder_decl_template;
extern PyObject *const_str_plain_TemplateDebugWrapper;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_template_genfunc_yielder_body_template;
extern PyObject *const_str_plain_template_generator_exception_exit;
static PyObject *const_str_digest_2db0ddc1ef0dbea736f2960b4e558edf;
static PyObject *const_str_digest_ce235211bd5001c6890d6b7b179e4737;
extern PyObject *const_str_plain_checkDebug;
extern PyObject *const_str_plain_template_generator_noexception_exit;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_cae75257ceb5f0d23ab7679b013f1637;
static PyObject *const_str_digest_c22f3ca900e7a149a68abc70f74fec34;
extern PyObject *const_str_plain_template_generator_return_exit;
static PyObject *const_str_digest_418d43274bf014d44315ea9f2420367d;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_454be1a78997d7a8cece04582acf3f6a;
static PyObject *const_str_digest_1176cf20ef9f70bf92d877ddf57fa78b;
extern PyObject *const_tuple_str_plain_TemplateDebugWrapper_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_bbbed2905599e9575aafdd5925ead650;
extern PyObject *const_str_plain_template_generator_making;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_c74783a390a4934dd744cea0742c5f03 = UNSTREAM_STRING( &constant_bin[ 356689 ], 260, 0 );
    const_str_digest_12eb249935a63d026c955795228ee88b = UNSTREAM_STRING( &constant_bin[ 356949 ], 717, 0 );
    const_str_digest_2db0ddc1ef0dbea736f2960b4e558edf = UNSTREAM_STRING( &constant_bin[ 357666 ], 133, 0 );
    const_str_digest_ce235211bd5001c6890d6b7b179e4737 = UNSTREAM_STRING( &constant_bin[ 357799 ], 408, 0 );
    const_str_digest_cae75257ceb5f0d23ab7679b013f1637 = UNSTREAM_STRING( &constant_bin[ 358207 ], 697, 0 );
    const_str_digest_c22f3ca900e7a149a68abc70f74fec34 = UNSTREAM_STRING( &constant_bin[ 358904 ], 53, 0 );
    const_str_digest_418d43274bf014d44315ea9f2420367d = UNSTREAM_STRING( &constant_bin[ 358957 ], 48, 0 );
    const_str_digest_454be1a78997d7a8cece04582acf3f6a = UNSTREAM_STRING( &constant_bin[ 359005 ], 266, 0 );
    const_str_digest_1176cf20ef9f70bf92d877ddf57fa78b = UNSTREAM_STRING( &constant_bin[ 359271 ], 57, 0 );
    const_str_digest_bbbed2905599e9575aafdd5925ead650 = UNSTREAM_STRING( &constant_bin[ 359328 ], 181, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_codegen$templates$CodeTemplatesGeneratorFunction( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_f150198d0ab7e66dd45e9fc707cd03ab;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_2db0ddc1ef0dbea736f2960b4e558edf;
    codeobj_f150198d0ab7e66dd45e9fc707cd03ab = MAKE_CODEOBJ( module_filename_obj, const_str_digest_1176cf20ef9f70bf92d877ddf57fa78b, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_codegen$templates$CodeTemplatesGeneratorFunction =
{
    PyModuleDef_HEAD_INIT,
    "codegen.templates.CodeTemplatesGeneratorFunction",   /* m_name */
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

MOD_INIT_DECL( codegen$templates$CodeTemplatesGeneratorFunction )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_codegen$templates$CodeTemplatesGeneratorFunction );
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
    puts("codegen.templates.CodeTemplatesGeneratorFunction: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("codegen.templates.CodeTemplatesGeneratorFunction: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("codegen.templates.CodeTemplatesGeneratorFunction: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcodegen$templates$CodeTemplatesGeneratorFunction" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_codegen$templates$CodeTemplatesGeneratorFunction = Py_InitModule4(
        "codegen.templates.CodeTemplatesGeneratorFunction",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_codegen$templates$CodeTemplatesGeneratorFunction = PyModule_Create( &mdef_codegen$templates$CodeTemplatesGeneratorFunction );
#endif

    moduledict_codegen$templates$CodeTemplatesGeneratorFunction = MODULE_DICT( module_codegen$templates$CodeTemplatesGeneratorFunction );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesGeneratorFunction, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_codegen$templates$CodeTemplatesGeneratorFunction,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesGeneratorFunction, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_codegen$templates$CodeTemplatesGeneratorFunction,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_codegen$templates$CodeTemplatesGeneratorFunction,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesGeneratorFunction, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_codegen$templates$CodeTemplatesGeneratorFunction,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_codegen$templates$CodeTemplatesGeneratorFunction );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_418d43274bf014d44315ea9f2420367d, module_codegen$templates$CodeTemplatesGeneratorFunction );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesGeneratorFunction, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesGeneratorFunction, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesGeneratorFunction, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesGeneratorFunction, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesGeneratorFunction, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_codegen$templates$CodeTemplatesGeneratorFunction, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    struct Nuitka_FrameObject *frame_f150198d0ab7e66dd45e9fc707cd03ab;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_c22f3ca900e7a149a68abc70f74fec34;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesGeneratorFunction, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_2db0ddc1ef0dbea736f2960b4e558edf;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesGeneratorFunction, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesGeneratorFunction, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_454be1a78997d7a8cece04582acf3f6a;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesGeneratorFunction, (Nuitka_StringObject *)const_str_plain_template_genfunc_yielder_decl_template, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_digest_cae75257ceb5f0d23ab7679b013f1637;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesGeneratorFunction, (Nuitka_StringObject *)const_str_plain_template_genfunc_yielder_body_template, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_ce235211bd5001c6890d6b7b179e4737;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesGeneratorFunction, (Nuitka_StringObject *)const_str_plain_template_generator_exception_exit, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_bbbed2905599e9575aafdd5925ead650;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesGeneratorFunction, (Nuitka_StringObject *)const_str_plain_template_generator_noexception_exit, tmp_assign_source_7 );
    tmp_assign_source_8 = const_str_digest_12eb249935a63d026c955795228ee88b;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesGeneratorFunction, (Nuitka_StringObject *)const_str_plain_template_generator_return_exit, tmp_assign_source_8 );
    tmp_assign_source_9 = const_str_digest_c74783a390a4934dd744cea0742c5f03;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesGeneratorFunction, (Nuitka_StringObject *)const_str_plain_template_generator_making, tmp_assign_source_9 );
    // Frame without reuse.
    frame_f150198d0ab7e66dd45e9fc707cd03ab = MAKE_MODULE_FRAME( codeobj_f150198d0ab7e66dd45e9fc707cd03ab, module_codegen$templates$CodeTemplatesGeneratorFunction );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_f150198d0ab7e66dd45e9fc707cd03ab );
    assert( Py_REFCNT( frame_f150198d0ab7e66dd45e9fc707cd03ab ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_empty;
    tmp_globals_name_1 = (PyObject *)moduledict_codegen$templates$CodeTemplatesGeneratorFunction;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_TemplateDebugWrapper_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_f150198d0ab7e66dd45e9fc707cd03ab->m_frame.f_lineno = 137;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_TemplateDebugWrapper,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_TemplateDebugWrapper );
    }

    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$templates$CodeTemplatesGeneratorFunction, (Nuitka_StringObject *)const_str_plain_TemplateDebugWrapper, tmp_assign_source_10 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesGeneratorFunction, (Nuitka_StringObject *)const_str_plain_TemplateDebugWrapper );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TemplateDebugWrapper );
    }

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = (PyObject *)moduledict_codegen$templates$CodeTemplatesGeneratorFunction;
    frame_f150198d0ab7e66dd45e9fc707cd03ab->m_frame.f_lineno = 138;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_checkDebug, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f150198d0ab7e66dd45e9fc707cd03ab );
#endif
    popFrameStack();

    assertFrameObject( frame_f150198d0ab7e66dd45e9fc707cd03ab );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f150198d0ab7e66dd45e9fc707cd03ab );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f150198d0ab7e66dd45e9fc707cd03ab, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f150198d0ab7e66dd45e9fc707cd03ab->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f150198d0ab7e66dd45e9fc707cd03ab, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_codegen$templates$CodeTemplatesGeneratorFunction );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
