/* Generated code for Python source for module 'codegen.templates.CodeTemplatesFunction'
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

/* The _module_codegen$templates$CodeTemplatesFunction is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_codegen$templates$CodeTemplatesFunction;
PyDictObject *moduledict_codegen$templates$CodeTemplatesFunction;

/* The module constants used, if any. */
static PyObject *const_str_digest_6fd7ee62900b0cf315b864b937a1d6ba;
static PyObject *const_str_digest_c5afdeaddb262275e7c2b6fa9995f782;
static PyObject *const_str_digest_60ab026f8231e4560267237872a176ad;
extern PyObject *const_str_plain_TemplateDebugWrapper;
static PyObject *const_str_digest_26dfdd5d0efbcfc9ab82d361fac29e81;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_template_function_exception_exit;
static PyObject *const_str_digest_ddc27c4a274337f162e231bd1936b2d8;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_template_make_function_template;
extern PyObject *const_str_plain_template_function_direct_declaration;
extern PyObject *const_str_plain_template_function_body;
extern PyObject *const_str_plain_template_function_return_exit;
static PyObject *const_str_digest_4efc6eeb15aaf410b99b9462658ae865;
extern PyObject *const_str_plain_template_function_make_declaration;
extern PyObject *const_str_plain_checkDebug;
static PyObject *const_str_digest_25d6bcbf64a8a85c7309ea37e1eb40e0;
static PyObject *const_str_digest_5eeb595113e7c995ee8e819e758d1d54;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_function_direct_body_template;
static PyObject *const_str_digest_de61c61a4c462d1231484c30538dc4a8;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_822d8b7928258104832d4bc9a0a253a1;
extern PyObject *const_tuple_str_plain_TemplateDebugWrapper_tuple;
static PyObject *const_str_digest_6ccab4d707abd48f9e30c4bfff35037a;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_6fd7ee62900b0cf315b864b937a1d6ba = UNSTREAM_STRING( &constant_bin[ 354681 ], 563, 0 );
    const_str_digest_c5afdeaddb262275e7c2b6fa9995f782 = UNSTREAM_STRING( &constant_bin[ 355244 ], 83, 0 );
    const_str_digest_60ab026f8231e4560267237872a176ad = UNSTREAM_STRING( &constant_bin[ 355327 ], 380, 0 );
    const_str_digest_26dfdd5d0efbcfc9ab82d361fac29e81 = UNSTREAM_STRING( &constant_bin[ 355707 ], 340, 0 );
    const_str_digest_ddc27c4a274337f162e231bd1936b2d8 = UNSTREAM_STRING( &constant_bin[ 356047 ], 90, 0 );
    const_str_digest_4efc6eeb15aaf410b99b9462658ae865 = UNSTREAM_STRING( &constant_bin[ 356137 ], 144, 0 );
    const_str_digest_25d6bcbf64a8a85c7309ea37e1eb40e0 = UNSTREAM_STRING( &constant_bin[ 356281 ], 48, 0 );
    const_str_digest_5eeb595113e7c995ee8e819e758d1d54 = UNSTREAM_STRING( &constant_bin[ 356329 ], 170, 0 );
    const_str_digest_de61c61a4c462d1231484c30538dc4a8 = UNSTREAM_STRING( &constant_bin[ 356289 ], 39, 0 );
    const_str_digest_822d8b7928258104832d4bc9a0a253a1 = UNSTREAM_STRING( &constant_bin[ 356499 ], 66, 0 );
    const_str_digest_6ccab4d707abd48f9e30c4bfff35037a = UNSTREAM_STRING( &constant_bin[ 356565 ], 124, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_codegen$templates$CodeTemplatesFunction( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a4f79070430de80bfeab162384c36a09;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_6ccab4d707abd48f9e30c4bfff35037a;
    codeobj_a4f79070430de80bfeab162384c36a09 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_25d6bcbf64a8a85c7309ea37e1eb40e0, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_codegen$templates$CodeTemplatesFunction =
{
    PyModuleDef_HEAD_INIT,
    "codegen.templates.CodeTemplatesFunction",   /* m_name */
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

MOD_INIT_DECL( codegen$templates$CodeTemplatesFunction )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_codegen$templates$CodeTemplatesFunction );
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
    puts("codegen.templates.CodeTemplatesFunction: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("codegen.templates.CodeTemplatesFunction: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("codegen.templates.CodeTemplatesFunction: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcodegen$templates$CodeTemplatesFunction" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_codegen$templates$CodeTemplatesFunction = Py_InitModule4(
        "codegen.templates.CodeTemplatesFunction",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_codegen$templates$CodeTemplatesFunction = PyModule_Create( &mdef_codegen$templates$CodeTemplatesFunction );
#endif

    moduledict_codegen$templates$CodeTemplatesFunction = MODULE_DICT( module_codegen$templates$CodeTemplatesFunction );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesFunction, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_codegen$templates$CodeTemplatesFunction,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesFunction, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_codegen$templates$CodeTemplatesFunction,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_codegen$templates$CodeTemplatesFunction,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesFunction, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_codegen$templates$CodeTemplatesFunction,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_codegen$templates$CodeTemplatesFunction );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_de61c61a4c462d1231484c30538dc4a8, module_codegen$templates$CodeTemplatesFunction );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesFunction, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesFunction, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesFunction, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesFunction, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesFunction, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_codegen$templates$CodeTemplatesFunction, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    struct Nuitka_FrameObject *frame_a4f79070430de80bfeab162384c36a09;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_822d8b7928258104832d4bc9a0a253a1;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesFunction, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_6ccab4d707abd48f9e30c4bfff35037a;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesFunction, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesFunction, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_ddc27c4a274337f162e231bd1936b2d8;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesFunction, (Nuitka_StringObject *)const_str_plain_template_function_make_declaration, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_digest_c5afdeaddb262275e7c2b6fa9995f782;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesFunction, (Nuitka_StringObject *)const_str_plain_template_function_direct_declaration, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_digest_6fd7ee62900b0cf315b864b937a1d6ba;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesFunction, (Nuitka_StringObject *)const_str_plain_template_make_function_template, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_26dfdd5d0efbcfc9ab82d361fac29e81;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesFunction, (Nuitka_StringObject *)const_str_plain_template_function_body, tmp_assign_source_7 );
    tmp_assign_source_8 = const_str_digest_5eeb595113e7c995ee8e819e758d1d54;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesFunction, (Nuitka_StringObject *)const_str_plain_template_function_exception_exit, tmp_assign_source_8 );
    tmp_assign_source_9 = const_str_digest_4efc6eeb15aaf410b99b9462658ae865;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesFunction, (Nuitka_StringObject *)const_str_plain_template_function_return_exit, tmp_assign_source_9 );
    tmp_assign_source_10 = const_str_digest_60ab026f8231e4560267237872a176ad;
    UPDATE_STRING_DICT0( moduledict_codegen$templates$CodeTemplatesFunction, (Nuitka_StringObject *)const_str_plain_function_direct_body_template, tmp_assign_source_10 );
    // Frame without reuse.
    frame_a4f79070430de80bfeab162384c36a09 = MAKE_MODULE_FRAME( codeobj_a4f79070430de80bfeab162384c36a09, module_codegen$templates$CodeTemplatesFunction );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_a4f79070430de80bfeab162384c36a09 );
    assert( Py_REFCNT( frame_a4f79070430de80bfeab162384c36a09 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_empty;
    tmp_globals_name_1 = (PyObject *)moduledict_codegen$templates$CodeTemplatesFunction;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_TemplateDebugWrapper_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_a4f79070430de80bfeab162384c36a09->m_frame.f_lineno = 107;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_TemplateDebugWrapper,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_TemplateDebugWrapper );
    }

    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$templates$CodeTemplatesFunction, (Nuitka_StringObject *)const_str_plain_TemplateDebugWrapper, tmp_assign_source_11 );
    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_codegen$templates$CodeTemplatesFunction, (Nuitka_StringObject *)const_str_plain_TemplateDebugWrapper );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TemplateDebugWrapper );
    }

    CHECK_OBJECT( tmp_called_instance_1 );
    tmp_args_element_name_1 = (PyObject *)moduledict_codegen$templates$CodeTemplatesFunction;
    frame_a4f79070430de80bfeab162384c36a09->m_frame.f_lineno = 108;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_checkDebug, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 108;

        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a4f79070430de80bfeab162384c36a09 );
#endif
    popFrameStack();

    assertFrameObject( frame_a4f79070430de80bfeab162384c36a09 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a4f79070430de80bfeab162384c36a09 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a4f79070430de80bfeab162384c36a09, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a4f79070430de80bfeab162384c36a09->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a4f79070430de80bfeab162384c36a09, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_codegen$templates$CodeTemplatesFunction );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
