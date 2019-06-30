/* Generated code for Python source for module 'codegen.OperatorCodes'
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

/* The _module_codegen$OperatorCodes is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_codegen$OperatorCodes;
PyDictObject *moduledict_codegen$OperatorCodes;

/* The module constants used, if any. */
extern PyObject *const_str_plain_NotEq;
static PyObject *const_tuple_str_plain_UNARY_NOT_int_0_tuple;
extern PyObject *const_str_plain_rich_comparison_codes;
static PyObject *const_str_plain_PyObject_Repr;
static PyObject *const_str_digest_d425185753ea42ed35df6ed64c35395a;
static PyObject *const_str_plain_NE;
extern PyObject *const_str_plain_Not;
extern PyObject *const_str_plain_IMatMult;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_binary_operator_codes;
static PyObject *const_dict_e2912405b80159c682a78acfecc63fdc;
extern PyObject *const_str_plain_LtE;
extern PyObject *const_str_plain_Eq;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_str_plain_PyObject_Repr_int_pos_1_tuple;
static PyObject *const_str_plain_GT;
static PyObject *const_dict_b1bd5d6ccb9069c4f95af06e40959615;
static PyObject *const_str_digest_64a66b80acebb4add28b1019e05a7254;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_SEQUENCE_CONTAINS_NOT;
static PyObject *const_str_plain_PyNumber_MatrixMultiply;
extern PyObject *const_int_pos_350;
extern PyObject *const_int_0;
static PyObject *const_str_plain_PyNumber_Invert;
static PyObject *const_dict_b275b7c42e57505b59eab133ca0899f8;
static PyObject *const_str_digest_0545a44adacea53dfb8fe1dfae54c866;
static PyObject *const_str_plain_LE;
static PyObject *const_tuple_str_plain_PyNumber_Invert_int_pos_1_tuple;
extern PyObject *const_str_plain_MatMult;
extern PyObject *const_str_plain_Invert;
extern PyObject *const_str_plain_SEQUENCE_CONTAINS;
extern PyObject *const_tuple_str_plain_python_version_tuple;
extern PyObject *const_str_plain_PythonVersions;
static PyObject *const_str_plain_PyNumber_Negative;
extern PyObject *const_str_plain_Lt;
static PyObject *const_dict_d8fc970dc6d50745749fc61b6189adec;
extern PyObject *const_str_plain_Gt;
extern PyObject *const_str_plain_GtE;
extern PyObject *const_str_plain_UNARY_NOT;
static PyObject *const_str_plain_PyNumber_Positive;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_UAdd;
static PyObject *const_str_plain_EQ;
static PyObject *const_tuple_str_plain_PyNumber_Positive_int_pos_1_tuple;
extern PyObject *const_str_plain_In;
extern PyObject *const_str_plain_USub;
static PyObject *const_str_plain_PyNumber_InPlaceMatrixMultiply;
extern PyObject *const_str_plain_unary_operator_codes;
static PyObject *const_str_plain_GE;
static PyObject *const_str_plain_LT;
static PyObject *const_str_digest_d7e29210bb0d9543369af78c498dd33f;
extern PyObject *const_str_plain_python_version;
extern PyObject *const_str_plain_NotIn;
static PyObject *const_tuple_str_plain_PyNumber_Negative_int_pos_1_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_containing_comparison_codes;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_Repr;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_plain_UNARY_NOT_int_0_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_UNARY_NOT_int_0_tuple, 0, const_str_plain_UNARY_NOT ); Py_INCREF( const_str_plain_UNARY_NOT );
    PyTuple_SET_ITEM( const_tuple_str_plain_UNARY_NOT_int_0_tuple, 1, const_int_0 ); Py_INCREF( const_int_0 );
    const_str_plain_PyObject_Repr = UNSTREAM_STRING( &constant_bin[ 304963 ], 13, 1 );
    const_str_digest_d425185753ea42ed35df6ed64c35395a = UNSTREAM_STRING( &constant_bin[ 304976 ], 21, 0 );
    const_str_plain_NE = UNSTREAM_STRING( &constant_bin[ 24796 ], 2, 1 );
    const_dict_e2912405b80159c682a78acfecc63fdc = _PyDict_NewPresized( 6 );
    const_str_plain_LT = UNSTREAM_STRING( &constant_bin[ 39326 ], 2, 1 );
    PyDict_SetItem( const_dict_e2912405b80159c682a78acfecc63fdc, const_str_plain_Lt, const_str_plain_LT );
    const_str_plain_LE = UNSTREAM_STRING( &constant_bin[ 6938 ], 2, 1 );
    PyDict_SetItem( const_dict_e2912405b80159c682a78acfecc63fdc, const_str_plain_LtE, const_str_plain_LE );
    const_str_plain_EQ = UNSTREAM_STRING( &constant_bin[ 304997 ], 2, 1 );
    PyDict_SetItem( const_dict_e2912405b80159c682a78acfecc63fdc, const_str_plain_Eq, const_str_plain_EQ );
    PyDict_SetItem( const_dict_e2912405b80159c682a78acfecc63fdc, const_str_plain_NotEq, const_str_plain_NE );
    const_str_plain_GT = UNSTREAM_STRING( &constant_bin[ 304999 ], 2, 1 );
    PyDict_SetItem( const_dict_e2912405b80159c682a78acfecc63fdc, const_str_plain_Gt, const_str_plain_GT );
    const_str_plain_GE = UNSTREAM_STRING( &constant_bin[ 6946 ], 2, 1 );
    PyDict_SetItem( const_dict_e2912405b80159c682a78acfecc63fdc, const_str_plain_GtE, const_str_plain_GE );
    assert( PyDict_Size( const_dict_e2912405b80159c682a78acfecc63fdc ) == 6 );
    const_tuple_str_plain_PyObject_Repr_int_pos_1_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PyObject_Repr_int_pos_1_tuple, 0, const_str_plain_PyObject_Repr ); Py_INCREF( const_str_plain_PyObject_Repr );
    PyTuple_SET_ITEM( const_tuple_str_plain_PyObject_Repr_int_pos_1_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_dict_b1bd5d6ccb9069c4f95af06e40959615 = _PyDict_NewPresized( 5 );
    const_tuple_str_plain_PyNumber_Positive_int_pos_1_tuple = PyTuple_New( 2 );
    const_str_plain_PyNumber_Positive = UNSTREAM_STRING( &constant_bin[ 305001 ], 17, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PyNumber_Positive_int_pos_1_tuple, 0, const_str_plain_PyNumber_Positive ); Py_INCREF( const_str_plain_PyNumber_Positive );
    PyTuple_SET_ITEM( const_tuple_str_plain_PyNumber_Positive_int_pos_1_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyDict_SetItem( const_dict_b1bd5d6ccb9069c4f95af06e40959615, const_str_plain_UAdd, const_tuple_str_plain_PyNumber_Positive_int_pos_1_tuple );
    const_tuple_str_plain_PyNumber_Negative_int_pos_1_tuple = PyTuple_New( 2 );
    const_str_plain_PyNumber_Negative = UNSTREAM_STRING( &constant_bin[ 305018 ], 17, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PyNumber_Negative_int_pos_1_tuple, 0, const_str_plain_PyNumber_Negative ); Py_INCREF( const_str_plain_PyNumber_Negative );
    PyTuple_SET_ITEM( const_tuple_str_plain_PyNumber_Negative_int_pos_1_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyDict_SetItem( const_dict_b1bd5d6ccb9069c4f95af06e40959615, const_str_plain_USub, const_tuple_str_plain_PyNumber_Negative_int_pos_1_tuple );
    const_tuple_str_plain_PyNumber_Invert_int_pos_1_tuple = PyTuple_New( 2 );
    const_str_plain_PyNumber_Invert = UNSTREAM_STRING( &constant_bin[ 305035 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PyNumber_Invert_int_pos_1_tuple, 0, const_str_plain_PyNumber_Invert ); Py_INCREF( const_str_plain_PyNumber_Invert );
    PyTuple_SET_ITEM( const_tuple_str_plain_PyNumber_Invert_int_pos_1_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyDict_SetItem( const_dict_b1bd5d6ccb9069c4f95af06e40959615, const_str_plain_Invert, const_tuple_str_plain_PyNumber_Invert_int_pos_1_tuple );
    PyDict_SetItem( const_dict_b1bd5d6ccb9069c4f95af06e40959615, const_str_plain_Repr, const_tuple_str_plain_PyObject_Repr_int_pos_1_tuple );
    PyDict_SetItem( const_dict_b1bd5d6ccb9069c4f95af06e40959615, const_str_plain_Not, const_tuple_str_plain_UNARY_NOT_int_0_tuple );
    assert( PyDict_Size( const_dict_b1bd5d6ccb9069c4f95af06e40959615 ) == 5 );
    const_str_digest_64a66b80acebb4add28b1019e05a7254 = UNSTREAM_STRING( &constant_bin[ 305050 ], 106, 0 );
    const_str_plain_SEQUENCE_CONTAINS_NOT = UNSTREAM_STRING( &constant_bin[ 305156 ], 21, 1 );
    const_str_plain_PyNumber_MatrixMultiply = UNSTREAM_STRING( &constant_bin[ 305177 ], 23, 1 );
    const_dict_b275b7c42e57505b59eab133ca0899f8 = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 305200 ], 503 );
    const_str_digest_0545a44adacea53dfb8fe1dfae54c866 = UNSTREAM_STRING( &constant_bin[ 305703 ], 109, 0 );
    const_dict_d8fc970dc6d50745749fc61b6189adec = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_d8fc970dc6d50745749fc61b6189adec, const_str_plain_In, const_str_plain_SEQUENCE_CONTAINS );
    PyDict_SetItem( const_dict_d8fc970dc6d50745749fc61b6189adec, const_str_plain_NotIn, const_str_plain_SEQUENCE_CONTAINS_NOT );
    assert( PyDict_Size( const_dict_d8fc970dc6d50745749fc61b6189adec ) == 2 );
    const_str_plain_PyNumber_InPlaceMatrixMultiply = UNSTREAM_STRING( &constant_bin[ 305812 ], 30, 1 );
    const_str_digest_d7e29210bb0d9543369af78c498dd33f = UNSTREAM_STRING( &constant_bin[ 305842 ], 30, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_codegen$OperatorCodes( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_332f068c5ada425dae3eab9fbc2874ee;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_64a66b80acebb4add28b1019e05a7254;
    codeobj_332f068c5ada425dae3eab9fbc2874ee = MAKE_CODEOBJ( module_filename_obj, const_str_digest_d7e29210bb0d9543369af78c498dd33f, 1, const_tuple_empty, 0, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_codegen$OperatorCodes =
{
    PyModuleDef_HEAD_INIT,
    "codegen.OperatorCodes",   /* m_name */
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

MOD_INIT_DECL( codegen$OperatorCodes )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_codegen$OperatorCodes );
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
    puts("codegen.OperatorCodes: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("codegen.OperatorCodes: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("codegen.OperatorCodes: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initcodegen$OperatorCodes" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_codegen$OperatorCodes = Py_InitModule4(
        "codegen.OperatorCodes",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_codegen$OperatorCodes = PyModule_Create( &mdef_codegen$OperatorCodes );
#endif

    moduledict_codegen$OperatorCodes = MODULE_DICT( module_codegen$OperatorCodes );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$OperatorCodes, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_codegen$OperatorCodes,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$OperatorCodes, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_codegen$OperatorCodes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_codegen$OperatorCodes,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_codegen$OperatorCodes, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_codegen$OperatorCodes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_codegen$OperatorCodes );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_d425185753ea42ed35df6ed64c35395a, module_codegen$OperatorCodes );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_codegen$OperatorCodes, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_codegen$OperatorCodes, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_codegen$OperatorCodes, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_codegen$OperatorCodes, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_codegen$OperatorCodes, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_codegen$OperatorCodes, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    int tmp_cmp_GtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    bool tmp_result;
    struct Nuitka_FrameObject *frame_332f068c5ada425dae3eab9fbc2874ee;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_0545a44adacea53dfb8fe1dfae54c866;
    UPDATE_STRING_DICT0( moduledict_codegen$OperatorCodes, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_64a66b80acebb4add28b1019e05a7254;
    UPDATE_STRING_DICT0( moduledict_codegen$OperatorCodes, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_codegen$OperatorCodes, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_332f068c5ada425dae3eab9fbc2874ee = MAKE_MODULE_FRAME( codeobj_332f068c5ada425dae3eab9fbc2874ee, module_codegen$OperatorCodes );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_332f068c5ada425dae3eab9fbc2874ee );
    assert( Py_REFCNT( frame_332f068c5ada425dae3eab9fbc2874ee ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_PythonVersions;
    tmp_globals_name_1 = (PyObject *)moduledict_codegen$OperatorCodes;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_python_version_tuple;
    tmp_level_name_1 = const_int_0;
    frame_332f068c5ada425dae3eab9fbc2874ee->m_frame.f_lineno = 24;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_python_version );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_codegen$OperatorCodes, (Nuitka_StringObject *)const_str_plain_python_version, tmp_assign_source_4 );
    tmp_assign_source_5 = PyDict_Copy( const_dict_b275b7c42e57505b59eab133ca0899f8 );
    UPDATE_STRING_DICT1( moduledict_codegen$OperatorCodes, (Nuitka_StringObject *)const_str_plain_binary_operator_codes, tmp_assign_source_5 );
    tmp_compare_left_1 = GET_STRING_DICT_VALUE( moduledict_codegen$OperatorCodes, (Nuitka_StringObject *)const_str_plain_python_version );

    if (unlikely( tmp_compare_left_1 == NULL ))
    {
        tmp_compare_left_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_python_version );
    }

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = const_int_pos_350;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;

        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_ass_subvalue_1 = const_str_plain_PyNumber_MatrixMultiply;
    tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( moduledict_codegen$OperatorCodes, (Nuitka_StringObject *)const_str_plain_binary_operator_codes );

    if (unlikely( tmp_ass_subscribed_1 == NULL ))
    {
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_binary_operator_codes );
    }

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "binary_operator_codes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;

        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_plain_MatMult;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;

        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_2 = const_str_plain_PyNumber_InPlaceMatrixMultiply;
    tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE( moduledict_codegen$OperatorCodes, (Nuitka_StringObject *)const_str_plain_binary_operator_codes );

    if (unlikely( tmp_ass_subscribed_2 == NULL ))
    {
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_binary_operator_codes );
    }

    if ( tmp_ass_subscribed_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "binary_operator_codes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;

        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_2 = const_str_plain_IMatMult;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;

        goto frame_exception_exit_1;
    }
    branch_no_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_332f068c5ada425dae3eab9fbc2874ee );
#endif
    popFrameStack();

    assertFrameObject( frame_332f068c5ada425dae3eab9fbc2874ee );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_332f068c5ada425dae3eab9fbc2874ee );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_332f068c5ada425dae3eab9fbc2874ee, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_332f068c5ada425dae3eab9fbc2874ee->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_332f068c5ada425dae3eab9fbc2874ee, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_6 = PyDict_Copy( const_dict_b1bd5d6ccb9069c4f95af06e40959615 );
    UPDATE_STRING_DICT1( moduledict_codegen$OperatorCodes, (Nuitka_StringObject *)const_str_plain_unary_operator_codes, tmp_assign_source_6 );
    tmp_assign_source_7 = PyDict_Copy( const_dict_e2912405b80159c682a78acfecc63fdc );
    UPDATE_STRING_DICT1( moduledict_codegen$OperatorCodes, (Nuitka_StringObject *)const_str_plain_rich_comparison_codes, tmp_assign_source_7 );
    tmp_assign_source_8 = PyDict_Copy( const_dict_d8fc970dc6d50745749fc61b6189adec );
    UPDATE_STRING_DICT1( moduledict_codegen$OperatorCodes, (Nuitka_StringObject *)const_str_plain_containing_comparison_codes, tmp_assign_source_8 );

    return MOD_RETURN_VALUE( module_codegen$OperatorCodes );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
