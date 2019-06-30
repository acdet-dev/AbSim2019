/* Generated code for Python source for module 'codegen.templates.CodeTemplatesIterators'
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

/* The _module_codegen$templates$CodeTemplatesIterators is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_codegen$templates$CodeTemplatesIterators;
PyDictObject *moduledict_codegen$templates$CodeTemplatesIterators;

/* The module constants used, if any. */
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_checkDebug;
static PyObject *const_str_digest_746b6338dce61953e9a5321f38244d18;
static PyObject *const_str_digest_c3eb33fd1c34f02f8f6ab0a10e80760c;
static PyObject *const_str_digest_12f4394284248570fe00152867eebba7;
extern PyObject *const_str_plain_template_iterator_check;
extern PyObject *const_str_plain_template_loop_break_next;
static PyObject *const_str_digest_0a995b5c5454ca4b36dc8fca7606d1bf;
static PyObject *const_str_digest_43ca9cc6213d6e07fbb94eff07dec446;
static PyObject *const_str_digest_e68f1ee326f411883e3ccf5b04d19733;
extern PyObject *const_str_empty;
extern PyObject *const_tuple_str_plain_TemplateDebugWrapper_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_TemplateDebugWrapper;
extern PyObject *const_int_pos_1;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_746b6338dce61953e9a5321f38244d18 = UNSTREAM_STRING( &constant_bin[ 359509 ], 40, 0 );
    const_str_digest_c3eb33fd1c34f02f8f6ab0a10e80760c = UNSTREAM_STRING( &constant_bin[ 359549 ], 125, 0 );
    const_str_digest_12f4394284248570fe00152867eebba7 = UNSTREAM_STRING( &constant_bin[ 359674 ], 1146, 0 );
    const_str_digest_0a995b5c5454ca4b36dc8fca7606d1bf = UNSTREAM_STRING( &constant_bin[ 360820 ], 49, 0 );
    const_str_digest_43ca9cc6213d6e07fbb94eff07dec446 = UNSTREAM_STRING( &constant_bin[ 360869 ], 39, 0 );
    const_str_digest_e68f1ee326f411883e3ccf5b04d19733 = UNSTREAM_STRING( &constant_bin[ 360908 ], 354, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_codegen$templates$CodeTemplatesIterators( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_f6b07e0d33695f17b6e917e21e911f8c;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_c3eb33fd1c34f02f8f6ab0a10e80760c;
    codeobj_f6b07e0d33695f17b6e917e21e911f8c = MAKE_CODEOBJ( module_filename_obj, const_str_digest_0a995b5c5454ca4b36dc8fca7606d1bf, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_codegen$templates$CodeTemplatesIterators =
{
    PyModuleDef_HEAD_INIT,
    "codegen.templates.CodeTemplatesIterators",   /* m_name */
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

MOD_INIT_DECL( codegen$templates$CodeTemplatesIterators )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_codegen$templates$CodeTemplatesIterators );
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
    puts("codegen.templates.CodeTemplatesIterators: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("codegen.templates.CodeTemplatesIterators: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("codegen.templates.CodeTemplatesIterators: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcodegen$templates$CodeTemplatesIterators" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_codegen$templates$CodeTemplatesIterators = Py_InitModule4(
        "codegen.templates.CodeTemplatesIterators",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_codegen$templates$CodeTemplatesIterators = PyModule_Create( &mdef_codegen$templates$CodeTemplatesIterators );
#endif

    moduledict_codegen$templates$CodeTemplatesIterators = MODULE_DICT( module_codegen$templates$CodeTemplatesIterators );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesIterators, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_codegen$templates$CodeTemplatesIterators,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesIterators, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_codegen$templates$CodeTemplatesIterators,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_codegen$templates$CodeTemplatesIterators,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesIterators, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_codegen$templates$CodeTemplatesIterators,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_codegen$templates$CodeTemplatesIterators );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_746b6338dce61953e9a5321f38244d18, module_codegen$templates$CodeTemplatesIterators );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesIterators, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesIterators, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesIterators, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesIterators, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesIterators, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_codegen$templates$CodeTemplatesIterators, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    struct Nuitka_FrameObject *frame_f6b07e0d33695f17b6e917e21e911f8c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_43ca9cc6213d6e07fbb94eff07dec446;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesIterators, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_c3eb33fd1c34f02f8f6ab0a10e80760c;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesIterators, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesIterators, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_12f4394284248570fe00152867eebba7;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesIterators, (Nuitka_StringObject *)const_str_plain_template_iterator_check, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_digest_e68f1ee326f411883e3ccf5b04d19733;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesIterators, (Nuitka_StringObject *)const_str_plain_template_loop_break_next, tmp_assign_source_5 );
    // Frame without reuse.
    frame_f6b07e0d33695f17b6e917e21e911f8c = MAKE_MODULE_FRAME( codeobj_f6b07e0d33695f17b6e917e21e911f8c, module_codegen$templates$CodeTemplatesIterators );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_f6b07e0d33695f17b6e917e21e911f8c );
    assert( Py_REFCNT( frame_f6b07e0d33695f17b6e917e21e911f8c ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_empty;
    tmp_globals_name_1 = (PyObject *)moduledict_codegen$templates$CodeTemplatesIterators;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_TemplateDebugWrapper_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_f6b07e0d33695f17b6e917e21e911f8c->m_frame.f_lineno = 85;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_TemplateDebugWrapper,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_TemplateDebugWrapper );
    }

    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$templates$CodeTemplatesIterators, (Nuitka_StringObject *)const_str_plain_TemplateDebugWrapper, tmp_assign_source_6 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesIterators, (Nuitka_StringObject *)const_str_plain_TemplateDebugWrapper );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TemplateDebugWrapper );
    }

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = (PyObject *)moduledict_codegen$templates$CodeTemplatesIterators;
    frame_f6b07e0d33695f17b6e917e21e911f8c->m_frame.f_lineno = 86;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_checkDebug, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f6b07e0d33695f17b6e917e21e911f8c );
#endif
    popFrameStack();

    assertFrameObject( frame_f6b07e0d33695f17b6e917e21e911f8c );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f6b07e0d33695f17b6e917e21e911f8c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f6b07e0d33695f17b6e917e21e911f8c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f6b07e0d33695f17b6e917e21e911f8c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f6b07e0d33695f17b6e917e21e911f8c, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_codegen$templates$CodeTemplatesIterators );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
