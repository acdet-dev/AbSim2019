/* Generated code for Python source for module 'tree.InternalModule'
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

/* The _module_tree$InternalModule is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_tree$InternalModule;
PyDictObject *moduledict_tree$InternalModule;

/* The module constants used, if any. */
static PyObject *const_str_plain_cached_value;
extern PyObject *const_str_plain_getInternalModule;
extern PyObject *const_str_plain_atInternal;
static PyObject *const_str_digest_6c1edcd08414c9b07bf5f00ef6920c51;
extern PyObject *const_dict_empty;
static PyObject *const_str_digest_37b5666b3ab9ddf20291484fd84e02fb;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_d4e8078f7f91932bafebb28a7d7aedc5;
static PyObject *const_tuple_str_plain_PythonInternalModule_tuple;
extern PyObject *const_str_plain_replacement;
extern PyObject *const_str_plain_internal_source_ref;
extern PyObject *const_str_plain_SourceCodeReferences;
extern PyObject *const_int_0;
static PyObject *const_tuple_str_plain_internal_tuple;
static PyObject *const_str_digest_e8eebd8edef80e6654e2a2e2363a2177;
static PyObject *const_str_digest_ea8e76b8be2f1a1412008680876e460a;
static PyObject *const_str_digest_e63a27d73c3a7d6efa06f2da681ce32b;
static PyObject *const_str_digest_9d377b0b9f334fdc2edc40c832289105;
extern PyObject *const_str_plain_internal;
extern PyObject *const_str_plain_PythonInternalModule;
static PyObject *const_tuple_str_plain_func_str_plain_replacement_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_tuple_str_plain_func_tuple;
extern PyObject *const_str_plain_once_decorator;
extern PyObject *const_str_plain_func;
extern PyObject *const_tuple_str_plain_fromFilename_tuple;
static PyObject *const_str_digest_84199d190f84dbea77e104d1b64a7287;
extern PyObject *const_str_plain_fromFilename;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___cached__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_cached_value = UNSTREAM_STRING( &constant_bin[ 2050687 ], 12, 1 );
    const_str_digest_6c1edcd08414c9b07bf5f00ef6920c51 = UNSTREAM_STRING( &constant_bin[ 2050699 ], 28, 0 );
    const_str_digest_37b5666b3ab9ddf20291484fd84e02fb = UNSTREAM_STRING( &constant_bin[ 2050727 ], 253, 0 );
    const_tuple_str_plain_PythonInternalModule_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PythonInternalModule_tuple, 0, const_str_plain_PythonInternalModule ); Py_INCREF( const_str_plain_PythonInternalModule );
    const_tuple_str_plain_internal_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_internal_tuple, 0, const_str_plain_internal ); Py_INCREF( const_str_plain_internal );
    const_str_digest_e8eebd8edef80e6654e2a2e2363a2177 = UNSTREAM_STRING( &constant_bin[ 2050707 ], 19, 0 );
    const_str_digest_ea8e76b8be2f1a1412008680876e460a = UNSTREAM_STRING( &constant_bin[ 2050980 ], 209, 0 );
    const_str_digest_e63a27d73c3a7d6efa06f2da681ce32b = UNSTREAM_STRING( &constant_bin[ 2051189 ], 35, 0 );
    const_str_digest_9d377b0b9f334fdc2edc40c832289105 = UNSTREAM_STRING( &constant_bin[ 2051224 ], 104, 0 );
    const_tuple_str_plain_func_str_plain_replacement_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_func_str_plain_replacement_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_str_plain_func_str_plain_replacement_tuple, 1, const_str_plain_replacement ); Py_INCREF( const_str_plain_replacement );
    const_str_digest_84199d190f84dbea77e104d1b64a7287 = UNSTREAM_STRING( &constant_bin[ 2051328 ], 41, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_tree$InternalModule( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_6271e384d419a21895c1284aeead71e2;
static PyCodeObject *codeobj_df3209360d34cb64b8262e19a39385cf;
static PyCodeObject *codeobj_b8a90667a35b24bab9f8d817a254d3a5;
static PyCodeObject *codeobj_33d50a53933a5700758cd32103a0b6df;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_9d377b0b9f334fdc2edc40c832289105;
    codeobj_6271e384d419a21895c1284aeead71e2 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_6c1edcd08414c9b07bf5f00ef6920c51, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_df3209360d34cb64b8262e19a39385cf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getInternalModule, 52, const_tuple_empty, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b8a90667a35b24bab9f8d817a254d3a5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_once_decorator, 31, const_tuple_str_plain_func_str_plain_replacement_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_33d50a53933a5700758cd32103a0b6df = MAKE_CODEOBJ( module_filename_obj, const_str_plain_replacement, 43, const_tuple_str_plain_func_tuple, 0, 0, CO_OPTIMIZED | CO_NEWLOCALS );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_tree$InternalModule$$$function_1_once_decorator(  );


static PyObject *MAKE_FUNCTION_tree$InternalModule$$$function_1_once_decorator$$$function_1_replacement( struct Nuitka_CellObject *closure_func );


static PyObject *MAKE_FUNCTION_tree$InternalModule$$$function_2_getInternalModule(  );


// The module function definitions.
static PyObject *impl_tree$InternalModule$$$function_1_once_decorator( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_func = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *var_replacement = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_b8a90667a35b24bab9f8d817a254d3a5 = NULL;

    struct Nuitka_FrameObject *frame_b8a90667a35b24bab9f8d817a254d3a5;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b8a90667a35b24bab9f8d817a254d3a5, codeobj_b8a90667a35b24bab9f8d817a254d3a5, module_tree$InternalModule, sizeof(void *)+sizeof(void *) );
    frame_b8a90667a35b24bab9f8d817a254d3a5 = cache_frame_b8a90667a35b24bab9f8d817a254d3a5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b8a90667a35b24bab9f8d817a254d3a5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b8a90667a35b24bab9f8d817a254d3a5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = Py_None;
    if ( par_func == NULL )
    {
        tmp_assattr_target_1 = NULL;
    }
    else
    {
        tmp_assattr_target_1 = PyCell_GET( par_func );
    }

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_cached_value, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        type_description_1 = "co";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b8a90667a35b24bab9f8d817a254d3a5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b8a90667a35b24bab9f8d817a254d3a5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b8a90667a35b24bab9f8d817a254d3a5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b8a90667a35b24bab9f8d817a254d3a5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b8a90667a35b24bab9f8d817a254d3a5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b8a90667a35b24bab9f8d817a254d3a5,
        type_description_1,
        par_func,
        var_replacement
    );


    // Release cached frame.
    if ( frame_b8a90667a35b24bab9f8d817a254d3a5 == cache_frame_b8a90667a35b24bab9f8d817a254d3a5 )
    {
        Py_DECREF( frame_b8a90667a35b24bab9f8d817a254d3a5 );
    }
    cache_frame_b8a90667a35b24bab9f8d817a254d3a5 = NULL;

    assertFrameObject( frame_b8a90667a35b24bab9f8d817a254d3a5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_assign_source_1 = MAKE_FUNCTION_tree$InternalModule$$$function_1_once_decorator$$$function_1_replacement( par_func );
    assert( var_replacement == NULL );
    var_replacement = tmp_assign_source_1;

    tmp_return_value = var_replacement;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( tree$InternalModule$$$function_1_once_decorator );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    Py_XDECREF( var_replacement );
    var_replacement = NULL;

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

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tree$InternalModule$$$function_1_once_decorator );
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


static PyObject *impl_tree$InternalModule$$$function_1_once_decorator$$$function_1_replacement( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    bool tmp_is_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static struct Nuitka_FrameObject *cache_frame_33d50a53933a5700758cd32103a0b6df = NULL;

    struct Nuitka_FrameObject *frame_33d50a53933a5700758cd32103a0b6df;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_33d50a53933a5700758cd32103a0b6df, codeobj_33d50a53933a5700758cd32103a0b6df, module_tree$InternalModule, sizeof(void *) );
    frame_33d50a53933a5700758cd32103a0b6df = cache_frame_33d50a53933a5700758cd32103a0b6df;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_33d50a53933a5700758cd32103a0b6df );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_33d50a53933a5700758cd32103a0b6df ) == 2 ); // Frame stack

    // Framed code:
    if ( self->m_closure[0] == NULL )
    {
        tmp_source_name_1 = NULL;
    }
    else
    {
        tmp_source_name_1 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "func" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;
        type_description_1 = "c";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_cached_value );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        type_description_1 = "c";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    if ( self->m_closure[0] == NULL )
    {
        tmp_called_name_1 = NULL;
    }
    else
    {
        tmp_called_name_1 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "func" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "c";
        goto frame_exception_exit_1;
    }

    frame_33d50a53933a5700758cd32103a0b6df->m_frame.f_lineno = 45;
    tmp_assattr_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "c";
        goto frame_exception_exit_1;
    }
    if ( self->m_closure[0] == NULL )
    {
        tmp_assattr_target_1 = NULL;
    }
    else
    {
        tmp_assattr_target_1 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_assattr_target_1 == NULL )
    {
        Py_DECREF( tmp_assattr_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "func" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;
        type_description_1 = "c";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_cached_value, tmp_assattr_name_1 );
    Py_DECREF( tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        type_description_1 = "c";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    if ( self->m_closure[0] == NULL )
    {
        tmp_source_name_2 = NULL;
    }
    else
    {
        tmp_source_name_2 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "func" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;
        type_description_1 = "c";
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_cached_value );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        type_description_1 = "c";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_33d50a53933a5700758cd32103a0b6df );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_33d50a53933a5700758cd32103a0b6df );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_33d50a53933a5700758cd32103a0b6df );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_33d50a53933a5700758cd32103a0b6df, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_33d50a53933a5700758cd32103a0b6df->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_33d50a53933a5700758cd32103a0b6df, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_33d50a53933a5700758cd32103a0b6df,
        type_description_1,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_33d50a53933a5700758cd32103a0b6df == cache_frame_33d50a53933a5700758cd32103a0b6df )
    {
        Py_DECREF( frame_33d50a53933a5700758cd32103a0b6df );
    }
    cache_frame_33d50a53933a5700758cd32103a0b6df = NULL;

    assertFrameObject( frame_33d50a53933a5700758cd32103a0b6df );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tree$InternalModule$$$function_1_once_decorator$$$function_1_replacement );
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


static PyObject *impl_tree$InternalModule$$$function_2_getInternalModule( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_df3209360d34cb64b8262e19a39385cf = NULL;

    struct Nuitka_FrameObject *frame_df3209360d34cb64b8262e19a39385cf;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_df3209360d34cb64b8262e19a39385cf, codeobj_df3209360d34cb64b8262e19a39385cf, module_tree$InternalModule, 0 );
    frame_df3209360d34cb64b8262e19a39385cf = cache_frame_df3209360d34cb64b8262e19a39385cf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_df3209360d34cb64b8262e19a39385cf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_df3209360d34cb64b8262e19a39385cf ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_tree$InternalModule, (Nuitka_StringObject *)const_str_plain_PythonInternalModule );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PythonInternalModule );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "PythonInternalModule" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;

        goto frame_exception_exit_1;
    }

    frame_df3209360d34cb64b8262e19a39385cf->m_frame.f_lineno = 58;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;

        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_df3209360d34cb64b8262e19a39385cf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_df3209360d34cb64b8262e19a39385cf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_df3209360d34cb64b8262e19a39385cf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_df3209360d34cb64b8262e19a39385cf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_df3209360d34cb64b8262e19a39385cf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_df3209360d34cb64b8262e19a39385cf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_df3209360d34cb64b8262e19a39385cf,
        type_description_1
    );


    // Release cached frame.
    if ( frame_df3209360d34cb64b8262e19a39385cf == cache_frame_df3209360d34cb64b8262e19a39385cf )
    {
        Py_DECREF( frame_df3209360d34cb64b8262e19a39385cf );
    }
    cache_frame_df3209360d34cb64b8262e19a39385cf = NULL;

    assertFrameObject( frame_df3209360d34cb64b8262e19a39385cf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( tree$InternalModule$$$function_2_getInternalModule );
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



static PyObject *MAKE_FUNCTION_tree$InternalModule$$$function_1_once_decorator(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tree$InternalModule$$$function_1_once_decorator,
        const_str_plain_once_decorator,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b8a90667a35b24bab9f8d817a254d3a5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tree$InternalModule,
        const_str_digest_37b5666b3ab9ddf20291484fd84e02fb,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tree$InternalModule$$$function_1_once_decorator$$$function_1_replacement( struct Nuitka_CellObject *closure_func )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tree$InternalModule$$$function_1_once_decorator$$$function_1_replacement,
        const_str_plain_replacement,
#if PYTHON_VERSION >= 330
        const_str_digest_e63a27d73c3a7d6efa06f2da681ce32b,
#endif
        codeobj_33d50a53933a5700758cd32103a0b6df,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tree$InternalModule,
        Py_None,
        1
    );

result->m_closure[0] = closure_func;
Py_INCREF( result->m_closure[0] );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_tree$InternalModule$$$function_2_getInternalModule(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_tree$InternalModule$$$function_2_getInternalModule,
        const_str_plain_getInternalModule,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_df3209360d34cb64b8262e19a39385cf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_tree$InternalModule,
        const_str_digest_84199d190f84dbea77e104d1b64a7287,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_tree$InternalModule =
{
    PyModuleDef_HEAD_INIT,
    "tree.InternalModule",   /* m_name */
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

MOD_INIT_DECL( tree$InternalModule )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_tree$InternalModule );
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
    puts("tree.InternalModule: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("tree.InternalModule: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("tree.InternalModule: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in inittree$InternalModule" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_tree$InternalModule = Py_InitModule4(
        "tree.InternalModule",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_tree$InternalModule = PyModule_Create( &mdef_tree$InternalModule );
#endif

    moduledict_tree$InternalModule = MODULE_DICT( module_tree$InternalModule );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_tree$InternalModule, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_tree$InternalModule,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_tree$InternalModule, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_tree$InternalModule,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_tree$InternalModule,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_tree$InternalModule, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_tree$InternalModule,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_tree$InternalModule );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_e8eebd8edef80e6654e2a2e2363a2177, module_tree$InternalModule );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_tree$InternalModule, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_tree$InternalModule, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_tree$InternalModule, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_tree$InternalModule, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_tree$InternalModule, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_tree$InternalModule, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    struct Nuitka_FrameObject *frame_6271e384d419a21895c1284aeead71e2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_ea8e76b8be2f1a1412008680876e460a;
    UPDATE_STRING_DICT0( moduledict_tree$InternalModule, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_9d377b0b9f334fdc2edc40c832289105;
    UPDATE_STRING_DICT0( moduledict_tree$InternalModule, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_tree$InternalModule, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_6271e384d419a21895c1284aeead71e2 = MAKE_MODULE_FRAME( codeobj_6271e384d419a21895c1284aeead71e2, module_tree$InternalModule );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_6271e384d419a21895c1284aeead71e2 );
    assert( Py_REFCNT( frame_6271e384d419a21895c1284aeead71e2 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_digest_d4e8078f7f91932bafebb28a7d7aedc5;
    tmp_globals_name_1 = (PyObject *)moduledict_tree$InternalModule;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_PythonInternalModule_tuple;
    tmp_level_name_1 = const_int_0;
    frame_6271e384d419a21895c1284aeead71e2->m_frame.f_lineno = 26;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_PythonInternalModule );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_tree$InternalModule, (Nuitka_StringObject *)const_str_plain_PythonInternalModule, tmp_assign_source_4 );
    tmp_name_name_2 = const_str_plain_SourceCodeReferences;
    tmp_globals_name_2 = (PyObject *)moduledict_tree$InternalModule;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_fromFilename_tuple;
    tmp_level_name_2 = const_int_0;
    frame_6271e384d419a21895c1284aeead71e2->m_frame.f_lineno = 27;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_fromFilename );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_tree$InternalModule, (Nuitka_StringObject *)const_str_plain_fromFilename, tmp_assign_source_5 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_tree$InternalModule, (Nuitka_StringObject *)const_str_plain_fromFilename );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fromFilename );
    }

    CHECK_OBJECT( tmp_called_name_1 );
    frame_6271e384d419a21895c1284aeead71e2->m_frame.f_lineno = 29;
    tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_plain_internal_tuple, 0 ) );

    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    frame_6271e384d419a21895c1284aeead71e2->m_frame.f_lineno = 29;
    tmp_assign_source_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_atInternal );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_tree$InternalModule, (Nuitka_StringObject *)const_str_plain_internal_source_ref, tmp_assign_source_6 );
    tmp_assign_source_7 = MAKE_FUNCTION_tree$InternalModule$$$function_1_once_decorator(  );
    UPDATE_STRING_DICT1( moduledict_tree$InternalModule, (Nuitka_StringObject *)const_str_plain_once_decorator, tmp_assign_source_7 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_tree$InternalModule, (Nuitka_StringObject *)const_str_plain_once_decorator );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_once_decorator );
    }

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_args_element_name_1 = MAKE_FUNCTION_tree$InternalModule$$$function_2_getInternalModule(  );
    frame_6271e384d419a21895c1284aeead71e2->m_frame.f_lineno = 52;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_tree$InternalModule, (Nuitka_StringObject *)const_str_plain_getInternalModule, tmp_assign_source_8 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6271e384d419a21895c1284aeead71e2 );
#endif
    popFrameStack();

    assertFrameObject( frame_6271e384d419a21895c1284aeead71e2 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6271e384d419a21895c1284aeead71e2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6271e384d419a21895c1284aeead71e2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6271e384d419a21895c1284aeead71e2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6271e384d419a21895c1284aeead71e2, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_tree$InternalModule );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
