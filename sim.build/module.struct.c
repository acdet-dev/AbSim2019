/* Generated code for Python source for module 'struct'
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

/* The _module_struct is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_struct;
PyDictObject *moduledict_struct;

/* The module constants used, if any. */
extern PyObject *const_str_plain_Struct;
static PyObject *const_str_plain_iter_unpack;
extern PyObject *const_str_plain_pack;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain__clearcache;
extern PyObject *const_int_0;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_str_plain_struct;
extern PyObject *const_str_plain_unpack;
extern PyObject *const_str_plain_calcsize;
static PyObject *const_str_plain_pack_into;
extern PyObject *const_str_chr_42;
static PyObject *const_str_digest_83ad70b0c1268fe4ba8915929bf26911;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_02583cd4722c02c01272a7df7bf11408;
static PyObject *const_str_plain__struct;
extern PyObject *const_tuple_str_plain___doc___tuple;
static PyObject *const_list_5353d038b76a46b993cb610962ebfcd4_list;
extern PyObject *const_str_plain_unpack_from;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *const_tuple_str_plain__clearcache_tuple;
extern PyObject *const_str_plain_error;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_iter_unpack = UNSTREAM_STRING( &constant_bin[ 1944742 ], 11, 1 );
    const_str_plain__clearcache = UNSTREAM_STRING( &constant_bin[ 1944753 ], 11, 1 );
    const_str_plain_pack_into = UNSTREAM_STRING( &constant_bin[ 1944764 ], 9, 1 );
    const_str_digest_83ad70b0c1268fe4ba8915929bf26911 = UNSTREAM_STRING( &constant_bin[ 1944773 ], 15, 0 );
    const_str_digest_02583cd4722c02c01272a7df7bf11408 = UNSTREAM_STRING( &constant_bin[ 1944788 ], 41, 0 );
    const_str_plain__struct = UNSTREAM_STRING( &constant_bin[ 449146 ], 7, 1 );
    const_list_5353d038b76a46b993cb610962ebfcd4_list = PyList_New( 8 );
    PyList_SET_ITEM( const_list_5353d038b76a46b993cb610962ebfcd4_list, 0, const_str_plain_calcsize ); Py_INCREF( const_str_plain_calcsize );
    PyList_SET_ITEM( const_list_5353d038b76a46b993cb610962ebfcd4_list, 1, const_str_plain_pack ); Py_INCREF( const_str_plain_pack );
    PyList_SET_ITEM( const_list_5353d038b76a46b993cb610962ebfcd4_list, 2, const_str_plain_pack_into ); Py_INCREF( const_str_plain_pack_into );
    PyList_SET_ITEM( const_list_5353d038b76a46b993cb610962ebfcd4_list, 3, const_str_plain_unpack ); Py_INCREF( const_str_plain_unpack );
    PyList_SET_ITEM( const_list_5353d038b76a46b993cb610962ebfcd4_list, 4, const_str_plain_unpack_from ); Py_INCREF( const_str_plain_unpack_from );
    PyList_SET_ITEM( const_list_5353d038b76a46b993cb610962ebfcd4_list, 5, const_str_plain_iter_unpack ); Py_INCREF( const_str_plain_iter_unpack );
    PyList_SET_ITEM( const_list_5353d038b76a46b993cb610962ebfcd4_list, 6, const_str_plain_Struct ); Py_INCREF( const_str_plain_Struct );
    PyList_SET_ITEM( const_list_5353d038b76a46b993cb610962ebfcd4_list, 7, const_str_plain_error ); Py_INCREF( const_str_plain_error );
    const_tuple_str_plain__clearcache_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__clearcache_tuple, 0, const_str_plain__clearcache ); Py_INCREF( const_str_plain__clearcache );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_struct( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_06d05ba45e6a6da1603a9ab3770a36fe;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_02583cd4722c02c01272a7df7bf11408;
    codeobj_06d05ba45e6a6da1603a9ab3770a36fe = MAKE_CODEOBJ( module_filename_obj, const_str_digest_83ad70b0c1268fe4ba8915929bf26911, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_struct =
{
    PyModuleDef_HEAD_INIT,
    "struct",   /* m_name */
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

MOD_INIT_DECL( struct )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_struct );
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
    puts("struct: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("struct: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("struct: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initstruct" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_struct = Py_InitModule4(
        "struct",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_struct = PyModule_Create( &mdef_struct );
#endif

    moduledict_struct = MODULE_DICT( module_struct );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_struct, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_struct,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_struct, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_struct,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_struct,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_struct, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_struct,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_struct );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_struct, module_struct );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_struct, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_struct, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_struct, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_struct, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_struct, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_struct, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    bool tmp_result;
    PyObject *tmp_star_imported_1;
    struct Nuitka_FrameObject *frame_06d05ba45e6a6da1603a9ab3770a36fe;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_struct, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_02583cd4722c02c01272a7df7bf11408;
    UPDATE_STRING_DICT0( moduledict_struct, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_struct, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = LIST_COPY( const_list_5353d038b76a46b993cb610962ebfcd4_list );
    UPDATE_STRING_DICT1( moduledict_struct, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_4 );
    // Frame without reuse.
    frame_06d05ba45e6a6da1603a9ab3770a36fe = MAKE_MODULE_FRAME( codeobj_06d05ba45e6a6da1603a9ab3770a36fe, module_struct );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_06d05ba45e6a6da1603a9ab3770a36fe );
    assert( Py_REFCNT( frame_06d05ba45e6a6da1603a9ab3770a36fe ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain__struct;
    tmp_globals_name_1 = (PyObject *)moduledict_struct;
    tmp_locals_name_1 = (PyObject *)moduledict_struct;
    tmp_fromlist_name_1 = const_tuple_str_chr_42_tuple;
    tmp_level_name_1 = const_int_0;
    frame_06d05ba45e6a6da1603a9ab3770a36fe->m_frame.f_lineno = 13;
    tmp_star_imported_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_struct, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;

        goto frame_exception_exit_1;
    }
    tmp_name_name_2 = const_str_plain__struct;
    tmp_globals_name_2 = (PyObject *)moduledict_struct;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain__clearcache_tuple;
    tmp_level_name_2 = const_int_0;
    frame_06d05ba45e6a6da1603a9ab3770a36fe->m_frame.f_lineno = 14;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain__clearcache );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_struct, (Nuitka_StringObject *)const_str_plain__clearcache, tmp_assign_source_5 );
    tmp_name_name_3 = const_str_plain__struct;
    tmp_globals_name_3 = (PyObject *)moduledict_struct;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain___doc___tuple;
    tmp_level_name_3 = const_int_0;
    frame_06d05ba45e6a6da1603a9ab3770a36fe->m_frame.f_lineno = 15;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain___doc__ );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_struct, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_6 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_06d05ba45e6a6da1603a9ab3770a36fe );
#endif
    popFrameStack();

    assertFrameObject( frame_06d05ba45e6a6da1603a9ab3770a36fe );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_06d05ba45e6a6da1603a9ab3770a36fe );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_06d05ba45e6a6da1603a9ab3770a36fe, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_06d05ba45e6a6da1603a9ab3770a36fe->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_06d05ba45e6a6da1603a9ab3770a36fe, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_struct );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
