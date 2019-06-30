/* Generated code for Python source for module 'importlib.machinery'
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

/* The _module_importlib$machinery is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_importlib$machinery;
PyDictObject *moduledict_importlib$machinery;

/* The module constants used, if any. */
static PyObject *const_tuple_e6b80a908bb6aa5dc0871840f4fec4c4_tuple;
extern PyObject *const_tuple_str_plain_SourcelessFileLoader_tuple;
extern PyObject *const_str_plain_ModuleSpec;
extern PyObject *const_str_plain_ExtensionFileLoader;
extern PyObject *const_str_plain_all_suffixes;
static PyObject *const_str_digest_6592ed324b1aaa2eac76d1eb9e519528;
static PyObject *const_str_digest_91dc64ee5fac254d536ed11e06cdfa2e;
extern PyObject *const_str_plain_OPTIMIZED_BYTECODE_SUFFIXES;
extern PyObject *const_str_plain__imp;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_WindowsRegistryFinder;
static PyObject *const_tuple_str_plain_SourceFileLoader_tuple;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain__bootstrap_external;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_plain_FrozenImporter_tuple;
extern PyObject *const_str_plain_FrozenImporter;
extern PyObject *const_str_plain_DEBUG_BYTECODE_SUFFIXES;
static PyObject *const_tuple_str_plain_FileFinder_tuple;
extern PyObject *const_str_plain_EXTENSION_SUFFIXES;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_plain_PathFinder_tuple;
extern PyObject *const_str_plain_SourceFileLoader;
static PyObject *const_str_digest_6fed3f6e111cab4f95c4295e2aef9a01;
extern PyObject *const_str_plain_PathFinder;
extern PyObject *const_str_plain_SourcelessFileLoader;
extern PyObject *const_str_plain___doc__;
static PyObject *const_tuple_str_plain_ExtensionFileLoader_tuple;
extern PyObject *const_str_plain__bootstrap;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_BuiltinImporter;
static PyObject *const_tuple_str_plain_BuiltinImporter_tuple;
static PyObject *const_tuple_str_plain_ModuleSpec_tuple;
extern PyObject *const_str_plain_FileFinder;
extern PyObject *const_str_plain_SOURCE_SUFFIXES;
extern PyObject *const_str_digest_21bf9fbf2119a9a0e13f22888eeca42d;
static PyObject *const_str_digest_49f5ae547ee4274eed9583ac585205ee;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_BYTECODE_SUFFIXES;
static PyObject *const_tuple_str_plain_WindowsRegistryFinder_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_e6b80a908bb6aa5dc0871840f4fec4c4_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_e6b80a908bb6aa5dc0871840f4fec4c4_tuple, 0, const_str_plain_SOURCE_SUFFIXES ); Py_INCREF( const_str_plain_SOURCE_SUFFIXES );
    PyTuple_SET_ITEM( const_tuple_e6b80a908bb6aa5dc0871840f4fec4c4_tuple, 1, const_str_plain_DEBUG_BYTECODE_SUFFIXES ); Py_INCREF( const_str_plain_DEBUG_BYTECODE_SUFFIXES );
    PyTuple_SET_ITEM( const_tuple_e6b80a908bb6aa5dc0871840f4fec4c4_tuple, 2, const_str_plain_OPTIMIZED_BYTECODE_SUFFIXES ); Py_INCREF( const_str_plain_OPTIMIZED_BYTECODE_SUFFIXES );
    PyTuple_SET_ITEM( const_tuple_e6b80a908bb6aa5dc0871840f4fec4c4_tuple, 3, const_str_plain_BYTECODE_SUFFIXES ); Py_INCREF( const_str_plain_BYTECODE_SUFFIXES );
    PyTuple_SET_ITEM( const_tuple_e6b80a908bb6aa5dc0871840f4fec4c4_tuple, 4, const_str_plain_EXTENSION_SUFFIXES ); Py_INCREF( const_str_plain_EXTENSION_SUFFIXES );
    const_str_digest_6592ed324b1aaa2eac76d1eb9e519528 = UNSTREAM_STRING( &constant_bin[ 903156 ], 65, 0 );
    const_str_digest_91dc64ee5fac254d536ed11e06cdfa2e = UNSTREAM_STRING( &constant_bin[ 903221 ], 28, 0 );
    const_tuple_str_plain_SourceFileLoader_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SourceFileLoader_tuple, 0, const_str_plain_SourceFileLoader ); Py_INCREF( const_str_plain_SourceFileLoader );
    const_tuple_str_plain_FrozenImporter_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_FrozenImporter_tuple, 0, const_str_plain_FrozenImporter ); Py_INCREF( const_str_plain_FrozenImporter );
    const_tuple_str_plain_FileFinder_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_FileFinder_tuple, 0, const_str_plain_FileFinder ); Py_INCREF( const_str_plain_FileFinder );
    const_tuple_str_plain_PathFinder_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PathFinder_tuple, 0, const_str_plain_PathFinder ); Py_INCREF( const_str_plain_PathFinder );
    const_str_digest_6fed3f6e111cab4f95c4295e2aef9a01 = UNSTREAM_STRING( &constant_bin[ 903249 ], 57, 0 );
    const_tuple_str_plain_ExtensionFileLoader_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ExtensionFileLoader_tuple, 0, const_str_plain_ExtensionFileLoader ); Py_INCREF( const_str_plain_ExtensionFileLoader );
    const_tuple_str_plain_BuiltinImporter_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_BuiltinImporter_tuple, 0, const_str_plain_BuiltinImporter ); Py_INCREF( const_str_plain_BuiltinImporter );
    const_tuple_str_plain_ModuleSpec_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ModuleSpec_tuple, 0, const_str_plain_ModuleSpec ); Py_INCREF( const_str_plain_ModuleSpec );
    const_str_digest_49f5ae547ee4274eed9583ac585205ee = UNSTREAM_STRING( &constant_bin[ 903306 ], 54, 0 );
    const_tuple_str_plain_WindowsRegistryFinder_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_WindowsRegistryFinder_tuple, 0, const_str_plain_WindowsRegistryFinder ); Py_INCREF( const_str_plain_WindowsRegistryFinder );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_importlib$machinery( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_0b10ea0b40f428ef5a3551b70cc88b94;
static PyCodeObject *codeobj_d9cca89984d6f0cde29cfa6fcde94954;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_49f5ae547ee4274eed9583ac585205ee;
    codeobj_0b10ea0b40f428ef5a3551b70cc88b94 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_91dc64ee5fac254d536ed11e06cdfa2e, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_d9cca89984d6f0cde29cfa6fcde94954 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_all_suffixes, 19, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_importlib$machinery$$$function_1_all_suffixes(  );


// The module function definitions.
static PyObject *impl_importlib$machinery$$$function_1_all_suffixes( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    static struct Nuitka_FrameObject *cache_frame_d9cca89984d6f0cde29cfa6fcde94954 = NULL;

    struct Nuitka_FrameObject *frame_d9cca89984d6f0cde29cfa6fcde94954;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_d9cca89984d6f0cde29cfa6fcde94954, codeobj_d9cca89984d6f0cde29cfa6fcde94954, module_importlib$machinery, 0 );
    frame_d9cca89984d6f0cde29cfa6fcde94954 = cache_frame_d9cca89984d6f0cde29cfa6fcde94954;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d9cca89984d6f0cde29cfa6fcde94954 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d9cca89984d6f0cde29cfa6fcde94954 ) == 2 ); // Frame stack

    // Framed code:
    tmp_left_name_2 = GET_STRING_DICT_VALUE( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain_SOURCE_SUFFIXES );

    if (unlikely( tmp_left_name_2 == NULL ))
    {
        tmp_left_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SOURCE_SUFFIXES );
    }

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SOURCE_SUFFIXES" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 21;

        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = GET_STRING_DICT_VALUE( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain_BYTECODE_SUFFIXES );

    if (unlikely( tmp_right_name_1 == NULL ))
    {
        tmp_right_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BYTECODE_SUFFIXES );
    }

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BYTECODE_SUFFIXES" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 21;

        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = GET_STRING_DICT_VALUE( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain_EXTENSION_SUFFIXES );

    if (unlikely( tmp_right_name_2 == NULL ))
    {
        tmp_right_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EXTENSION_SUFFIXES );
    }

    if ( tmp_right_name_2 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "EXTENSION_SUFFIXES" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 21;

        goto frame_exception_exit_1;
    }

    tmp_return_value = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;

        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9cca89984d6f0cde29cfa6fcde94954 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9cca89984d6f0cde29cfa6fcde94954 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9cca89984d6f0cde29cfa6fcde94954 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d9cca89984d6f0cde29cfa6fcde94954, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d9cca89984d6f0cde29cfa6fcde94954->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d9cca89984d6f0cde29cfa6fcde94954, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d9cca89984d6f0cde29cfa6fcde94954,
        type_description_1
    );


    // Release cached frame.
    if ( frame_d9cca89984d6f0cde29cfa6fcde94954 == cache_frame_d9cca89984d6f0cde29cfa6fcde94954 )
    {
        Py_DECREF( frame_d9cca89984d6f0cde29cfa6fcde94954 );
    }
    cache_frame_d9cca89984d6f0cde29cfa6fcde94954 = NULL;

    assertFrameObject( frame_d9cca89984d6f0cde29cfa6fcde94954 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( importlib$machinery$$$function_1_all_suffixes );
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



static PyObject *MAKE_FUNCTION_importlib$machinery$$$function_1_all_suffixes(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_importlib$machinery$$$function_1_all_suffixes,
        const_str_plain_all_suffixes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d9cca89984d6f0cde29cfa6fcde94954,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_importlib$machinery,
        const_str_digest_6592ed324b1aaa2eac76d1eb9e519528,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_importlib$machinery =
{
    PyModuleDef_HEAD_INIT,
    "importlib.machinery",   /* m_name */
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

MOD_INIT_DECL( importlib$machinery )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_importlib$machinery );
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
    puts("importlib.machinery: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("importlib.machinery: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("importlib.machinery: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initimportlib$machinery" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_importlib$machinery = Py_InitModule4(
        "importlib.machinery",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_importlib$machinery = PyModule_Create( &mdef_importlib$machinery );
#endif

    moduledict_importlib$machinery = MODULE_DICT( module_importlib$machinery );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_importlib$machinery,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_importlib$machinery,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_importlib$machinery,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_importlib$machinery,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_importlib$machinery );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_21bf9fbf2119a9a0e13f22888eeca42d, module_importlib$machinery );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_fromlist_name_6;
    PyObject *tmp_fromlist_name_7;
    PyObject *tmp_fromlist_name_8;
    PyObject *tmp_fromlist_name_9;
    PyObject *tmp_fromlist_name_10;
    PyObject *tmp_fromlist_name_11;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_globals_name_6;
    PyObject *tmp_globals_name_7;
    PyObject *tmp_globals_name_8;
    PyObject *tmp_globals_name_9;
    PyObject *tmp_globals_name_10;
    PyObject *tmp_globals_name_11;
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
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_level_name_6;
    PyObject *tmp_level_name_7;
    PyObject *tmp_level_name_8;
    PyObject *tmp_level_name_9;
    PyObject *tmp_level_name_10;
    PyObject *tmp_level_name_11;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_locals_name_6;
    PyObject *tmp_locals_name_7;
    PyObject *tmp_locals_name_8;
    PyObject *tmp_locals_name_9;
    PyObject *tmp_locals_name_10;
    PyObject *tmp_locals_name_11;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    PyObject *tmp_name_name_6;
    PyObject *tmp_name_name_7;
    PyObject *tmp_name_name_8;
    PyObject *tmp_name_name_9;
    PyObject *tmp_name_name_10;
    PyObject *tmp_name_name_11;
    struct Nuitka_FrameObject *frame_0b10ea0b40f428ef5a3551b70cc88b94;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_6fed3f6e111cab4f95c4295e2aef9a01;
    UPDATE_STRING_DICT0( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_49f5ae547ee4274eed9583ac585205ee;
    UPDATE_STRING_DICT0( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_name_name_1 = const_str_plain__imp;
    tmp_globals_name_1 = (PyObject *)moduledict_importlib$machinery;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    assert( !(tmp_assign_source_4 == NULL) );
    UPDATE_STRING_DICT1( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain__imp, tmp_assign_source_4 );
    // Frame without reuse.
    frame_0b10ea0b40f428ef5a3551b70cc88b94 = MAKE_MODULE_FRAME( codeobj_0b10ea0b40f428ef5a3551b70cc88b94, module_importlib$machinery );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_0b10ea0b40f428ef5a3551b70cc88b94 );
    assert( Py_REFCNT( frame_0b10ea0b40f428ef5a3551b70cc88b94 ) == 2 );

    // Framed code:
    tmp_name_name_2 = const_str_plain__bootstrap;
    tmp_globals_name_2 = (PyObject *)moduledict_importlib$machinery;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_ModuleSpec_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_0b10ea0b40f428ef5a3551b70cc88b94->m_frame.f_lineno = 5;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_ModuleSpec,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_ModuleSpec );
    }

    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain_ModuleSpec, tmp_assign_source_5 );
    tmp_name_name_3 = const_str_plain__bootstrap;
    tmp_globals_name_3 = (PyObject *)moduledict_importlib$machinery;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_BuiltinImporter_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_0b10ea0b40f428ef5a3551b70cc88b94->m_frame.f_lineno = 6;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_2 ) )
    {
       tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_2,
            (PyObject *)MODULE_DICT(tmp_import_name_from_2),
            const_str_plain_BuiltinImporter,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_BuiltinImporter );
    }

    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain_BuiltinImporter, tmp_assign_source_6 );
    tmp_name_name_4 = const_str_plain__bootstrap;
    tmp_globals_name_4 = (PyObject *)moduledict_importlib$machinery;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_FrozenImporter_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_0b10ea0b40f428ef5a3551b70cc88b94->m_frame.f_lineno = 7;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_3 ) )
    {
       tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_3,
            (PyObject *)MODULE_DICT(tmp_import_name_from_3),
            const_str_plain_FrozenImporter,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_FrozenImporter );
    }

    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain_FrozenImporter, tmp_assign_source_7 );
    tmp_name_name_5 = const_str_plain__bootstrap_external;
    tmp_globals_name_5 = (PyObject *)moduledict_importlib$machinery;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_e6b80a908bb6aa5dc0871840f4fec4c4_tuple;
    tmp_level_name_5 = const_int_pos_1;
    frame_0b10ea0b40f428ef5a3551b70cc88b94->m_frame.f_lineno = 8;
    tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_8;

    // Tried code:
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    if ( PyModule_Check( tmp_import_name_from_4 ) )
    {
       tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_4,
            (PyObject *)MODULE_DICT(tmp_import_name_from_4),
            const_str_plain_SOURCE_SUFFIXES,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_SOURCE_SUFFIXES );
    }

    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain_SOURCE_SUFFIXES, tmp_assign_source_9 );
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    if ( PyModule_Check( tmp_import_name_from_5 ) )
    {
       tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_5,
            (PyObject *)MODULE_DICT(tmp_import_name_from_5),
            const_str_plain_DEBUG_BYTECODE_SUFFIXES,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_DEBUG_BYTECODE_SUFFIXES );
    }

    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain_DEBUG_BYTECODE_SUFFIXES, tmp_assign_source_10 );
    tmp_import_name_from_6 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_6 );
    if ( PyModule_Check( tmp_import_name_from_6 ) )
    {
       tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_6,
            (PyObject *)MODULE_DICT(tmp_import_name_from_6),
            const_str_plain_OPTIMIZED_BYTECODE_SUFFIXES,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_OPTIMIZED_BYTECODE_SUFFIXES );
    }

    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain_OPTIMIZED_BYTECODE_SUFFIXES, tmp_assign_source_11 );
    tmp_import_name_from_7 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_7 );
    if ( PyModule_Check( tmp_import_name_from_7 ) )
    {
       tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_7,
            (PyObject *)MODULE_DICT(tmp_import_name_from_7),
            const_str_plain_BYTECODE_SUFFIXES,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_BYTECODE_SUFFIXES );
    }

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain_BYTECODE_SUFFIXES, tmp_assign_source_12 );
    tmp_import_name_from_8 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_8 );
    if ( PyModule_Check( tmp_import_name_from_8 ) )
    {
       tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_8,
            (PyObject *)MODULE_DICT(tmp_import_name_from_8),
            const_str_plain_EXTENSION_SUFFIXES,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_EXTENSION_SUFFIXES );
    }

    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain_EXTENSION_SUFFIXES, tmp_assign_source_13 );
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

    tmp_name_name_6 = const_str_plain__bootstrap_external;
    tmp_globals_name_6 = (PyObject *)moduledict_importlib$machinery;
    tmp_locals_name_6 = Py_None;
    tmp_fromlist_name_6 = const_tuple_str_plain_WindowsRegistryFinder_tuple;
    tmp_level_name_6 = const_int_pos_1;
    frame_0b10ea0b40f428ef5a3551b70cc88b94->m_frame.f_lineno = 11;
    tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_9 ) )
    {
       tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_9,
            (PyObject *)MODULE_DICT(tmp_import_name_from_9),
            const_str_plain_WindowsRegistryFinder,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_WindowsRegistryFinder );
    }

    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain_WindowsRegistryFinder, tmp_assign_source_14 );
    tmp_name_name_7 = const_str_plain__bootstrap_external;
    tmp_globals_name_7 = (PyObject *)moduledict_importlib$machinery;
    tmp_locals_name_7 = Py_None;
    tmp_fromlist_name_7 = const_tuple_str_plain_PathFinder_tuple;
    tmp_level_name_7 = const_int_pos_1;
    frame_0b10ea0b40f428ef5a3551b70cc88b94->m_frame.f_lineno = 12;
    tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_10 ) )
    {
       tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_10,
            (PyObject *)MODULE_DICT(tmp_import_name_from_10),
            const_str_plain_PathFinder,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_PathFinder );
    }

    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain_PathFinder, tmp_assign_source_15 );
    tmp_name_name_8 = const_str_plain__bootstrap_external;
    tmp_globals_name_8 = (PyObject *)moduledict_importlib$machinery;
    tmp_locals_name_8 = Py_None;
    tmp_fromlist_name_8 = const_tuple_str_plain_FileFinder_tuple;
    tmp_level_name_8 = const_int_pos_1;
    frame_0b10ea0b40f428ef5a3551b70cc88b94->m_frame.f_lineno = 13;
    tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_11 ) )
    {
       tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_11,
            (PyObject *)MODULE_DICT(tmp_import_name_from_11),
            const_str_plain_FileFinder,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_FileFinder );
    }

    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain_FileFinder, tmp_assign_source_16 );
    tmp_name_name_9 = const_str_plain__bootstrap_external;
    tmp_globals_name_9 = (PyObject *)moduledict_importlib$machinery;
    tmp_locals_name_9 = Py_None;
    tmp_fromlist_name_9 = const_tuple_str_plain_SourceFileLoader_tuple;
    tmp_level_name_9 = const_int_pos_1;
    frame_0b10ea0b40f428ef5a3551b70cc88b94->m_frame.f_lineno = 14;
    tmp_import_name_from_12 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_12 ) )
    {
       tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_12,
            (PyObject *)MODULE_DICT(tmp_import_name_from_12),
            const_str_plain_SourceFileLoader,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_SourceFileLoader );
    }

    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain_SourceFileLoader, tmp_assign_source_17 );
    tmp_name_name_10 = const_str_plain__bootstrap_external;
    tmp_globals_name_10 = (PyObject *)moduledict_importlib$machinery;
    tmp_locals_name_10 = Py_None;
    tmp_fromlist_name_10 = const_tuple_str_plain_SourcelessFileLoader_tuple;
    tmp_level_name_10 = const_int_pos_1;
    frame_0b10ea0b40f428ef5a3551b70cc88b94->m_frame.f_lineno = 15;
    tmp_import_name_from_13 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_13 ) )
    {
       tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_13,
            (PyObject *)MODULE_DICT(tmp_import_name_from_13),
            const_str_plain_SourcelessFileLoader,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_SourcelessFileLoader );
    }

    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain_SourcelessFileLoader, tmp_assign_source_18 );
    tmp_name_name_11 = const_str_plain__bootstrap_external;
    tmp_globals_name_11 = (PyObject *)moduledict_importlib$machinery;
    tmp_locals_name_11 = Py_None;
    tmp_fromlist_name_11 = const_tuple_str_plain_ExtensionFileLoader_tuple;
    tmp_level_name_11 = const_int_pos_1;
    frame_0b10ea0b40f428ef5a3551b70cc88b94->m_frame.f_lineno = 16;
    tmp_import_name_from_14 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_14 ) )
    {
       tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_14,
            (PyObject *)MODULE_DICT(tmp_import_name_from_14),
            const_str_plain_ExtensionFileLoader,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_ExtensionFileLoader );
    }

    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain_ExtensionFileLoader, tmp_assign_source_19 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b10ea0b40f428ef5a3551b70cc88b94 );
#endif
    popFrameStack();

    assertFrameObject( frame_0b10ea0b40f428ef5a3551b70cc88b94 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0b10ea0b40f428ef5a3551b70cc88b94 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0b10ea0b40f428ef5a3551b70cc88b94, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0b10ea0b40f428ef5a3551b70cc88b94->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0b10ea0b40f428ef5a3551b70cc88b94, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_20 = MAKE_FUNCTION_importlib$machinery$$$function_1_all_suffixes(  );
    UPDATE_STRING_DICT1( moduledict_importlib$machinery, (Nuitka_StringObject *)const_str_plain_all_suffixes, tmp_assign_source_20 );

    return MOD_RETURN_VALUE( module_importlib$machinery );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
