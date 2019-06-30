// This file contains helper functions that are automatically created from
// templates.

#include "nuitka/prelude.h"

extern PyObject *callPythonFunction( PyObject *func, PyObject **args, int count );


PyObject *CALL_FUNCTION_WITH_ARGS1( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 1; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 1 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 1; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 1 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 1 * sizeof(PyObject *) );
            memcpy( python_pars + 1, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 1 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 1 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 1; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 1 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 1 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 1, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 1 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 1 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (1 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 1 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (1 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 1 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 1, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 1 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            1
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 1 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS2( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 2; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 2 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 2; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 2 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 2 * sizeof(PyObject *) );
            memcpy( python_pars + 2, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 2 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 2 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 2; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 2 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 2 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 2, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 2 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 2 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (2 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 2 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (2 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 2 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 2, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 2 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            2
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 2 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS3( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 3; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 3 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 3; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 3 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 3 * sizeof(PyObject *) );
            memcpy( python_pars + 3, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 3 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 3 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 3; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 3 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 3 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 3, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 3 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 3 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (3 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 3 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (3 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 3 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 3, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 3 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            3
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 3 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS4( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 4; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 4 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 4; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 4 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 4 * sizeof(PyObject *) );
            memcpy( python_pars + 4, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 4 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 4 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 4; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 4 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 4 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 4, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 4 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 4 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (4 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 4 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (4 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 4 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 4, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 4 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            4
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 4 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS5( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 5; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 5 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 5; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 5 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 5 * sizeof(PyObject *) );
            memcpy( python_pars + 5, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 5 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 5 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 5; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 5 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 5 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 5, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 5 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 5 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (5 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 5 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (5 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 5 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 5, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 5 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            5
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 5 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS6( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 6; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 6 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 6; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 6 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 6 * sizeof(PyObject *) );
            memcpy( python_pars + 6, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 6 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 6 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 6; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 6 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 6 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 6, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 6 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 6 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (6 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 6 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (6 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 6 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 6, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 6 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            6
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 6 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS7( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 7; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 7 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 7; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 7 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 7 * sizeof(PyObject *) );
            memcpy( python_pars + 7, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 7 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 7 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 7; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 7 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 7 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 7, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 7 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 7 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (7 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 7 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (7 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 7 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 7, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 7 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            7
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 7 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS8( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 8; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 8 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 8; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 8 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 8 * sizeof(PyObject *) );
            memcpy( python_pars + 8, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 8 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 8 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 8; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 8 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 8 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 8, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 8 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 8 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (8 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 8 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (8 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 8 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 8, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 8 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            8
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 8 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS9( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 9; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 9 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 9; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 9 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 9 * sizeof(PyObject *) );
            memcpy( python_pars + 9, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 9 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 9 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 9; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 9 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 9 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 9, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 9 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 9 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (9 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 9 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (9 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 9 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 9, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 9 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            9
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 9 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS10( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 10; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 10 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 10; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 10 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 10 * sizeof(PyObject *) );
            memcpy( python_pars + 10, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 10 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 10 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 10; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 10 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 10 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 10, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 10 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 10 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (10 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 10 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (10 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 10 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 10, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 10 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            10
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 10 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS11( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 11; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 11 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 11; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 11 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 11 * sizeof(PyObject *) );
            memcpy( python_pars + 11, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 11 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 11 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 11; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 11 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 11 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 11, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 11 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 11 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (11 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 11 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (11 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 11 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 11, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 11 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            11
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 11 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS13( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 13; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 13 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 13; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 13 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 13 * sizeof(PyObject *) );
            memcpy( python_pars + 13, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 13 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 13 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 13; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 13 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 13 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 13, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 13 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 13 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (13 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 13 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (13 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 13 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 13, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 13 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            13
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 13 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS15( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 15; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 15 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 15; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 15 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 15 * sizeof(PyObject *) );
            memcpy( python_pars + 15, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 15 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 15 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 15; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 15 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 15 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 15, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 15 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 15 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (15 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 15 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (15 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 15 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 15, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 15 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            15
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 15 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS16( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 16; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 16 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 16; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 16 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 16 * sizeof(PyObject *) );
            memcpy( python_pars + 16, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 16 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 16 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 16; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 16 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 16 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 16, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 16 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 16 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (16 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 16 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (16 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 16 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 16, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 16 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            16
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 16 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS17( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 17; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 17 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 17; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 17 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 17 * sizeof(PyObject *) );
            memcpy( python_pars + 17, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 17 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 17 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 17; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 17 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 17 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 17, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 17 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 17 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (17 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 17 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (17 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 17 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 17, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 17 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            17
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 17 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS18( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 18; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 18 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 18; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 18 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 18 * sizeof(PyObject *) );
            memcpy( python_pars + 18, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 18 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 18 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 18; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 18 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 18 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 18, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 18 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 18 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (18 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 18 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (18 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 18 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 18, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 18 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            18
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 18 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS20( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 20; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 20 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 20; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 20 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 20 * sizeof(PyObject *) );
            memcpy( python_pars + 20, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 20 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        struct Nuitka_MethodObject *method = (struct Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            struct Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 20 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 20; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 20 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 20 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 20, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 20 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called ) & ~(METH_CLASS | METH_STATIC | METH_COEXIST);

        if ( flags & METH_NOARGS )
        {
#if 20 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (20 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 20 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (20 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_VARARGS )
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 20 );

            PyObject *result;

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

#if PYTHON_VERSION < 360
            if ( flags & METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#else
            if ( flags == ( METH_VARARGS | METH_KEYWORDS ) )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else if ( flags == METH_FASTCALL )
            {
#if PYTHON_VERSION < 370
                result = (*(_PyCFunctionFast)method)( self, &PyTuple_GET_ITEM( pos_args, 0 ), 20, NULL );;
#else
                result = (*(_PyCFunctionFast)method)( self, &pos_args, 20 );;
#endif
            }
            else
            {
                result = (*method)( self, pos_args );
            }
#endif

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
                // Some buggy C functions do set an error, but do not indicate it
                // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            20
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 20 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_METHOD_WITH_ARGS1( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 1; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    1
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS1( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    1
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS1( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS1( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS1(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS1(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS1(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS2( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 2; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    2
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS2( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    2
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS2( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS2( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS2(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS2(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS2(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS3( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 3; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    3
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS3( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    3
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS3( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS3( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS3(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS3(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS3(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}

PyObject *CALL_METHOD_WITH_ARGS4( PyObject *source, PyObject *attr_name, PyObject **args )
{
    CHECK_OBJECT( source );
    CHECK_OBJECT( attr_name );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 4; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    PyTypeObject *type = Py_TYPE( source );

    if ( type->tp_getattro == PyObject_GenericGetAttr )
    {
        // Unfortunately this is required, although of cause rarely necessary.
        if (unlikely( type->tp_dict == NULL ))
        {
            if (unlikely( PyType_Ready( type ) < 0 ))
            {
                return NULL;
            }
        }

        PyObject *descr = _PyType_Lookup( type, attr_name );
        descrgetfunc func = NULL;

        if ( descr != NULL )
        {
            Py_INCREF( descr );

#if PYTHON_VERSION < 300
            if ( PyType_HasFeature( Py_TYPE( descr ), Py_TPFLAGS_HAVE_CLASS ) )
            {
#endif
                func = Py_TYPE( descr )->tp_descr_get;

                if ( func != NULL && PyDescr_IsData( descr ) )
                {
                    PyObject *called_object = func( descr, source, (PyObject *)type );
                    Py_DECREF( descr );

                    PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                        called_object,
                        args
                    );
                    Py_DECREF( called_object );
                    return result;
                }
#if PYTHON_VERSION < 300
            }
#endif
        }

        Py_ssize_t dictoffset = type->tp_dictoffset;
        PyObject *dict = NULL;

        if ( dictoffset != 0 )
        {
            // Negative dictionary offsets have special meaning.
            if ( dictoffset < 0 )
            {
                Py_ssize_t tsize;
                size_t size;

                tsize = ((PyVarObject *)source)->ob_size;
                if (tsize < 0)
                    tsize = -tsize;
                size = _PyObject_VAR_SIZE( type, tsize );

                dictoffset += (long)size;
            }

            PyObject **dictptr = (PyObject **) ((char *)source + dictoffset);
            dict = *dictptr;
        }

        if ( dict != NULL )
        {
            CHECK_OBJECT( dict );

            Py_INCREF( dict );

            PyObject *called_object = PyDict_GetItem( dict, attr_name );

            if ( called_object != NULL )
            {
                Py_INCREF( called_object );
                Py_XDECREF( descr );
                Py_DECREF( dict );

                PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                    called_object,
                    args
                );
                Py_DECREF( called_object );
                return result;
            }

            Py_DECREF( dict );
        }

        if ( func != NULL )
        {
            if ( func == Nuitka_Function_Type.tp_descr_get )
            {
                PyObject *result = Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)descr,
                    source,
                    args,
                    4
                );

                Py_DECREF( descr );

                return result;
            }
            else
            {
                PyObject *called_object = func( descr, source, (PyObject *)type );
                CHECK_OBJECT( called_object );

                Py_DECREF( descr );

                PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                    called_object,
                    args
                );
                Py_DECREF( called_object );

                return result;
            }
        }

        if ( descr != NULL )
        {
            CHECK_OBJECT( descr );

            PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                descr,
                args
            );
            Py_DECREF( descr );

            return result;
        }

#if PYTHON_VERSION < 300
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            PyString_AS_STRING( attr_name )
        );
#else
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%U'",
            type->tp_name,
            attr_name
        );
#endif
        return NULL;
    }
#if PYTHON_VERSION < 300
    else if ( type == &PyInstance_Type )
    {
        PyInstanceObject *source_instance = (PyInstanceObject *)source;

        // The special cases have their own variant on the code generation level
        // as we are called with constants only.
        assert( attr_name != const_str_plain___dict__ );
        assert( attr_name != const_str_plain___class__ );

        // Try the instance dict first.
        PyObject *called_object = GET_STRING_DICT_VALUE(
            (PyDictObject *)source_instance->in_dict,
            (PyStringObject *)attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            return CALL_FUNCTION_WITH_ARGS4( called_object, args );
        }

        // Then check the class dictionaries.
        called_object = FIND_ATTRIBUTE_IN_CLASS(
            source_instance->in_class,
            attr_name
        );

        // Note: The "called_object" was found without taking a reference,
        // so we need not release it in this branch.
        if ( called_object != NULL )
        {
            descrgetfunc descr_get = Py_TYPE( called_object )->tp_descr_get;

            if ( descr_get == Nuitka_Function_Type.tp_descr_get )
            {
                return Nuitka_CallMethodFunctionPosArgs(
                    (struct Nuitka_FunctionObject const *)called_object,
                    source,
                    args,
                    4
                );
            }
            else if ( descr_get != NULL )
            {
                PyObject *method = descr_get(
                    called_object,
                    source,
                    (PyObject *)source_instance->in_class
                );

                if (unlikely( method == NULL ))
                {
                    return NULL;
                }

                PyObject *result = CALL_FUNCTION_WITH_ARGS4( method, args );
                Py_DECREF( method );
                return result;
            }
            else
            {
                return CALL_FUNCTION_WITH_ARGS4( called_object, args );
            }

        }
        else if (unlikely( source_instance->in_class->cl_getattr == NULL ))
        {
            PyErr_Format(
                PyExc_AttributeError,
                "%s instance has no attribute '%s'",
                PyString_AS_STRING( source_instance->in_class->cl_name ),
                PyString_AS_STRING( attr_name )
            );

            return NULL;
        }
        else
        {
            // Finally allow the "__getattr__" override to provide it or else
            // it's an error.

            PyObject *args2[] = {
                source,
                attr_name
            };

            called_object = CALL_FUNCTION_WITH_ARGS2(
                source_instance->in_class->cl_getattr,
                args2
            );

            if (unlikely( called_object == NULL ))
            {
                return NULL;
            }

            PyObject *result = CALL_FUNCTION_WITH_ARGS4(
                called_object,
                args
            );
            Py_DECREF( called_object );
            return result;
        }
    }
#endif
    else if ( type->tp_getattro != NULL )
    {
        PyObject *called_object = (*type->tp_getattro)(
            source,
            attr_name
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS4(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else if ( type->tp_getattr != NULL )
    {
        PyObject *called_object = (*type->tp_getattr)(
            source,
            (char *)Nuitka_String_AsString_Unchecked( attr_name )
        );

        if (unlikely( called_object == NULL ))
        {
            return NULL;
        }

        PyObject *result = CALL_FUNCTION_WITH_ARGS4(
            called_object,
            args
        );
        Py_DECREF( called_object );
        return result;
    }
    else
    {
        PyErr_Format(
            PyExc_AttributeError,
            "'%s' object has no attribute '%s'",
            type->tp_name,
            Nuitka_String_AsString_Unchecked( attr_name )
        );

        return NULL;
    }
}
/* Code to register embedded modules for meta path based loading if any. */

#include "nuitka/unfreezing.h"

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
MOD_INIT_DECL( Builtins );
MOD_INIT_DECL( Constants );
MOD_INIT_DECL( Errors );
MOD_INIT_DECL( MainControl );
MOD_INIT_DECL( ModuleRegistry );
MOD_INIT_DECL( Options );
MOD_INIT_DECL( PythonOperators );
MOD_INIT_DECL( PythonVersions );
MOD_INIT_DECL( SourceCodeReferences );
MOD_INIT_DECL( Tracing );
MOD_INIT_DECL( TreeXML );
MOD_INIT_DECL( Variables );
MOD_INIT_DECL( Version );
MOD_INIT_DECL( __future__ );
MOD_INIT_DECL( __main__ );
MOD_INIT_DECL( __main__ );
MOD_INIT_DECL( __past__ );
MOD_INIT_DECL( _bootlocale );
MOD_INIT_DECL( _collections_abc );
MOD_INIT_DECL( _compat_pickle );
MOD_INIT_DECL( _compression );
MOD_INIT_DECL( _dummy_thread );
MOD_INIT_DECL( _osx_support );
MOD_INIT_DECL( _pydecimal );
MOD_INIT_DECL( _strptime );
MOD_INIT_DECL( _weakrefset );
MOD_INIT_DECL( abMenu );
MOD_INIT_DECL( abc );
MOD_INIT_DECL( abnormalitydetection );
MOD_INIT_DECL( additiveview );
MOD_INIT_DECL( admin );
MOD_INIT_DECL( adminassignment );
MOD_INIT_DECL( ailments );
MOD_INIT_DECL( argparse );
MOD_INIT_DECL( assessment );
MOD_INIT_DECL( assignedassessment );
MOD_INIT_DECL( ast );
MOD_INIT_DECL( base64 );
MOD_INIT_DECL( bdb );
MOD_INIT_DECL( bisect );
MOD_INIT_DECL( build );
MOD_INIT_DECL( build$SconsInterface );
MOD_INIT_DECL( bz2 );
MOD_INIT_DECL( calendar );
MOD_INIT_DECL( cases );
MOD_INIT_DECL( caseselector );
MOD_INIT_DECL( casetext );
MOD_INIT_DECL( cmd );
MOD_INIT_DECL( cnc );
MOD_INIT_DECL( code );
MOD_INIT_DECL( codecs );
MOD_INIT_DECL( codegen );
MOD_INIT_DECL( codegen$AsyncgenCodes );
MOD_INIT_DECL( codegen$AttributeCodes );
MOD_INIT_DECL( codegen$BlobCodes );
MOD_INIT_DECL( codegen$BranchCodes );
MOD_INIT_DECL( codegen$BuiltinCodes );
MOD_INIT_DECL( codegen$CallCodes );
MOD_INIT_DECL( codegen$ClassCodes );
MOD_INIT_DECL( codegen$CodeGeneration );
MOD_INIT_DECL( codegen$CodeHelpers );
MOD_INIT_DECL( codegen$CodeObjectCodes );
MOD_INIT_DECL( codegen$ComparisonCodes );
MOD_INIT_DECL( codegen$ConditionalCodes );
MOD_INIT_DECL( codegen$ConstantCodes );
MOD_INIT_DECL( codegen$Contexts );
MOD_INIT_DECL( codegen$CoroutineCodes );
MOD_INIT_DECL( codegen$DictCodes );
MOD_INIT_DECL( codegen$Emission );
MOD_INIT_DECL( codegen$ErrorCodes );
MOD_INIT_DECL( codegen$EvalCodes );
MOD_INIT_DECL( codegen$ExceptionCodes );
MOD_INIT_DECL( codegen$ExpressionCodes );
MOD_INIT_DECL( codegen$FrameCodes );
MOD_INIT_DECL( codegen$FunctionCodes );
MOD_INIT_DECL( codegen$GeneratorCodes );
MOD_INIT_DECL( codegen$GlobalsLocalsCodes );
MOD_INIT_DECL( codegen$IdCodes );
MOD_INIT_DECL( codegen$ImportCodes );
MOD_INIT_DECL( codegen$Indentation );
MOD_INIT_DECL( codegen$IndexCodes );
MOD_INIT_DECL( codegen$IntegerCodes );
MOD_INIT_DECL( codegen$IteratorCodes );
MOD_INIT_DECL( codegen$LabelCodes );
MOD_INIT_DECL( codegen$LineNumberCodes );
MOD_INIT_DECL( codegen$ListCodes );
MOD_INIT_DECL( codegen$LoaderCodes );
MOD_INIT_DECL( codegen$LocalsDictCodes );
MOD_INIT_DECL( codegen$LoopCodes );
MOD_INIT_DECL( codegen$ModuleCodes );
MOD_INIT_DECL( codegen$Namify );
MOD_INIT_DECL( codegen$OperationCodes );
MOD_INIT_DECL( codegen$OperatorCodes );
MOD_INIT_DECL( codegen$PrintCodes );
MOD_INIT_DECL( codegen$PythonAPICodes );
MOD_INIT_DECL( codegen$RaisingCodes );
MOD_INIT_DECL( codegen$ReturnCodes );
MOD_INIT_DECL( codegen$SetCodes );
MOD_INIT_DECL( codegen$SliceCodes );
MOD_INIT_DECL( codegen$StringCodes );
MOD_INIT_DECL( codegen$SubscriptCodes );
MOD_INIT_DECL( codegen$TryCodes );
MOD_INIT_DECL( codegen$TupleCodes );
MOD_INIT_DECL( codegen$VariableCodes );
MOD_INIT_DECL( codegen$YieldCodes );
MOD_INIT_DECL( codegen$c_types );
MOD_INIT_DECL( codegen$c_types$CTypeBases );
MOD_INIT_DECL( codegen$c_types$CTypeNuitkaBools );
MOD_INIT_DECL( codegen$c_types$CTypePyObjectPtrs );
MOD_INIT_DECL( codegen$templates );
MOD_INIT_DECL( codegen$templates$CodeTemplatesAsyncgens );
MOD_INIT_DECL( codegen$templates$CodeTemplatesCalls );
MOD_INIT_DECL( codegen$templates$CodeTemplatesConstants );
MOD_INIT_DECL( codegen$templates$CodeTemplatesCoroutines );
MOD_INIT_DECL( codegen$templates$CodeTemplatesExceptions );
MOD_INIT_DECL( codegen$templates$CodeTemplatesFrames );
MOD_INIT_DECL( codegen$templates$CodeTemplatesFreezer );
MOD_INIT_DECL( codegen$templates$CodeTemplatesFunction );
MOD_INIT_DECL( codegen$templates$CodeTemplatesGeneratorFunction );
MOD_INIT_DECL( codegen$templates$CodeTemplatesIterators );
MOD_INIT_DECL( codegen$templates$CodeTemplatesLoader );
MOD_INIT_DECL( codegen$templates$CodeTemplatesModules );
MOD_INIT_DECL( codegen$templates$CodeTemplatesVariables );
MOD_INIT_DECL( codegen$templates$TemplateDebugWrapper );
MOD_INIT_DECL( codeop );
MOD_INIT_DECL( collections );
MOD_INIT_DECL( collections$abc );
MOD_INIT_DECL( concurrent );
MOD_INIT_DECL( concurrent$futures );
MOD_INIT_DECL( concurrent$futures$_base );
MOD_INIT_DECL( concurrent$futures$process );
MOD_INIT_DECL( concurrent$futures$thread );
MOD_INIT_DECL( config );
MOD_INIT_DECL( containers );
MOD_INIT_DECL( containers$odict );
MOD_INIT_DECL( containers$oset );
MOD_INIT_DECL( contextlib );
MOD_INIT_DECL( copy );
MOD_INIT_DECL( copyreg );
MOD_INIT_DECL( coverageassessment );
MOD_INIT_DECL( coveragetrainer );
MOD_INIT_DECL( ctypes );
MOD_INIT_DECL( ctypes$_endian );
MOD_INIT_DECL( ctypes$macholib );
MOD_INIT_DECL( ctypes$macholib$dyld );
MOD_INIT_DECL( ctypes$macholib$dylib );
MOD_INIT_DECL( ctypes$macholib$framework );
MOD_INIT_DECL( ctypes$util );
MOD_INIT_DECL( ctypes$wintypes );
MOD_INIT_DECL( datetime );
MOD_INIT_DECL( dbmigrator );
MOD_INIT_DECL( ddxpractice );
MOD_INIT_DECL( decimal );
MOD_INIT_DECL( depthtrainer );
MOD_INIT_DECL( difflib );
MOD_INIT_DECL( dis );
MOD_INIT_DECL( doctest );
MOD_INIT_DECL( donottouch );
MOD_INIT_DECL( dummy_threading );
MOD_INIT_DECL( email );
MOD_INIT_DECL( email$_encoded_words );
MOD_INIT_DECL( email$_header_value_parser );
MOD_INIT_DECL( email$_parseaddr );
MOD_INIT_DECL( email$_policybase );
MOD_INIT_DECL( email$base64mime );
MOD_INIT_DECL( email$charset );
MOD_INIT_DECL( email$contentmanager );
MOD_INIT_DECL( email$encoders );
MOD_INIT_DECL( email$errors );
MOD_INIT_DECL( email$feedparser );
MOD_INIT_DECL( email$generator );
MOD_INIT_DECL( email$header );
MOD_INIT_DECL( email$headerregistry );
MOD_INIT_DECL( email$iterators );
MOD_INIT_DECL( email$message );
MOD_INIT_DECL( email$parser );
MOD_INIT_DECL( email$policy );
MOD_INIT_DECL( email$quoprimime );
MOD_INIT_DECL( email$utils );
MOD_INIT_DECL( encodings );
MOD_INIT_DECL( encodings$aliases );
MOD_INIT_DECL( encodings$mbcs );
MOD_INIT_DECL( enum );
MOD_INIT_DECL( filecmp );
MOD_INIT_DECL( finalizations );
MOD_INIT_DECL( finalizations$Finalization );
MOD_INIT_DECL( finalizations$FinalizeBase );
MOD_INIT_DECL( finalizations$FinalizeMarkups );
MOD_INIT_DECL( fnmatch );
MOD_INIT_DECL( freezer );
MOD_INIT_DECL( freezer$BytecodeModuleFreezer );
MOD_INIT_DECL( freezer$DependsExe );
MOD_INIT_DECL( freezer$Standalone );
MOD_INIT_DECL( ftplib );
MOD_INIT_DECL( functools );
MOD_INIT_DECL( genericpath );
MOD_INIT_DECL( getopt );
MOD_INIT_DECL( getpass );
MOD_INIT_DECL( gettext );
MOD_INIT_DECL( gi );
MOD_INIT_DECL( gi$_constants );
MOD_INIT_DECL( gi$_propertyhelper );
MOD_INIT_DECL( gi$_signalhelper );
MOD_INIT_DECL( gi$docstring );
MOD_INIT_DECL( gi$importer );
MOD_INIT_DECL( gi$module );
MOD_INIT_DECL( gi$overrides );
MOD_INIT_DECL( gi$overrides$keysyms );
MOD_INIT_DECL( gi$pygtkcompat );
MOD_INIT_DECL( gi$repository );
MOD_INIT_DECL( gi$types );
MOD_INIT_DECL( glob );
MOD_INIT_DECL( guarding );
MOD_INIT_DECL( gui );
MOD_INIT_DECL( gui$SyntaxHighlighting );
MOD_INIT_DECL( gui$TreeDisplay );
MOD_INIT_DECL( gzip );
MOD_INIT_DECL( hashlib );
MOD_INIT_DECL( heapq );
MOD_INIT_DECL( hmac );
MOD_INIT_DECL( html );
MOD_INIT_DECL( html$entities );
MOD_INIT_DECL( http );
MOD_INIT_DECL( http$client );
MOD_INIT_DECL( http$cookiejar );
MOD_INIT_DECL( http$server );
MOD_INIT_DECL( i18ntrans2 );
MOD_INIT_DECL( imp );
MOD_INIT_DECL( importing );
MOD_INIT_DECL( importing$ImportCache );
MOD_INIT_DECL( importing$Importing );
MOD_INIT_DECL( importing$PreloadedPackages );
MOD_INIT_DECL( importing$Recursion );
MOD_INIT_DECL( importing$StandardLibrary );
MOD_INIT_DECL( importing$Whitelisting );
MOD_INIT_DECL( importlib );
MOD_INIT_DECL( importlib$_bootstrap );
MOD_INIT_DECL( importlib$_bootstrap_external );
MOD_INIT_DECL( importlib$abc );
MOD_INIT_DECL( importlib$machinery );
MOD_INIT_DECL( importlib$util );
MOD_INIT_DECL( inspect );
MOD_INIT_DECL( io );
MOD_INIT_DECL( ipaddress );
MOD_INIT_DECL( iso3166 );
MOD_INIT_DECL( iso639 );
MOD_INIT_DECL( json );
MOD_INIT_DECL( json$decoder );
MOD_INIT_DECL( json$encoder );
MOD_INIT_DECL( json$scanner );
MOD_INIT_DECL( keyword );
MOD_INIT_DECL( linecache );
MOD_INIT_DECL( liveview );
MOD_INIT_DECL( locale );
MOD_INIT_DECL( logging );
MOD_INIT_DECL( lzma );
MOD_INIT_DECL( menu );
MOD_INIT_DECL( mimetypes );
MOD_INIT_DECL( multiprocessing );
MOD_INIT_DECL( multiprocessing$connection );
MOD_INIT_DECL( multiprocessing$context );
MOD_INIT_DECL( multiprocessing$dummy );
MOD_INIT_DECL( multiprocessing$dummy$connection );
MOD_INIT_DECL( multiprocessing$forkserver );
MOD_INIT_DECL( multiprocessing$heap );
MOD_INIT_DECL( multiprocessing$managers );
MOD_INIT_DECL( multiprocessing$pool );
MOD_INIT_DECL( multiprocessing$popen_fork );
MOD_INIT_DECL( multiprocessing$popen_forkserver );
MOD_INIT_DECL( multiprocessing$popen_spawn_posix );
MOD_INIT_DECL( multiprocessing$popen_spawn_win32 );
MOD_INIT_DECL( multiprocessing$process );
MOD_INIT_DECL( multiprocessing$queues );
MOD_INIT_DECL( multiprocessing$reduction );
MOD_INIT_DECL( multiprocessing$resource_sharer );
MOD_INIT_DECL( multiprocessing$semaphore_tracker );
MOD_INIT_DECL( multiprocessing$sharedctypes );
MOD_INIT_DECL( multiprocessing$spawn );
MOD_INIT_DECL( multiprocessing$synchronize );
MOD_INIT_DECL( multiprocessing$util );
MOD_INIT_DECL( netrc );
MOD_INIT_DECL( nodes );
MOD_INIT_DECL( nodes$AssignNodes );
MOD_INIT_DECL( nodes$AsyncgenNodes );
MOD_INIT_DECL( nodes$AttributeNodes );
MOD_INIT_DECL( nodes$BuiltinComplexNodes );
MOD_INIT_DECL( nodes$BuiltinDecodingNodes );
MOD_INIT_DECL( nodes$BuiltinDecoratorNodes );
MOD_INIT_DECL( nodes$BuiltinDictNodes );
MOD_INIT_DECL( nodes$BuiltinFormatNodes );
MOD_INIT_DECL( nodes$BuiltinHashNodes );
MOD_INIT_DECL( nodes$BuiltinIntegerNodes );
MOD_INIT_DECL( nodes$BuiltinIteratorNodes );
MOD_INIT_DECL( nodes$BuiltinLenNodes );
MOD_INIT_DECL( nodes$BuiltinNextNodes );
MOD_INIT_DECL( nodes$BuiltinOpenNodes );
MOD_INIT_DECL( nodes$BuiltinRangeNodes );
MOD_INIT_DECL( nodes$BuiltinRefNodes );
MOD_INIT_DECL( nodes$BuiltinSumNodes );
MOD_INIT_DECL( nodes$BuiltinTypeNodes );
MOD_INIT_DECL( nodes$BuiltinVarsNodes );
MOD_INIT_DECL( nodes$CallNodes );
MOD_INIT_DECL( nodes$Checkers );
MOD_INIT_DECL( nodes$ClassNodes );
MOD_INIT_DECL( nodes$CodeObjectSpecs );
MOD_INIT_DECL( nodes$ComparisonNodes );
MOD_INIT_DECL( nodes$ConditionalNodes );
MOD_INIT_DECL( nodes$ConstantRefNodes );
MOD_INIT_DECL( nodes$ContainerMakingNodes );
MOD_INIT_DECL( nodes$ContainerOperationNodes );
MOD_INIT_DECL( nodes$CoroutineNodes );
MOD_INIT_DECL( nodes$DictionaryNodes );
MOD_INIT_DECL( nodes$ExceptionNodes );
MOD_INIT_DECL( nodes$ExecEvalNodes );
MOD_INIT_DECL( nodes$ExpressionBases );
MOD_INIT_DECL( nodes$FrameNodes );
MOD_INIT_DECL( nodes$FunctionNodes );
MOD_INIT_DECL( nodes$FutureSpecs );
MOD_INIT_DECL( nodes$GeneratorNodes );
MOD_INIT_DECL( nodes$GlobalsLocalsNodes );
MOD_INIT_DECL( nodes$ImportNodes );
MOD_INIT_DECL( nodes$IndicatorMixins );
MOD_INIT_DECL( nodes$LocalsDictNodes );
MOD_INIT_DECL( nodes$LocalsScopes );
MOD_INIT_DECL( nodes$LoopNodes );
MOD_INIT_DECL( nodes$ModuleAttributeNodes );
MOD_INIT_DECL( nodes$ModuleNodes );
MOD_INIT_DECL( nodes$NodeBases );
MOD_INIT_DECL( nodes$NodeMakingHelpers );
MOD_INIT_DECL( nodes$NodeMetaClasses );
MOD_INIT_DECL( nodes$OperatorNodes );
MOD_INIT_DECL( nodes$OutlineNodes );
MOD_INIT_DECL( nodes$PrintNodes );
MOD_INIT_DECL( nodes$ReturnNodes );
MOD_INIT_DECL( nodes$SideEffectNodes );
MOD_INIT_DECL( nodes$SliceNodes );
MOD_INIT_DECL( nodes$StatementNodes );
MOD_INIT_DECL( nodes$StringConcatenationNodes );
MOD_INIT_DECL( nodes$SubscriptNodes );
MOD_INIT_DECL( nodes$TryNodes );
MOD_INIT_DECL( nodes$TypeNodes );
MOD_INIT_DECL( nodes$VariableRefNodes );
MOD_INIT_DECL( nodes$YieldNodes );
MOD_INIT_DECL( nodes$shapes );
MOD_INIT_DECL( nodes$shapes$BuiltinTypeShapes );
MOD_INIT_DECL( nodes$shapes$StandardShapes );
MOD_INIT_DECL( ntpath );
MOD_INIT_DECL( nturl2path );
MOD_INIT_DECL( numbers );
MOD_INIT_DECL( observer );
MOD_INIT_DECL( opcode );
MOD_INIT_DECL( operator );
MOD_INIT_DECL( optimizations );
MOD_INIT_DECL( optimizations$BytecodeDemotion );
MOD_INIT_DECL( optimizations$FunctionInlining );
MOD_INIT_DECL( optimizations$Graphs );
MOD_INIT_DECL( optimizations$Optimization );
MOD_INIT_DECL( optimizations$OptimizeBuiltinCalls );
MOD_INIT_DECL( optimizations$Tags );
MOD_INIT_DECL( optimizations$TraceCollections );
MOD_INIT_DECL( optimizations$ValueTraces );
MOD_INIT_DECL( optparse );
MOD_INIT_DECL( os );
MOD_INIT_DECL( palpationgrid );
MOD_INIT_DECL( pdb );
MOD_INIT_DECL( pickle );
MOD_INIT_DECL( pkgutil );
MOD_INIT_DECL( platform );
MOD_INIT_DECL( plistlib );
MOD_INIT_DECL( plugins );
MOD_INIT_DECL( plugins$PluginBase );
MOD_INIT_DECL( plugins$Plugins );
MOD_INIT_DECL( plugins$standard );
MOD_INIT_DECL( plugins$standard$ConsiderPyLintAnnotationsPlugin );
MOD_INIT_DECL( plugins$standard$DataFileCollectorPlugin );
MOD_INIT_DECL( plugins$standard$EnumPlugin );
MOD_INIT_DECL( plugins$standard$ImplicitImports );
MOD_INIT_DECL( plugins$standard$MultiprocessingPlugin );
MOD_INIT_DECL( plugins$standard$PmwPlugin );
MOD_INIT_DECL( plugins$standard$PySidePyQtPlugin );
MOD_INIT_DECL( port_settings );
MOD_INIT_DECL( posixpath );
MOD_INIT_DECL( pprint );
MOD_INIT_DECL( pressurepoints );
MOD_INIT_DECL( prototypetext );
MOD_INIT_DECL( py_compile );
MOD_INIT_DECL( pydoc );
MOD_INIT_DECL( pydoc_data );
MOD_INIT_DECL( pydoc_data$topics );
MOD_INIT_DECL( pygtkcompat );
MOD_INIT_DECL( pygtkcompat$generictreemodel );
MOD_INIT_DECL( pygtkcompat$pygtkcompat );
MOD_INIT_DECL( questionmarkview );
MOD_INIT_DECL( questmaster );
MOD_INIT_DECL( queue );
MOD_INIT_DECL( quopri );
MOD_INIT_DECL( random );
MOD_INIT_DECL( re );
MOD_INIT_DECL( reprlib );
MOD_INIT_DECL( runpy );
MOD_INIT_DECL( selectors );
MOD_INIT_DECL( selfpractice );
MOD_INIT_DECL( serial );
MOD_INIT_DECL( serial$serialcli );
MOD_INIT_DECL( serial$serialjava );
MOD_INIT_DECL( serial$serialposix );
MOD_INIT_DECL( serial$serialutil );
MOD_INIT_DECL( serial$serialwin32 );
MOD_INIT_DECL( serial$win32 );
MOD_INIT_DECL( serialbladder );
MOD_INIT_DECL( serialport );
MOD_INIT_DECL( shlex );
MOD_INIT_DECL( shutil );
MOD_INIT_DECL( signal );
MOD_INIT_DECL( sim );
MOD_INIT_DECL( simLogging );
MOD_INIT_DECL( sim_constants );
MOD_INIT_DECL( socket );
MOD_INIT_DECL( socketserver );
MOD_INIT_DECL( sounds );
MOD_INIT_DECL( specs );
MOD_INIT_DECL( specs$BuiltinParameterSpecs );
MOD_INIT_DECL( specs$ParameterSpecs );
MOD_INIT_DECL( splashscreen );
MOD_INIT_DECL( sqlite3 );
MOD_INIT_DECL( sqlite3$dbapi2 );
MOD_INIT_DECL( sre_compile );
MOD_INIT_DECL( sre_constants );
MOD_INIT_DECL( sre_parse );
MOD_INIT_DECL( ssl );
MOD_INIT_DECL( stat );
MOD_INIT_DECL( statewatcher );
MOD_INIT_DECL( string );
MOD_INIT_DECL( struct );
MOD_INIT_DECL( subprocess );
MOD_INIT_DECL( sysconfig );
MOD_INIT_DECL( tarfile );
MOD_INIT_DECL( tempfile );
MOD_INIT_DECL( tensioner );
MOD_INIT_DECL( textwrap );
MOD_INIT_DECL( threading );
MOD_INIT_DECL( timeit );
MOD_INIT_DECL( token );
MOD_INIT_DECL( tokenize );
MOD_INIT_DECL( traceback );
MOD_INIT_DECL( tracemalloc );
MOD_INIT_DECL( tree );
MOD_INIT_DECL( tree$Building );
MOD_INIT_DECL( tree$ComplexCallHelperFunctions );
MOD_INIT_DECL( tree$Extractions );
MOD_INIT_DECL( tree$InternalModule );
MOD_INIT_DECL( tree$Operations );
MOD_INIT_DECL( tree$ReformulationAssertStatements );
MOD_INIT_DECL( tree$ReformulationAssignmentStatements );
MOD_INIT_DECL( tree$ReformulationBooleanExpressions );
MOD_INIT_DECL( tree$ReformulationCallExpressions );
MOD_INIT_DECL( tree$ReformulationClasses );
MOD_INIT_DECL( tree$ReformulationComparisonExpressions );
MOD_INIT_DECL( tree$ReformulationContractionExpressions );
MOD_INIT_DECL( tree$ReformulationDictionaryCreation );
MOD_INIT_DECL( tree$ReformulationExecStatements );
MOD_INIT_DECL( tree$ReformulationForLoopStatements );
MOD_INIT_DECL( tree$ReformulationFunctionStatements );
MOD_INIT_DECL( tree$ReformulationImportStatements );
MOD_INIT_DECL( tree$ReformulationLambdaExpressions );
MOD_INIT_DECL( tree$ReformulationNamespacePackages );
MOD_INIT_DECL( tree$ReformulationPrintStatements );
MOD_INIT_DECL( tree$ReformulationSequenceCreation );
MOD_INIT_DECL( tree$ReformulationSubscriptExpressions );
MOD_INIT_DECL( tree$ReformulationTryExceptStatements );
MOD_INIT_DECL( tree$ReformulationTryFinallyStatements );
MOD_INIT_DECL( tree$ReformulationWhileLoopStatements );
MOD_INIT_DECL( tree$ReformulationWithStatements );
MOD_INIT_DECL( tree$ReformulationYieldExpressions );
MOD_INIT_DECL( tree$SourceReading );
MOD_INIT_DECL( tree$SyntaxErrors );
MOD_INIT_DECL( tree$TreeHelpers );
MOD_INIT_DECL( tree$VariableClosure );
MOD_INIT_DECL( tty );
MOD_INIT_DECL( types );
MOD_INIT_DECL( ultrasound );
MOD_INIT_DECL( unittest );
MOD_INIT_DECL( unittest$case );
MOD_INIT_DECL( unittest$loader );
MOD_INIT_DECL( unittest$main );
MOD_INIT_DECL( unittest$result );
MOD_INIT_DECL( unittest$runner );
MOD_INIT_DECL( unittest$signals );
MOD_INIT_DECL( unittest$suite );
MOD_INIT_DECL( unittest$util );
MOD_INIT_DECL( urllib );
MOD_INIT_DECL( urllib$error );
MOD_INIT_DECL( urllib$parse );
MOD_INIT_DECL( urllib$request );
MOD_INIT_DECL( urllib$response );
MOD_INIT_DECL( utils );
MOD_INIT_DECL( utils$AppDirs );
MOD_INIT_DECL( utils$CStrings );
MOD_INIT_DECL( utils$Execution );
MOD_INIT_DECL( utils$FileOperations );
MOD_INIT_DECL( utils$InstanceCounters );
MOD_INIT_DECL( utils$MemoryUsage );
MOD_INIT_DECL( utils$SharedLibraries );
MOD_INIT_DECL( utils$Shebang );
MOD_INIT_DECL( utils$ThreadedExecutor );
MOD_INIT_DECL( utils$Timing );
MOD_INIT_DECL( utils$Utils );
MOD_INIT_DECL( uu );
MOD_INIT_DECL( warnings );
MOD_INIT_DECL( weakref );
MOD_INIT_DECL( webbrowser );
MOD_INIT_DECL( xml );
MOD_INIT_DECL( xml$etree );
MOD_INIT_DECL( xml$etree$ElementPath );
MOD_INIT_DECL( xml$etree$ElementTree );
MOD_INIT_DECL( xml$parsers );
MOD_INIT_DECL( xml$parsers$expat );
MOD_INIT_DECL( xmlrpc );
MOD_INIT_DECL( xmlrpc$client );
MOD_INIT_DECL( zipfile );
static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] =
{
    { (char *)"Builtins", MOD_INIT_NAME( Builtins ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Constants", MOD_INIT_NAME( Constants ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Errors", MOD_INIT_NAME( Errors ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"MainControl", MOD_INIT_NAME( MainControl ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"ModuleRegistry", MOD_INIT_NAME( ModuleRegistry ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Options", MOD_INIT_NAME( Options ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PythonOperators", MOD_INIT_NAME( PythonOperators ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"PythonVersions", MOD_INIT_NAME( PythonVersions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"SourceCodeReferences", MOD_INIT_NAME( SourceCodeReferences ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Tracing", MOD_INIT_NAME( Tracing ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"TreeXML", MOD_INIT_NAME( TreeXML ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Variables", MOD_INIT_NAME( Variables ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"Version", MOD_INIT_NAME( Version ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"__future__", MOD_INIT_NAME( __future__ ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"__main__", MOD_INIT_NAME( __main__ ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"__main__", MOD_INIT_NAME( __main__ ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"__past__", MOD_INIT_NAME( __past__ ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"_bootlocale", MOD_INIT_NAME( _bootlocale ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"_collections_abc", MOD_INIT_NAME( _collections_abc ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"_compat_pickle", MOD_INIT_NAME( _compat_pickle ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"_compression", MOD_INIT_NAME( _compression ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"_dummy_thread", MOD_INIT_NAME( _dummy_thread ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"_osx_support", MOD_INIT_NAME( _osx_support ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"_pydecimal", MOD_INIT_NAME( _pydecimal ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"_strptime", MOD_INIT_NAME( _strptime ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"_weakrefset", MOD_INIT_NAME( _weakrefset ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"abMenu", MOD_INIT_NAME( abMenu ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"abc", MOD_INIT_NAME( abc ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"abnormalitydetection", MOD_INIT_NAME( abnormalitydetection ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"additiveview", MOD_INIT_NAME( additiveview ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"admin", MOD_INIT_NAME( admin ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"adminassignment", MOD_INIT_NAME( adminassignment ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"ailments", MOD_INIT_NAME( ailments ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"argparse", MOD_INIT_NAME( argparse ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"assessment", MOD_INIT_NAME( assessment ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"assignedassessment", MOD_INIT_NAME( assignedassessment ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"ast", MOD_INIT_NAME( ast ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"base64", MOD_INIT_NAME( base64 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"bdb", MOD_INIT_NAME( bdb ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"bisect", MOD_INIT_NAME( bisect ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"build", MOD_INIT_NAME( build ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"build.SconsInterface", MOD_INIT_NAME( build$SconsInterface ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"bz2", MOD_INIT_NAME( bz2 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"calendar", MOD_INIT_NAME( calendar ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cases", MOD_INIT_NAME( cases ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"caseselector", MOD_INIT_NAME( caseselector ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"casetext", MOD_INIT_NAME( casetext ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cmd", MOD_INIT_NAME( cmd ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"cnc", MOD_INIT_NAME( cnc ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"code", MOD_INIT_NAME( code ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codecs", MOD_INIT_NAME( codecs ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen", MOD_INIT_NAME( codegen ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"codegen.AsyncgenCodes", MOD_INIT_NAME( codegen$AsyncgenCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.AttributeCodes", MOD_INIT_NAME( codegen$AttributeCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.BlobCodes", MOD_INIT_NAME( codegen$BlobCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.BranchCodes", MOD_INIT_NAME( codegen$BranchCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.BuiltinCodes", MOD_INIT_NAME( codegen$BuiltinCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.CallCodes", MOD_INIT_NAME( codegen$CallCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.ClassCodes", MOD_INIT_NAME( codegen$ClassCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.CodeGeneration", MOD_INIT_NAME( codegen$CodeGeneration ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.CodeHelpers", MOD_INIT_NAME( codegen$CodeHelpers ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.CodeObjectCodes", MOD_INIT_NAME( codegen$CodeObjectCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.ComparisonCodes", MOD_INIT_NAME( codegen$ComparisonCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.ConditionalCodes", MOD_INIT_NAME( codegen$ConditionalCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.ConstantCodes", MOD_INIT_NAME( codegen$ConstantCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.Contexts", MOD_INIT_NAME( codegen$Contexts ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.CoroutineCodes", MOD_INIT_NAME( codegen$CoroutineCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.DictCodes", MOD_INIT_NAME( codegen$DictCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.Emission", MOD_INIT_NAME( codegen$Emission ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.ErrorCodes", MOD_INIT_NAME( codegen$ErrorCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.EvalCodes", MOD_INIT_NAME( codegen$EvalCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.ExceptionCodes", MOD_INIT_NAME( codegen$ExceptionCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.ExpressionCodes", MOD_INIT_NAME( codegen$ExpressionCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.FrameCodes", MOD_INIT_NAME( codegen$FrameCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.FunctionCodes", MOD_INIT_NAME( codegen$FunctionCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.GeneratorCodes", MOD_INIT_NAME( codegen$GeneratorCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.GlobalsLocalsCodes", MOD_INIT_NAME( codegen$GlobalsLocalsCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.IdCodes", MOD_INIT_NAME( codegen$IdCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.ImportCodes", MOD_INIT_NAME( codegen$ImportCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.Indentation", MOD_INIT_NAME( codegen$Indentation ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.IndexCodes", MOD_INIT_NAME( codegen$IndexCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.IntegerCodes", MOD_INIT_NAME( codegen$IntegerCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.IteratorCodes", MOD_INIT_NAME( codegen$IteratorCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.LabelCodes", MOD_INIT_NAME( codegen$LabelCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.LineNumberCodes", MOD_INIT_NAME( codegen$LineNumberCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.ListCodes", MOD_INIT_NAME( codegen$ListCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.LoaderCodes", MOD_INIT_NAME( codegen$LoaderCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.LocalsDictCodes", MOD_INIT_NAME( codegen$LocalsDictCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.LoopCodes", MOD_INIT_NAME( codegen$LoopCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.ModuleCodes", MOD_INIT_NAME( codegen$ModuleCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.Namify", MOD_INIT_NAME( codegen$Namify ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.OperationCodes", MOD_INIT_NAME( codegen$OperationCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.OperatorCodes", MOD_INIT_NAME( codegen$OperatorCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.PrintCodes", MOD_INIT_NAME( codegen$PrintCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.PythonAPICodes", MOD_INIT_NAME( codegen$PythonAPICodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.RaisingCodes", MOD_INIT_NAME( codegen$RaisingCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.ReturnCodes", MOD_INIT_NAME( codegen$ReturnCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.SetCodes", MOD_INIT_NAME( codegen$SetCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.SliceCodes", MOD_INIT_NAME( codegen$SliceCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.StringCodes", MOD_INIT_NAME( codegen$StringCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.SubscriptCodes", MOD_INIT_NAME( codegen$SubscriptCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.TryCodes", MOD_INIT_NAME( codegen$TryCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.TupleCodes", MOD_INIT_NAME( codegen$TupleCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.VariableCodes", MOD_INIT_NAME( codegen$VariableCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.YieldCodes", MOD_INIT_NAME( codegen$YieldCodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.c_types", MOD_INIT_NAME( codegen$c_types ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"codegen.c_types.CTypeBases", MOD_INIT_NAME( codegen$c_types$CTypeBases ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.c_types.CTypeNuitkaBools", MOD_INIT_NAME( codegen$c_types$CTypeNuitkaBools ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.c_types.CTypePyObjectPtrs", MOD_INIT_NAME( codegen$c_types$CTypePyObjectPtrs ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.templates", MOD_INIT_NAME( codegen$templates ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"codegen.templates.CodeTemplatesAsyncgens", MOD_INIT_NAME( codegen$templates$CodeTemplatesAsyncgens ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.templates.CodeTemplatesCalls", MOD_INIT_NAME( codegen$templates$CodeTemplatesCalls ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.templates.CodeTemplatesConstants", MOD_INIT_NAME( codegen$templates$CodeTemplatesConstants ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.templates.CodeTemplatesCoroutines", MOD_INIT_NAME( codegen$templates$CodeTemplatesCoroutines ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.templates.CodeTemplatesExceptions", MOD_INIT_NAME( codegen$templates$CodeTemplatesExceptions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.templates.CodeTemplatesFrames", MOD_INIT_NAME( codegen$templates$CodeTemplatesFrames ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.templates.CodeTemplatesFreezer", MOD_INIT_NAME( codegen$templates$CodeTemplatesFreezer ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.templates.CodeTemplatesFunction", MOD_INIT_NAME( codegen$templates$CodeTemplatesFunction ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.templates.CodeTemplatesGeneratorFunction", MOD_INIT_NAME( codegen$templates$CodeTemplatesGeneratorFunction ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.templates.CodeTemplatesIterators", MOD_INIT_NAME( codegen$templates$CodeTemplatesIterators ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.templates.CodeTemplatesLoader", MOD_INIT_NAME( codegen$templates$CodeTemplatesLoader ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.templates.CodeTemplatesModules", MOD_INIT_NAME( codegen$templates$CodeTemplatesModules ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.templates.CodeTemplatesVariables", MOD_INIT_NAME( codegen$templates$CodeTemplatesVariables ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codegen.templates.TemplateDebugWrapper", MOD_INIT_NAME( codegen$templates$TemplateDebugWrapper ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"codeop", MOD_INIT_NAME( codeop ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"collections", MOD_INIT_NAME( collections ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"collections.abc", MOD_INIT_NAME( collections$abc ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"concurrent", MOD_INIT_NAME( concurrent ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"concurrent.futures", MOD_INIT_NAME( concurrent$futures ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"concurrent.futures._base", MOD_INIT_NAME( concurrent$futures$_base ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"concurrent.futures.process", MOD_INIT_NAME( concurrent$futures$process ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"concurrent.futures.thread", MOD_INIT_NAME( concurrent$futures$thread ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"config", MOD_INIT_NAME( config ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"containers", MOD_INIT_NAME( containers ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"containers.odict", MOD_INIT_NAME( containers$odict ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"containers.oset", MOD_INIT_NAME( containers$oset ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"contextlib", MOD_INIT_NAME( contextlib ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"copy", MOD_INIT_NAME( copy ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"copyreg", MOD_INIT_NAME( copyreg ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"coverageassessment", MOD_INIT_NAME( coverageassessment ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"coveragetrainer", MOD_INIT_NAME( coveragetrainer ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"ctypes", MOD_INIT_NAME( ctypes ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"ctypes._endian", MOD_INIT_NAME( ctypes$_endian ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"ctypes.macholib", MOD_INIT_NAME( ctypes$macholib ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"ctypes.macholib.dyld", MOD_INIT_NAME( ctypes$macholib$dyld ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"ctypes.macholib.dylib", MOD_INIT_NAME( ctypes$macholib$dylib ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"ctypes.macholib.framework", MOD_INIT_NAME( ctypes$macholib$framework ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"ctypes.util", MOD_INIT_NAME( ctypes$util ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"ctypes.wintypes", MOD_INIT_NAME( ctypes$wintypes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"datetime", MOD_INIT_NAME( datetime ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"dbmigrator", MOD_INIT_NAME( dbmigrator ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"ddxpractice", MOD_INIT_NAME( ddxpractice ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"decimal", MOD_INIT_NAME( decimal ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"depthtrainer", MOD_INIT_NAME( depthtrainer ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"difflib", MOD_INIT_NAME( difflib ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"dis", MOD_INIT_NAME( dis ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"distutils", NULL, 2257046, 232, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"distutils.log", NULL, 2257278, 2260, NUITKA_BYTECODE_FLAG },
    { (char *)"doctest", MOD_INIT_NAME( doctest ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"donottouch", MOD_INIT_NAME( donottouch ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"dummy_threading", MOD_INIT_NAME( dummy_threading ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"email", MOD_INIT_NAME( email ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"email._encoded_words", MOD_INIT_NAME( email$_encoded_words ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"email._header_value_parser", MOD_INIT_NAME( email$_header_value_parser ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"email._parseaddr", MOD_INIT_NAME( email$_parseaddr ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"email._policybase", MOD_INIT_NAME( email$_policybase ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"email.base64mime", MOD_INIT_NAME( email$base64mime ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"email.charset", MOD_INIT_NAME( email$charset ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"email.contentmanager", MOD_INIT_NAME( email$contentmanager ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"email.encoders", MOD_INIT_NAME( email$encoders ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"email.errors", MOD_INIT_NAME( email$errors ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"email.feedparser", MOD_INIT_NAME( email$feedparser ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"email.generator", MOD_INIT_NAME( email$generator ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"email.header", MOD_INIT_NAME( email$header ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"email.headerregistry", MOD_INIT_NAME( email$headerregistry ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"email.iterators", MOD_INIT_NAME( email$iterators ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"email.message", MOD_INIT_NAME( email$message ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"email.parser", MOD_INIT_NAME( email$parser ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"email.policy", MOD_INIT_NAME( email$policy ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"email.quoprimime", MOD_INIT_NAME( email$quoprimime ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"email.utils", MOD_INIT_NAME( email$utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"encodings", MOD_INIT_NAME( encodings ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"encodings.aliases", MOD_INIT_NAME( encodings$aliases ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"encodings.mbcs", MOD_INIT_NAME( encodings$mbcs ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"enum", MOD_INIT_NAME( enum ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"filecmp", MOD_INIT_NAME( filecmp ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"finalizations", MOD_INIT_NAME( finalizations ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"finalizations.Finalization", MOD_INIT_NAME( finalizations$Finalization ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"finalizations.FinalizeBase", MOD_INIT_NAME( finalizations$FinalizeBase ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"finalizations.FinalizeMarkups", MOD_INIT_NAME( finalizations$FinalizeMarkups ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"fnmatch", MOD_INIT_NAME( fnmatch ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"freezer", MOD_INIT_NAME( freezer ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"freezer.BytecodeModuleFreezer", MOD_INIT_NAME( freezer$BytecodeModuleFreezer ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"freezer.DependsExe", MOD_INIT_NAME( freezer$DependsExe ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"freezer.Standalone", MOD_INIT_NAME( freezer$Standalone ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"ftplib", MOD_INIT_NAME( ftplib ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"functools", MOD_INIT_NAME( functools ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"genericpath", MOD_INIT_NAME( genericpath ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"getopt", MOD_INIT_NAME( getopt ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"getpass", MOD_INIT_NAME( getpass ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"gettext", MOD_INIT_NAME( gettext ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"gi", MOD_INIT_NAME( gi ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"gi._constants", MOD_INIT_NAME( gi$_constants ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"gi._propertyhelper", MOD_INIT_NAME( gi$_propertyhelper ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"gi._signalhelper", MOD_INIT_NAME( gi$_signalhelper ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"gi.docstring", MOD_INIT_NAME( gi$docstring ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"gi.importer", MOD_INIT_NAME( gi$importer ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"gi.module", MOD_INIT_NAME( gi$module ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"gi.overrides", MOD_INIT_NAME( gi$overrides ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"gi.overrides.keysyms", MOD_INIT_NAME( gi$overrides$keysyms ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"gi.pygtkcompat", MOD_INIT_NAME( gi$pygtkcompat ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"gi.repository", MOD_INIT_NAME( gi$repository ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"gi.types", MOD_INIT_NAME( gi$types ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"glob", MOD_INIT_NAME( glob ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"guarding", MOD_INIT_NAME( guarding ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"gui", MOD_INIT_NAME( gui ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"gui.SyntaxHighlighting", MOD_INIT_NAME( gui$SyntaxHighlighting ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"gui.TreeDisplay", MOD_INIT_NAME( gui$TreeDisplay ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"gzip", MOD_INIT_NAME( gzip ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"hashlib", MOD_INIT_NAME( hashlib ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"heapq", MOD_INIT_NAME( heapq ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"hmac", MOD_INIT_NAME( hmac ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"html", MOD_INIT_NAME( html ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"html.entities", MOD_INIT_NAME( html$entities ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"http", MOD_INIT_NAME( http ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"http.client", MOD_INIT_NAME( http$client ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"http.cookiejar", MOD_INIT_NAME( http$cookiejar ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"http.server", MOD_INIT_NAME( http$server ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"i18ntrans2", MOD_INIT_NAME( i18ntrans2 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"imp", MOD_INIT_NAME( imp ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"importing", MOD_INIT_NAME( importing ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"importing.ImportCache", MOD_INIT_NAME( importing$ImportCache ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"importing.Importing", MOD_INIT_NAME( importing$Importing ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"importing.PreloadedPackages", MOD_INIT_NAME( importing$PreloadedPackages ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"importing.Recursion", MOD_INIT_NAME( importing$Recursion ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"importing.StandardLibrary", MOD_INIT_NAME( importing$StandardLibrary ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"importing.Whitelisting", MOD_INIT_NAME( importing$Whitelisting ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"importlib", MOD_INIT_NAME( importlib ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"importlib._bootstrap", MOD_INIT_NAME( importlib$_bootstrap ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"importlib._bootstrap_external", MOD_INIT_NAME( importlib$_bootstrap_external ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"importlib.abc", MOD_INIT_NAME( importlib$abc ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"importlib.machinery", MOD_INIT_NAME( importlib$machinery ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"importlib.util", MOD_INIT_NAME( importlib$util ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"inspect", MOD_INIT_NAME( inspect ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"io", MOD_INIT_NAME( io ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"ipaddress", MOD_INIT_NAME( ipaddress ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"iso3166", MOD_INIT_NAME( iso3166 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"iso639", MOD_INIT_NAME( iso639 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"json", MOD_INIT_NAME( json ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"json.decoder", MOD_INIT_NAME( json$decoder ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"json.encoder", MOD_INIT_NAME( json$encoder ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"json.scanner", MOD_INIT_NAME( json$scanner ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"keyword", MOD_INIT_NAME( keyword ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"linecache", MOD_INIT_NAME( linecache ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"liveview", MOD_INIT_NAME( liveview ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"locale", MOD_INIT_NAME( locale ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"logging", MOD_INIT_NAME( logging ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"lzma", MOD_INIT_NAME( lzma ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"menu", MOD_INIT_NAME( menu ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"mimetypes", MOD_INIT_NAME( mimetypes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"multiprocessing", MOD_INIT_NAME( multiprocessing ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"multiprocessing.connection", MOD_INIT_NAME( multiprocessing$connection ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"multiprocessing.context", MOD_INIT_NAME( multiprocessing$context ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"multiprocessing.dummy", MOD_INIT_NAME( multiprocessing$dummy ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"multiprocessing.dummy.connection", MOD_INIT_NAME( multiprocessing$dummy$connection ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"multiprocessing.forkserver", MOD_INIT_NAME( multiprocessing$forkserver ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"multiprocessing.heap", MOD_INIT_NAME( multiprocessing$heap ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"multiprocessing.managers", MOD_INIT_NAME( multiprocessing$managers ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"multiprocessing.pool", MOD_INIT_NAME( multiprocessing$pool ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"multiprocessing.popen_fork", MOD_INIT_NAME( multiprocessing$popen_fork ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"multiprocessing.popen_forkserver", MOD_INIT_NAME( multiprocessing$popen_forkserver ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"multiprocessing.popen_spawn_posix", MOD_INIT_NAME( multiprocessing$popen_spawn_posix ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"multiprocessing.popen_spawn_win32", MOD_INIT_NAME( multiprocessing$popen_spawn_win32 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"multiprocessing.process", MOD_INIT_NAME( multiprocessing$process ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"multiprocessing.queues", MOD_INIT_NAME( multiprocessing$queues ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"multiprocessing.reduction", MOD_INIT_NAME( multiprocessing$reduction ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"multiprocessing.resource_sharer", MOD_INIT_NAME( multiprocessing$resource_sharer ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"multiprocessing.semaphore_tracker", MOD_INIT_NAME( multiprocessing$semaphore_tracker ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"multiprocessing.sharedctypes", MOD_INIT_NAME( multiprocessing$sharedctypes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"multiprocessing.spawn", MOD_INIT_NAME( multiprocessing$spawn ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"multiprocessing.synchronize", MOD_INIT_NAME( multiprocessing$synchronize ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"multiprocessing.util", MOD_INIT_NAME( multiprocessing$util ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"netrc", MOD_INIT_NAME( netrc ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes", MOD_INIT_NAME( nodes ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"nodes.AssignNodes", MOD_INIT_NAME( nodes$AssignNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.AsyncgenNodes", MOD_INIT_NAME( nodes$AsyncgenNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.AttributeNodes", MOD_INIT_NAME( nodes$AttributeNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.BuiltinComplexNodes", MOD_INIT_NAME( nodes$BuiltinComplexNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.BuiltinDecodingNodes", MOD_INIT_NAME( nodes$BuiltinDecodingNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.BuiltinDecoratorNodes", MOD_INIT_NAME( nodes$BuiltinDecoratorNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.BuiltinDictNodes", MOD_INIT_NAME( nodes$BuiltinDictNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.BuiltinFormatNodes", MOD_INIT_NAME( nodes$BuiltinFormatNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.BuiltinHashNodes", MOD_INIT_NAME( nodes$BuiltinHashNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.BuiltinIntegerNodes", MOD_INIT_NAME( nodes$BuiltinIntegerNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.BuiltinIteratorNodes", MOD_INIT_NAME( nodes$BuiltinIteratorNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.BuiltinLenNodes", MOD_INIT_NAME( nodes$BuiltinLenNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.BuiltinNextNodes", MOD_INIT_NAME( nodes$BuiltinNextNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.BuiltinOpenNodes", MOD_INIT_NAME( nodes$BuiltinOpenNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.BuiltinRangeNodes", MOD_INIT_NAME( nodes$BuiltinRangeNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.BuiltinRefNodes", MOD_INIT_NAME( nodes$BuiltinRefNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.BuiltinSumNodes", MOD_INIT_NAME( nodes$BuiltinSumNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.BuiltinTypeNodes", MOD_INIT_NAME( nodes$BuiltinTypeNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.BuiltinVarsNodes", MOD_INIT_NAME( nodes$BuiltinVarsNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.CallNodes", MOD_INIT_NAME( nodes$CallNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.Checkers", MOD_INIT_NAME( nodes$Checkers ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.ClassNodes", MOD_INIT_NAME( nodes$ClassNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.CodeObjectSpecs", MOD_INIT_NAME( nodes$CodeObjectSpecs ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.ComparisonNodes", MOD_INIT_NAME( nodes$ComparisonNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.ConditionalNodes", MOD_INIT_NAME( nodes$ConditionalNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.ConstantRefNodes", MOD_INIT_NAME( nodes$ConstantRefNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.ContainerMakingNodes", MOD_INIT_NAME( nodes$ContainerMakingNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.ContainerOperationNodes", MOD_INIT_NAME( nodes$ContainerOperationNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.CoroutineNodes", MOD_INIT_NAME( nodes$CoroutineNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.DictionaryNodes", MOD_INIT_NAME( nodes$DictionaryNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.ExceptionNodes", MOD_INIT_NAME( nodes$ExceptionNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.ExecEvalNodes", MOD_INIT_NAME( nodes$ExecEvalNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.ExpressionBases", MOD_INIT_NAME( nodes$ExpressionBases ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.FrameNodes", MOD_INIT_NAME( nodes$FrameNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.FunctionNodes", MOD_INIT_NAME( nodes$FunctionNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.FutureSpecs", MOD_INIT_NAME( nodes$FutureSpecs ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.GeneratorNodes", MOD_INIT_NAME( nodes$GeneratorNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.GlobalsLocalsNodes", MOD_INIT_NAME( nodes$GlobalsLocalsNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.ImportNodes", MOD_INIT_NAME( nodes$ImportNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.IndicatorMixins", MOD_INIT_NAME( nodes$IndicatorMixins ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.LocalsDictNodes", MOD_INIT_NAME( nodes$LocalsDictNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.LocalsScopes", MOD_INIT_NAME( nodes$LocalsScopes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.LoopNodes", MOD_INIT_NAME( nodes$LoopNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.ModuleAttributeNodes", MOD_INIT_NAME( nodes$ModuleAttributeNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.ModuleNodes", MOD_INIT_NAME( nodes$ModuleNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.NodeBases", MOD_INIT_NAME( nodes$NodeBases ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.NodeMakingHelpers", MOD_INIT_NAME( nodes$NodeMakingHelpers ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.NodeMetaClasses", MOD_INIT_NAME( nodes$NodeMetaClasses ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.OperatorNodes", MOD_INIT_NAME( nodes$OperatorNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.OutlineNodes", MOD_INIT_NAME( nodes$OutlineNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.PrintNodes", MOD_INIT_NAME( nodes$PrintNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.ReturnNodes", MOD_INIT_NAME( nodes$ReturnNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.SideEffectNodes", MOD_INIT_NAME( nodes$SideEffectNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.SliceNodes", MOD_INIT_NAME( nodes$SliceNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.StatementNodes", MOD_INIT_NAME( nodes$StatementNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.StringConcatenationNodes", MOD_INIT_NAME( nodes$StringConcatenationNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.SubscriptNodes", MOD_INIT_NAME( nodes$SubscriptNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.TryNodes", MOD_INIT_NAME( nodes$TryNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.TypeNodes", MOD_INIT_NAME( nodes$TypeNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.VariableRefNodes", MOD_INIT_NAME( nodes$VariableRefNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.YieldNodes", MOD_INIT_NAME( nodes$YieldNodes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.shapes", MOD_INIT_NAME( nodes$shapes ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"nodes.shapes.BuiltinTypeShapes", MOD_INIT_NAME( nodes$shapes$BuiltinTypeShapes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nodes.shapes.StandardShapes", MOD_INIT_NAME( nodes$shapes$StandardShapes ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"ntpath", MOD_INIT_NAME( ntpath ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"nturl2path", MOD_INIT_NAME( nturl2path ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numbers", MOD_INIT_NAME( numbers ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"observer", MOD_INIT_NAME( observer ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"opcode", MOD_INIT_NAME( opcode ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"operator", MOD_INIT_NAME( operator ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"optimizations", MOD_INIT_NAME( optimizations ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"optimizations.BytecodeDemotion", MOD_INIT_NAME( optimizations$BytecodeDemotion ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"optimizations.FunctionInlining", MOD_INIT_NAME( optimizations$FunctionInlining ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"optimizations.Graphs", MOD_INIT_NAME( optimizations$Graphs ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"optimizations.Optimization", MOD_INIT_NAME( optimizations$Optimization ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"optimizations.OptimizeBuiltinCalls", MOD_INIT_NAME( optimizations$OptimizeBuiltinCalls ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"optimizations.Tags", MOD_INIT_NAME( optimizations$Tags ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"optimizations.TraceCollections", MOD_INIT_NAME( optimizations$TraceCollections ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"optimizations.ValueTraces", MOD_INIT_NAME( optimizations$ValueTraces ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"optparse", MOD_INIT_NAME( optparse ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"os", MOD_INIT_NAME( os ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"palpationgrid", MOD_INIT_NAME( palpationgrid ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pdb", MOD_INIT_NAME( pdb ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pickle", MOD_INIT_NAME( pickle ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pkgutil", MOD_INIT_NAME( pkgutil ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"platform", MOD_INIT_NAME( platform ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"plistlib", MOD_INIT_NAME( plistlib ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"plugins", MOD_INIT_NAME( plugins ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"plugins.PluginBase", MOD_INIT_NAME( plugins$PluginBase ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"plugins.Plugins", MOD_INIT_NAME( plugins$Plugins ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"plugins.standard", MOD_INIT_NAME( plugins$standard ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"plugins.standard.ConsiderPyLintAnnotationsPlugin", MOD_INIT_NAME( plugins$standard$ConsiderPyLintAnnotationsPlugin ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"plugins.standard.DataFileCollectorPlugin", MOD_INIT_NAME( plugins$standard$DataFileCollectorPlugin ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"plugins.standard.EnumPlugin", MOD_INIT_NAME( plugins$standard$EnumPlugin ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"plugins.standard.ImplicitImports", MOD_INIT_NAME( plugins$standard$ImplicitImports ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"plugins.standard.MultiprocessingPlugin", MOD_INIT_NAME( plugins$standard$MultiprocessingPlugin ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"plugins.standard.PmwPlugin", MOD_INIT_NAME( plugins$standard$PmwPlugin ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"plugins.standard.PySidePyQtPlugin", MOD_INIT_NAME( plugins$standard$PySidePyQtPlugin ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"port_settings", MOD_INIT_NAME( port_settings ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"posixpath", MOD_INIT_NAME( posixpath ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pprint", MOD_INIT_NAME( pprint ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pressurepoints", MOD_INIT_NAME( pressurepoints ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"prototypetext", MOD_INIT_NAME( prototypetext ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"py_compile", MOD_INIT_NAME( py_compile ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pydoc", MOD_INIT_NAME( pydoc ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pydoc_data", MOD_INIT_NAME( pydoc_data ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pydoc_data.topics", MOD_INIT_NAME( pydoc_data$topics ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pygtkcompat", MOD_INIT_NAME( pygtkcompat ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pygtkcompat.generictreemodel", MOD_INIT_NAME( pygtkcompat$generictreemodel ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pygtkcompat.pygtkcompat", MOD_INIT_NAME( pygtkcompat$pygtkcompat ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"questionmarkview", MOD_INIT_NAME( questionmarkview ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"questmaster", MOD_INIT_NAME( questmaster ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"queue", MOD_INIT_NAME( queue ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"quopri", MOD_INIT_NAME( quopri ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"random", MOD_INIT_NAME( random ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"re", MOD_INIT_NAME( re ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"reprlib", MOD_INIT_NAME( reprlib ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"runpy", MOD_INIT_NAME( runpy ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"selectors", MOD_INIT_NAME( selectors ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"selfpractice", MOD_INIT_NAME( selfpractice ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"serial", MOD_INIT_NAME( serial ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"serial.serialcli", MOD_INIT_NAME( serial$serialcli ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"serial.serialjava", MOD_INIT_NAME( serial$serialjava ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"serial.serialposix", MOD_INIT_NAME( serial$serialposix ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"serial.serialutil", MOD_INIT_NAME( serial$serialutil ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"serial.serialwin32", MOD_INIT_NAME( serial$serialwin32 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"serial.win32", MOD_INIT_NAME( serial$win32 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"serialbladder", MOD_INIT_NAME( serialbladder ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"serialport", MOD_INIT_NAME( serialport ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"shlex", MOD_INIT_NAME( shlex ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"shutil", MOD_INIT_NAME( shutil ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"signal", MOD_INIT_NAME( signal ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"sim", MOD_INIT_NAME( sim ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"simLogging", MOD_INIT_NAME( simLogging ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"sim_constants", MOD_INIT_NAME( sim_constants ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"socket", MOD_INIT_NAME( socket ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"socketserver", MOD_INIT_NAME( socketserver ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"sounds", MOD_INIT_NAME( sounds ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"specs", MOD_INIT_NAME( specs ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"specs.BuiltinParameterSpecs", MOD_INIT_NAME( specs$BuiltinParameterSpecs ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"specs.ParameterSpecs", MOD_INIT_NAME( specs$ParameterSpecs ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"splashscreen", MOD_INIT_NAME( splashscreen ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"sqlite3", MOD_INIT_NAME( sqlite3 ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"sqlite3.dbapi2", MOD_INIT_NAME( sqlite3$dbapi2 ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"sre_compile", MOD_INIT_NAME( sre_compile ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"sre_constants", MOD_INIT_NAME( sre_constants ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"sre_parse", MOD_INIT_NAME( sre_parse ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"ssl", MOD_INIT_NAME( ssl ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"stat", MOD_INIT_NAME( stat ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"statewatcher", MOD_INIT_NAME( statewatcher ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"string", MOD_INIT_NAME( string ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"struct", MOD_INIT_NAME( struct ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"subprocess", MOD_INIT_NAME( subprocess ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"sysconfig", MOD_INIT_NAME( sysconfig ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tarfile", MOD_INIT_NAME( tarfile ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tempfile", MOD_INIT_NAME( tempfile ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tensioner", MOD_INIT_NAME( tensioner ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"textwrap", MOD_INIT_NAME( textwrap ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"threading", MOD_INIT_NAME( threading ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"timeit", MOD_INIT_NAME( timeit ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"token", MOD_INIT_NAME( token ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tokenize", MOD_INIT_NAME( tokenize ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"traceback", MOD_INIT_NAME( traceback ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tracemalloc", MOD_INIT_NAME( tracemalloc ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree", MOD_INIT_NAME( tree ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"tree.Building", MOD_INIT_NAME( tree$Building ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.ComplexCallHelperFunctions", MOD_INIT_NAME( tree$ComplexCallHelperFunctions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.Extractions", MOD_INIT_NAME( tree$Extractions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.InternalModule", MOD_INIT_NAME( tree$InternalModule ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.Operations", MOD_INIT_NAME( tree$Operations ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.ReformulationAssertStatements", MOD_INIT_NAME( tree$ReformulationAssertStatements ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.ReformulationAssignmentStatements", MOD_INIT_NAME( tree$ReformulationAssignmentStatements ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.ReformulationBooleanExpressions", MOD_INIT_NAME( tree$ReformulationBooleanExpressions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.ReformulationCallExpressions", MOD_INIT_NAME( tree$ReformulationCallExpressions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.ReformulationClasses", MOD_INIT_NAME( tree$ReformulationClasses ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.ReformulationComparisonExpressions", MOD_INIT_NAME( tree$ReformulationComparisonExpressions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.ReformulationContractionExpressions", MOD_INIT_NAME( tree$ReformulationContractionExpressions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.ReformulationDictionaryCreation", MOD_INIT_NAME( tree$ReformulationDictionaryCreation ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.ReformulationExecStatements", MOD_INIT_NAME( tree$ReformulationExecStatements ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.ReformulationForLoopStatements", MOD_INIT_NAME( tree$ReformulationForLoopStatements ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.ReformulationFunctionStatements", MOD_INIT_NAME( tree$ReformulationFunctionStatements ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.ReformulationImportStatements", MOD_INIT_NAME( tree$ReformulationImportStatements ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.ReformulationLambdaExpressions", MOD_INIT_NAME( tree$ReformulationLambdaExpressions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.ReformulationNamespacePackages", MOD_INIT_NAME( tree$ReformulationNamespacePackages ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.ReformulationPrintStatements", MOD_INIT_NAME( tree$ReformulationPrintStatements ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.ReformulationSequenceCreation", MOD_INIT_NAME( tree$ReformulationSequenceCreation ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.ReformulationSubscriptExpressions", MOD_INIT_NAME( tree$ReformulationSubscriptExpressions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.ReformulationTryExceptStatements", MOD_INIT_NAME( tree$ReformulationTryExceptStatements ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.ReformulationTryFinallyStatements", MOD_INIT_NAME( tree$ReformulationTryFinallyStatements ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.ReformulationWhileLoopStatements", MOD_INIT_NAME( tree$ReformulationWhileLoopStatements ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.ReformulationWithStatements", MOD_INIT_NAME( tree$ReformulationWithStatements ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.ReformulationYieldExpressions", MOD_INIT_NAME( tree$ReformulationYieldExpressions ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.SourceReading", MOD_INIT_NAME( tree$SourceReading ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.SyntaxErrors", MOD_INIT_NAME( tree$SyntaxErrors ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.TreeHelpers", MOD_INIT_NAME( tree$TreeHelpers ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tree.VariableClosure", MOD_INIT_NAME( tree$VariableClosure ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"tty", MOD_INIT_NAME( tty ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"types", MOD_INIT_NAME( types ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"ultrasound", MOD_INIT_NAME( ultrasound ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"unittest", MOD_INIT_NAME( unittest ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"unittest.case", MOD_INIT_NAME( unittest$case ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"unittest.loader", MOD_INIT_NAME( unittest$loader ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"unittest.main", MOD_INIT_NAME( unittest$main ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"unittest.result", MOD_INIT_NAME( unittest$result ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"unittest.runner", MOD_INIT_NAME( unittest$runner ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"unittest.signals", MOD_INIT_NAME( unittest$signals ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"unittest.suite", MOD_INIT_NAME( unittest$suite ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"unittest.util", MOD_INIT_NAME( unittest$util ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib", MOD_INIT_NAME( urllib ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"urllib.error", MOD_INIT_NAME( urllib$error ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib.parse", MOD_INIT_NAME( urllib$parse ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib.request", MOD_INIT_NAME( urllib$request ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"urllib.response", MOD_INIT_NAME( urllib$response ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"utils", MOD_INIT_NAME( utils ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"utils.AppDirs", MOD_INIT_NAME( utils$AppDirs ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"utils.CStrings", MOD_INIT_NAME( utils$CStrings ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"utils.Execution", MOD_INIT_NAME( utils$Execution ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"utils.FileOperations", MOD_INIT_NAME( utils$FileOperations ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"utils.InstanceCounters", MOD_INIT_NAME( utils$InstanceCounters ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"utils.MemoryUsage", MOD_INIT_NAME( utils$MemoryUsage ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"utils.SharedLibraries", MOD_INIT_NAME( utils$SharedLibraries ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"utils.Shebang", MOD_INIT_NAME( utils$Shebang ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"utils.ThreadedExecutor", MOD_INIT_NAME( utils$ThreadedExecutor ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"utils.Timing", MOD_INIT_NAME( utils$Timing ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"utils.Utils", MOD_INIT_NAME( utils$Utils ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"uu", MOD_INIT_NAME( uu ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"warnings", MOD_INIT_NAME( warnings ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"weakref", MOD_INIT_NAME( weakref ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"webbrowser", MOD_INIT_NAME( webbrowser ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"xml", MOD_INIT_NAME( xml ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"xml.etree", MOD_INIT_NAME( xml$etree ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"xml.etree.ElementPath", MOD_INIT_NAME( xml$etree$ElementPath ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"xml.etree.ElementTree", MOD_INIT_NAME( xml$etree$ElementTree ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"xml.parsers", MOD_INIT_NAME( xml$parsers ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"xml.parsers.expat", MOD_INIT_NAME( xml$parsers$expat ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"xmlrpc", MOD_INIT_NAME( xmlrpc ), 0, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"xmlrpc.client", MOD_INIT_NAME( xmlrpc$client ), 0, 0, NUITKA_COMPILED_MODULE },
    { (char *)"zipfile", MOD_INIT_NAME( zipfile ), 0, 0, NUITKA_COMPILED_MODULE },
    { NULL, NULL, 0, 0, 0 }
};

void setupMetaPathBasedLoader( void )
{
    static bool init_done = false;

    if ( init_done == false )
    {
        registerMetaPathBasedUnfreezer( meta_path_loader_entries );
        init_done = true;
    }
}
