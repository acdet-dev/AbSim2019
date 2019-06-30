/* Generated code for Python source for module 'codegen.templates.CodeTemplatesAsyncgens'
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

/* The _module_codegen$templates$CodeTemplatesAsyncgens is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_codegen$templates$CodeTemplatesAsyncgens;
PyDictObject *moduledict_codegen$templates$CodeTemplatesAsyncgens;

/* The module constants used, if any. */
extern PyObject *const_str_plain_template_asyncgen_object_decl_template;
static PyObject *const_str_digest_2c70d81e9776512f995dcd9bd61f37e6;
static PyObject *const_str_digest_a875938cb52996be81608207071c0a67;
extern PyObject *const_str_plain_TemplateDebugWrapper;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_fcbfc3d8291e01c98f59229b15234bfa;
extern PyObject *const_str_plain_checkDebug;
static PyObject *const_str_digest_06285b511804eecb72eff9b0d03370e9;
static PyObject *const_str_digest_d42d3ceb16509c4ef2dfd522cedc05f1;
static PyObject *const_str_digest_ae3affcc12b309ecb1fca14a3b3d165f;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_template_asyncgen_noexception_exit;
extern PyObject *const_str_plain_template_make_asyncgen_template;
static PyObject *const_str_digest_c63d49a880c40ccf0c607242ca04c682;
extern PyObject *const_str_plain_template_asyncgen_return_exit;
extern PyObject *const_str_plain_template_asyncgen_object_body_template;
extern PyObject *const_str_plain_template_asyncgen_exception_exit;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_99f0ce6266eacdbeb20f4d9e4d1a09b7;
static PyObject *const_str_digest_d52a59c5a896e5473a78dd9d15d37771;
extern PyObject *const_tuple_str_plain_TemplateDebugWrapper_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_digest_661094ac4dc46053dc56230141624885;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_2c70d81e9776512f995dcd9bd61f37e6 = UNSTREAM_STRING( &constant_bin[ 318980 ], 314, 0 );
    const_str_digest_a875938cb52996be81608207071c0a67 = UNSTREAM_STRING( &constant_bin[ 319294 ], 161, 0 );
    const_str_digest_fcbfc3d8291e01c98f59229b15234bfa = UNSTREAM_STRING( &constant_bin[ 319455 ], 59, 0 );
    const_str_digest_06285b511804eecb72eff9b0d03370e9 = UNSTREAM_STRING( &constant_bin[ 319514 ], 190, 0 );
    const_str_digest_d42d3ceb16509c4ef2dfd522cedc05f1 = UNSTREAM_STRING( &constant_bin[ 319704 ], 49, 0 );
    const_str_digest_ae3affcc12b309ecb1fca14a3b3d165f = UNSTREAM_STRING( &constant_bin[ 319753 ], 125, 0 );
    const_str_digest_c63d49a880c40ccf0c607242ca04c682 = UNSTREAM_STRING( &constant_bin[ 319878 ], 297, 0 );
    const_str_digest_99f0ce6266eacdbeb20f4d9e4d1a09b7 = UNSTREAM_STRING( &constant_bin[ 319712 ], 40, 0 );
    const_str_digest_d52a59c5a896e5473a78dd9d15d37771 = UNSTREAM_STRING( &constant_bin[ 320175 ], 79, 0 );
    const_str_digest_661094ac4dc46053dc56230141624885 = UNSTREAM_STRING( &constant_bin[ 320254 ], 113, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_codegen$templates$CodeTemplatesAsyncgens( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_db6066878495a609faf418732ba8aa95;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_ae3affcc12b309ecb1fca14a3b3d165f;
    codeobj_db6066878495a609faf418732ba8aa95 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_d42d3ceb16509c4ef2dfd522cedc05f1, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_codegen$templates$CodeTemplatesAsyncgens =
{
    PyModuleDef_HEAD_INIT,
    "codegen.templates.CodeTemplatesAsyncgens",   /* m_name */
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

MOD_INIT_DECL( codegen$templates$CodeTemplatesAsyncgens )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_codegen$templates$CodeTemplatesAsyncgens );
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
    puts("codegen.templates.CodeTemplatesAsyncgens: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("codegen.templates.CodeTemplatesAsyncgens: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("codegen.templates.CodeTemplatesAsyncgens: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcodegen$templates$CodeTemplatesAsyncgens" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_codegen$templates$CodeTemplatesAsyncgens = Py_InitModule4(
        "codegen.templates.CodeTemplatesAsyncgens",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_codegen$templates$CodeTemplatesAsyncgens = PyModule_Create( &mdef_codegen$templates$CodeTemplatesAsyncgens );
#endif

    moduledict_codegen$templates$CodeTemplatesAsyncgens = MODULE_DICT( module_codegen$templates$CodeTemplatesAsyncgens );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesAsyncgens, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_codegen$templates$CodeTemplatesAsyncgens,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesAsyncgens, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_codegen$templates$CodeTemplatesAsyncgens,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_codegen$templates$CodeTemplatesAsyncgens,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesAsyncgens, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_codegen$templates$CodeTemplatesAsyncgens,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_codegen$templates$CodeTemplatesAsyncgens );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_99f0ce6266eacdbeb20f4d9e4d1a09b7, module_codegen$templates$CodeTemplatesAsyncgens );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesAsyncgens, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesAsyncgens, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesAsyncgens, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesAsyncgens, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesAsyncgens, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_codegen$templates$CodeTemplatesAsyncgens, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    struct Nuitka_FrameObject *frame_db6066878495a609faf418732ba8aa95;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_fcbfc3d8291e01c98f59229b15234bfa;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesAsyncgens, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_ae3affcc12b309ecb1fca14a3b3d165f;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesAsyncgens, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesAsyncgens, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_d52a59c5a896e5473a78dd9d15d37771;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesAsyncgens, (Nuitka_StringObject *)const_str_plain_template_asyncgen_object_decl_template, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_digest_2c70d81e9776512f995dcd9bd61f37e6;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesAsyncgens, (Nuitka_StringObject *)const_str_plain_template_asyncgen_object_body_template, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_c63d49a880c40ccf0c607242ca04c682;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesAsyncgens, (Nuitka_StringObject *)const_str_plain_template_asyncgen_exception_exit, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_a875938cb52996be81608207071c0a67;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesAsyncgens, (Nuitka_StringObject *)const_str_plain_template_asyncgen_noexception_exit, tmp_assign_source_7 );
    tmp_assign_source_8 = const_str_digest_661094ac4dc46053dc56230141624885;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesAsyncgens, (Nuitka_StringObject *)const_str_plain_template_asyncgen_return_exit, tmp_assign_source_8 );
    tmp_assign_source_9 = const_str_digest_06285b511804eecb72eff9b0d03370e9;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesAsyncgens, (Nuitka_StringObject *)const_str_plain_template_make_asyncgen_template, tmp_assign_source_9 );
    // Frame without reuse.
    frame_db6066878495a609faf418732ba8aa95 = MAKE_MODULE_FRAME( codeobj_db6066878495a609faf418732ba8aa95, module_codegen$templates$CodeTemplatesAsyncgens );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_db6066878495a609faf418732ba8aa95 );
    assert( Py_REFCNT( frame_db6066878495a609faf418732ba8aa95 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_empty;
    tmp_globals_name_1 = (PyObject *)moduledict_codegen$templates$CodeTemplatesAsyncgens;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_TemplateDebugWrapper_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_db6066878495a609faf418732ba8aa95->m_frame.f_lineno = 82;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;

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


        exception_lineno = 82;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$templates$CodeTemplatesAsyncgens, (Nuitka_StringObject *)const_str_plain_TemplateDebugWrapper, tmp_assign_source_10 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesAsyncgens, (Nuitka_StringObject *)const_str_plain_TemplateDebugWrapper );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TemplateDebugWrapper );
    }

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = (PyObject *)moduledict_codegen$templates$CodeTemplatesAsyncgens;
    frame_db6066878495a609faf418732ba8aa95->m_frame.f_lineno = 83;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_checkDebug, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_db6066878495a609faf418732ba8aa95 );
#endif
    popFrameStack();

    assertFrameObject( frame_db6066878495a609faf418732ba8aa95 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_db6066878495a609faf418732ba8aa95 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_db6066878495a609faf418732ba8aa95, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_db6066878495a609faf418732ba8aa95->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_db6066878495a609faf418732ba8aa95, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_codegen$templates$CodeTemplatesAsyncgens );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
