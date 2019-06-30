/* Generated code for Python source for module 'nodes.NodeMakingHelpers'
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

/* The _module_nodes$NodeMakingHelpers is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_nodes$NodeMakingHelpers;
PyDictObject *moduledict_nodes$NodeMakingHelpers;

/* The module constants used, if any. */
static PyObject *const_tuple_str_plain_new_node_str_plain_old_node_tuple;
static PyObject *const_tuple_81e83b24d22737af5701294feafb9f96_tuple;
static PyObject *const_tuple_str_plain_isDebug_str_plain_shallWarnImplicitRaises_tuple;
extern PyObject *const_str_plain_result;
extern PyObject *const_str_plain_Builtins;
extern PyObject *const_tuple_str_plain_makeConstantRefNode_tuple;
extern PyObject *const_str_plain___name__;
static PyObject *const_tuple_a7f6b75b233338c160e2d143d48df81c_tuple;
extern PyObject *const_tuple_type_tuple_type_list_tuple;
extern PyObject *const_str_plain_makeConstantRefNode;
extern PyObject *const_tuple_false_tuple;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_StatementNodes;
extern PyObject *const_str_plain_makeRaiseExceptionExpressionFromTemplate;
static PyObject *const_str_digest_14aebb8a9455c86923c7bfd3607a5f31;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_digest_ac7920cddb1b3ebffd5ceeefcd2af56c;
static PyObject *const_str_plain_SideEffectNodes;
extern PyObject *const_str_plain_statements;
static PyObject *const_tuple_2b232815ccc5b4520154fe508f1ecb8a_tuple;
extern PyObject *const_str_plain_side_effect;
extern PyObject *const_tuple_str_plain_builtin_names_tuple;
extern PyObject *const_str_plain_ExpressionBuiltinExceptionRef;
extern PyObject *const_str_plain_locals_scope;
extern PyObject *const_str_plain_ExpressionBuiltinType1;
extern PyObject *const_str_plain_Is;
extern PyObject *const_str_plain_new_raise;
static PyObject *const_str_plain_ComparisonNodes;
static PyObject *const_str_digest_aa7d718bdb633f9b7e0eb195c2933835;
extern PyObject *const_str_plain_StatementsSequence;
extern PyObject *const_str_plain_ExpressionComparisonIn;
static PyObject *const_tuple_8893820bc3fbb899dba7349fa04efb07_tuple;
extern PyObject *const_str_plain_exception;
static PyObject *const_tuple_b82ced9c479e59ea56e7d381ac95de0e_tuple;
extern PyObject *const_str_plain_isUnoptimized;
static PyObject *const_str_plain_merged_statements;
extern PyObject *const_str_chr_37;
extern PyObject *const_str_plain_ExpressionRaiseException;
extern PyObject *const_str_plain_isTempVariable;
extern PyObject *const_str_plain_wrapExpressionWithSideEffects;
static PyObject *const_tuple_306a743a6403c5d924d773015f3f94f6_tuple;
extern PyObject *const_str_plain_side_effects;
static PyObject *const_tuple_2a8c6699ce1225d987c1bbb6de529287_tuple;
static PyObject *const_tuple_2b92b1670a341a84354e8558cd83ef79_tuple;
extern PyObject *const_str_plain_Options;
static PyObject *const_tuple_9cfb2358ad02551ab3511732fc2b2c2e_tuple;
extern PyObject *const_str_plain_TypeError;
extern PyObject *const_str_plain_exception_value;
extern PyObject *const_str_plain_shallWarnImplicitRaises;
extern PyObject *const_str_plain_In;
extern PyObject *const_str_plain_ExpressionSideEffects;
extern PyObject *const_str_plain_isStatementsSequence;
extern PyObject *const_str_plain_getSourceReference;
extern PyObject *const_str_plain_VariableRefNodes;
static PyObject *const_tuple_8780af1e9e717200b8c653b4eaf16030_tuple;
extern PyObject *const_str_plain_getTypeShape;
static PyObject *const_str_digest_9060f3a41e8a1211d9a62328541c9086;
extern PyObject *const_str_plain_ExpressionTempVariableRef;
extern PyObject *const_str_plain_ExpressionBuiltinLocalsRef;
extern PyObject *const_str_plain___doc__;
static PyObject *const_tuple_9e0795cf3e9b7579336666af2c4d8817_tuple;
extern PyObject *const_str_plain_description;
extern PyObject *const_str_plain_extend;
extern PyObject *const_str_plain_getTypeName;
static PyObject *const_str_digest_36951842fb24f37a99d053260736977e;
extern PyObject *const_str_plain_allow_none;
extern PyObject *const_str_plain_makeClone;
extern PyObject *const_int_pos_300;
static PyObject *const_str_plain_GlobalsLocalsNodes;
static PyObject *const_tuple_86662504c992576900181477de7ac050_tuple;
extern PyObject *const_str_angle_genexpr;
extern PyObject *const_tuple_str_plain_ExpressionVariableRef_tuple;
extern PyObject *const_str_plain_template;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain_type_name;
extern PyObject *const_str_plain_makeComparisonNode;
static PyObject *const_str_digest_a3023a2adf68819e26ba0f7401136bb2;
extern PyObject *const_str_plain_builtin_name;
extern PyObject *const_str_plain_getParentVariableProvider;
static PyObject *const_str_digest_49dd35e5982e8228164b480e672dfd38;
static PyObject *const_str_digest_cf92b5f2edd6268415cc3736f8f1aa09;
extern PyObject *const_tuple_str_plain_warning_tuple;
extern PyObject *const_str_plain_node;
extern PyObject *const_str_plain_StatementRaiseExceptionImplicit;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_tuple_265410dee0aa81cd9374e5ac00a072ab_tuple;
extern PyObject *const_str_plain_StatementExpressionOnly;
extern PyObject *const_str_plain_ExpressionComparisonIsNOT;
extern PyObject *const_str_plain_makeStatementOnlyNodesFromExpressions;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_variable;
extern PyObject *const_str_plain_exception_name;
extern PyObject *const_str_plain_change_tags;
extern PyObject *const_str_plain_new_constant;
extern PyObject *const_str_plain_getComputationResult;
static PyObject *const_tuple_str_plain_StatementRaiseExceptionImplicit_tuple;
extern PyObject *const_tuple_str_plain_python_version_tuple;
extern PyObject *const_tuple_str_plain_ExpressionBuiltinType1_tuple;
extern PyObject *const_str_plain_e;
extern PyObject *const_str_plain_old_node;
static PyObject *const_tuple_4a0de550c51f3eaa9c2f1c5637defe7b_tuple;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_convertNoneConstantToNone;
extern PyObject *const_str_plain_ExpressionVariableRef;
extern PyObject *const_str_plain_computation;
extern PyObject *const_str_plain_append;
extern PyObject *const_tuple_str_plain_ExpressionTempVariableRef_tuple;
extern PyObject *const_str_plain_ExceptionNodes;
extern PyObject *const_str_plain_builtin_names;
extern PyObject *const_str_plain_extractSideEffects;
static PyObject *const_tuple_c7cae9c152d1ae1e91f3f170757bc3a6_tuple;
extern PyObject *const_str_plain_ExpressionAttributeLookup;
extern PyObject *const_str_digest_3a52c4fc9b18138e009003d39acb1965;
extern PyObject *const_str_plain_exception_cause;
extern PyObject *const_str_plain_makeExpressionBuiltinRef;
extern PyObject *const_str_plain_exception_type;
extern PyObject *const_str_plain_makeVariableRefNode;
extern PyObject *const_str_plain_user_provided;
extern PyObject *const_str_plain_False;
static PyObject *const_tuple_cc473333013d78b5f6e46d18d98703c8_tuple;
extern PyObject *const_str_plain_list;
extern PyObject *const_str_plain_exception_trace;
extern PyObject *const_tuple_str_plain_ExpressionBuiltinExceptionRef_tuple;
extern PyObject *const_str_plain_isExpressionConstantRef;
extern PyObject *const_str_plain_isExpressionOutlineFunction;
extern PyObject *const_str_plain_ExpressionBuiltinLocalsUpdated;
extern PyObject *const_str_plain_wrapStatementWithSideEffects;
extern PyObject *const_str_plain_makeConstantReplacementNode;
extern PyObject *const_str_plain_comparator;
extern PyObject *const_str_plain_getLocalsScope;
extern PyObject *const_int_0;
extern PyObject *const_str_digest_4422bb31cd24b6f73e6b2c7baace619f;
extern PyObject *const_str_plain_operation;
extern PyObject *const_str_plain_isExpression;
static PyObject *const_str_digest_746e1460ca3ddd70925cc0971462146f;
extern PyObject *const_str_plain_ExpressionComparison;
extern PyObject *const_str_plain_Mod;
static PyObject *const_tuple_str_plain_isConstant_tuple;
extern PyObject *const_str_plain_isStatementsFrame;
extern PyObject *const_str_plain_IsNot;
extern PyObject *const_str_digest_ff35a3d9a9df2d6bb05cd386089ddde2;
extern PyObject *const_str_plain_ConstantRefNodes;
extern PyObject *const_str_plain_ExpressionBuiltinGlobals;
extern PyObject *const_str_plain_Constants;
extern PyObject *const_str_digest_f5b3ac023638d74fd461c96d1d3e704a;
extern PyObject *const_str_plain_makeExpressionBuiltinLocals;
extern PyObject *const_tuple_str_plain_makeBinaryOperationNode_tuple;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_right;
static PyObject *const_tuple_90dfe5d3dee7175cd7f130c7d3bd1511_tuple;
extern PyObject *const_str_plain_statement;
extern PyObject *const_str_plain_warning;
extern PyObject *const_str_plain_makeStatementsSequenceReplacementNode;
extern PyObject *const_str_plain_isExpressionClassBody;
extern PyObject *const_tuple_str_plain_ExpressionAttributeLookup_tuple;
extern PyObject *const_str_plain_BuiltinRefNodes;
extern PyObject *const_str_plain_ExpressionComparisonIs;
extern PyObject *const_str_plain_type;
extern PyObject *const_tuple_str_plain_makeExpressionBuiltinRef_tuple;
extern PyObject *const_str_plain_NotIn;
extern PyObject *const_str_plain_isDebug;
extern PyObject *const_tuple_str_plain_node_tuple;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_new_node;
extern PyObject *const_str_plain_getConstant;
extern PyObject *const_tuple_str_plain_StatementsSequence_tuple;
extern PyObject *const_str_plain_expressions;
extern PyObject *const_str_plain_ExpressionBuiltinLocalsCopy;
static PyObject *const_tuple_e5b30a10c3624bc5a88005ed97c1715e_tuple;
extern PyObject *const_str_plain_source_ref;
extern PyObject *const_str_plain_expression;
extern PyObject *const_str_plain_source;
static PyObject *const_tuple_427c5d40140d147829525f5b751d02bd_tuple;
static PyObject *const_tuple_03f637ea39c2ef8e395e5f17f69a2d1a_tuple;
extern PyObject *const_str_plain_template_args;
extern PyObject *const_str_plain_mayHaveSideEffects;
extern PyObject *const_str_plain_change_desc;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_isConstant;
static PyObject *const_str_plain_makeCompileTimeConstantReplacementNode;
static PyObject *const_tuple_e1d16410f5f67d85915521f7ad21159b_tuple;
extern PyObject *const_tuple_str_plain_StatementExpressionOnly_tuple;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_plain_mergeStatements;
extern PyObject *const_str_plain_AttributeNodes;
extern PyObject *const_str_plain_left;
extern PyObject *const_str_plain_OperatorNodes;
extern PyObject *const_str_plain_getAsString;
extern PyObject *const_str_plain_ExpressionComparisonNOTIn;
extern PyObject *const_str_plain_PythonVersions;
extern PyObject *const_tuple_str_plain_ExpressionBuiltinGlobals_tuple;
extern PyObject *const_str_plain_attribute_name;
static PyObject *const_str_digest_48ac02d4dd12b5c1e4a18513fa76345f;
extern PyObject *const_str_plain_makeRaiseExceptionReplacementStatement;
extern PyObject *const_str_plain_getCompatibleSourceReference;
static PyObject *const_tuple_dd9a9b7c87b9d0d2fd143b48a03c4929_tuple;
extern PyObject *const_str_plain_isCompiledPythonModule;
static PyObject *const_tuple_str_plain_ExpressionSideEffects_tuple;
extern PyObject *const_str_plain_setCompatibleSourceReference;
extern PyObject *const_str_plain_operator;
extern PyObject *const_str_plain_isStatement;
extern PyObject *const_str_plain_provider;
extern PyObject *const_str_plain_wrapExpressionWithNodeSideEffects;
static PyObject *const_str_digest_5d9858be1151397135197c805f096988;
static PyObject *const_tuple_519ebe5ad4d49228b13e28936e3a3df3_tuple;
static PyObject *const_str_digest_856b5180625f07206fc220595787513f;
extern PyObject *const_str_plain_original_node;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_plain_constant;
extern PyObject *const_str_plain_TypeNodes;
extern PyObject *const_str_plain_python_version;
extern PyObject *const_tuple_str_plain_ExpressionRaiseException_tuple;
extern PyObject *const_str_plain_value_node;
extern PyObject *const_str_plain_getStatements;
extern PyObject *const_str_plain_makeBinaryOperationNode;
extern PyObject *const_str_plain_makeRaiseExceptionReplacementExpression;
static PyObject *const_str_digest_acbb0751f6daaa0be40f57d59b52c3bd;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_plain_new_node_str_plain_old_node_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_new_node_str_plain_old_node_tuple, 0, const_str_plain_new_node ); Py_INCREF( const_str_plain_new_node );
    PyTuple_SET_ITEM( const_tuple_str_plain_new_node_str_plain_old_node_tuple, 1, const_str_plain_old_node ); Py_INCREF( const_str_plain_old_node );
    const_tuple_81e83b24d22737af5701294feafb9f96_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_81e83b24d22737af5701294feafb9f96_tuple, 0, const_str_plain_expressions ); Py_INCREF( const_str_plain_expressions );
    PyTuple_SET_ITEM( const_tuple_81e83b24d22737af5701294feafb9f96_tuple, 1, const_str_plain_StatementExpressionOnly ); Py_INCREF( const_str_plain_StatementExpressionOnly );
    PyTuple_SET_ITEM( const_tuple_81e83b24d22737af5701294feafb9f96_tuple, 2, const_str_plain_StatementsSequence ); Py_INCREF( const_str_plain_StatementsSequence );
    PyTuple_SET_ITEM( const_tuple_81e83b24d22737af5701294feafb9f96_tuple, 3, const_str_plain_statements ); Py_INCREF( const_str_plain_statements );
    const_tuple_str_plain_isDebug_str_plain_shallWarnImplicitRaises_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_isDebug_str_plain_shallWarnImplicitRaises_tuple, 0, const_str_plain_isDebug ); Py_INCREF( const_str_plain_isDebug );
    PyTuple_SET_ITEM( const_tuple_str_plain_isDebug_str_plain_shallWarnImplicitRaises_tuple, 1, const_str_plain_shallWarnImplicitRaises ); Py_INCREF( const_str_plain_shallWarnImplicitRaises );
    const_tuple_a7f6b75b233338c160e2d143d48df81c_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_a7f6b75b233338c160e2d143d48df81c_tuple, 0, const_str_plain_side_effects ); Py_INCREF( const_str_plain_side_effects );
    PyTuple_SET_ITEM( const_tuple_a7f6b75b233338c160e2d143d48df81c_tuple, 1, const_str_plain_old_node ); Py_INCREF( const_str_plain_old_node );
    PyTuple_SET_ITEM( const_tuple_a7f6b75b233338c160e2d143d48df81c_tuple, 2, const_str_plain_new_node ); Py_INCREF( const_str_plain_new_node );
    PyTuple_SET_ITEM( const_tuple_a7f6b75b233338c160e2d143d48df81c_tuple, 3, const_str_plain_ExpressionSideEffects ); Py_INCREF( const_str_plain_ExpressionSideEffects );
    const_str_digest_14aebb8a9455c86923c7bfd3607a5f31 = UNSTREAM_STRING( &constant_bin[ 1191586 ], 443, 0 );
    const_str_plain_SideEffectNodes = UNSTREAM_STRING( &constant_bin[ 1192029 ], 15, 1 );
    const_tuple_2b232815ccc5b4520154fe508f1ecb8a_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_2b232815ccc5b4520154fe508f1ecb8a_tuple, 0, const_str_plain_template ); Py_INCREF( const_str_plain_template );
    PyTuple_SET_ITEM( const_tuple_2b232815ccc5b4520154fe508f1ecb8a_tuple, 1, const_str_plain_operation ); Py_INCREF( const_str_plain_operation );
    PyTuple_SET_ITEM( const_tuple_2b232815ccc5b4520154fe508f1ecb8a_tuple, 2, const_str_plain_original_node ); Py_INCREF( const_str_plain_original_node );
    PyTuple_SET_ITEM( const_tuple_2b232815ccc5b4520154fe508f1ecb8a_tuple, 3, const_str_plain_value_node ); Py_INCREF( const_str_plain_value_node );
    PyTuple_SET_ITEM( const_tuple_2b232815ccc5b4520154fe508f1ecb8a_tuple, 4, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_2b232815ccc5b4520154fe508f1ecb8a_tuple, 5, const_str_plain_type_name ); Py_INCREF( const_str_plain_type_name );
    PyTuple_SET_ITEM( const_tuple_2b232815ccc5b4520154fe508f1ecb8a_tuple, 6, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    PyTuple_SET_ITEM( const_tuple_2b232815ccc5b4520154fe508f1ecb8a_tuple, 7, const_str_plain_ExpressionAttributeLookup ); Py_INCREF( const_str_plain_ExpressionAttributeLookup );
    PyTuple_SET_ITEM( const_tuple_2b232815ccc5b4520154fe508f1ecb8a_tuple, 8, const_str_plain_ExpressionBuiltinType1 ); Py_INCREF( const_str_plain_ExpressionBuiltinType1 );
    PyTuple_SET_ITEM( const_tuple_2b232815ccc5b4520154fe508f1ecb8a_tuple, 9, const_str_plain_source_ref ); Py_INCREF( const_str_plain_source_ref );
    const_str_plain_ComparisonNodes = UNSTREAM_STRING( &constant_bin[ 1135322 ], 15, 1 );
    const_str_digest_aa7d718bdb633f9b7e0eb195c2933835 = UNSTREAM_STRING( &constant_bin[ 1192044 ], 108, 0 );
    const_tuple_8893820bc3fbb899dba7349fa04efb07_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_8893820bc3fbb899dba7349fa04efb07_tuple, 0, const_str_plain_statements ); Py_INCREF( const_str_plain_statements );
    PyTuple_SET_ITEM( const_tuple_8893820bc3fbb899dba7349fa04efb07_tuple, 1, const_str_plain_node ); Py_INCREF( const_str_plain_node );
    PyTuple_SET_ITEM( const_tuple_8893820bc3fbb899dba7349fa04efb07_tuple, 2, const_str_plain_StatementsSequence ); Py_INCREF( const_str_plain_StatementsSequence );
    const_tuple_b82ced9c479e59ea56e7d381ac95de0e_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_b82ced9c479e59ea56e7d381ac95de0e_tuple, 0, const_str_plain_ExpressionBuiltinLocalsCopy ); Py_INCREF( const_str_plain_ExpressionBuiltinLocalsCopy );
    PyTuple_SET_ITEM( const_tuple_b82ced9c479e59ea56e7d381ac95de0e_tuple, 1, const_str_plain_ExpressionBuiltinLocalsRef ); Py_INCREF( const_str_plain_ExpressionBuiltinLocalsRef );
    PyTuple_SET_ITEM( const_tuple_b82ced9c479e59ea56e7d381ac95de0e_tuple, 2, const_str_plain_ExpressionBuiltinLocalsUpdated ); Py_INCREF( const_str_plain_ExpressionBuiltinLocalsUpdated );
    const_str_plain_merged_statements = UNSTREAM_STRING( &constant_bin[ 1192152 ], 17, 1 );
    const_tuple_306a743a6403c5d924d773015f3f94f6_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_306a743a6403c5d924d773015f3f94f6_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_306a743a6403c5d924d773015f3f94f6_tuple, 1, const_str_plain_expression ); Py_INCREF( const_str_plain_expression );
    PyTuple_SET_ITEM( const_tuple_306a743a6403c5d924d773015f3f94f6_tuple, 2, const_str_plain_StatementExpressionOnly ); Py_INCREF( const_str_plain_StatementExpressionOnly );
    const_tuple_2a8c6699ce1225d987c1bbb6de529287_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_2a8c6699ce1225d987c1bbb6de529287_tuple, 0, const_str_plain_new_node ); Py_INCREF( const_str_plain_new_node );
    PyTuple_SET_ITEM( const_tuple_2a8c6699ce1225d987c1bbb6de529287_tuple, 1, const_str_plain_old_node ); Py_INCREF( const_str_plain_old_node );
    PyTuple_SET_ITEM( const_tuple_2a8c6699ce1225d987c1bbb6de529287_tuple, 2, const_str_plain_allow_none ); Py_INCREF( const_str_plain_allow_none );
    PyTuple_SET_ITEM( const_tuple_2a8c6699ce1225d987c1bbb6de529287_tuple, 3, const_str_plain_side_effects ); Py_INCREF( const_str_plain_side_effects );
    PyTuple_SET_ITEM( const_tuple_2a8c6699ce1225d987c1bbb6de529287_tuple, 4, const_str_plain_StatementExpressionOnly ); Py_INCREF( const_str_plain_StatementExpressionOnly );
    const_tuple_2b92b1670a341a84354e8558cd83ef79_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_2b92b1670a341a84354e8558cd83ef79_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_2b92b1670a341a84354e8558cd83ef79_tuple, 1, const_str_plain_side_effect ); Py_INCREF( const_str_plain_side_effect );
    const_tuple_9cfb2358ad02551ab3511732fc2b2c2e_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_9cfb2358ad02551ab3511732fc2b2c2e_tuple, 0, const_str_plain_left ); Py_INCREF( const_str_plain_left );
    PyTuple_SET_ITEM( const_tuple_9cfb2358ad02551ab3511732fc2b2c2e_tuple, 1, const_str_plain_right ); Py_INCREF( const_str_plain_right );
    PyTuple_SET_ITEM( const_tuple_9cfb2358ad02551ab3511732fc2b2c2e_tuple, 2, const_str_plain_comparator ); Py_INCREF( const_str_plain_comparator );
    PyTuple_SET_ITEM( const_tuple_9cfb2358ad02551ab3511732fc2b2c2e_tuple, 3, const_str_plain_source_ref ); Py_INCREF( const_str_plain_source_ref );
    PyTuple_SET_ITEM( const_tuple_9cfb2358ad02551ab3511732fc2b2c2e_tuple, 4, const_str_plain_ExpressionComparison ); Py_INCREF( const_str_plain_ExpressionComparison );
    PyTuple_SET_ITEM( const_tuple_9cfb2358ad02551ab3511732fc2b2c2e_tuple, 5, const_str_plain_ExpressionComparisonIs ); Py_INCREF( const_str_plain_ExpressionComparisonIs );
    PyTuple_SET_ITEM( const_tuple_9cfb2358ad02551ab3511732fc2b2c2e_tuple, 6, const_str_plain_ExpressionComparisonIsNOT ); Py_INCREF( const_str_plain_ExpressionComparisonIsNOT );
    PyTuple_SET_ITEM( const_tuple_9cfb2358ad02551ab3511732fc2b2c2e_tuple, 7, const_str_plain_ExpressionComparisonIn ); Py_INCREF( const_str_plain_ExpressionComparisonIn );
    PyTuple_SET_ITEM( const_tuple_9cfb2358ad02551ab3511732fc2b2c2e_tuple, 8, const_str_plain_ExpressionComparisonNOTIn ); Py_INCREF( const_str_plain_ExpressionComparisonNOTIn );
    PyTuple_SET_ITEM( const_tuple_9cfb2358ad02551ab3511732fc2b2c2e_tuple, 9, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_tuple_8780af1e9e717200b8c653b4eaf16030_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_8780af1e9e717200b8c653b4eaf16030_tuple, 0, const_str_plain_ExpressionComparison ); Py_INCREF( const_str_plain_ExpressionComparison );
    PyTuple_SET_ITEM( const_tuple_8780af1e9e717200b8c653b4eaf16030_tuple, 1, const_str_plain_ExpressionComparisonIs ); Py_INCREF( const_str_plain_ExpressionComparisonIs );
    PyTuple_SET_ITEM( const_tuple_8780af1e9e717200b8c653b4eaf16030_tuple, 2, const_str_plain_ExpressionComparisonIsNOT ); Py_INCREF( const_str_plain_ExpressionComparisonIsNOT );
    PyTuple_SET_ITEM( const_tuple_8780af1e9e717200b8c653b4eaf16030_tuple, 3, const_str_plain_ExpressionComparisonIn ); Py_INCREF( const_str_plain_ExpressionComparisonIn );
    PyTuple_SET_ITEM( const_tuple_8780af1e9e717200b8c653b4eaf16030_tuple, 4, const_str_plain_ExpressionComparisonNOTIn ); Py_INCREF( const_str_plain_ExpressionComparisonNOTIn );
    const_str_digest_9060f3a41e8a1211d9a62328541c9086 = UNSTREAM_STRING( &constant_bin[ 1192169 ], 33, 0 );
    const_tuple_9e0795cf3e9b7579336666af2c4d8817_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_9e0795cf3e9b7579336666af2c4d8817_tuple, 0, const_str_plain_variable ); Py_INCREF( const_str_plain_variable );
    PyTuple_SET_ITEM( const_tuple_9e0795cf3e9b7579336666af2c4d8817_tuple, 1, const_str_plain_source_ref ); Py_INCREF( const_str_plain_source_ref );
    PyTuple_SET_ITEM( const_tuple_9e0795cf3e9b7579336666af2c4d8817_tuple, 2, const_str_plain_ExpressionTempVariableRef ); Py_INCREF( const_str_plain_ExpressionTempVariableRef );
    PyTuple_SET_ITEM( const_tuple_9e0795cf3e9b7579336666af2c4d8817_tuple, 3, const_str_plain_ExpressionVariableRef ); Py_INCREF( const_str_plain_ExpressionVariableRef );
    const_str_digest_36951842fb24f37a99d053260736977e = UNSTREAM_STRING( &constant_bin[ 1192202 ], 56, 0 );
    const_str_plain_GlobalsLocalsNodes = UNSTREAM_STRING( &constant_bin[ 1171343 ], 18, 1 );
    const_tuple_86662504c992576900181477de7ac050_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_86662504c992576900181477de7ac050_tuple, 0, const_str_plain_provider ); Py_INCREF( const_str_plain_provider );
    PyTuple_SET_ITEM( const_tuple_86662504c992576900181477de7ac050_tuple, 1, const_str_plain_source_ref ); Py_INCREF( const_str_plain_source_ref );
    PyTuple_SET_ITEM( const_tuple_86662504c992576900181477de7ac050_tuple, 2, const_str_plain_ExpressionBuiltinGlobals ); Py_INCREF( const_str_plain_ExpressionBuiltinGlobals );
    PyTuple_SET_ITEM( const_tuple_86662504c992576900181477de7ac050_tuple, 3, const_str_plain_ExpressionBuiltinLocalsCopy ); Py_INCREF( const_str_plain_ExpressionBuiltinLocalsCopy );
    PyTuple_SET_ITEM( const_tuple_86662504c992576900181477de7ac050_tuple, 4, const_str_plain_ExpressionBuiltinLocalsRef ); Py_INCREF( const_str_plain_ExpressionBuiltinLocalsRef );
    PyTuple_SET_ITEM( const_tuple_86662504c992576900181477de7ac050_tuple, 5, const_str_plain_ExpressionBuiltinLocalsUpdated ); Py_INCREF( const_str_plain_ExpressionBuiltinLocalsUpdated );
    const_str_digest_a3023a2adf68819e26ba0f7401136bb2 = UNSTREAM_STRING( &constant_bin[ 1192258 ], 41, 0 );
    const_str_digest_49dd35e5982e8228164b480e672dfd38 = UNSTREAM_STRING( &constant_bin[ 1192299 ], 100, 0 );
    const_str_digest_cf92b5f2edd6268415cc3736f8f1aa09 = UNSTREAM_STRING( &constant_bin[ 1192399 ], 35, 0 );
    const_tuple_str_plain_StatementRaiseExceptionImplicit_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_StatementRaiseExceptionImplicit_tuple, 0, const_str_plain_StatementRaiseExceptionImplicit ); Py_INCREF( const_str_plain_StatementRaiseExceptionImplicit );
    const_tuple_4a0de550c51f3eaa9c2f1c5637defe7b_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_4a0de550c51f3eaa9c2f1c5637defe7b_tuple, 0, const_str_plain_statement ); Py_INCREF( const_str_plain_statement );
    PyTuple_SET_ITEM( const_tuple_4a0de550c51f3eaa9c2f1c5637defe7b_tuple, 1, const_str_plain_exception_type ); Py_INCREF( const_str_plain_exception_type );
    PyTuple_SET_ITEM( const_tuple_4a0de550c51f3eaa9c2f1c5637defe7b_tuple, 2, const_str_plain_exception_value ); Py_INCREF( const_str_plain_exception_value );
    PyTuple_SET_ITEM( const_tuple_4a0de550c51f3eaa9c2f1c5637defe7b_tuple, 3, const_str_plain_StatementRaiseExceptionImplicit ); Py_INCREF( const_str_plain_StatementRaiseExceptionImplicit );
    PyTuple_SET_ITEM( const_tuple_4a0de550c51f3eaa9c2f1c5637defe7b_tuple, 4, const_str_plain_ExpressionBuiltinExceptionRef ); Py_INCREF( const_str_plain_ExpressionBuiltinExceptionRef );
    PyTuple_SET_ITEM( const_tuple_4a0de550c51f3eaa9c2f1c5637defe7b_tuple, 5, const_str_plain_source_ref ); Py_INCREF( const_str_plain_source_ref );
    PyTuple_SET_ITEM( const_tuple_4a0de550c51f3eaa9c2f1c5637defe7b_tuple, 6, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_tuple_c7cae9c152d1ae1e91f3f170757bc3a6_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_c7cae9c152d1ae1e91f3f170757bc3a6_tuple, 0, const_str_plain_statements ); Py_INCREF( const_str_plain_statements );
    PyTuple_SET_ITEM( const_tuple_c7cae9c152d1ae1e91f3f170757bc3a6_tuple, 1, const_str_plain_allow_none ); Py_INCREF( const_str_plain_allow_none );
    PyTuple_SET_ITEM( const_tuple_c7cae9c152d1ae1e91f3f170757bc3a6_tuple, 2, const_str_plain_merged_statements ); Py_INCREF( const_str_plain_merged_statements );
    PyTuple_SET_ITEM( const_tuple_c7cae9c152d1ae1e91f3f170757bc3a6_tuple, 3, const_str_plain_statement ); Py_INCREF( const_str_plain_statement );
    const_tuple_cc473333013d78b5f6e46d18d98703c8_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_cc473333013d78b5f6e46d18d98703c8_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_cc473333013d78b5f6e46d18d98703c8_tuple, 1, const_str_plain_side_effect ); Py_INCREF( const_str_plain_side_effect );
    PyTuple_SET_ITEM( const_tuple_cc473333013d78b5f6e46d18d98703c8_tuple, 2, const_str_plain_StatementExpressionOnly ); Py_INCREF( const_str_plain_StatementExpressionOnly );
    const_str_digest_746e1460ca3ddd70925cc0971462146f = UNSTREAM_STRING( &constant_bin[ 1192434 ], 48, 0 );
    const_tuple_str_plain_isConstant_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_isConstant_tuple, 0, const_str_plain_isConstant ); Py_INCREF( const_str_plain_isConstant );
    const_tuple_90dfe5d3dee7175cd7f130c7d3bd1511_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_90dfe5d3dee7175cd7f130c7d3bd1511_tuple, 0, const_str_plain_expression ); Py_INCREF( const_str_plain_expression );
    PyTuple_SET_ITEM( const_tuple_90dfe5d3dee7175cd7f130c7d3bd1511_tuple, 1, const_str_plain_node ); Py_INCREF( const_str_plain_node );
    PyTuple_SET_ITEM( const_tuple_90dfe5d3dee7175cd7f130c7d3bd1511_tuple, 2, const_str_plain_StatementExpressionOnly ); Py_INCREF( const_str_plain_StatementExpressionOnly );
    const_tuple_e5b30a10c3624bc5a88005ed97c1715e_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_e5b30a10c3624bc5a88005ed97c1715e_tuple, 0, const_str_plain_node ); Py_INCREF( const_str_plain_node );
    PyTuple_SET_ITEM( const_tuple_e5b30a10c3624bc5a88005ed97c1715e_tuple, 1, const_str_plain_computation ); Py_INCREF( const_str_plain_computation );
    PyTuple_SET_ITEM( const_tuple_e5b30a10c3624bc5a88005ed97c1715e_tuple, 2, const_str_plain_description ); Py_INCREF( const_str_plain_description );
    PyTuple_SET_ITEM( const_tuple_e5b30a10c3624bc5a88005ed97c1715e_tuple, 3, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    PyTuple_SET_ITEM( const_tuple_e5b30a10c3624bc5a88005ed97c1715e_tuple, 4, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    PyTuple_SET_ITEM( const_tuple_e5b30a10c3624bc5a88005ed97c1715e_tuple, 5, const_str_plain_new_node ); Py_INCREF( const_str_plain_new_node );
    PyTuple_SET_ITEM( const_tuple_e5b30a10c3624bc5a88005ed97c1715e_tuple, 6, const_str_plain_change_tags ); Py_INCREF( const_str_plain_change_tags );
    PyTuple_SET_ITEM( const_tuple_e5b30a10c3624bc5a88005ed97c1715e_tuple, 7, const_str_plain_change_desc ); Py_INCREF( const_str_plain_change_desc );
    const_tuple_427c5d40140d147829525f5b751d02bd_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_427c5d40140d147829525f5b751d02bd_tuple, 0, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    PyTuple_SET_ITEM( const_tuple_427c5d40140d147829525f5b751d02bd_tuple, 1, const_str_plain_node ); Py_INCREF( const_str_plain_node );
    PyTuple_SET_ITEM( const_tuple_427c5d40140d147829525f5b751d02bd_tuple, 2, const_str_plain_makeExpressionBuiltinRef ); Py_INCREF( const_str_plain_makeExpressionBuiltinRef );
    const_tuple_03f637ea39c2ef8e395e5f17f69a2d1a_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_03f637ea39c2ef8e395e5f17f69a2d1a_tuple, 0, const_str_plain_expression ); Py_INCREF( const_str_plain_expression );
    PyTuple_SET_ITEM( const_tuple_03f637ea39c2ef8e395e5f17f69a2d1a_tuple, 1, const_str_plain_exception_type ); Py_INCREF( const_str_plain_exception_type );
    PyTuple_SET_ITEM( const_tuple_03f637ea39c2ef8e395e5f17f69a2d1a_tuple, 2, const_str_plain_exception_value ); Py_INCREF( const_str_plain_exception_value );
    PyTuple_SET_ITEM( const_tuple_03f637ea39c2ef8e395e5f17f69a2d1a_tuple, 3, const_str_plain_ExpressionRaiseException ); Py_INCREF( const_str_plain_ExpressionRaiseException );
    PyTuple_SET_ITEM( const_tuple_03f637ea39c2ef8e395e5f17f69a2d1a_tuple, 4, const_str_plain_ExpressionBuiltinExceptionRef ); Py_INCREF( const_str_plain_ExpressionBuiltinExceptionRef );
    PyTuple_SET_ITEM( const_tuple_03f637ea39c2ef8e395e5f17f69a2d1a_tuple, 5, const_str_plain_source_ref ); Py_INCREF( const_str_plain_source_ref );
    PyTuple_SET_ITEM( const_tuple_03f637ea39c2ef8e395e5f17f69a2d1a_tuple, 6, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_str_plain_makeCompileTimeConstantReplacementNode = UNSTREAM_STRING( &constant_bin[ 1192482 ], 38, 1 );
    const_tuple_e1d16410f5f67d85915521f7ad21159b_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_e1d16410f5f67d85915521f7ad21159b_tuple, 0, const_str_plain_exception_type ); Py_INCREF( const_str_plain_exception_type );
    PyTuple_SET_ITEM( const_tuple_e1d16410f5f67d85915521f7ad21159b_tuple, 1, const_str_plain_template ); Py_INCREF( const_str_plain_template );
    PyTuple_SET_ITEM( const_tuple_e1d16410f5f67d85915521f7ad21159b_tuple, 2, const_str_plain_template_args ); Py_INCREF( const_str_plain_template_args );
    PyTuple_SET_ITEM( const_tuple_e1d16410f5f67d85915521f7ad21159b_tuple, 3, const_str_plain_source_ref ); Py_INCREF( const_str_plain_source_ref );
    PyTuple_SET_ITEM( const_tuple_e1d16410f5f67d85915521f7ad21159b_tuple, 4, const_str_plain_ExpressionRaiseException ); Py_INCREF( const_str_plain_ExpressionRaiseException );
    PyTuple_SET_ITEM( const_tuple_e1d16410f5f67d85915521f7ad21159b_tuple, 5, const_str_plain_ExpressionBuiltinExceptionRef ); Py_INCREF( const_str_plain_ExpressionBuiltinExceptionRef );
    PyTuple_SET_ITEM( const_tuple_e1d16410f5f67d85915521f7ad21159b_tuple, 6, const_str_plain_makeBinaryOperationNode ); Py_INCREF( const_str_plain_makeBinaryOperationNode );
    PyTuple_SET_ITEM( const_tuple_e1d16410f5f67d85915521f7ad21159b_tuple, 7, const_str_plain_makeConstantRefNode ); Py_INCREF( const_str_plain_makeConstantRefNode );
    const_str_digest_48ac02d4dd12b5c1e4a18513fa76345f = UNSTREAM_STRING( &constant_bin[ 1192520 ], 57, 0 );
    const_tuple_dd9a9b7c87b9d0d2fd143b48a03c4929_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_dd9a9b7c87b9d0d2fd143b48a03c4929_tuple, 0, const_str_plain_constant ); Py_INCREF( const_str_plain_constant );
    PyTuple_SET_ITEM( const_tuple_dd9a9b7c87b9d0d2fd143b48a03c4929_tuple, 1, const_str_plain_node ); Py_INCREF( const_str_plain_node );
    PyTuple_SET_ITEM( const_tuple_dd9a9b7c87b9d0d2fd143b48a03c4929_tuple, 2, const_str_plain_makeConstantRefNode ); Py_INCREF( const_str_plain_makeConstantRefNode );
    const_tuple_str_plain_ExpressionSideEffects_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ExpressionSideEffects_tuple, 0, const_str_plain_ExpressionSideEffects ); Py_INCREF( const_str_plain_ExpressionSideEffects );
    const_str_digest_5d9858be1151397135197c805f096988 = UNSTREAM_STRING( &constant_bin[ 1192577 ], 27, 0 );
    const_tuple_519ebe5ad4d49228b13e28936e3a3df3_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_519ebe5ad4d49228b13e28936e3a3df3_tuple, 0, const_str_plain_expression ); Py_INCREF( const_str_plain_expression );
    PyTuple_SET_ITEM( const_tuple_519ebe5ad4d49228b13e28936e3a3df3_tuple, 1, const_str_plain_exception ); Py_INCREF( const_str_plain_exception );
    PyTuple_SET_ITEM( const_tuple_519ebe5ad4d49228b13e28936e3a3df3_tuple, 2, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_519ebe5ad4d49228b13e28936e3a3df3_tuple, 3, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_str_digest_856b5180625f07206fc220595787513f = UNSTREAM_STRING( &constant_bin[ 1192604 ], 32, 0 );
    const_str_digest_acbb0751f6daaa0be40f57d59b52c3bd = UNSTREAM_STRING( &constant_bin[ 1192636 ], 47, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_nodes$NodeMakingHelpers( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_6017e5188c1404b342fc826496e4ae62;
static PyCodeObject *codeobj_150260cf87db8bb0c2f2d3606d56702c;
static PyCodeObject *codeobj_1310a9a89f984f20cc7cfe7142a289bb;
static PyCodeObject *codeobj_921e28342533fd169552b13d8b4619fc;
static PyCodeObject *codeobj_d217641363bd8668603e527eff029e4d;
static PyCodeObject *codeobj_19b09fc9ebb7942025bb50069d41a655;
static PyCodeObject *codeobj_6d069620a893aec0b2b7b0e20f82ae47;
static PyCodeObject *codeobj_53119eb1860a31b016ce94017b0a1f99;
static PyCodeObject *codeobj_fef5bddd12b1fe87da015f695a3bbc7e;
static PyCodeObject *codeobj_815ab1924daf9bb0433feae51de60700;
static PyCodeObject *codeobj_224b190f711f291edfc7bbf77c371cba;
static PyCodeObject *codeobj_e39bf304824d3414e3eb962e72a348a3;
static PyCodeObject *codeobj_76b9de0b378500c54a263460fa8df3d1;
static PyCodeObject *codeobj_e697048b1bcb779cd6c68f7f5f0d3265;
static PyCodeObject *codeobj_8228492f9a24518be405329eeb9b12f1;
static PyCodeObject *codeobj_7404e7fe02d3712179083a31bab9019f;
static PyCodeObject *codeobj_4cc7287bc9b7ce163b4f6ed91c4f780c;
static PyCodeObject *codeobj_a333810d9b2d3037702e9d1db4fde0e2;
static PyCodeObject *codeobj_a382ae84ee1fff728bb1fe1f4b76a929;
static PyCodeObject *codeobj_bc3068dc32c0e8a95fe74aa573eaa0e2;
static PyCodeObject *codeobj_eedadd114a75b5b9f703bcac0e7a5f32;
static PyCodeObject *codeobj_b5ff6d285d1d8171d051b3e9c06bdacd;
static PyCodeObject *codeobj_161350aa224d6e2f035ff3af003347df;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_aa7d718bdb633f9b7e0eb195c2933835;
    codeobj_6017e5188c1404b342fc826496e4ae62 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 313, const_tuple_2b92b1670a341a84354e8558cd83ef79_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_150260cf87db8bb0c2f2d3606d56702c = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 346, const_tuple_cc473333013d78b5f6e46d18d98703c8_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_1310a9a89f984f20cc7cfe7142a289bb = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 370, const_tuple_306a743a6403c5d924d773015f3f94f6_tuple, 1, 0, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_921e28342533fd169552b13d8b4619fc = MAKE_CODEOBJ( module_filename_obj, const_str_digest_856b5180625f07206fc220595787513f, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_d217641363bd8668603e527eff029e4d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_convertNoneConstantToNone, 296, const_tuple_str_plain_node_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_19b09fc9ebb7942025bb50069d41a655 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getComputationResult, 223, const_tuple_e5b30a10c3624bc5a88005ed97c1715e_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6d069620a893aec0b2b7b0e20f82ae47 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_makeComparisonNode, 388, const_tuple_9cfb2358ad02551ab3511732fc2b2c2e_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_53119eb1860a31b016ce94017b0a1f99 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_makeCompileTimeConstantReplacementNode, 202, const_tuple_427c5d40140d147829525f5b751d02bd_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fef5bddd12b1fe87da015f695a3bbc7e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_makeConstantReplacementNode, 37, const_tuple_dd9a9b7c87b9d0d2fd143b48a03c4929_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_815ab1924daf9bb0433feae51de60700 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_makeExpressionBuiltinLocals, 453, const_tuple_86662504c992576900181477de7ac050_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_224b190f711f291edfc7bbf77c371cba = MAKE_CODEOBJ( module_filename_obj, const_str_plain_makeRaiseExceptionExpressionFromTemplate, 129, const_tuple_e1d16410f5f67d85915521f7ad21159b_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e39bf304824d3414e3eb962e72a348a3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_makeRaiseExceptionReplacementExpression, 46, const_tuple_03f637ea39c2ef8e395e5f17f69a2d1a_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_76b9de0b378500c54a263460fa8df3d1 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_f5b3ac023638d74fd461c96d1d3e704a, 112, const_tuple_519ebe5ad4d49228b13e28936e3a3df3_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e697048b1bcb779cd6c68f7f5f0d3265 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_makeRaiseExceptionReplacementStatement, 78, const_tuple_4a0de550c51f3eaa9c2f1c5637defe7b_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8228492f9a24518be405329eeb9b12f1 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_4422bb31cd24b6f73e6b2c7baace619f, 154, const_tuple_2b232815ccc5b4520154fe508f1ecb8a_tuple, 4, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_7404e7fe02d3712179083a31bab9019f = MAKE_CODEOBJ( module_filename_obj, const_str_digest_ff35a3d9a9df2d6bb05cd386089ddde2, 259, const_tuple_90dfe5d3dee7175cd7f130c7d3bd1511_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4cc7287bc9b7ce163b4f6ed91c4f780c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_makeStatementOnlyNodesFromExpressions, 366, const_tuple_81e83b24d22737af5701294feafb9f96_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a333810d9b2d3037702e9d1db4fde0e2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_makeStatementsSequenceReplacementNode, 287, const_tuple_8893820bc3fbb899dba7349fa04efb07_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a382ae84ee1fff728bb1fe1f4b76a929 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_makeVariableRefNode, 436, const_tuple_9e0795cf3e9b7579336666af2c4d8817_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_bc3068dc32c0e8a95fe74aa573eaa0e2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_mergeStatements, 268, const_tuple_c7cae9c152d1ae1e91f3f170757bc3a6_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_eedadd114a75b5b9f703bcac0e7a5f32 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wrapExpressionWithNodeSideEffects, 330, const_tuple_str_plain_new_node_str_plain_old_node_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b5ff6d285d1d8171d051b3e9c06bdacd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wrapExpressionWithSideEffects, 305, const_tuple_a7f6b75b233338c160e2d143d48df81c_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_161350aa224d6e2f035ff3af003347df = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wrapStatementWithSideEffects, 337, const_tuple_2a8c6699ce1225d987c1bbb6de529287_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *nodes$NodeMakingHelpers$$$function_13_wrapExpressionWithSideEffects$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void nodes$NodeMakingHelpers$$$function_13_wrapExpressionWithSideEffects$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator );
#endif


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *nodes$NodeMakingHelpers$$$function_15_wrapStatementWithSideEffects$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void nodes$NodeMakingHelpers$$$function_15_wrapStatementWithSideEffects$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator );
#endif


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *nodes$NodeMakingHelpers$$$function_16_makeStatementOnlyNodesFromExpressions$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value );
#else
static void nodes$NodeMakingHelpers$$$function_16_makeStatementOnlyNodesFromExpressions$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator );
#endif


static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_10_mergeStatements( PyObject *defaults );


static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_11_makeStatementsSequenceReplacementNode(  );


static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_12_convertNoneConstantToNone(  );


static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_13_wrapExpressionWithSideEffects(  );


static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_14_wrapExpressionWithNodeSideEffects(  );


static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_15_wrapStatementWithSideEffects( PyObject *defaults );


static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_16_makeStatementOnlyNodesFromExpressions(  );


static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_17_makeComparisonNode(  );


static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_18_makeVariableRefNode(  );


static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_19_makeExpressionBuiltinLocals(  );


static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_1_makeConstantReplacementNode(  );


static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_2_makeRaiseExceptionReplacementExpression(  );


static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_3_makeRaiseExceptionReplacementStatement(  );


static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_4_makeRaiseExceptionReplacementExpressionFromInstance(  );


static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_5_makeRaiseExceptionExpressionFromTemplate(  );


static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_6_makeRaiseTypeErrorExceptionReplacementFromTemplateAndValue(  );


static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_7_makeCompileTimeConstantReplacementNode(  );


static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_8_getComputationResult(  );


static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_9_makeStatementExpressionOnlyReplacementNode(  );


// The module function definitions.
static PyObject *impl_nodes$NodeMakingHelpers$$$function_1_makeConstantReplacementNode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_constant = python_pars[ 0 ];
    PyObject *par_node = python_pars[ 1 ];
    PyObject *var_makeConstantRefNode = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_fef5bddd12b1fe87da015f695a3bbc7e = NULL;

    struct Nuitka_FrameObject *frame_fef5bddd12b1fe87da015f695a3bbc7e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fef5bddd12b1fe87da015f695a3bbc7e, codeobj_fef5bddd12b1fe87da015f695a3bbc7e, module_nodes$NodeMakingHelpers, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fef5bddd12b1fe87da015f695a3bbc7e = cache_frame_fef5bddd12b1fe87da015f695a3bbc7e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fef5bddd12b1fe87da015f695a3bbc7e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fef5bddd12b1fe87da015f695a3bbc7e ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_plain_ConstantRefNodes;
    tmp_globals_name_1 = (PyObject *)moduledict_nodes$NodeMakingHelpers;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_makeConstantRefNode_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_fef5bddd12b1fe87da015f695a3bbc7e->m_frame.f_lineno = 38;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_makeConstantRefNode,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_makeConstantRefNode );
    }

    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_makeConstantRefNode == NULL );
    var_makeConstantRefNode = tmp_assign_source_1;

    tmp_called_name_1 = var_makeConstantRefNode;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_dict_key_1 = const_str_plain_constant;
    tmp_dict_value_1 = par_constant;

    if ( tmp_dict_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "constant" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 41;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_source_ref;
    tmp_called_instance_1 = par_node;

    if ( tmp_called_instance_1 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_fef5bddd12b1fe87da015f695a3bbc7e->m_frame.f_lineno = 42;
    tmp_dict_value_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getSourceReference );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 42;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_fef5bddd12b1fe87da015f695a3bbc7e->m_frame.f_lineno = 40;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fef5bddd12b1fe87da015f695a3bbc7e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fef5bddd12b1fe87da015f695a3bbc7e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fef5bddd12b1fe87da015f695a3bbc7e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fef5bddd12b1fe87da015f695a3bbc7e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fef5bddd12b1fe87da015f695a3bbc7e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fef5bddd12b1fe87da015f695a3bbc7e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fef5bddd12b1fe87da015f695a3bbc7e,
        type_description_1,
        par_constant,
        par_node,
        var_makeConstantRefNode
    );


    // Release cached frame.
    if ( frame_fef5bddd12b1fe87da015f695a3bbc7e == cache_frame_fef5bddd12b1fe87da015f695a3bbc7e )
    {
        Py_DECREF( frame_fef5bddd12b1fe87da015f695a3bbc7e );
    }
    cache_frame_fef5bddd12b1fe87da015f695a3bbc7e = NULL;

    assertFrameObject( frame_fef5bddd12b1fe87da015f695a3bbc7e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_1_makeConstantReplacementNode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_constant );
    par_constant = NULL;

    Py_XDECREF( par_node );
    par_node = NULL;

    Py_XDECREF( var_makeConstantRefNode );
    var_makeConstantRefNode = NULL;

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

    Py_XDECREF( par_constant );
    par_constant = NULL;

    Py_XDECREF( par_node );
    par_node = NULL;

    Py_XDECREF( var_makeConstantRefNode );
    var_makeConstantRefNode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_1_makeConstantReplacementNode );
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


static PyObject *impl_nodes$NodeMakingHelpers$$$function_2_makeRaiseExceptionReplacementExpression( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_expression = python_pars[ 0 ];
    PyObject *par_exception_type = python_pars[ 1 ];
    PyObject *par_exception_value = python_pars[ 2 ];
    PyObject *var_ExpressionRaiseException = NULL;
    PyObject *var_ExpressionBuiltinExceptionRef = NULL;
    PyObject *var_source_ref = NULL;
    PyObject *var_result = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    bool tmp_isnot_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_type_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e39bf304824d3414e3eb962e72a348a3 = NULL;

    struct Nuitka_FrameObject *frame_e39bf304824d3414e3eb962e72a348a3;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e39bf304824d3414e3eb962e72a348a3, codeobj_e39bf304824d3414e3eb962e72a348a3, module_nodes$NodeMakingHelpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e39bf304824d3414e3eb962e72a348a3 = cache_frame_e39bf304824d3414e3eb962e72a348a3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e39bf304824d3414e3eb962e72a348a3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e39bf304824d3414e3eb962e72a348a3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_plain_ExceptionNodes;
    tmp_globals_name_1 = (PyObject *)moduledict_nodes$NodeMakingHelpers;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_ExpressionRaiseException_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_e39bf304824d3414e3eb962e72a348a3->m_frame.f_lineno = 48;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_ExpressionRaiseException,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_ExpressionRaiseException );
    }

    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ExpressionRaiseException == NULL );
    var_ExpressionRaiseException = tmp_assign_source_1;

    tmp_name_name_2 = const_str_plain_BuiltinRefNodes;
    tmp_globals_name_2 = (PyObject *)moduledict_nodes$NodeMakingHelpers;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_ExpressionBuiltinExceptionRef_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_e39bf304824d3414e3eb962e72a348a3->m_frame.f_lineno = 49;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_2 ) )
    {
       tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_2,
            (PyObject *)MODULE_DICT(tmp_import_name_from_2),
            const_str_plain_ExpressionBuiltinExceptionRef,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_ExpressionBuiltinExceptionRef );
    }

    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ExpressionBuiltinExceptionRef == NULL );
    var_ExpressionBuiltinExceptionRef = tmp_assign_source_2;

    tmp_called_instance_1 = par_expression;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "expression" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 51;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_e39bf304824d3414e3eb962e72a348a3->m_frame.f_lineno = 51;
    tmp_assign_source_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getSourceReference );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_source_ref == NULL );
    var_source_ref = tmp_assign_source_3;

    tmp_type_arg_1 = par_exception_type;

    if ( tmp_type_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "exception_type" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = (PyObject *)&PyUnicode_Type;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_raise_type_1 = PyExc_AssertionError;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 53;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_shallWarnImplicitRaises );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_shallWarnImplicitRaises );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "shallWarnImplicitRaises" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 55;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_e39bf304824d3414e3eb962e72a348a3->m_frame.f_lineno = 55;
    tmp_cond_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 55;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_warning );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warning );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_digest_a3023a2adf68819e26ba0f7401136bb2;
    tmp_called_instance_2 = var_source_ref;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source_ref" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 58;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_e39bf304824d3414e3eb962e72a348a3->m_frame.f_lineno = 58;
    tmp_args_element_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_getAsString );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_exception_type;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "exception_type" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 59;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_exception_value;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "exception_value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_e39bf304824d3414e3eb962e72a348a3->m_frame.f_lineno = 56;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_called_name_3 = var_ExpressionRaiseException;

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ExpressionRaiseException" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 63;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_exception_type;
    tmp_called_name_4 = var_ExpressionBuiltinExceptionRef;

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ExpressionBuiltinExceptionRef" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain_exception_name;
    tmp_dict_value_2 = par_exception_type;

    if ( tmp_dict_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "exception_type" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 65;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_2 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_source_ref;
    tmp_dict_value_3 = var_source_ref;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source_ref" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 66;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_e39bf304824d3414e3eb962e72a348a3->m_frame.f_lineno = 64;
    tmp_dict_value_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_exception_value;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_makeConstantReplacementNode );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_makeConstantReplacementNode );
    }

    if ( tmp_called_name_5 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "makeConstantReplacementNode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_5 = const_str_plain_constant;
    tmp_dict_value_5 = par_exception_value;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "exception_value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 69;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_3 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain_node;
    tmp_dict_value_6 = par_expression;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "expression" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 70;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    frame_e39bf304824d3414e3eb962e72a348a3->m_frame.f_lineno = 68;
    tmp_dict_value_4 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_5, tmp_kw_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 68;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_7 = const_str_plain_source_ref;
    tmp_dict_value_7 = var_source_ref;

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source_ref" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    frame_e39bf304824d3414e3eb962e72a348a3->m_frame.f_lineno = 63;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_result == NULL );
    var_result = tmp_assign_source_4;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_e39bf304824d3414e3eb962e72a348a3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e39bf304824d3414e3eb962e72a348a3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e39bf304824d3414e3eb962e72a348a3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e39bf304824d3414e3eb962e72a348a3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e39bf304824d3414e3eb962e72a348a3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e39bf304824d3414e3eb962e72a348a3,
        type_description_1,
        par_expression,
        par_exception_type,
        par_exception_value,
        var_ExpressionRaiseException,
        var_ExpressionBuiltinExceptionRef,
        var_source_ref,
        var_result
    );


    // Release cached frame.
    if ( frame_e39bf304824d3414e3eb962e72a348a3 == cache_frame_e39bf304824d3414e3eb962e72a348a3 )
    {
        Py_DECREF( frame_e39bf304824d3414e3eb962e72a348a3 );
    }
    cache_frame_e39bf304824d3414e3eb962e72a348a3 = NULL;

    assertFrameObject( frame_e39bf304824d3414e3eb962e72a348a3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_result;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_2_makeRaiseExceptionReplacementExpression );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_expression );
    par_expression = NULL;

    Py_XDECREF( par_exception_type );
    par_exception_type = NULL;

    Py_XDECREF( par_exception_value );
    par_exception_value = NULL;

    Py_XDECREF( var_ExpressionRaiseException );
    var_ExpressionRaiseException = NULL;

    Py_XDECREF( var_ExpressionBuiltinExceptionRef );
    var_ExpressionBuiltinExceptionRef = NULL;

    Py_XDECREF( var_source_ref );
    var_source_ref = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

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

    Py_XDECREF( par_expression );
    par_expression = NULL;

    Py_XDECREF( par_exception_type );
    par_exception_type = NULL;

    Py_XDECREF( par_exception_value );
    par_exception_value = NULL;

    Py_XDECREF( var_ExpressionRaiseException );
    var_ExpressionRaiseException = NULL;

    Py_XDECREF( var_ExpressionBuiltinExceptionRef );
    var_ExpressionBuiltinExceptionRef = NULL;

    Py_XDECREF( var_source_ref );
    var_source_ref = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_2_makeRaiseExceptionReplacementExpression );
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


static PyObject *impl_nodes$NodeMakingHelpers$$$function_3_makeRaiseExceptionReplacementStatement( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_statement = python_pars[ 0 ];
    PyObject *par_exception_type = python_pars[ 1 ];
    PyObject *par_exception_value = python_pars[ 2 ];
    PyObject *var_StatementRaiseExceptionImplicit = NULL;
    PyObject *var_ExpressionBuiltinExceptionRef = NULL;
    PyObject *var_source_ref = NULL;
    PyObject *var_result = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    bool tmp_isnot_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_type_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_e697048b1bcb779cd6c68f7f5f0d3265 = NULL;

    struct Nuitka_FrameObject *frame_e697048b1bcb779cd6c68f7f5f0d3265;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e697048b1bcb779cd6c68f7f5f0d3265, codeobj_e697048b1bcb779cd6c68f7f5f0d3265, module_nodes$NodeMakingHelpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e697048b1bcb779cd6c68f7f5f0d3265 = cache_frame_e697048b1bcb779cd6c68f7f5f0d3265;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e697048b1bcb779cd6c68f7f5f0d3265 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e697048b1bcb779cd6c68f7f5f0d3265 ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_plain_ExceptionNodes;
    tmp_globals_name_1 = (PyObject *)moduledict_nodes$NodeMakingHelpers;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_StatementRaiseExceptionImplicit_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_e697048b1bcb779cd6c68f7f5f0d3265->m_frame.f_lineno = 80;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_StatementRaiseExceptionImplicit,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_StatementRaiseExceptionImplicit );
    }

    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_StatementRaiseExceptionImplicit == NULL );
    var_StatementRaiseExceptionImplicit = tmp_assign_source_1;

    tmp_name_name_2 = const_str_plain_BuiltinRefNodes;
    tmp_globals_name_2 = (PyObject *)moduledict_nodes$NodeMakingHelpers;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_ExpressionBuiltinExceptionRef_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_e697048b1bcb779cd6c68f7f5f0d3265->m_frame.f_lineno = 81;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_2 ) )
    {
       tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_2,
            (PyObject *)MODULE_DICT(tmp_import_name_from_2),
            const_str_plain_ExpressionBuiltinExceptionRef,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_ExpressionBuiltinExceptionRef );
    }

    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ExpressionBuiltinExceptionRef == NULL );
    var_ExpressionBuiltinExceptionRef = tmp_assign_source_2;

    tmp_called_instance_1 = par_statement;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "statement" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 83;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_e697048b1bcb779cd6c68f7f5f0d3265->m_frame.f_lineno = 83;
    tmp_assign_source_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getSourceReference );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_source_ref == NULL );
    var_source_ref = tmp_assign_source_3;

    tmp_type_arg_1 = par_exception_type;

    if ( tmp_type_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "exception_type" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 85;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = (PyObject *)&PyUnicode_Type;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_raise_type_1 = PyExc_AssertionError;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 85;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_shallWarnImplicitRaises );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_shallWarnImplicitRaises );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "shallWarnImplicitRaises" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 87;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_e697048b1bcb779cd6c68f7f5f0d3265->m_frame.f_lineno = 87;
    tmp_cond_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 87;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_warning );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warning );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "warning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 88;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_str_digest_a3023a2adf68819e26ba0f7401136bb2;
    tmp_called_instance_2 = var_source_ref;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source_ref" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 90;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_e697048b1bcb779cd6c68f7f5f0d3265->m_frame.f_lineno = 90;
    tmp_args_element_name_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_getAsString );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_exception_type;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "exception_type" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 91;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_exception_value;

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "exception_value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 92;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    frame_e697048b1bcb779cd6c68f7f5f0d3265->m_frame.f_lineno = 88;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_called_name_3 = var_StatementRaiseExceptionImplicit;

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "StatementRaiseExceptionImplicit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 95;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_exception_type;
    tmp_called_name_4 = var_ExpressionBuiltinExceptionRef;

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ExpressionBuiltinExceptionRef" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 96;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain_exception_name;
    tmp_dict_value_2 = par_exception_type;

    if ( tmp_dict_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "exception_type" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_2 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_source_ref;
    tmp_dict_value_3 = var_source_ref;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source_ref" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 98;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_e697048b1bcb779cd6c68f7f5f0d3265->m_frame.f_lineno = 96;
    tmp_dict_value_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 5 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_exception_value;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_makeConstantReplacementNode );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_makeConstantReplacementNode );
    }

    if ( tmp_called_name_5 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "makeConstantReplacementNode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 100;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_5 = const_str_plain_constant;
    tmp_dict_value_5 = par_exception_value;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "exception_value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 101;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_3 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain_node;
    tmp_dict_value_6 = par_statement;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "statement" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    frame_e697048b1bcb779cd6c68f7f5f0d3265->m_frame.f_lineno = 100;
    tmp_dict_value_4 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_5, tmp_kw_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 100;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_7 = const_str_plain_exception_cause;
    tmp_dict_value_7 = Py_None;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_8 = const_str_plain_exception_trace;
    tmp_dict_value_8 = Py_None;
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_9 = const_str_plain_source_ref;
    tmp_dict_value_9 = var_source_ref;

    if ( tmp_dict_value_9 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source_ref" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 106;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    frame_e697048b1bcb779cd6c68f7f5f0d3265->m_frame.f_lineno = 95;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_result == NULL );
    var_result = tmp_assign_source_4;


#if 0
    RESTORE_FRAME_EXCEPTION( frame_e697048b1bcb779cd6c68f7f5f0d3265 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e697048b1bcb779cd6c68f7f5f0d3265 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e697048b1bcb779cd6c68f7f5f0d3265, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e697048b1bcb779cd6c68f7f5f0d3265->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e697048b1bcb779cd6c68f7f5f0d3265, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e697048b1bcb779cd6c68f7f5f0d3265,
        type_description_1,
        par_statement,
        par_exception_type,
        par_exception_value,
        var_StatementRaiseExceptionImplicit,
        var_ExpressionBuiltinExceptionRef,
        var_source_ref,
        var_result
    );


    // Release cached frame.
    if ( frame_e697048b1bcb779cd6c68f7f5f0d3265 == cache_frame_e697048b1bcb779cd6c68f7f5f0d3265 )
    {
        Py_DECREF( frame_e697048b1bcb779cd6c68f7f5f0d3265 );
    }
    cache_frame_e697048b1bcb779cd6c68f7f5f0d3265 = NULL;

    assertFrameObject( frame_e697048b1bcb779cd6c68f7f5f0d3265 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = var_result;

    CHECK_OBJECT( tmp_return_value );
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_3_makeRaiseExceptionReplacementStatement );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_statement );
    par_statement = NULL;

    Py_XDECREF( par_exception_type );
    par_exception_type = NULL;

    Py_XDECREF( par_exception_value );
    par_exception_value = NULL;

    Py_XDECREF( var_StatementRaiseExceptionImplicit );
    var_StatementRaiseExceptionImplicit = NULL;

    Py_XDECREF( var_ExpressionBuiltinExceptionRef );
    var_ExpressionBuiltinExceptionRef = NULL;

    Py_XDECREF( var_source_ref );
    var_source_ref = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

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

    Py_XDECREF( par_statement );
    par_statement = NULL;

    Py_XDECREF( par_exception_type );
    par_exception_type = NULL;

    Py_XDECREF( par_exception_value );
    par_exception_value = NULL;

    Py_XDECREF( var_StatementRaiseExceptionImplicit );
    var_StatementRaiseExceptionImplicit = NULL;

    Py_XDECREF( var_ExpressionBuiltinExceptionRef );
    var_ExpressionBuiltinExceptionRef = NULL;

    Py_XDECREF( var_source_ref );
    var_source_ref = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_3_makeRaiseExceptionReplacementStatement );
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


static PyObject *impl_nodes$NodeMakingHelpers$$$function_4_makeRaiseExceptionReplacementExpressionFromInstance( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_expression = python_pars[ 0 ];
    PyObject *par_exception = python_pars[ 1 ];
    PyObject *var_args = NULL;
    PyObject *var_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    bool tmp_isnot_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    static struct Nuitka_FrameObject *cache_frame_76b9de0b378500c54a263460fa8df3d1 = NULL;

    struct Nuitka_FrameObject *frame_76b9de0b378500c54a263460fa8df3d1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_76b9de0b378500c54a263460fa8df3d1, codeobj_76b9de0b378500c54a263460fa8df3d1, module_nodes$NodeMakingHelpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_76b9de0b378500c54a263460fa8df3d1 = cache_frame_76b9de0b378500c54a263460fa8df3d1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_76b9de0b378500c54a263460fa8df3d1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_76b9de0b378500c54a263460fa8df3d1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_isinstance_inst_1 = par_exception;

    CHECK_OBJECT( tmp_isinstance_inst_1 );
    tmp_isinstance_cls_1 = PyExc_Exception;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_raise_type_1 = PyExc_AssertionError;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 113;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_1 = par_exception;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "exception" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_args );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_args == NULL );
    var_args = tmp_assign_source_1;

    tmp_type_arg_1 = var_args;

    CHECK_OBJECT( tmp_type_arg_1 );
    tmp_compexpr_left_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( !(tmp_compexpr_left_1 == NULL) );
    tmp_compexpr_right_1 = (PyObject *)&PyTuple_Type;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    assert( !(tmp_and_left_truth_1 == -1) );
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_len_arg_1 = var_args;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "args" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 116;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_int_pos_1;
    tmp_and_right_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 116;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_subscribed_name_1 = var_args;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "args" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 117;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_value == NULL );
    var_value = tmp_assign_source_2;

    goto branch_end_2;
    branch_no_2:;
    tmp_type_arg_2 = var_args;

    if ( tmp_type_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "args" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 119;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = BUILTIN_TYPE1( tmp_type_arg_2 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = (PyObject *)&PyTuple_Type;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_raise_type_2 = PyExc_AssertionError;
    exception_type = tmp_raise_type_2;
    Py_INCREF( tmp_raise_type_2 );
    exception_lineno = 119;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_assign_source_3 = var_args;

    if ( tmp_assign_source_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "args" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    assert( var_value == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_value = tmp_assign_source_3;

    branch_end_2:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_makeRaiseExceptionReplacementExpression );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_makeRaiseExceptionReplacementExpression );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "makeRaiseExceptionReplacementExpression" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 122;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_expression;
    tmp_dict_value_1 = par_expression;

    if ( tmp_dict_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "expression" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 123;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_exception_type;
    tmp_source_name_3 = par_exception;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "exception" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 124;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 124;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 124;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_exception_value;
    tmp_dict_value_3 = var_value;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_76b9de0b378500c54a263460fa8df3d1->m_frame.f_lineno = 122;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_76b9de0b378500c54a263460fa8df3d1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_76b9de0b378500c54a263460fa8df3d1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_76b9de0b378500c54a263460fa8df3d1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_76b9de0b378500c54a263460fa8df3d1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_76b9de0b378500c54a263460fa8df3d1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_76b9de0b378500c54a263460fa8df3d1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_76b9de0b378500c54a263460fa8df3d1,
        type_description_1,
        par_expression,
        par_exception,
        var_args,
        var_value
    );


    // Release cached frame.
    if ( frame_76b9de0b378500c54a263460fa8df3d1 == cache_frame_76b9de0b378500c54a263460fa8df3d1 )
    {
        Py_DECREF( frame_76b9de0b378500c54a263460fa8df3d1 );
    }
    cache_frame_76b9de0b378500c54a263460fa8df3d1 = NULL;

    assertFrameObject( frame_76b9de0b378500c54a263460fa8df3d1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_4_makeRaiseExceptionReplacementExpressionFromInstance );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_expression );
    par_expression = NULL;

    Py_XDECREF( par_exception );
    par_exception = NULL;

    Py_XDECREF( var_args );
    var_args = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

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

    Py_XDECREF( par_expression );
    par_expression = NULL;

    Py_XDECREF( par_exception );
    par_exception = NULL;

    Py_XDECREF( var_args );
    var_args = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_4_makeRaiseExceptionReplacementExpressionFromInstance );
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


static PyObject *impl_nodes$NodeMakingHelpers$$$function_5_makeRaiseExceptionExpressionFromTemplate( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_exception_type = python_pars[ 0 ];
    PyObject *par_template = python_pars[ 1 ];
    PyObject *par_template_args = python_pars[ 2 ];
    PyObject *par_source_ref = python_pars[ 3 ];
    PyObject *var_ExpressionRaiseException = NULL;
    PyObject *var_ExpressionBuiltinExceptionRef = NULL;
    PyObject *var_makeBinaryOperationNode = NULL;
    PyObject *var_makeConstantRefNode = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_key_11;
    PyObject *tmp_dict_key_12;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_dict_value_11;
    PyObject *tmp_dict_value_12;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    int tmp_res;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_224b190f711f291edfc7bbf77c371cba = NULL;

    struct Nuitka_FrameObject *frame_224b190f711f291edfc7bbf77c371cba;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_224b190f711f291edfc7bbf77c371cba, codeobj_224b190f711f291edfc7bbf77c371cba, module_nodes$NodeMakingHelpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_224b190f711f291edfc7bbf77c371cba = cache_frame_224b190f711f291edfc7bbf77c371cba;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_224b190f711f291edfc7bbf77c371cba );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_224b190f711f291edfc7bbf77c371cba ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_plain_ExceptionNodes;
    tmp_globals_name_1 = (PyObject *)moduledict_nodes$NodeMakingHelpers;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_ExpressionRaiseException_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_224b190f711f291edfc7bbf77c371cba->m_frame.f_lineno = 131;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_ExpressionRaiseException,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_ExpressionRaiseException );
    }

    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ExpressionRaiseException == NULL );
    var_ExpressionRaiseException = tmp_assign_source_1;

    tmp_name_name_2 = const_str_plain_BuiltinRefNodes;
    tmp_globals_name_2 = (PyObject *)moduledict_nodes$NodeMakingHelpers;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_ExpressionBuiltinExceptionRef_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_224b190f711f291edfc7bbf77c371cba->m_frame.f_lineno = 132;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_2 ) )
    {
       tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_2,
            (PyObject *)MODULE_DICT(tmp_import_name_from_2),
            const_str_plain_ExpressionBuiltinExceptionRef,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_ExpressionBuiltinExceptionRef );
    }

    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ExpressionBuiltinExceptionRef == NULL );
    var_ExpressionBuiltinExceptionRef = tmp_assign_source_2;

    tmp_name_name_3 = const_str_plain_OperatorNodes;
    tmp_globals_name_3 = (PyObject *)moduledict_nodes$NodeMakingHelpers;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_makeBinaryOperationNode_tuple;
    tmp_level_name_3 = const_int_pos_1;
    frame_224b190f711f291edfc7bbf77c371cba->m_frame.f_lineno = 133;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_3 ) )
    {
       tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_3,
            (PyObject *)MODULE_DICT(tmp_import_name_from_3),
            const_str_plain_makeBinaryOperationNode,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_makeBinaryOperationNode );
    }

    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_makeBinaryOperationNode == NULL );
    var_makeBinaryOperationNode = tmp_assign_source_3;

    tmp_name_name_4 = const_str_plain_ConstantRefNodes;
    tmp_globals_name_4 = (PyObject *)moduledict_nodes$NodeMakingHelpers;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_makeConstantRefNode_tuple;
    tmp_level_name_4 = const_int_pos_1;
    frame_224b190f711f291edfc7bbf77c371cba->m_frame.f_lineno = 134;
    tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_4 ) )
    {
       tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_4,
            (PyObject *)MODULE_DICT(tmp_import_name_from_4),
            const_str_plain_makeConstantRefNode,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_makeConstantRefNode );
    }

    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_makeConstantRefNode == NULL );
    var_makeConstantRefNode = tmp_assign_source_4;

    tmp_called_name_1 = var_ExpressionRaiseException;

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ExpressionRaiseException" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 136;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_exception_type;
    tmp_called_name_2 = var_ExpressionBuiltinExceptionRef;

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ExpressionBuiltinExceptionRef" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 137;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain_exception_name;
    tmp_dict_value_2 = par_exception_type;

    if ( tmp_dict_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "exception_type" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 138;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_2 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_source_ref;
    tmp_dict_value_3 = par_source_ref;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source_ref" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 139;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_224b190f711f291edfc7bbf77c371cba->m_frame.f_lineno = 137;
    tmp_dict_value_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_exception_value;
    tmp_called_name_3 = var_makeBinaryOperationNode;

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "makeBinaryOperationNode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 141;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_5 = const_str_plain_operator;
    tmp_dict_value_5 = const_str_plain_Mod;
    tmp_kw_name_3 = _PyDict_NewPresized( 4 );
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain_left;
    tmp_called_name_4 = var_makeConstantRefNode;

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "makeConstantRefNode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 143;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_7 = const_str_plain_constant;
    tmp_dict_value_7 = par_template;

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "template" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 144;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_4 = _PyDict_NewPresized( 3 );
    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_8 = const_str_plain_source_ref;
    tmp_dict_value_8 = par_source_ref;

    if ( tmp_dict_value_8 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        Py_DECREF( tmp_kw_name_3 );
        Py_DECREF( tmp_kw_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source_ref" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 145;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_9 = const_str_plain_user_provided;
    tmp_dict_value_9 = Py_True;
    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    frame_224b190f711f291edfc7bbf77c371cba->m_frame.f_lineno = 143;
    tmp_dict_value_6 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_kw_name_4 );
    if ( tmp_dict_value_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );
        Py_DECREF( tmp_kw_name_3 );

        exception_lineno = 143;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_6, tmp_dict_value_6 );
    Py_DECREF( tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_10 = const_str_plain_right;
    tmp_dict_value_10 = par_template_args;

    if ( tmp_dict_value_10 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "template_args" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 148;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_11 = const_str_plain_source_ref;
    tmp_dict_value_11 = par_source_ref;

    if ( tmp_dict_value_11 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source_ref" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 149;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_11, tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    frame_224b190f711f291edfc7bbf77c371cba->m_frame.f_lineno = 141;
    tmp_dict_value_4 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 141;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_12 = const_str_plain_source_ref;
    tmp_dict_value_12 = par_source_ref;

    if ( tmp_dict_value_12 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source_ref" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 151;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_12, tmp_dict_value_12 );
    assert( !(tmp_res != 0) );
    frame_224b190f711f291edfc7bbf77c371cba->m_frame.f_lineno = 136;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 136;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_224b190f711f291edfc7bbf77c371cba );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_224b190f711f291edfc7bbf77c371cba );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_224b190f711f291edfc7bbf77c371cba );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_224b190f711f291edfc7bbf77c371cba, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_224b190f711f291edfc7bbf77c371cba->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_224b190f711f291edfc7bbf77c371cba, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_224b190f711f291edfc7bbf77c371cba,
        type_description_1,
        par_exception_type,
        par_template,
        par_template_args,
        par_source_ref,
        var_ExpressionRaiseException,
        var_ExpressionBuiltinExceptionRef,
        var_makeBinaryOperationNode,
        var_makeConstantRefNode
    );


    // Release cached frame.
    if ( frame_224b190f711f291edfc7bbf77c371cba == cache_frame_224b190f711f291edfc7bbf77c371cba )
    {
        Py_DECREF( frame_224b190f711f291edfc7bbf77c371cba );
    }
    cache_frame_224b190f711f291edfc7bbf77c371cba = NULL;

    assertFrameObject( frame_224b190f711f291edfc7bbf77c371cba );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_5_makeRaiseExceptionExpressionFromTemplate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_exception_type );
    par_exception_type = NULL;

    Py_XDECREF( par_template );
    par_template = NULL;

    Py_XDECREF( par_template_args );
    par_template_args = NULL;

    Py_XDECREF( par_source_ref );
    par_source_ref = NULL;

    Py_XDECREF( var_ExpressionRaiseException );
    var_ExpressionRaiseException = NULL;

    Py_XDECREF( var_ExpressionBuiltinExceptionRef );
    var_ExpressionBuiltinExceptionRef = NULL;

    Py_XDECREF( var_makeBinaryOperationNode );
    var_makeBinaryOperationNode = NULL;

    Py_XDECREF( var_makeConstantRefNode );
    var_makeConstantRefNode = NULL;

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

    Py_XDECREF( par_exception_type );
    par_exception_type = NULL;

    Py_XDECREF( par_template );
    par_template = NULL;

    Py_XDECREF( par_template_args );
    par_template_args = NULL;

    Py_XDECREF( par_source_ref );
    par_source_ref = NULL;

    Py_XDECREF( var_ExpressionRaiseException );
    var_ExpressionRaiseException = NULL;

    Py_XDECREF( var_ExpressionBuiltinExceptionRef );
    var_ExpressionBuiltinExceptionRef = NULL;

    Py_XDECREF( var_makeBinaryOperationNode );
    var_makeBinaryOperationNode = NULL;

    Py_XDECREF( var_makeConstantRefNode );
    var_makeConstantRefNode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_5_makeRaiseExceptionExpressionFromTemplate );
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


static PyObject *impl_nodes$NodeMakingHelpers$$$function_6_makeRaiseTypeErrorExceptionReplacementFromTemplateAndValue( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_template = python_pars[ 0 ];
    PyObject *par_operation = python_pars[ 1 ];
    PyObject *par_original_node = python_pars[ 2 ];
    PyObject *par_value_node = python_pars[ 3 ];
    PyObject *var_shape = NULL;
    PyObject *var_type_name = NULL;
    PyObject *var_result = NULL;
    PyObject *var_ExpressionAttributeLookup = NULL;
    PyObject *var_ExpressionBuiltinType1 = NULL;
    PyObject *var_source_ref = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_key_11;
    PyObject *tmp_dict_key_12;
    PyObject *tmp_dict_key_13;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_dict_value_11;
    PyObject *tmp_dict_value_12;
    PyObject *tmp_dict_value_13;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static struct Nuitka_FrameObject *cache_frame_8228492f9a24518be405329eeb9b12f1 = NULL;

    struct Nuitka_FrameObject *frame_8228492f9a24518be405329eeb9b12f1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8228492f9a24518be405329eeb9b12f1, codeobj_8228492f9a24518be405329eeb9b12f1, module_nodes$NodeMakingHelpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8228492f9a24518be405329eeb9b12f1 = cache_frame_8228492f9a24518be405329eeb9b12f1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8228492f9a24518be405329eeb9b12f1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8228492f9a24518be405329eeb9b12f1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_value_node;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_8228492f9a24518be405329eeb9b12f1->m_frame.f_lineno = 158;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getTypeShape );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_shape == NULL );
    var_shape = tmp_assign_source_1;

    tmp_called_instance_2 = var_shape;

    CHECK_OBJECT( tmp_called_instance_2 );
    frame_8228492f9a24518be405329eeb9b12f1->m_frame.f_lineno = 160;
    tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_getTypeName );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_type_name == NULL );
    var_type_name = tmp_assign_source_2;

    tmp_compare_left_1 = var_type_name;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_digest_f5b3ac023638d74fd461c96d1d3e704a );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_digest_f5b3ac023638d74fd461c96d1d3e704a );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "makeRaiseExceptionReplacementExpressionFromInstance" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 163;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_expression;
    tmp_dict_value_1 = par_original_node;

    if ( tmp_dict_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "original_node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 164;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_exception;
    tmp_compare_left_2 = const_str_chr_37;
    tmp_compare_right_2 = par_template;

    if ( tmp_compare_right_2 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "template" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 165;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_left_name_1 = par_template;

    if ( tmp_left_name_1 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "template" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 165;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = var_type_name;

    if ( tmp_right_name_1 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "type_name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 165;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 165;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_make_exception_arg_1 = par_template;

    if ( tmp_make_exception_arg_1 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "template" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 165;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_make_exception_arg_1 );
    condexpr_end_1:;
    frame_8228492f9a24518be405329eeb9b12f1->m_frame.f_lineno = 165;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( !(tmp_dict_value_2 == NULL) );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_8228492f9a24518be405329eeb9b12f1->m_frame.f_lineno = 163;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_result == NULL );
    var_result = tmp_assign_source_3;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_wrapExpressionWithNodeSideEffects );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wrapExpressionWithNodeSideEffects );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "wrapExpressionWithNodeSideEffects" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 168;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = const_str_plain_new_node;
    tmp_dict_value_3 = var_result;

    CHECK_OBJECT( tmp_dict_value_3 );
    tmp_kw_name_2 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_old_node;
    tmp_dict_value_4 = par_value_node;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value_node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 170;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    frame_8228492f9a24518be405329eeb9b12f1->m_frame.f_lineno = 168;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_result;
        var_result = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_name_name_1 = const_str_plain_AttributeNodes;
    tmp_globals_name_1 = (PyObject *)moduledict_nodes$NodeMakingHelpers;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_ExpressionAttributeLookup_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_8228492f9a24518be405329eeb9b12f1->m_frame.f_lineno = 174;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_ExpressionAttributeLookup,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_ExpressionAttributeLookup );
    }

    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ExpressionAttributeLookup == NULL );
    var_ExpressionAttributeLookup = tmp_assign_source_5;

    tmp_name_name_2 = const_str_plain_TypeNodes;
    tmp_globals_name_2 = (PyObject *)moduledict_nodes$NodeMakingHelpers;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_ExpressionBuiltinType1_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_8228492f9a24518be405329eeb9b12f1->m_frame.f_lineno = 175;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_2 ) )
    {
       tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_2,
            (PyObject *)MODULE_DICT(tmp_import_name_from_2),
            const_str_plain_ExpressionBuiltinType1,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_ExpressionBuiltinType1 );
    }

    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ExpressionBuiltinType1 == NULL );
    var_ExpressionBuiltinType1 = tmp_assign_source_6;

    tmp_called_instance_3 = par_original_node;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "original_node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_8228492f9a24518be405329eeb9b12f1->m_frame.f_lineno = 177;
    tmp_assign_source_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_getSourceReference );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_source_ref == NULL );
    var_source_ref = tmp_assign_source_7;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_makeRaiseExceptionExpressionFromTemplate );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_makeRaiseExceptionExpressionFromTemplate );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "makeRaiseExceptionExpressionFromTemplate" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_5 = const_str_plain_exception_type;
    tmp_dict_value_5 = const_str_plain_TypeError;
    tmp_kw_name_3 = _PyDict_NewPresized( 4 );
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain_template;
    tmp_dict_value_6 = const_str_digest_3a52c4fc9b18138e009003d39acb1965;
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_7 = const_str_plain_template_args;
    tmp_called_name_4 = var_ExpressionAttributeLookup;

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ExpressionAttributeLookup" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_8 = const_str_plain_source;
    tmp_called_name_5 = var_ExpressionBuiltinType1;

    if ( tmp_called_name_5 == NULL )
    {
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ExpressionBuiltinType1" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_9 = const_str_plain_value;
    tmp_called_instance_4 = par_value_node;

    if ( tmp_called_instance_4 == NULL )
    {
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value_node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_8228492f9a24518be405329eeb9b12f1->m_frame.f_lineno = 184;
    tmp_dict_value_9 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_makeClone );
    if ( tmp_dict_value_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_3 );

        exception_lineno = 184;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_5 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_9, tmp_dict_value_9 );
    Py_DECREF( tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_10 = const_str_plain_source_ref;
    tmp_dict_value_10 = var_source_ref;

    if ( tmp_dict_value_10 == NULL )
    {
        Py_DECREF( tmp_kw_name_3 );
        Py_DECREF( tmp_kw_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source_ref" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 185;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    frame_8228492f9a24518be405329eeb9b12f1->m_frame.f_lineno = 183;
    tmp_dict_value_8 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_kw_name_5 );
    if ( tmp_dict_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_3 );

        exception_lineno = 183;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_4 = _PyDict_NewPresized( 3 );
    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_8, tmp_dict_value_8 );
    Py_DECREF( tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_11 = const_str_plain_attribute_name;
    tmp_dict_value_11 = const_str_plain___name__;
    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_11, tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_12 = const_str_plain_source_ref;
    tmp_dict_value_12 = var_source_ref;

    if ( tmp_dict_value_12 == NULL )
    {
        Py_DECREF( tmp_kw_name_3 );
        Py_DECREF( tmp_kw_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source_ref" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_12, tmp_dict_value_12 );
    assert( !(tmp_res != 0) );
    frame_8228492f9a24518be405329eeb9b12f1->m_frame.f_lineno = 182;
    tmp_dict_value_7 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_kw_name_4 );
    if ( tmp_dict_value_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_3 );

        exception_lineno = 182;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_7, tmp_dict_value_7 );
    Py_DECREF( tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_13 = const_str_plain_source_ref;
    tmp_dict_value_13 = var_source_ref;

    if ( tmp_dict_value_13 == NULL )
    {
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source_ref" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 190;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_13, tmp_dict_value_13 );
    assert( !(tmp_res != 0) );
    frame_8228492f9a24518be405329eeb9b12f1->m_frame.f_lineno = 179;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_result == NULL );
    var_result = tmp_assign_source_8;

    tmp_source_name_1 = var_shape;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "shape" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 193;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___name__ );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_type_name;
        var_type_name = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    branch_end_1:;
    tmp_tuple_element_1 = var_result;

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_str_plain_new_raise;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    tmp_left_name_2 = const_str_digest_cf92b5f2edd6268415cc3736f8f1aa09;
    tmp_tuple_element_2 = par_operation;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "operation" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 196;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_2 );
    tmp_compare_left_3 = var_type_name;

    if ( tmp_compare_left_3 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "type_name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 197;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if ( tmp_isnot_2 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_tuple_element_2 = const_str_plain_type;
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_tuple_element_2 = const_str_plain_shape;
    condexpr_end_2:;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_2, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_type_name;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "type_name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 198;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_2, 2, tmp_tuple_element_2 );
    tmp_tuple_element_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 195;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_1 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8228492f9a24518be405329eeb9b12f1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8228492f9a24518be405329eeb9b12f1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8228492f9a24518be405329eeb9b12f1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8228492f9a24518be405329eeb9b12f1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8228492f9a24518be405329eeb9b12f1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8228492f9a24518be405329eeb9b12f1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8228492f9a24518be405329eeb9b12f1,
        type_description_1,
        par_template,
        par_operation,
        par_original_node,
        par_value_node,
        var_shape,
        var_type_name,
        var_result,
        var_ExpressionAttributeLookup,
        var_ExpressionBuiltinType1,
        var_source_ref
    );


    // Release cached frame.
    if ( frame_8228492f9a24518be405329eeb9b12f1 == cache_frame_8228492f9a24518be405329eeb9b12f1 )
    {
        Py_DECREF( frame_8228492f9a24518be405329eeb9b12f1 );
    }
    cache_frame_8228492f9a24518be405329eeb9b12f1 = NULL;

    assertFrameObject( frame_8228492f9a24518be405329eeb9b12f1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_6_makeRaiseTypeErrorExceptionReplacementFromTemplateAndValue );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_template );
    par_template = NULL;

    Py_XDECREF( par_operation );
    par_operation = NULL;

    Py_XDECREF( par_original_node );
    par_original_node = NULL;

    Py_XDECREF( par_value_node );
    par_value_node = NULL;

    Py_XDECREF( var_shape );
    var_shape = NULL;

    Py_XDECREF( var_type_name );
    var_type_name = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_ExpressionAttributeLookup );
    var_ExpressionAttributeLookup = NULL;

    Py_XDECREF( var_ExpressionBuiltinType1 );
    var_ExpressionBuiltinType1 = NULL;

    Py_XDECREF( var_source_ref );
    var_source_ref = NULL;

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

    Py_XDECREF( par_template );
    par_template = NULL;

    Py_XDECREF( par_operation );
    par_operation = NULL;

    Py_XDECREF( par_original_node );
    par_original_node = NULL;

    Py_XDECREF( par_value_node );
    par_value_node = NULL;

    Py_XDECREF( var_shape );
    var_shape = NULL;

    Py_XDECREF( var_type_name );
    var_type_name = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_ExpressionAttributeLookup );
    var_ExpressionAttributeLookup = NULL;

    Py_XDECREF( var_ExpressionBuiltinType1 );
    var_ExpressionBuiltinType1 = NULL;

    Py_XDECREF( var_source_ref );
    var_source_ref = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_6_makeRaiseTypeErrorExceptionReplacementFromTemplateAndValue );
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


static PyObject *impl_nodes$NodeMakingHelpers$$$function_7_makeCompileTimeConstantReplacementNode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[ 0 ];
    PyObject *par_node = python_pars[ 1 ];
    PyObject *var_makeExpressionBuiltinRef = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    bool tmp_is_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_type_arg_1;
    static struct Nuitka_FrameObject *cache_frame_53119eb1860a31b016ce94017b0a1f99 = NULL;

    struct Nuitka_FrameObject *frame_53119eb1860a31b016ce94017b0a1f99;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_53119eb1860a31b016ce94017b0a1f99, codeobj_53119eb1860a31b016ce94017b0a1f99, module_nodes$NodeMakingHelpers, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_53119eb1860a31b016ce94017b0a1f99 = cache_frame_53119eb1860a31b016ce94017b0a1f99;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_53119eb1860a31b016ce94017b0a1f99 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_53119eb1860a31b016ce94017b0a1f99 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_isConstant );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isConstant );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isConstant" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 204;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_value;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_53119eb1860a31b016ce94017b0a1f99->m_frame.f_lineno = 204;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 204;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_makeConstantReplacementNode );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_makeConstantReplacementNode );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "makeConstantReplacementNode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 205;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_constant;
    tmp_dict_value_1 = par_value;

    if ( tmp_dict_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 206;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_node;
    tmp_dict_value_2 = par_node;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 207;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_53119eb1860a31b016ce94017b0a1f99->m_frame.f_lineno = 205;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_type_arg_1 = par_value;

    if ( tmp_type_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 209;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = (PyObject *)&PyType_Type;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_1 = par_value;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 210;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___name__ );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = GET_STRING_DICT_VALUE( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_builtin_names );

    if (unlikely( tmp_compare_right_2 == NULL ))
    {
        tmp_compare_right_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_builtin_names );
    }

    if ( tmp_compare_right_2 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "builtin_names" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 210;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    Py_DECREF( tmp_compare_left_2 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_name_name_1 = const_str_plain_BuiltinRefNodes;
    tmp_globals_name_1 = (PyObject *)moduledict_nodes$NodeMakingHelpers;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_makeExpressionBuiltinRef_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_53119eb1860a31b016ce94017b0a1f99->m_frame.f_lineno = 211;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_makeExpressionBuiltinRef,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_makeExpressionBuiltinRef );
    }

    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_makeExpressionBuiltinRef == NULL );
    var_makeExpressionBuiltinRef = tmp_assign_source_1;

    tmp_called_name_3 = var_makeExpressionBuiltinRef;

    CHECK_OBJECT( tmp_called_name_3 );
    tmp_dict_key_3 = const_str_plain_builtin_name;
    tmp_source_name_2 = par_value;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "value" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 214;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___name__ );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_2 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_source_ref;
    tmp_called_instance_1 = par_node;

    if ( tmp_called_instance_1 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 215;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_53119eb1860a31b016ce94017b0a1f99->m_frame.f_lineno = 215;
    tmp_dict_value_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getSourceReference );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 215;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    frame_53119eb1860a31b016ce94017b0a1f99->m_frame.f_lineno = 213;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_return_value = par_node;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 218;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_return_value = par_node;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 220;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_53119eb1860a31b016ce94017b0a1f99 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_53119eb1860a31b016ce94017b0a1f99 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_53119eb1860a31b016ce94017b0a1f99 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_53119eb1860a31b016ce94017b0a1f99, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_53119eb1860a31b016ce94017b0a1f99->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_53119eb1860a31b016ce94017b0a1f99, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_53119eb1860a31b016ce94017b0a1f99,
        type_description_1,
        par_value,
        par_node,
        var_makeExpressionBuiltinRef
    );


    // Release cached frame.
    if ( frame_53119eb1860a31b016ce94017b0a1f99 == cache_frame_53119eb1860a31b016ce94017b0a1f99 )
    {
        Py_DECREF( frame_53119eb1860a31b016ce94017b0a1f99 );
    }
    cache_frame_53119eb1860a31b016ce94017b0a1f99 = NULL;

    assertFrameObject( frame_53119eb1860a31b016ce94017b0a1f99 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_7_makeCompileTimeConstantReplacementNode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( par_node );
    par_node = NULL;

    Py_XDECREF( var_makeExpressionBuiltinRef );
    var_makeExpressionBuiltinRef = NULL;

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

    Py_XDECREF( par_value );
    par_value = NULL;

    Py_XDECREF( par_node );
    par_node = NULL;

    Py_XDECREF( var_makeExpressionBuiltinRef );
    var_makeExpressionBuiltinRef = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_7_makeCompileTimeConstantReplacementNode );
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


static PyObject *impl_nodes$NodeMakingHelpers$$$function_8_getComputationResult( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_node = python_pars[ 0 ];
    PyObject *par_computation = python_pars[ 1 ];
    PyObject *par_description = python_pars[ 2 ];
    PyObject *var_result = NULL;
    PyObject *var_e = NULL;
    PyObject *var_new_node = NULL;
    PyObject *var_change_tags = NULL;
    PyObject *var_change_desc = NULL;
    PyObject *tmp_try_except_1__unhandled_indicator = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    int tmp_exc_match_exception_match_1;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_isnot_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    static struct Nuitka_FrameObject *cache_frame_19b09fc9ebb7942025bb50069d41a655 = NULL;

    struct Nuitka_FrameObject *frame_19b09fc9ebb7942025bb50069d41a655;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator == NULL );
    Py_INCREF( tmp_assign_source_1 );
    tmp_try_except_1__unhandled_indicator = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_19b09fc9ebb7942025bb50069d41a655, codeobj_19b09fc9ebb7942025bb50069d41a655, module_nodes$NodeMakingHelpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_19b09fc9ebb7942025bb50069d41a655 = cache_frame_19b09fc9ebb7942025bb50069d41a655;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_19b09fc9ebb7942025bb50069d41a655 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_19b09fc9ebb7942025bb50069d41a655 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    // Tried code:
    tmp_called_name_1 = par_computation;

    CHECK_OBJECT( tmp_called_name_1 );
    frame_19b09fc9ebb7942025bb50069d41a655->m_frame.f_lineno = 231;
    tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        type_description_1 = "oooooooo";
        goto try_except_handler_3;
    }
    assert( var_result == NULL );
    var_result = tmp_assign_source_2;

    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_assign_source_3 = Py_False;
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator;
        assert( old != NULL );
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_3;
        Py_INCREF( tmp_try_except_1__unhandled_indicator );
        Py_DECREF( old );
    }

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_19b09fc9ebb7942025bb50069d41a655, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_19b09fc9ebb7942025bb50069d41a655, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_1 = PyExc_Exception;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_4 = EXC_VALUE(PyThreadState_GET());
    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_e = tmp_assign_source_4;

    // Tried code:
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_digest_f5b3ac023638d74fd461c96d1d3e704a );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_digest_f5b3ac023638d74fd461c96d1d3e704a );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "makeRaiseExceptionReplacementExpressionFromInstance" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 233;
        type_description_1 = "oooooooo";
        goto try_except_handler_5;
    }

    tmp_dict_key_1 = const_str_plain_expression;
    tmp_dict_value_1 = par_node;

    if ( tmp_dict_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 234;
        type_description_1 = "oooooooo";
        goto try_except_handler_5;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_exception;
    tmp_dict_value_2 = var_e;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_19b09fc9ebb7942025bb50069d41a655->m_frame.f_lineno = 233;
    tmp_assign_source_5 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        type_description_1 = "oooooooo";
        goto try_except_handler_5;
    }
    assert( var_new_node == NULL );
    var_new_node = tmp_assign_source_5;

    tmp_assign_source_6 = const_str_plain_new_raise;
    assert( var_change_tags == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_change_tags = tmp_assign_source_6;

    tmp_left_name_1 = par_description;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "description" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 239;
        type_description_1 = "oooooooo";
        goto try_except_handler_5;
    }

    tmp_right_name_1 = const_str_digest_9060f3a41e8a1211d9a62328541c9086;
    tmp_assign_source_7 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        type_description_1 = "oooooooo";
        goto try_except_handler_5;
    }
    assert( var_change_desc == NULL );
    var_change_desc = tmp_assign_source_7;

    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    Py_XDECREF( var_e );
    var_e = NULL;

    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 230;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_19b09fc9ebb7942025bb50069d41a655->m_frame) frame_19b09fc9ebb7942025bb50069d41a655->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooo";
    goto try_except_handler_4;
    branch_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_8_getComputationResult );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_compare_left_2 = tmp_try_except_1__unhandled_indicator;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_True;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_makeCompileTimeConstantReplacementNode );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_makeCompileTimeConstantReplacementNode );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "makeCompileTimeConstantReplacementNode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 241;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_dict_key_3 = const_str_plain_value;
    tmp_dict_value_3 = var_result;

    if ( tmp_dict_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 242;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_kw_name_2 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_node;
    tmp_dict_value_4 = par_node;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 243;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    frame_19b09fc9ebb7942025bb50069d41a655->m_frame.f_lineno = 241;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_new_node;
        var_new_node = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_isDebug );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isDebug );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "isDebug" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 246;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    frame_19b09fc9ebb7942025bb50069d41a655->m_frame.f_lineno = 246;
    tmp_cond_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 246;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_compare_left_3 = var_new_node;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 247;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_compare_right_3 = par_node;

    if ( tmp_compare_right_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 247;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_is_2 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if ( tmp_is_2 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_raise_type_1 = PyExc_AssertionError;
    tmp_tuple_element_2 = par_node;

    if ( tmp_tuple_element_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 247;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_tuple_element_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_result;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 247;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
    tmp_raise_value_1 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_raise_value_1, 0, tmp_tuple_element_1 );
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_value = tmp_raise_value_1;
    exception_lineno = 247;
    RAISE_EXCEPTION_WITH_VALUE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooooo";
    goto try_except_handler_2;
    branch_no_4:;
    branch_no_3:;
    tmp_compare_left_4 = var_new_node;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 249;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_compare_right_4 = par_node;

    if ( tmp_compare_right_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 249;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_isnot_1 = ( tmp_compare_left_4 != tmp_compare_right_4 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_9 = const_str_plain_new_constant;
    {
        PyObject *old = var_change_tags;
        var_change_tags = tmp_assign_source_9;
        Py_INCREF( var_change_tags );
        Py_XDECREF( old );
    }

    tmp_left_name_2 = par_description;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "description" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 251;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }

    tmp_right_name_2 = const_str_digest_5d9858be1151397135197c805f096988;
    tmp_assign_source_10 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_change_desc;
        var_change_desc = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    goto branch_end_5;
    branch_no_5:;
    tmp_assign_source_11 = Py_None;
    {
        PyObject *old = var_change_tags;
        var_change_tags = tmp_assign_source_11;
        Py_INCREF( var_change_tags );
        Py_XDECREF( old );
    }

    tmp_assign_source_12 = Py_None;
    {
        PyObject *old = var_change_desc;
        var_change_desc = tmp_assign_source_12;
        Py_INCREF( var_change_desc );
        Py_XDECREF( old );
    }

    branch_end_5:;
    branch_no_2:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    tmp_tuple_element_3 = var_new_node;

    if ( tmp_tuple_element_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 256;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_change_tags;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "change_tags" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 256;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_change_desc;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "change_desc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 256;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_3 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_19b09fc9ebb7942025bb50069d41a655 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_19b09fc9ebb7942025bb50069d41a655 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_19b09fc9ebb7942025bb50069d41a655 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_19b09fc9ebb7942025bb50069d41a655, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_19b09fc9ebb7942025bb50069d41a655->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_19b09fc9ebb7942025bb50069d41a655, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_19b09fc9ebb7942025bb50069d41a655,
        type_description_1,
        par_node,
        par_computation,
        par_description,
        var_result,
        var_e,
        var_new_node,
        var_change_tags,
        var_change_desc
    );


    // Release cached frame.
    if ( frame_19b09fc9ebb7942025bb50069d41a655 == cache_frame_19b09fc9ebb7942025bb50069d41a655 )
    {
        Py_DECREF( frame_19b09fc9ebb7942025bb50069d41a655 );
    }
    cache_frame_19b09fc9ebb7942025bb50069d41a655 = NULL;

    assertFrameObject( frame_19b09fc9ebb7942025bb50069d41a655 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_8_getComputationResult );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_node );
    par_node = NULL;

    Py_XDECREF( par_computation );
    par_computation = NULL;

    Py_XDECREF( par_description );
    par_description = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_new_node );
    var_new_node = NULL;

    Py_XDECREF( var_change_tags );
    var_change_tags = NULL;

    Py_XDECREF( var_change_desc );
    var_change_desc = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_node );
    par_node = NULL;

    Py_XDECREF( par_computation );
    par_computation = NULL;

    Py_XDECREF( par_description );
    par_description = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_new_node );
    var_new_node = NULL;

    Py_XDECREF( var_change_tags );
    var_change_tags = NULL;

    Py_XDECREF( var_change_desc );
    var_change_desc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_8_getComputationResult );
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


static PyObject *impl_nodes$NodeMakingHelpers$$$function_9_makeStatementExpressionOnlyReplacementNode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_expression = python_pars[ 0 ];
    PyObject *par_node = python_pars[ 1 ];
    PyObject *var_StatementExpressionOnly = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_7404e7fe02d3712179083a31bab9019f = NULL;

    struct Nuitka_FrameObject *frame_7404e7fe02d3712179083a31bab9019f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7404e7fe02d3712179083a31bab9019f, codeobj_7404e7fe02d3712179083a31bab9019f, module_nodes$NodeMakingHelpers, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7404e7fe02d3712179083a31bab9019f = cache_frame_7404e7fe02d3712179083a31bab9019f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7404e7fe02d3712179083a31bab9019f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7404e7fe02d3712179083a31bab9019f ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_plain_StatementNodes;
    tmp_globals_name_1 = (PyObject *)moduledict_nodes$NodeMakingHelpers;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_StatementExpressionOnly_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_7404e7fe02d3712179083a31bab9019f->m_frame.f_lineno = 260;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_StatementExpressionOnly,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_StatementExpressionOnly );
    }

    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_StatementExpressionOnly == NULL );
    var_StatementExpressionOnly = tmp_assign_source_1;

    tmp_called_name_1 = var_StatementExpressionOnly;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_dict_key_1 = const_str_plain_expression;
    tmp_dict_value_1 = par_expression;

    if ( tmp_dict_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "expression" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 263;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_source_ref;
    tmp_called_instance_1 = par_node;

    if ( tmp_called_instance_1 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 264;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_7404e7fe02d3712179083a31bab9019f->m_frame.f_lineno = 264;
    tmp_dict_value_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getSourceReference );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 264;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_7404e7fe02d3712179083a31bab9019f->m_frame.f_lineno = 262;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 262;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7404e7fe02d3712179083a31bab9019f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_7404e7fe02d3712179083a31bab9019f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7404e7fe02d3712179083a31bab9019f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7404e7fe02d3712179083a31bab9019f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7404e7fe02d3712179083a31bab9019f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7404e7fe02d3712179083a31bab9019f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7404e7fe02d3712179083a31bab9019f,
        type_description_1,
        par_expression,
        par_node,
        var_StatementExpressionOnly
    );


    // Release cached frame.
    if ( frame_7404e7fe02d3712179083a31bab9019f == cache_frame_7404e7fe02d3712179083a31bab9019f )
    {
        Py_DECREF( frame_7404e7fe02d3712179083a31bab9019f );
    }
    cache_frame_7404e7fe02d3712179083a31bab9019f = NULL;

    assertFrameObject( frame_7404e7fe02d3712179083a31bab9019f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_9_makeStatementExpressionOnlyReplacementNode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_expression );
    par_expression = NULL;

    Py_XDECREF( par_node );
    par_node = NULL;

    Py_XDECREF( var_StatementExpressionOnly );
    var_StatementExpressionOnly = NULL;

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

    Py_XDECREF( par_expression );
    par_expression = NULL;

    Py_XDECREF( par_node );
    par_node = NULL;

    Py_XDECREF( var_StatementExpressionOnly );
    var_StatementExpressionOnly = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_9_makeStatementExpressionOnlyReplacementNode );
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


static PyObject *impl_nodes$NodeMakingHelpers$$$function_10_mergeStatements( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_statements = python_pars[ 0 ];
    PyObject *par_allow_none = python_pars[ 1 ];
    PyObject *var_merged_statements = NULL;
    PyObject *var_statement = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_value_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_bc3068dc32c0e8a95fe74aa573eaa0e2 = NULL;

    struct Nuitka_FrameObject *frame_bc3068dc32c0e8a95fe74aa573eaa0e2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_merged_statements == NULL );
    var_merged_statements = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bc3068dc32c0e8a95fe74aa573eaa0e2, codeobj_bc3068dc32c0e8a95fe74aa573eaa0e2, module_nodes$NodeMakingHelpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bc3068dc32c0e8a95fe74aa573eaa0e2 = cache_frame_bc3068dc32c0e8a95fe74aa573eaa0e2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bc3068dc32c0e8a95fe74aa573eaa0e2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bc3068dc32c0e8a95fe74aa573eaa0e2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_iter_arg_1 = par_statements;

    CHECK_OBJECT( tmp_iter_arg_1 );
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_2;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_3 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "oooo";
        exception_lineno = 272;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_1 = exception_keeper_type_1;
    tmp_compare_right_1 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 272;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_1;
    branch_no_1:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    branch_end_1:;
    // End of try:
    try_end_1:;
    tmp_assign_source_4 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_4 );
    {
        PyObject *old = var_statement;
        var_statement = tmp_assign_source_4;
        Py_INCREF( var_statement );
        Py_XDECREF( old );
    }

    tmp_compexpr_left_1 = var_statement;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    assert( !(tmp_and_left_truth_1 == -1) );
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    tmp_and_right_value_1 = par_allow_none;

    if ( tmp_and_right_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "allow_none" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 273;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_type_arg_1 = var_statement;

    if ( tmp_type_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "statement" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 275;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_compare_left_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 275;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_compare_right_2 = const_tuple_type_tuple_type_list_tuple;
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    Py_DECREF( tmp_compare_left_2 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_left_name_1 = var_merged_statements;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "merged_statements" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 276;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_mergeStatements );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mergeStatements );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "mergeStatements" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 276;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = var_statement;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "statement" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 276;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = par_allow_none;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "allow_none" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 276;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    frame_bc3068dc32c0e8a95fe74aa573eaa0e2->m_frame.f_lineno = 276;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_5 = tmp_left_name_1;
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    var_merged_statements = tmp_assign_source_5;

    goto branch_end_3;
    branch_no_3:;
    tmp_called_instance_1 = var_statement;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "statement" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 277;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    frame_bc3068dc32c0e8a95fe74aa573eaa0e2->m_frame.f_lineno = 277;
    tmp_or_left_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_isStatement );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 277;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    Py_DECREF( tmp_or_left_value_1 );
    tmp_called_instance_2 = var_statement;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "statement" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 277;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    frame_bc3068dc32c0e8a95fe74aa573eaa0e2->m_frame.f_lineno = 277;
    tmp_or_right_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_isStatementsFrame );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_cond_value_2 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_2 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 277;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_source_name_1 = var_merged_statements;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "merged_statements" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 278;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = var_statement;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "statement" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 278;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    frame_bc3068dc32c0e8a95fe74aa573eaa0e2->m_frame.f_lineno = 278;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_4;
    branch_no_4:;
    tmp_called_instance_3 = var_statement;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "statement" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 279;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    frame_bc3068dc32c0e8a95fe74aa573eaa0e2->m_frame.f_lineno = 279;
    tmp_cond_value_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_isStatementsSequence );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 279;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_2 = var_merged_statements;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "merged_statements" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 280;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_extend );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_mergeStatements );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mergeStatements );
    }

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "mergeStatements" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 280;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_called_instance_4 = var_statement;

    if ( tmp_called_instance_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "statement" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 280;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    frame_bc3068dc32c0e8a95fe74aa573eaa0e2->m_frame.f_lineno = 280;
    tmp_args_element_name_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_getStatements );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 280;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    frame_bc3068dc32c0e8a95fe74aa573eaa0e2->m_frame.f_lineno = 280;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 280;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    frame_bc3068dc32c0e8a95fe74aa573eaa0e2->m_frame.f_lineno = 280;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_5;
    branch_no_5:;
    tmp_raise_type_1 = PyExc_AssertionError;
    tmp_tuple_element_1 = var_statement;

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "statement" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 282;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }

    tmp_raise_value_1 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_raise_value_1, 0, tmp_tuple_element_1 );
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_value = tmp_raise_value_1;
    exception_lineno = 282;
    RAISE_EXCEPTION_WITH_VALUE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto try_except_handler_2;
    branch_end_5:;
    branch_end_4:;
    branch_end_3:;
    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = var_merged_statements;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "merged_statements" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 284;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc3068dc32c0e8a95fe74aa573eaa0e2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc3068dc32c0e8a95fe74aa573eaa0e2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc3068dc32c0e8a95fe74aa573eaa0e2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bc3068dc32c0e8a95fe74aa573eaa0e2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bc3068dc32c0e8a95fe74aa573eaa0e2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bc3068dc32c0e8a95fe74aa573eaa0e2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bc3068dc32c0e8a95fe74aa573eaa0e2,
        type_description_1,
        par_statements,
        par_allow_none,
        var_merged_statements,
        var_statement
    );


    // Release cached frame.
    if ( frame_bc3068dc32c0e8a95fe74aa573eaa0e2 == cache_frame_bc3068dc32c0e8a95fe74aa573eaa0e2 )
    {
        Py_DECREF( frame_bc3068dc32c0e8a95fe74aa573eaa0e2 );
    }
    cache_frame_bc3068dc32c0e8a95fe74aa573eaa0e2 = NULL;

    assertFrameObject( frame_bc3068dc32c0e8a95fe74aa573eaa0e2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_10_mergeStatements );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_statements );
    par_statements = NULL;

    Py_XDECREF( par_allow_none );
    par_allow_none = NULL;

    Py_XDECREF( var_merged_statements );
    var_merged_statements = NULL;

    Py_XDECREF( var_statement );
    var_statement = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_statements );
    par_statements = NULL;

    Py_XDECREF( par_allow_none );
    par_allow_none = NULL;

    Py_XDECREF( var_merged_statements );
    var_merged_statements = NULL;

    Py_XDECREF( var_statement );
    var_statement = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_10_mergeStatements );
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


static PyObject *impl_nodes$NodeMakingHelpers$$$function_11_makeStatementsSequenceReplacementNode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_statements = python_pars[ 0 ];
    PyObject *par_node = python_pars[ 1 ];
    PyObject *var_StatementsSequence = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_a333810d9b2d3037702e9d1db4fde0e2 = NULL;

    struct Nuitka_FrameObject *frame_a333810d9b2d3037702e9d1db4fde0e2;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a333810d9b2d3037702e9d1db4fde0e2, codeobj_a333810d9b2d3037702e9d1db4fde0e2, module_nodes$NodeMakingHelpers, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a333810d9b2d3037702e9d1db4fde0e2 = cache_frame_a333810d9b2d3037702e9d1db4fde0e2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a333810d9b2d3037702e9d1db4fde0e2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a333810d9b2d3037702e9d1db4fde0e2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_plain_StatementNodes;
    tmp_globals_name_1 = (PyObject *)moduledict_nodes$NodeMakingHelpers;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_StatementsSequence_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_a333810d9b2d3037702e9d1db4fde0e2->m_frame.f_lineno = 288;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_StatementsSequence,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_StatementsSequence );
    }

    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    assert( var_StatementsSequence == NULL );
    var_StatementsSequence = tmp_assign_source_1;

    tmp_called_name_1 = var_StatementsSequence;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_dict_key_1 = const_str_plain_statements;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_mergeStatements );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mergeStatements );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "mergeStatements" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 291;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_statements;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "statements" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 291;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_a333810d9b2d3037702e9d1db4fde0e2->m_frame.f_lineno = 291;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_source_ref;
    tmp_called_instance_1 = par_node;

    if ( tmp_called_instance_1 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 292;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    frame_a333810d9b2d3037702e9d1db4fde0e2->m_frame.f_lineno = 292;
    tmp_dict_value_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getSourceReference );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 292;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_a333810d9b2d3037702e9d1db4fde0e2->m_frame.f_lineno = 290;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a333810d9b2d3037702e9d1db4fde0e2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a333810d9b2d3037702e9d1db4fde0e2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a333810d9b2d3037702e9d1db4fde0e2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a333810d9b2d3037702e9d1db4fde0e2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a333810d9b2d3037702e9d1db4fde0e2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a333810d9b2d3037702e9d1db4fde0e2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a333810d9b2d3037702e9d1db4fde0e2,
        type_description_1,
        par_statements,
        par_node,
        var_StatementsSequence
    );


    // Release cached frame.
    if ( frame_a333810d9b2d3037702e9d1db4fde0e2 == cache_frame_a333810d9b2d3037702e9d1db4fde0e2 )
    {
        Py_DECREF( frame_a333810d9b2d3037702e9d1db4fde0e2 );
    }
    cache_frame_a333810d9b2d3037702e9d1db4fde0e2 = NULL;

    assertFrameObject( frame_a333810d9b2d3037702e9d1db4fde0e2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_11_makeStatementsSequenceReplacementNode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_statements );
    par_statements = NULL;

    Py_XDECREF( par_node );
    par_node = NULL;

    Py_XDECREF( var_StatementsSequence );
    var_StatementsSequence = NULL;

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

    Py_XDECREF( par_statements );
    par_statements = NULL;

    Py_XDECREF( par_node );
    par_node = NULL;

    Py_XDECREF( var_StatementsSequence );
    var_StatementsSequence = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_11_makeStatementsSequenceReplacementNode );
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


static PyObject *impl_nodes$NodeMakingHelpers$$$function_12_convertNoneConstantToNone( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_node = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    bool tmp_is_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_d217641363bd8668603e527eff029e4d = NULL;

    struct Nuitka_FrameObject *frame_d217641363bd8668603e527eff029e4d;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d217641363bd8668603e527eff029e4d, codeobj_d217641363bd8668603e527eff029e4d, module_nodes$NodeMakingHelpers, sizeof(void *) );
    frame_d217641363bd8668603e527eff029e4d = cache_frame_d217641363bd8668603e527eff029e4d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d217641363bd8668603e527eff029e4d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d217641363bd8668603e527eff029e4d ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_node;

    CHECK_OBJECT( tmp_compare_left_1 );
    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_called_instance_1 = par_node;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 299;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_d217641363bd8668603e527eff029e4d->m_frame.f_lineno = 299;
    tmp_and_left_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_isExpressionConstantRef );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 299;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    Py_DECREF( tmp_and_left_value_1 );
    tmp_called_instance_2 = par_node;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 299;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    frame_d217641363bd8668603e527eff029e4d->m_frame.f_lineno = 299;
    tmp_compexpr_left_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_getConstant );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = Py_None;
    tmp_and_right_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_INCREF( tmp_and_right_value_1 );
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 299;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_return_value = par_node;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 302;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d217641363bd8668603e527eff029e4d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d217641363bd8668603e527eff029e4d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d217641363bd8668603e527eff029e4d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d217641363bd8668603e527eff029e4d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d217641363bd8668603e527eff029e4d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d217641363bd8668603e527eff029e4d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d217641363bd8668603e527eff029e4d,
        type_description_1,
        par_node
    );


    // Release cached frame.
    if ( frame_d217641363bd8668603e527eff029e4d == cache_frame_d217641363bd8668603e527eff029e4d )
    {
        Py_DECREF( frame_d217641363bd8668603e527eff029e4d );
    }
    cache_frame_d217641363bd8668603e527eff029e4d = NULL;

    assertFrameObject( frame_d217641363bd8668603e527eff029e4d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_12_convertNoneConstantToNone );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_node );
    par_node = NULL;

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

    Py_XDECREF( par_node );
    par_node = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_12_convertNoneConstantToNone );
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


static PyObject *impl_nodes$NodeMakingHelpers$$$function_13_wrapExpressionWithSideEffects( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_side_effects = python_pars[ 0 ];
    PyObject *par_old_node = python_pars[ 1 ];
    PyObject *par_new_node = python_pars[ 2 ];
    PyObject *var_ExpressionSideEffects = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_sum_sequence_1;
    PyObject *tmp_sum_start_1;
    static struct Nuitka_FrameObject *cache_frame_b5ff6d285d1d8171d051b3e9c06bdacd = NULL;

    struct Nuitka_FrameObject *frame_b5ff6d285d1d8171d051b3e9c06bdacd;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b5ff6d285d1d8171d051b3e9c06bdacd, codeobj_b5ff6d285d1d8171d051b3e9c06bdacd, module_nodes$NodeMakingHelpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b5ff6d285d1d8171d051b3e9c06bdacd = cache_frame_b5ff6d285d1d8171d051b3e9c06bdacd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b5ff6d285d1d8171d051b3e9c06bdacd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b5ff6d285d1d8171d051b3e9c06bdacd ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_new_node;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_b5ff6d285d1d8171d051b3e9c06bdacd->m_frame.f_lineno = 306;
    tmp_cond_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_isExpression );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 306;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 306;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_raise_type_1 = PyExc_AssertionError;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 306;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooo";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_name_name_1 = const_str_plain_SideEffectNodes;
    tmp_globals_name_1 = (PyObject *)moduledict_nodes$NodeMakingHelpers;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_ExpressionSideEffects_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_b5ff6d285d1d8171d051b3e9c06bdacd->m_frame.f_lineno = 308;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_ExpressionSideEffects,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_ExpressionSideEffects );
    }

    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_ExpressionSideEffects == NULL );
    var_ExpressionSideEffects = tmp_assign_source_1;

    tmp_cond_value_2 = par_side_effects;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "side_effects" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 310;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_iter_arg_1 = par_side_effects;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "side_effects" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 315;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_genexpr_1__$0 == NULL );
    tmp_genexpr_1__$0 = tmp_assign_source_3;

    // Tried code:
    tmp_outline_return_value_1 = Nuitka_Generator_New(
        nodes$NodeMakingHelpers$$$function_13_wrapExpressionWithSideEffects$$$genexpr_1_genexpr_context,
        module_nodes$NodeMakingHelpers,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_746e1460ca3ddd70925cc0971462146f,
#endif
        codeobj_6017e5188c1404b342fc826496e4ae62,
        1
    );

    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );
    assert( Py_SIZE( tmp_outline_return_value_1 ) >= 1 ); 


    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_13_wrapExpressionWithSideEffects );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
    Py_DECREF( tmp_genexpr_1__$0 );
    tmp_genexpr_1__$0 = NULL;

    goto outline_result_1;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
    Py_DECREF( tmp_genexpr_1__$0 );
    tmp_genexpr_1__$0 = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_13_wrapExpressionWithSideEffects );
    return NULL;
    outline_result_1:;
    tmp_sum_sequence_1 = tmp_outline_return_value_1;
    tmp_sum_start_1 = const_tuple_empty;
    tmp_assign_source_2 = BUILTIN_SUM2( tmp_sum_sequence_1, tmp_sum_start_1 );
    Py_DECREF( tmp_sum_sequence_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_side_effects;
        par_side_effects = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_cond_value_3 = par_side_effects;

    CHECK_OBJECT( tmp_cond_value_3 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_1 = var_ExpressionSideEffects;

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ExpressionSideEffects" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 322;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_expression;
    tmp_dict_value_1 = par_new_node;

    if ( tmp_dict_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 323;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_side_effects;
    tmp_dict_value_2 = par_side_effects;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_source_ref;
    tmp_called_instance_2 = par_old_node;

    if ( tmp_called_instance_2 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "old_node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 325;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    frame_b5ff6d285d1d8171d051b3e9c06bdacd->m_frame.f_lineno = 325;
    tmp_dict_value_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_getSourceReference );
    if ( tmp_dict_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 325;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    Py_DECREF( tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_b5ff6d285d1d8171d051b3e9c06bdacd->m_frame.f_lineno = 322;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 322;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_new_node;
        par_new_node = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    branch_no_3:;
    branch_no_2:;
    tmp_return_value = par_new_node;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 328;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b5ff6d285d1d8171d051b3e9c06bdacd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b5ff6d285d1d8171d051b3e9c06bdacd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b5ff6d285d1d8171d051b3e9c06bdacd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b5ff6d285d1d8171d051b3e9c06bdacd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b5ff6d285d1d8171d051b3e9c06bdacd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b5ff6d285d1d8171d051b3e9c06bdacd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b5ff6d285d1d8171d051b3e9c06bdacd,
        type_description_1,
        par_side_effects,
        par_old_node,
        par_new_node,
        var_ExpressionSideEffects
    );


    // Release cached frame.
    if ( frame_b5ff6d285d1d8171d051b3e9c06bdacd == cache_frame_b5ff6d285d1d8171d051b3e9c06bdacd )
    {
        Py_DECREF( frame_b5ff6d285d1d8171d051b3e9c06bdacd );
    }
    cache_frame_b5ff6d285d1d8171d051b3e9c06bdacd = NULL;

    assertFrameObject( frame_b5ff6d285d1d8171d051b3e9c06bdacd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_13_wrapExpressionWithSideEffects );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_side_effects );
    par_side_effects = NULL;

    Py_XDECREF( par_old_node );
    par_old_node = NULL;

    Py_XDECREF( par_new_node );
    par_new_node = NULL;

    Py_XDECREF( var_ExpressionSideEffects );
    var_ExpressionSideEffects = NULL;

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

    Py_XDECREF( par_side_effects );
    par_side_effects = NULL;

    Py_XDECREF( par_old_node );
    par_old_node = NULL;

    Py_XDECREF( par_new_node );
    par_new_node = NULL;

    Py_XDECREF( var_ExpressionSideEffects );
    var_ExpressionSideEffects = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_13_wrapExpressionWithSideEffects );
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



#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct nodes$NodeMakingHelpers$$$function_13_wrapExpressionWithSideEffects$$$genexpr_1_genexpr_locals {
    PyObject *var_side_effect
    PyObject *tmp_iter_value_0
    PyObject *exception_type
    PyObject *exception_value
    PyTracebackObject *exception_tb
    int exception_lineno
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_value_name_1;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *nodes$NodeMakingHelpers$$$function_13_wrapExpressionWithSideEffects$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void nodes$NodeMakingHelpers$$$function_13_wrapExpressionWithSideEffects$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_side_effect = NULL;
    PyObject *tmp_iter_value_0 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_6017e5188c1404b342fc826496e4ae62, module_nodes$NodeMakingHelpers, sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_frame_generator;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.

    PyThreadState *thread_state = PyThreadState_GET();

#if PYTHON_VERSION < 370
    generator->m_frame->m_frame.f_exc_type = EXC_TYPE( thread_state );
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = EXC_VALUE( thread_state );
    Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = EXC_TRACEBACK( thread_state );
    Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#else
    generator->m_exc_state.exc_type = EXC_TYPE( thread_state );
    if ( generator->m_exc_state.exc_type == Py_None ) generator->m_exc_state.exc_type = NULL;
    Py_XINCREF( generator->m_exc_state.exc_type );
    generator->m_exc_state.exc_value = EXC_VALUE( thread_state );
    Py_XINCREF( generator->m_exc_state.exc_value );
    generator->m_exc_state.exc_traceback = EXC_TRACEBACK( thread_state );
    Py_XINCREF( generator->m_exc_state.exc_traceback );

#endif

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    // Tried code:
    if ( generator->m_closure[0] == NULL )
    {
        tmp_value_name_1 = NULL;
    }
    else
    {
        tmp_value_name_1 = PyCell_GET( generator->m_closure[0] );
    }

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_1 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "No";
        exception_lineno = 313;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_iter_value_0;
        tmp_iter_value_0 = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_1 = exception_keeper_type_1;
    tmp_compare_right_1 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 313;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_1;
    branch_no_1:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    branch_end_1:;
    // End of try:
    try_end_1:;
    tmp_assign_source_2 = tmp_iter_value_0;

    CHECK_OBJECT( tmp_assign_source_2 );
    {
        PyObject *old = var_side_effect;
        var_side_effect = tmp_assign_source_2;
        Py_INCREF( var_side_effect );
        Py_XDECREF( old );
    }

    tmp_called_instance_1 = var_side_effect;

    CHECK_OBJECT( tmp_called_instance_1 );
    generator->m_frame->m_frame.f_lineno = 316;
    tmp_cond_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_mayHaveSideEffects );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 316;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 316;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_instance_2 = var_side_effect;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "side_effect" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 313;
        type_description_1 = "No";
        goto try_except_handler_2;
    }

    generator->m_frame->m_frame.f_lineno = 313;
    tmp_expression_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_extractSideEffects );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;
        type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( exception_type ) )
    {
        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, generator->m_frame, exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            type_description_1,
            NULL,
            var_side_effect
        );


        // Release cached frame.
        if ( generator->m_frame == cache_frame_generator )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_frame_generator = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    goto try_end_3;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_side_effect );
    var_side_effect = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    Py_XDECREF( var_side_effect );
    var_side_effect = NULL;


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

    function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

}


static PyObject *impl_nodes$NodeMakingHelpers$$$function_14_wrapExpressionWithNodeSideEffects( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_new_node = python_pars[ 0 ];
    PyObject *par_old_node = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_eedadd114a75b5b9f703bcac0e7a5f32 = NULL;

    struct Nuitka_FrameObject *frame_eedadd114a75b5b9f703bcac0e7a5f32;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_eedadd114a75b5b9f703bcac0e7a5f32, codeobj_eedadd114a75b5b9f703bcac0e7a5f32, module_nodes$NodeMakingHelpers, sizeof(void *)+sizeof(void *) );
    frame_eedadd114a75b5b9f703bcac0e7a5f32 = cache_frame_eedadd114a75b5b9f703bcac0e7a5f32;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_eedadd114a75b5b9f703bcac0e7a5f32 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_eedadd114a75b5b9f703bcac0e7a5f32 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_wrapExpressionWithSideEffects );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wrapExpressionWithSideEffects );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "wrapExpressionWithSideEffects" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 331;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_side_effects;
    tmp_called_instance_1 = par_old_node;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_eedadd114a75b5b9f703bcac0e7a5f32->m_frame.f_lineno = 332;
    tmp_dict_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_extractSideEffects );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 332;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_old_node;
    tmp_dict_value_2 = par_old_node;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "old_node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 333;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_new_node;
    tmp_dict_value_3 = par_new_node;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 334;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_eedadd114a75b5b9f703bcac0e7a5f32->m_frame.f_lineno = 331;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eedadd114a75b5b9f703bcac0e7a5f32 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_eedadd114a75b5b9f703bcac0e7a5f32 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eedadd114a75b5b9f703bcac0e7a5f32 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_eedadd114a75b5b9f703bcac0e7a5f32, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_eedadd114a75b5b9f703bcac0e7a5f32->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_eedadd114a75b5b9f703bcac0e7a5f32, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_eedadd114a75b5b9f703bcac0e7a5f32,
        type_description_1,
        par_new_node,
        par_old_node
    );


    // Release cached frame.
    if ( frame_eedadd114a75b5b9f703bcac0e7a5f32 == cache_frame_eedadd114a75b5b9f703bcac0e7a5f32 )
    {
        Py_DECREF( frame_eedadd114a75b5b9f703bcac0e7a5f32 );
    }
    cache_frame_eedadd114a75b5b9f703bcac0e7a5f32 = NULL;

    assertFrameObject( frame_eedadd114a75b5b9f703bcac0e7a5f32 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_14_wrapExpressionWithNodeSideEffects );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_new_node );
    par_new_node = NULL;

    Py_XDECREF( par_old_node );
    par_old_node = NULL;

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

    Py_XDECREF( par_new_node );
    par_new_node = NULL;

    Py_XDECREF( par_old_node );
    par_old_node = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_14_wrapExpressionWithNodeSideEffects );
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


static PyObject *impl_nodes$NodeMakingHelpers$$$function_15_wrapStatementWithSideEffects( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_new_node = python_pars[ 0 ];
    PyObject *par_old_node = python_pars[ 1 ];
    PyObject *par_allow_none = python_pars[ 2 ];
    PyObject *var_side_effects = NULL;
    struct Nuitka_CellObject *var_StatementExpressionOnly = PyCell_EMPTY();
    PyObject *tmp_genexpr_1__$0 = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_tuple_arg_1;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_161350aa224d6e2f035ff3af003347df = NULL;

    struct Nuitka_FrameObject *frame_161350aa224d6e2f035ff3af003347df;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_161350aa224d6e2f035ff3af003347df, codeobj_161350aa224d6e2f035ff3af003347df, module_nodes$NodeMakingHelpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_161350aa224d6e2f035ff3af003347df = cache_frame_161350aa224d6e2f035ff3af003347df;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_161350aa224d6e2f035ff3af003347df );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_161350aa224d6e2f035ff3af003347df ) == 2 ); // Frame stack

    // Framed code:
    tmp_compexpr_left_1 = par_new_node;

    CHECK_OBJECT( tmp_compexpr_left_1 );
    tmp_compexpr_right_1 = Py_None;
    tmp_or_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 != tmp_compexpr_right_1 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    assert( !(tmp_or_left_truth_1 == -1) );
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_or_right_value_1 = par_allow_none;

    if ( tmp_or_right_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "allow_none" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 338;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 338;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_raise_type_1 = PyExc_AssertionError;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 338;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooc";
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_instance_1 = par_old_node;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "old_node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 340;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }

    frame_161350aa224d6e2f035ff3af003347df->m_frame.f_lineno = 340;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_extractSideEffects );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 340;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }
    assert( var_side_effects == NULL );
    var_side_effects = tmp_assign_source_1;

    tmp_cond_value_2 = var_side_effects;

    CHECK_OBJECT( tmp_cond_value_2 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 342;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_name_name_1 = const_str_plain_StatementNodes;
    tmp_globals_name_1 = (PyObject *)moduledict_nodes$NodeMakingHelpers;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_StatementExpressionOnly_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_161350aa224d6e2f035ff3af003347df->m_frame.f_lineno = 343;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_StatementExpressionOnly,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_StatementExpressionOnly );
    }

    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }
    assert( PyCell_GET( var_StatementExpressionOnly ) == NULL );
    PyCell_SET( var_StatementExpressionOnly, tmp_assign_source_2 );

    tmp_iter_arg_1 = var_side_effects;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "side_effects" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 350;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 346;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }
    assert( tmp_genexpr_1__$0 == NULL );
    tmp_genexpr_1__$0 = tmp_assign_source_4;

    // Tried code:
    tmp_outline_return_value_1 = Nuitka_Generator_New(
        nodes$NodeMakingHelpers$$$function_15_wrapStatementWithSideEffects$$$genexpr_1_genexpr_context,
        module_nodes$NodeMakingHelpers,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_acbb0751f6daaa0be40f57d59b52c3bd,
#endif
        codeobj_150260cf87db8bb0c2f2d3606d56702c,
        2
    );

    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[0] = var_StatementExpressionOnly;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[1] = PyCell_NEW0( tmp_genexpr_1__$0 );
    assert( Py_SIZE( tmp_outline_return_value_1 ) >= 2 ); 


    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_15_wrapStatementWithSideEffects );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
    Py_DECREF( tmp_genexpr_1__$0 );
    tmp_genexpr_1__$0 = NULL;

    goto outline_result_1;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
    Py_DECREF( tmp_genexpr_1__$0 );
    tmp_genexpr_1__$0 = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_15_wrapStatementWithSideEffects );
    return NULL;
    outline_result_1:;
    tmp_tuple_arg_1 = tmp_outline_return_value_1;
    tmp_assign_source_3 = PySequence_Tuple( tmp_tuple_arg_1 );
    Py_DECREF( tmp_tuple_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_side_effects;
        var_side_effects = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = par_new_node;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 353;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_makeStatementsSequenceReplacementNode );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_makeStatementsSequenceReplacementNode );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "makeStatementsSequenceReplacementNode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 354;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_statements;
    tmp_left_name_1 = var_side_effects;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "side_effects" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 355;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = par_new_node;

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 355;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_dict_value_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 355;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_node;
    tmp_dict_value_2 = par_old_node;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "old_node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 356;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_161350aa224d6e2f035ff3af003347df->m_frame.f_lineno = 354;
    tmp_assign_source_5 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 354;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_new_node;
        par_new_node = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    goto branch_end_3;
    branch_no_3:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_makeStatementsSequenceReplacementNode );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_makeStatementsSequenceReplacementNode );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "makeStatementsSequenceReplacementNode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 359;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = const_str_plain_statements;
    tmp_dict_value_3 = var_side_effects;

    if ( tmp_dict_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "side_effects" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 360;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_2 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_node;
    tmp_dict_value_4 = par_old_node;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "old_node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 361;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    frame_161350aa224d6e2f035ff3af003347df->m_frame.f_lineno = 359;
    tmp_assign_source_6 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 359;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_new_node;
        par_new_node = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    branch_end_3:;
    branch_no_2:;
    tmp_return_value = par_new_node;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "new_node" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 364;
        type_description_1 = "ooooc";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_161350aa224d6e2f035ff3af003347df );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_161350aa224d6e2f035ff3af003347df );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_161350aa224d6e2f035ff3af003347df );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_161350aa224d6e2f035ff3af003347df, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_161350aa224d6e2f035ff3af003347df->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_161350aa224d6e2f035ff3af003347df, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_161350aa224d6e2f035ff3af003347df,
        type_description_1,
        par_new_node,
        par_old_node,
        par_allow_none,
        var_side_effects,
        var_StatementExpressionOnly
    );


    // Release cached frame.
    if ( frame_161350aa224d6e2f035ff3af003347df == cache_frame_161350aa224d6e2f035ff3af003347df )
    {
        Py_DECREF( frame_161350aa224d6e2f035ff3af003347df );
    }
    cache_frame_161350aa224d6e2f035ff3af003347df = NULL;

    assertFrameObject( frame_161350aa224d6e2f035ff3af003347df );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_15_wrapStatementWithSideEffects );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_new_node );
    par_new_node = NULL;

    Py_XDECREF( par_old_node );
    par_old_node = NULL;

    Py_XDECREF( par_allow_none );
    par_allow_none = NULL;

    Py_XDECREF( var_side_effects );
    var_side_effects = NULL;

    CHECK_OBJECT( (PyObject *)var_StatementExpressionOnly );
    Py_DECREF( var_StatementExpressionOnly );
    var_StatementExpressionOnly = NULL;

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

    Py_XDECREF( par_new_node );
    par_new_node = NULL;

    Py_XDECREF( par_old_node );
    par_old_node = NULL;

    Py_XDECREF( par_allow_none );
    par_allow_none = NULL;

    Py_XDECREF( var_side_effects );
    var_side_effects = NULL;

    CHECK_OBJECT( (PyObject *)var_StatementExpressionOnly );
    Py_DECREF( var_StatementExpressionOnly );
    var_StatementExpressionOnly = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_15_wrapStatementWithSideEffects );
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



#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct nodes$NodeMakingHelpers$$$function_15_wrapStatementWithSideEffects$$$genexpr_1_genexpr_locals {
    PyObject *var_side_effect
    PyObject *tmp_iter_value_0
    PyObject *exception_type
    PyObject *exception_value
    PyTracebackObject *exception_tb
    int exception_lineno
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_value_name_1;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *nodes$NodeMakingHelpers$$$function_15_wrapStatementWithSideEffects$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void nodes$NodeMakingHelpers$$$function_15_wrapStatementWithSideEffects$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_side_effect = NULL;
    PyObject *tmp_iter_value_0 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_150260cf87db8bb0c2f2d3606d56702c, module_nodes$NodeMakingHelpers, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_frame_generator;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.

    PyThreadState *thread_state = PyThreadState_GET();

#if PYTHON_VERSION < 370
    generator->m_frame->m_frame.f_exc_type = EXC_TYPE( thread_state );
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = EXC_VALUE( thread_state );
    Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = EXC_TRACEBACK( thread_state );
    Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#else
    generator->m_exc_state.exc_type = EXC_TYPE( thread_state );
    if ( generator->m_exc_state.exc_type == Py_None ) generator->m_exc_state.exc_type = NULL;
    Py_XINCREF( generator->m_exc_state.exc_type );
    generator->m_exc_state.exc_value = EXC_VALUE( thread_state );
    Py_XINCREF( generator->m_exc_state.exc_value );
    generator->m_exc_state.exc_traceback = EXC_TRACEBACK( thread_state );
    Py_XINCREF( generator->m_exc_state.exc_traceback );

#endif

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    // Tried code:
    if ( generator->m_closure[1] == NULL )
    {
        tmp_value_name_1 = NULL;
    }
    else
    {
        tmp_value_name_1 = PyCell_GET( generator->m_closure[1] );
    }

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_1 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "Noc";
        exception_lineno = 346;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_iter_value_0;
        tmp_iter_value_0 = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_1 = exception_keeper_type_1;
    tmp_compare_right_1 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 346;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_1;
    branch_no_1:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    branch_end_1:;
    // End of try:
    try_end_1:;
    tmp_assign_source_2 = tmp_iter_value_0;

    CHECK_OBJECT( tmp_assign_source_2 );
    {
        PyObject *old = var_side_effect;
        var_side_effect = tmp_assign_source_2;
        Py_INCREF( var_side_effect );
        Py_XDECREF( old );
    }

    if ( generator->m_closure[0] == NULL )
    {
        tmp_called_name_1 = NULL;
    }
    else
    {
        tmp_called_name_1 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "StatementExpressionOnly" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 346;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }

    tmp_dict_key_1 = const_str_plain_expression;
    tmp_dict_value_1 = var_side_effect;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_source_ref;
    tmp_called_instance_1 = var_side_effect;

    CHECK_OBJECT( tmp_called_instance_1 );
    generator->m_frame->m_frame.f_lineno = 348;
    tmp_dict_value_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getSourceReference );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 348;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    generator->m_frame->m_frame.f_lineno = 346;
    tmp_expression_name_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 346;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 346;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 346;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( exception_type ) )
    {
        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, generator->m_frame, exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            type_description_1,
            NULL,
            var_side_effect,
            generator->m_closure[0]
        );


        // Release cached frame.
        if ( generator->m_frame == cache_frame_generator )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_frame_generator = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    goto try_end_3;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_side_effect );
    var_side_effect = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    Py_XDECREF( var_side_effect );
    var_side_effect = NULL;


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

    function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

}


static PyObject *impl_nodes$NodeMakingHelpers$$$function_16_makeStatementOnlyNodesFromExpressions( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_expressions = python_pars[ 0 ];
    struct Nuitka_CellObject *var_StatementExpressionOnly = PyCell_EMPTY();
    PyObject *var_StatementsSequence = NULL;
    PyObject *var_statements = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_arg_1;
    static struct Nuitka_FrameObject *cache_frame_4cc7287bc9b7ce163b4f6ed91c4f780c = NULL;

    struct Nuitka_FrameObject *frame_4cc7287bc9b7ce163b4f6ed91c4f780c;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4cc7287bc9b7ce163b4f6ed91c4f780c, codeobj_4cc7287bc9b7ce163b4f6ed91c4f780c, module_nodes$NodeMakingHelpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4cc7287bc9b7ce163b4f6ed91c4f780c = cache_frame_4cc7287bc9b7ce163b4f6ed91c4f780c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4cc7287bc9b7ce163b4f6ed91c4f780c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4cc7287bc9b7ce163b4f6ed91c4f780c ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_plain_StatementNodes;
    tmp_globals_name_1 = (PyObject *)moduledict_nodes$NodeMakingHelpers;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_265410dee0aa81cd9374e5ac00a072ab_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_4cc7287bc9b7ce163b4f6ed91c4f780c->m_frame.f_lineno = 367;
    tmp_assign_source_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        type_description_1 = "ocoo";
        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_1;

    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_StatementExpressionOnly,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_StatementExpressionOnly );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        type_description_1 = "ocoo";
        goto try_except_handler_2;
    }
    assert( PyCell_GET( var_StatementExpressionOnly ) == NULL );
    PyCell_SET( var_StatementExpressionOnly, tmp_assign_source_2 );

    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    if ( PyModule_Check( tmp_import_name_from_2 ) )
    {
       tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_2,
            (PyObject *)MODULE_DICT(tmp_import_name_from_2),
            const_str_plain_StatementsSequence,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_StatementsSequence );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        type_description_1 = "ocoo";
        goto try_except_handler_2;
    }
    assert( var_StatementsSequence == NULL );
    var_StatementsSequence = tmp_assign_source_3;

    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
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

    tmp_iter_arg_1 = par_expressions;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "expressions" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 374;
        type_description_1 = "ocoo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;
        type_description_1 = "ocoo";
        goto frame_exception_exit_1;
    }
    assert( tmp_genexpr_1__$0 == NULL );
    tmp_genexpr_1__$0 = tmp_assign_source_5;

    // Tried code:
    tmp_outline_return_value_1 = Nuitka_Generator_New(
        nodes$NodeMakingHelpers$$$function_16_makeStatementOnlyNodesFromExpressions$$$genexpr_1_genexpr_context,
        module_nodes$NodeMakingHelpers,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        const_str_digest_36951842fb24f37a99d053260736977e,
#endif
        codeobj_1310a9a89f984f20cc7cfe7142a289bb,
        2
    );

    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[0] = var_StatementExpressionOnly;
    Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[0] );
    ((struct Nuitka_GeneratorObject *)tmp_outline_return_value_1)->m_closure[1] = PyCell_NEW0( tmp_genexpr_1__$0 );
    assert( Py_SIZE( tmp_outline_return_value_1 ) >= 2 ); 


    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_16_makeStatementOnlyNodesFromExpressions );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
    Py_DECREF( tmp_genexpr_1__$0 );
    tmp_genexpr_1__$0 = NULL;

    goto outline_result_1;
    // End of try:
    CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
    Py_DECREF( tmp_genexpr_1__$0 );
    tmp_genexpr_1__$0 = NULL;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_16_makeStatementOnlyNodesFromExpressions );
    return NULL;
    outline_result_1:;
    tmp_tuple_arg_1 = tmp_outline_return_value_1;
    tmp_assign_source_4 = PySequence_Tuple( tmp_tuple_arg_1 );
    Py_DECREF( tmp_tuple_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 369;
        type_description_1 = "ocoo";
        goto frame_exception_exit_1;
    }
    assert( var_statements == NULL );
    var_statements = tmp_assign_source_4;

    tmp_cond_value_1 = var_statements;

    CHECK_OBJECT( tmp_cond_value_1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 377;
        type_description_1 = "ocoo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_len_arg_1 = var_statements;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "statements" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 379;
        type_description_1 = "ocoo";
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 379;
        type_description_1 = "ocoo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_1;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 379;
        type_description_1 = "ocoo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_subscribed_name_1 = var_statements;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "statements" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 380;
        type_description_1 = "ocoo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 380;
        type_description_1 = "ocoo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_called_name_1 = var_StatementsSequence;

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "StatementsSequence" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 382;
        type_description_1 = "ocoo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_statements;
    tmp_dict_value_1 = var_statements;

    if ( tmp_dict_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "statements" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 383;
        type_description_1 = "ocoo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_source_ref;
    tmp_subscribed_name_2 = var_statements;

    if ( tmp_subscribed_name_2 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "statements" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 384;
        type_description_1 = "ocoo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_2 = const_int_0;
    tmp_called_instance_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 384;
        type_description_1 = "ocoo";
        goto frame_exception_exit_1;
    }
    frame_4cc7287bc9b7ce163b4f6ed91c4f780c->m_frame.f_lineno = 384;
    tmp_dict_value_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getSourceReference );
    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 384;
        type_description_1 = "ocoo";
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_4cc7287bc9b7ce163b4f6ed91c4f780c->m_frame.f_lineno = 382;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 382;
        type_description_1 = "ocoo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_2:;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4cc7287bc9b7ce163b4f6ed91c4f780c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4cc7287bc9b7ce163b4f6ed91c4f780c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4cc7287bc9b7ce163b4f6ed91c4f780c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4cc7287bc9b7ce163b4f6ed91c4f780c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4cc7287bc9b7ce163b4f6ed91c4f780c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4cc7287bc9b7ce163b4f6ed91c4f780c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4cc7287bc9b7ce163b4f6ed91c4f780c,
        type_description_1,
        par_expressions,
        var_StatementExpressionOnly,
        var_StatementsSequence,
        var_statements
    );


    // Release cached frame.
    if ( frame_4cc7287bc9b7ce163b4f6ed91c4f780c == cache_frame_4cc7287bc9b7ce163b4f6ed91c4f780c )
    {
        Py_DECREF( frame_4cc7287bc9b7ce163b4f6ed91c4f780c );
    }
    cache_frame_4cc7287bc9b7ce163b4f6ed91c4f780c = NULL;

    assertFrameObject( frame_4cc7287bc9b7ce163b4f6ed91c4f780c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_16_makeStatementOnlyNodesFromExpressions );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_expressions );
    par_expressions = NULL;

    CHECK_OBJECT( (PyObject *)var_StatementExpressionOnly );
    Py_DECREF( var_StatementExpressionOnly );
    var_StatementExpressionOnly = NULL;

    Py_XDECREF( var_StatementsSequence );
    var_StatementsSequence = NULL;

    Py_XDECREF( var_statements );
    var_statements = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_expressions );
    par_expressions = NULL;

    CHECK_OBJECT( (PyObject *)var_StatementExpressionOnly );
    Py_DECREF( var_StatementExpressionOnly );
    var_StatementExpressionOnly = NULL;

    Py_XDECREF( var_StatementsSequence );
    var_StatementsSequence = NULL;

    Py_XDECREF( var_statements );
    var_statements = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_16_makeStatementOnlyNodesFromExpressions );
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



#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
struct nodes$NodeMakingHelpers$$$function_16_makeStatementOnlyNodesFromExpressions$$$genexpr_1_genexpr_locals {
    PyObject *var_expression
    PyObject *tmp_iter_value_0
    PyObject *exception_type
    PyObject *exception_value
    PyTracebackObject *exception_tb
    int exception_lineno
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_value_name_1;
    char const *type_description_1
};
#endif

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
static PyObject *nodes$NodeMakingHelpers$$$function_16_makeStatementOnlyNodesFromExpressions$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
#else
static void nodes$NodeMakingHelpers$$$function_16_makeStatementOnlyNodesFromExpressions$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator )
#endif
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_expression = NULL;
    PyObject *tmp_iter_value_0 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_generator = NULL;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Dispatch to yield based on return label index:


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_1310a9a89f984f20cc7cfe7142a289bb, module_nodes$NodeMakingHelpers, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_frame_generator;

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( generator->m_frame );
    assert( Py_REFCNT( generator->m_frame ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    generator->m_frame->m_frame.f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->m_frame.f_back );

    generator->m_frame->m_frame.f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->m_frame.f_back );

    PyThreadState_GET()->frame = &generator->m_frame->m_frame;
    Py_INCREF( generator->m_frame );

    Nuitka_Frame_MarkAsExecuting( generator->m_frame );

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.

    PyThreadState *thread_state = PyThreadState_GET();

#if PYTHON_VERSION < 370
    generator->m_frame->m_frame.f_exc_type = EXC_TYPE( thread_state );
    if ( generator->m_frame->m_frame.f_exc_type == Py_None ) generator->m_frame->m_frame.f_exc_type = NULL;
    Py_XINCREF( generator->m_frame->m_frame.f_exc_type );
    generator->m_frame->m_frame.f_exc_value = EXC_VALUE( thread_state );
    Py_XINCREF( generator->m_frame->m_frame.f_exc_value );
    generator->m_frame->m_frame.f_exc_traceback = EXC_TRACEBACK( thread_state );
    Py_XINCREF( generator->m_frame->m_frame.f_exc_traceback );
#else
    generator->m_exc_state.exc_type = EXC_TYPE( thread_state );
    if ( generator->m_exc_state.exc_type == Py_None ) generator->m_exc_state.exc_type = NULL;
    Py_XINCREF( generator->m_exc_state.exc_type );
    generator->m_exc_state.exc_value = EXC_VALUE( thread_state );
    Py_XINCREF( generator->m_exc_state.exc_value );
    generator->m_exc_state.exc_traceback = EXC_TRACEBACK( thread_state );
    Py_XINCREF( generator->m_exc_state.exc_traceback );

#endif

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    // Tried code:
    if ( generator->m_closure[1] == NULL )
    {
        tmp_value_name_1 = NULL;
    }
    else
    {
        tmp_value_name_1 = PyCell_GET( generator->m_closure[1] );
    }

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_1 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        type_description_1 = "Noc";
        exception_lineno = 370;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_iter_value_0;
        tmp_iter_value_0 = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_1 = exception_keeper_type_1;
    tmp_compare_right_1 = PyExc_StopIteration;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_1 );
        Py_XDECREF( exception_keeper_value_1 );
        Py_XDECREF( exception_keeper_tb_1 );

        exception_lineno = 370;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    Py_DECREF( exception_keeper_type_1 );
    Py_XDECREF( exception_keeper_value_1 );
    Py_XDECREF( exception_keeper_tb_1 );
    goto loop_end_1;
    goto branch_end_1;
    branch_no_1:;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    branch_end_1:;
    // End of try:
    try_end_1:;
    tmp_assign_source_2 = tmp_iter_value_0;

    CHECK_OBJECT( tmp_assign_source_2 );
    {
        PyObject *old = var_expression;
        var_expression = tmp_assign_source_2;
        Py_INCREF( var_expression );
        Py_XDECREF( old );
    }

    if ( generator->m_closure[0] == NULL )
    {
        tmp_called_name_1 = NULL;
    }
    else
    {
        tmp_called_name_1 = PyCell_GET( generator->m_closure[0] );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "StatementExpressionOnly" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 370;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }

    tmp_dict_key_1 = const_str_plain_expression;
    tmp_dict_value_1 = var_expression;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_source_ref;
    tmp_called_instance_1 = var_expression;

    CHECK_OBJECT( tmp_called_instance_1 );
    generator->m_frame->m_frame.f_lineno = 372;
    tmp_dict_value_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getSourceReference );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 372;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    generator->m_frame->m_frame.f_lineno = 370;
    tmp_expression_name_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    tmp_unused = GENERATOR_YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;
        type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

    Nuitka_Frame_MarkAsNotExecuting( generator->m_frame );

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    // Allow re-use of the frame again.
    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( exception_type ) )
    {
        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, generator->m_frame, exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            type_description_1,
            NULL,
            var_expression,
            generator->m_closure[0]
        );


        // Release cached frame.
        if ( generator->m_frame == cache_frame_generator )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_frame_generator = NULL;

        assertFrameObject( generator->m_frame );
    }

#if PYTHON_VERSION >= 370
    Py_CLEAR( generator->m_exc_state.exc_type );
    Py_CLEAR( generator->m_exc_state.exc_value );
    Py_CLEAR( generator->m_exc_state.exc_traceback );
#elif PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->m_frame.f_exc_type );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_value );
    Py_CLEAR( generator->m_frame->m_frame.f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    goto try_end_3;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_expression );
    var_expression = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    Py_XDECREF( var_expression );
    var_expression = NULL;


#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

    function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

#if _NUITKA_EXPERIMENTAL_GENERATOR_GOTO
    return NULL;
#else
    generator->m_yielded = NULL;
    return;
#endif

}


static PyObject *impl_nodes$NodeMakingHelpers$$$function_17_makeComparisonNode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_left = python_pars[ 0 ];
    PyObject *par_right = python_pars[ 1 ];
    PyObject *par_comparator = python_pars[ 2 ];
    PyObject *par_source_ref = python_pars[ 3 ];
    PyObject *var_ExpressionComparison = NULL;
    PyObject *var_ExpressionComparisonIs = NULL;
    PyObject *var_ExpressionComparisonIsNOT = NULL;
    PyObject *var_ExpressionComparisonIn = NULL;
    PyObject *var_ExpressionComparisonNOTIn = NULL;
    PyObject *var_result = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Eq_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_key_9;
    PyObject *tmp_dict_key_10;
    PyObject *tmp_dict_key_11;
    PyObject *tmp_dict_key_12;
    PyObject *tmp_dict_key_13;
    PyObject *tmp_dict_key_14;
    PyObject *tmp_dict_key_15;
    PyObject *tmp_dict_key_16;
    PyObject *tmp_dict_key_17;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_dict_value_9;
    PyObject *tmp_dict_value_10;
    PyObject *tmp_dict_value_11;
    PyObject *tmp_dict_value_12;
    PyObject *tmp_dict_value_13;
    PyObject *tmp_dict_value_14;
    PyObject *tmp_dict_value_15;
    PyObject *tmp_dict_value_16;
    PyObject *tmp_dict_value_17;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_kw_name_6;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_6d069620a893aec0b2b7b0e20f82ae47 = NULL;

    struct Nuitka_FrameObject *frame_6d069620a893aec0b2b7b0e20f82ae47;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6d069620a893aec0b2b7b0e20f82ae47, codeobj_6d069620a893aec0b2b7b0e20f82ae47, module_nodes$NodeMakingHelpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6d069620a893aec0b2b7b0e20f82ae47 = cache_frame_6d069620a893aec0b2b7b0e20f82ae47;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6d069620a893aec0b2b7b0e20f82ae47 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6d069620a893aec0b2b7b0e20f82ae47 ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_plain_ComparisonNodes;
    tmp_globals_name_1 = (PyObject *)moduledict_nodes$NodeMakingHelpers;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_8780af1e9e717200b8c653b4eaf16030_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_6d069620a893aec0b2b7b0e20f82ae47->m_frame.f_lineno = 389;
    tmp_assign_source_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_1;

    // Tried code:
    tmp_import_name_from_1 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_1 );
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_ExpressionComparison,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_ExpressionComparison );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    assert( var_ExpressionComparison == NULL );
    var_ExpressionComparison = tmp_assign_source_2;

    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    if ( PyModule_Check( tmp_import_name_from_2 ) )
    {
       tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_2,
            (PyObject *)MODULE_DICT(tmp_import_name_from_2),
            const_str_plain_ExpressionComparisonIs,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_ExpressionComparisonIs );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    assert( var_ExpressionComparisonIs == NULL );
    var_ExpressionComparisonIs = tmp_assign_source_3;

    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    if ( PyModule_Check( tmp_import_name_from_3 ) )
    {
       tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_3,
            (PyObject *)MODULE_DICT(tmp_import_name_from_3),
            const_str_plain_ExpressionComparisonIsNOT,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_ExpressionComparisonIsNOT );
    }

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    assert( var_ExpressionComparisonIsNOT == NULL );
    var_ExpressionComparisonIsNOT = tmp_assign_source_4;

    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    if ( PyModule_Check( tmp_import_name_from_4 ) )
    {
       tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_4,
            (PyObject *)MODULE_DICT(tmp_import_name_from_4),
            const_str_plain_ExpressionComparisonIn,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_ExpressionComparisonIn );
    }

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    assert( var_ExpressionComparisonIn == NULL );
    var_ExpressionComparisonIn = tmp_assign_source_5;

    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    if ( PyModule_Check( tmp_import_name_from_5 ) )
    {
       tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_5,
            (PyObject *)MODULE_DICT(tmp_import_name_from_5),
            const_str_plain_ExpressionComparisonNOTIn,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_ExpressionComparisonNOTIn );
    }

    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
    }
    assert( var_ExpressionComparisonNOTIn == NULL );
    var_ExpressionComparisonNOTIn = tmp_assign_source_6;

    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
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

    tmp_compare_left_1 = par_comparator;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "comparator" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 397;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = const_str_plain_Is;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = var_ExpressionComparisonIs;

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ExpressionComparisonIs" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 398;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_left;
    tmp_dict_value_1 = par_left;

    if ( tmp_dict_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "left" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 399;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_right;
    tmp_dict_value_2 = par_right;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "right" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 400;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_source_ref;
    tmp_dict_value_3 = par_source_ref;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source_ref" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 401;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_6d069620a893aec0b2b7b0e20f82ae47->m_frame.f_lineno = 398;
    tmp_assign_source_7 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 398;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_result == NULL );
    var_result = tmp_assign_source_7;

    goto branch_end_1;
    branch_no_1:;
    tmp_compare_left_2 = par_comparator;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "comparator" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 403;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = const_str_plain_IsNot;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 403;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_2 = var_ExpressionComparisonIsNOT;

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ExpressionComparisonIsNOT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 404;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain_left;
    tmp_dict_value_4 = par_left;

    if ( tmp_dict_value_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "left" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 405;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_2 = _PyDict_NewPresized( 3 );
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_right;
    tmp_dict_value_5 = par_right;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "right" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 406;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_6 = const_str_plain_source_ref;
    tmp_dict_value_6 = par_source_ref;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source_ref" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 407;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    frame_6d069620a893aec0b2b7b0e20f82ae47->m_frame.f_lineno = 404;
    tmp_assign_source_8 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 404;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_result == NULL );
    var_result = tmp_assign_source_8;

    goto branch_end_2;
    branch_no_2:;
    tmp_compare_left_3 = par_comparator;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "comparator" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 409;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_3 = const_str_plain_In;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 409;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_3 = var_ExpressionComparisonIn;

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ExpressionComparisonIn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 410;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_7 = const_str_plain_left;
    tmp_dict_value_7 = par_left;

    if ( tmp_dict_value_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "left" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 411;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_3 = _PyDict_NewPresized( 3 );
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_7, tmp_dict_value_7 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_8 = const_str_plain_right;
    tmp_dict_value_8 = par_right;

    if ( tmp_dict_value_8 == NULL )
    {
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "right" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 412;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_8, tmp_dict_value_8 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_9 = const_str_plain_source_ref;
    tmp_dict_value_9 = par_source_ref;

    if ( tmp_dict_value_9 == NULL )
    {
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source_ref" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 413;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_9, tmp_dict_value_9 );
    assert( !(tmp_res != 0) );
    frame_6d069620a893aec0b2b7b0e20f82ae47->m_frame.f_lineno = 410;
    tmp_assign_source_9 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 410;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_result == NULL );
    var_result = tmp_assign_source_9;

    goto branch_end_3;
    branch_no_3:;
    tmp_compare_left_4 = par_comparator;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "comparator" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 415;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = const_str_plain_NotIn;
    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 415;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_4 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_name_4 = var_ExpressionComparisonNOTIn;

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ExpressionComparisonNOTIn" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 416;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_10 = const_str_plain_left;
    tmp_dict_value_10 = par_left;

    if ( tmp_dict_value_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "left" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 417;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_4 = _PyDict_NewPresized( 3 );
    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_10, tmp_dict_value_10 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_11 = const_str_plain_right;
    tmp_dict_value_11 = par_right;

    if ( tmp_dict_value_11 == NULL )
    {
        Py_DECREF( tmp_kw_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "right" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 418;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_11, tmp_dict_value_11 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_12 = const_str_plain_source_ref;
    tmp_dict_value_12 = par_source_ref;

    if ( tmp_dict_value_12 == NULL )
    {
        Py_DECREF( tmp_kw_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source_ref" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 419;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_12, tmp_dict_value_12 );
    assert( !(tmp_res != 0) );
    frame_6d069620a893aec0b2b7b0e20f82ae47->m_frame.f_lineno = 416;
    tmp_assign_source_10 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_kw_name_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 416;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_result == NULL );
    var_result = tmp_assign_source_10;

    goto branch_end_4;
    branch_no_4:;
    tmp_called_name_5 = var_ExpressionComparison;

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ExpressionComparison" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 422;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_13 = const_str_plain_left;
    tmp_dict_value_13 = par_left;

    if ( tmp_dict_value_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "left" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 423;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_5 = _PyDict_NewPresized( 4 );
    tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_13, tmp_dict_value_13 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_14 = const_str_plain_right;
    tmp_dict_value_14 = par_right;

    if ( tmp_dict_value_14 == NULL )
    {
        Py_DECREF( tmp_kw_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "right" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 424;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_14, tmp_dict_value_14 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_15 = const_str_plain_comparator;
    tmp_dict_value_15 = par_comparator;

    if ( tmp_dict_value_15 == NULL )
    {
        Py_DECREF( tmp_kw_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "comparator" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 425;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_15, tmp_dict_value_15 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_16 = const_str_plain_source_ref;
    tmp_dict_value_16 = par_source_ref;

    if ( tmp_dict_value_16 == NULL )
    {
        Py_DECREF( tmp_kw_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source_ref" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 426;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_16, tmp_dict_value_16 );
    assert( !(tmp_res != 0) );
    frame_6d069620a893aec0b2b7b0e20f82ae47->m_frame.f_lineno = 422;
    tmp_assign_source_11 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_kw_name_5 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 422;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_result == NULL );
    var_result = tmp_assign_source_11;

    branch_end_4:;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;
    tmp_source_name_1 = var_result;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 429;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_setCompatibleSourceReference );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 429;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_17 = const_str_plain_source_ref;
    tmp_called_instance_1 = par_right;

    if ( tmp_called_instance_1 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "right" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 430;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    frame_6d069620a893aec0b2b7b0e20f82ae47->m_frame.f_lineno = 430;
    tmp_dict_value_17 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_getCompatibleSourceReference );
    if ( tmp_dict_value_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 430;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_6 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_17, tmp_dict_value_17 );
    Py_DECREF( tmp_dict_value_17 );
    assert( !(tmp_res != 0) );
    frame_6d069620a893aec0b2b7b0e20f82ae47->m_frame.f_lineno = 429;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_kw_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 429;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = var_result;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "result" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 433;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6d069620a893aec0b2b7b0e20f82ae47 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6d069620a893aec0b2b7b0e20f82ae47 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6d069620a893aec0b2b7b0e20f82ae47 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6d069620a893aec0b2b7b0e20f82ae47, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6d069620a893aec0b2b7b0e20f82ae47->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6d069620a893aec0b2b7b0e20f82ae47, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6d069620a893aec0b2b7b0e20f82ae47,
        type_description_1,
        par_left,
        par_right,
        par_comparator,
        par_source_ref,
        var_ExpressionComparison,
        var_ExpressionComparisonIs,
        var_ExpressionComparisonIsNOT,
        var_ExpressionComparisonIn,
        var_ExpressionComparisonNOTIn,
        var_result
    );


    // Release cached frame.
    if ( frame_6d069620a893aec0b2b7b0e20f82ae47 == cache_frame_6d069620a893aec0b2b7b0e20f82ae47 )
    {
        Py_DECREF( frame_6d069620a893aec0b2b7b0e20f82ae47 );
    }
    cache_frame_6d069620a893aec0b2b7b0e20f82ae47 = NULL;

    assertFrameObject( frame_6d069620a893aec0b2b7b0e20f82ae47 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_17_makeComparisonNode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_left );
    par_left = NULL;

    Py_XDECREF( par_right );
    par_right = NULL;

    Py_XDECREF( par_comparator );
    par_comparator = NULL;

    Py_XDECREF( par_source_ref );
    par_source_ref = NULL;

    Py_XDECREF( var_ExpressionComparison );
    var_ExpressionComparison = NULL;

    Py_XDECREF( var_ExpressionComparisonIs );
    var_ExpressionComparisonIs = NULL;

    Py_XDECREF( var_ExpressionComparisonIsNOT );
    var_ExpressionComparisonIsNOT = NULL;

    Py_XDECREF( var_ExpressionComparisonIn );
    var_ExpressionComparisonIn = NULL;

    Py_XDECREF( var_ExpressionComparisonNOTIn );
    var_ExpressionComparisonNOTIn = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_left );
    par_left = NULL;

    Py_XDECREF( par_right );
    par_right = NULL;

    Py_XDECREF( par_comparator );
    par_comparator = NULL;

    Py_XDECREF( par_source_ref );
    par_source_ref = NULL;

    Py_XDECREF( var_ExpressionComparison );
    var_ExpressionComparison = NULL;

    Py_XDECREF( var_ExpressionComparisonIs );
    var_ExpressionComparisonIs = NULL;

    Py_XDECREF( var_ExpressionComparisonIsNOT );
    var_ExpressionComparisonIsNOT = NULL;

    Py_XDECREF( var_ExpressionComparisonIn );
    var_ExpressionComparisonIn = NULL;

    Py_XDECREF( var_ExpressionComparisonNOTIn );
    var_ExpressionComparisonNOTIn = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_17_makeComparisonNode );
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


static PyObject *impl_nodes$NodeMakingHelpers$$$function_18_makeVariableRefNode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_variable = python_pars[ 0 ];
    PyObject *par_source_ref = python_pars[ 1 ];
    PyObject *var_ExpressionTempVariableRef = NULL;
    PyObject *var_ExpressionVariableRef = NULL;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    int tmp_res;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_a382ae84ee1fff728bb1fe1f4b76a929 = NULL;

    struct Nuitka_FrameObject *frame_a382ae84ee1fff728bb1fe1f4b76a929;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a382ae84ee1fff728bb1fe1f4b76a929, codeobj_a382ae84ee1fff728bb1fe1f4b76a929, module_nodes$NodeMakingHelpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a382ae84ee1fff728bb1fe1f4b76a929 = cache_frame_a382ae84ee1fff728bb1fe1f4b76a929;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a382ae84ee1fff728bb1fe1f4b76a929 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a382ae84ee1fff728bb1fe1f4b76a929 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_instance_1 = par_variable;

    CHECK_OBJECT( tmp_called_instance_1 );
    frame_a382ae84ee1fff728bb1fe1f4b76a929->m_frame.f_lineno = 437;
    tmp_cond_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_isTempVariable );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 437;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 437;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_name_name_1 = const_str_plain_VariableRefNodes;
    tmp_globals_name_1 = (PyObject *)moduledict_nodes$NodeMakingHelpers;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_ExpressionTempVariableRef_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_a382ae84ee1fff728bb1fe1f4b76a929->m_frame.f_lineno = 438;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 438;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_ExpressionTempVariableRef,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_ExpressionTempVariableRef );
    }

    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 438;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_ExpressionTempVariableRef == NULL );
    var_ExpressionTempVariableRef = tmp_assign_source_1;

    tmp_called_name_1 = var_ExpressionTempVariableRef;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_dict_key_1 = const_str_plain_variable;
    tmp_dict_value_1 = par_variable;

    if ( tmp_dict_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "variable" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 441;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_source_ref;
    tmp_dict_value_2 = par_source_ref;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source_ref" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 442;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    frame_a382ae84ee1fff728bb1fe1f4b76a929->m_frame.f_lineno = 440;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 440;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_name_name_2 = const_str_plain_VariableRefNodes;
    tmp_globals_name_2 = (PyObject *)moduledict_nodes$NodeMakingHelpers;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_ExpressionVariableRef_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_a382ae84ee1fff728bb1fe1f4b76a929->m_frame.f_lineno = 445;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 445;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_2 ) )
    {
       tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_2,
            (PyObject *)MODULE_DICT(tmp_import_name_from_2),
            const_str_plain_ExpressionVariableRef,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_ExpressionVariableRef );
    }

    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 445;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_ExpressionVariableRef == NULL );
    var_ExpressionVariableRef = tmp_assign_source_2;

    tmp_called_name_2 = var_ExpressionVariableRef;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_dict_key_3 = const_str_plain_variable;
    tmp_dict_value_3 = par_variable;

    if ( tmp_dict_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "variable" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 448;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_2 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_4 = const_str_plain_source_ref;
    tmp_dict_value_4 = par_source_ref;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source_ref" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 449;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    frame_a382ae84ee1fff728bb1fe1f4b76a929->m_frame.f_lineno = 447;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 447;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a382ae84ee1fff728bb1fe1f4b76a929 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a382ae84ee1fff728bb1fe1f4b76a929 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a382ae84ee1fff728bb1fe1f4b76a929 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a382ae84ee1fff728bb1fe1f4b76a929, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a382ae84ee1fff728bb1fe1f4b76a929->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a382ae84ee1fff728bb1fe1f4b76a929, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a382ae84ee1fff728bb1fe1f4b76a929,
        type_description_1,
        par_variable,
        par_source_ref,
        var_ExpressionTempVariableRef,
        var_ExpressionVariableRef
    );


    // Release cached frame.
    if ( frame_a382ae84ee1fff728bb1fe1f4b76a929 == cache_frame_a382ae84ee1fff728bb1fe1f4b76a929 )
    {
        Py_DECREF( frame_a382ae84ee1fff728bb1fe1f4b76a929 );
    }
    cache_frame_a382ae84ee1fff728bb1fe1f4b76a929 = NULL;

    assertFrameObject( frame_a382ae84ee1fff728bb1fe1f4b76a929 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_18_makeVariableRefNode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_variable );
    par_variable = NULL;

    Py_XDECREF( par_source_ref );
    par_source_ref = NULL;

    Py_XDECREF( var_ExpressionTempVariableRef );
    var_ExpressionTempVariableRef = NULL;

    Py_XDECREF( var_ExpressionVariableRef );
    var_ExpressionVariableRef = NULL;

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

    Py_XDECREF( par_variable );
    par_variable = NULL;

    Py_XDECREF( par_source_ref );
    par_source_ref = NULL;

    Py_XDECREF( var_ExpressionTempVariableRef );
    var_ExpressionTempVariableRef = NULL;

    Py_XDECREF( var_ExpressionVariableRef );
    var_ExpressionVariableRef = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_18_makeVariableRefNode );
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


static PyObject *impl_nodes$NodeMakingHelpers$$$function_19_makeExpressionBuiltinLocals( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_provider = python_pars[ 0 ];
    PyObject *par_source_ref = python_pars[ 1 ];
    PyObject *var_ExpressionBuiltinGlobals = NULL;
    PyObject *var_ExpressionBuiltinLocalsCopy = NULL;
    PyObject *var_ExpressionBuiltinLocalsRef = NULL;
    PyObject *var_ExpressionBuiltinLocalsUpdated = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_instance_5;
    PyObject *tmp_called_instance_6;
    PyObject *tmp_called_instance_7;
    PyObject *tmp_called_instance_8;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_815ab1924daf9bb0433feae51de60700 = NULL;

    struct Nuitka_FrameObject *frame_815ab1924daf9bb0433feae51de60700;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_815ab1924daf9bb0433feae51de60700, codeobj_815ab1924daf9bb0433feae51de60700, module_nodes$NodeMakingHelpers, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_815ab1924daf9bb0433feae51de60700 = cache_frame_815ab1924daf9bb0433feae51de60700;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_815ab1924daf9bb0433feae51de60700 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_815ab1924daf9bb0433feae51de60700 ) == 2 ); // Frame stack

    // Framed code:
    loop_start_1:;
    tmp_called_instance_1 = par_provider;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "provider" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 454;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_815ab1924daf9bb0433feae51de60700->m_frame.f_lineno = 454;
    tmp_cond_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_isExpressionOutlineFunction );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 454;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 454;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    goto loop_end_1;
    branch_no_1:;
    tmp_called_instance_2 = par_provider;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "provider" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 455;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_815ab1924daf9bb0433feae51de60700->m_frame.f_lineno = 455;
    tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_getParentVariableProvider );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 455;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_provider;
        par_provider = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 454;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_called_instance_3 = par_provider;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "provider" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 457;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_815ab1924daf9bb0433feae51de60700->m_frame.f_lineno = 457;
    tmp_cond_value_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_isCompiledPythonModule );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 457;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 457;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_name_name_1 = const_str_plain_GlobalsLocalsNodes;
    tmp_globals_name_1 = (PyObject *)moduledict_nodes$NodeMakingHelpers;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_ExpressionBuiltinGlobals_tuple;
    tmp_level_name_1 = const_int_pos_1;
    frame_815ab1924daf9bb0433feae51de60700->m_frame.f_lineno = 458;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 458;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( PyModule_Check( tmp_import_name_from_1 ) )
    {
       tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_1,
            (PyObject *)MODULE_DICT(tmp_import_name_from_1),
            const_str_plain_ExpressionBuiltinGlobals,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_ExpressionBuiltinGlobals );
    }

    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 458;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( var_ExpressionBuiltinGlobals == NULL );
    var_ExpressionBuiltinGlobals = tmp_assign_source_2;

    tmp_called_name_1 = var_ExpressionBuiltinGlobals;

    CHECK_OBJECT( tmp_called_name_1 );
    tmp_dict_key_1 = const_str_plain_source_ref;
    tmp_dict_value_1 = par_source_ref;

    if ( tmp_dict_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source_ref" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 461;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_815ab1924daf9bb0433feae51de60700->m_frame.f_lineno = 460;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 460;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_name_name_2 = const_str_plain_GlobalsLocalsNodes;
    tmp_globals_name_2 = (PyObject *)moduledict_nodes$NodeMakingHelpers;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_b82ced9c479e59ea56e7d381ac95de0e_tuple;
    tmp_level_name_2 = const_int_pos_1;
    frame_815ab1924daf9bb0433feae51de60700->m_frame.f_lineno = 464;
    tmp_assign_source_3 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 464;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_3;

    // Tried code:
    tmp_import_name_from_2 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_2 );
    if ( PyModule_Check( tmp_import_name_from_2 ) )
    {
       tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_2,
            (PyObject *)MODULE_DICT(tmp_import_name_from_2),
            const_str_plain_ExpressionBuiltinLocalsCopy,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_ExpressionBuiltinLocalsCopy );
    }

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 464;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    assert( var_ExpressionBuiltinLocalsCopy == NULL );
    var_ExpressionBuiltinLocalsCopy = tmp_assign_source_4;

    tmp_import_name_from_3 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_3 );
    if ( PyModule_Check( tmp_import_name_from_3 ) )
    {
       tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_3,
            (PyObject *)MODULE_DICT(tmp_import_name_from_3),
            const_str_plain_ExpressionBuiltinLocalsRef,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_ExpressionBuiltinLocalsRef );
    }

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 464;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    assert( var_ExpressionBuiltinLocalsRef == NULL );
    var_ExpressionBuiltinLocalsRef = tmp_assign_source_5;

    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    if ( PyModule_Check( tmp_import_name_from_4 ) )
    {
       tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
            tmp_import_name_from_4,
            (PyObject *)MODULE_DICT(tmp_import_name_from_4),
            const_str_plain_ExpressionBuiltinLocalsUpdated,
            const_int_pos_1
        );
    }
    else
    {
       tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_ExpressionBuiltinLocalsUpdated );
    }

    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 464;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    assert( var_ExpressionBuiltinLocalsUpdated == NULL );
    var_ExpressionBuiltinLocalsUpdated = tmp_assign_source_6;

    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
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

    tmp_called_instance_4 = par_provider;

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "provider" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 471;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_815ab1924daf9bb0433feae51de60700->m_frame.f_lineno = 471;
    tmp_cond_value_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_isExpressionClassBody );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 471;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 471;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_2 = var_ExpressionBuiltinLocalsRef;

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ExpressionBuiltinLocalsRef" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 472;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain_locals_scope;
    tmp_called_instance_5 = par_provider;

    if ( tmp_called_instance_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "provider" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 473;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_815ab1924daf9bb0433feae51de60700->m_frame.f_lineno = 473;
    tmp_dict_value_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_getLocalsScope );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 473;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_2 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_source_ref;
    tmp_dict_value_3 = par_source_ref;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source_ref" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 474;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_815ab1924daf9bb0433feae51de60700->m_frame.f_lineno = 472;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 472;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_compexpr_left_1 = GET_STRING_DICT_VALUE( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_python_version );

    if (unlikely( tmp_compexpr_left_1 == NULL ))
    {
        tmp_compexpr_left_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_python_version );
    }

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "python_version" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 476;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = const_int_pos_300;
    tmp_or_left_value_1 = RICH_COMPARE_GE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 476;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 476;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    Py_DECREF( tmp_or_left_value_1 );
    tmp_called_instance_6 = par_provider;

    if ( tmp_called_instance_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "provider" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 476;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_815ab1924daf9bb0433feae51de60700->m_frame.f_lineno = 476;
    tmp_or_right_value_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_6, const_str_plain_isUnoptimized );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 476;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_value_4 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_4 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 476;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_instance_7 = par_provider;

    if ( tmp_called_instance_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "provider" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 477;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_815ab1924daf9bb0433feae51de60700->m_frame.f_lineno = 477;
    tmp_cond_value_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_7, const_str_plain_getLocalsScope );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 477;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 477;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_no_5;
    }
    else
    {
        goto branch_yes_5;
    }
    branch_yes_5:;
    tmp_raise_type_1 = PyExc_AssertionError;
    tmp_tuple_element_1 = par_provider;

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "provider" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 477;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_raise_value_1 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_raise_value_1, 0, tmp_tuple_element_1 );
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_value = tmp_raise_value_1;
    exception_lineno = 477;
    RAISE_EXCEPTION_WITH_VALUE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "oooooo";
    goto frame_exception_exit_1;
    branch_no_5:;
    tmp_called_name_3 = var_ExpressionBuiltinLocalsUpdated;

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ExpressionBuiltinLocalsUpdated" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 479;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain_locals_scope;
    tmp_called_instance_8 = par_provider;

    if ( tmp_called_instance_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "provider" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 480;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_815ab1924daf9bb0433feae51de60700->m_frame.f_lineno = 480;
    tmp_dict_value_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_8, const_str_plain_getLocalsScope );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 480;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_3 = _PyDict_NewPresized( 2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_5 = const_str_plain_source_ref;
    tmp_dict_value_5 = par_source_ref;

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source_ref" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 481;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_5, tmp_dict_value_5 );
    assert( !(tmp_res != 0) );
    frame_815ab1924daf9bb0433feae51de60700->m_frame.f_lineno = 479;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 479;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_4;
    branch_no_4:;
    tmp_called_name_4 = var_ExpressionBuiltinLocalsCopy;

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "ExpressionBuiltinLocalsCopy" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 484;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_dict_key_6 = const_str_plain_source_ref;
    tmp_dict_value_6 = par_source_ref;

    if ( tmp_dict_value_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "source_ref" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 485;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_4 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_6, tmp_dict_value_6 );
    assert( !(tmp_res != 0) );
    frame_815ab1924daf9bb0433feae51de60700->m_frame.f_lineno = 484;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_kw_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 484;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_815ab1924daf9bb0433feae51de60700 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_815ab1924daf9bb0433feae51de60700 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_815ab1924daf9bb0433feae51de60700 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_815ab1924daf9bb0433feae51de60700, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_815ab1924daf9bb0433feae51de60700->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_815ab1924daf9bb0433feae51de60700, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_815ab1924daf9bb0433feae51de60700,
        type_description_1,
        par_provider,
        par_source_ref,
        var_ExpressionBuiltinGlobals,
        var_ExpressionBuiltinLocalsCopy,
        var_ExpressionBuiltinLocalsRef,
        var_ExpressionBuiltinLocalsUpdated
    );


    // Release cached frame.
    if ( frame_815ab1924daf9bb0433feae51de60700 == cache_frame_815ab1924daf9bb0433feae51de60700 )
    {
        Py_DECREF( frame_815ab1924daf9bb0433feae51de60700 );
    }
    cache_frame_815ab1924daf9bb0433feae51de60700 = NULL;

    assertFrameObject( frame_815ab1924daf9bb0433feae51de60700 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_19_makeExpressionBuiltinLocals );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_provider );
    par_provider = NULL;

    Py_XDECREF( par_source_ref );
    par_source_ref = NULL;

    Py_XDECREF( var_ExpressionBuiltinGlobals );
    var_ExpressionBuiltinGlobals = NULL;

    Py_XDECREF( var_ExpressionBuiltinLocalsCopy );
    var_ExpressionBuiltinLocalsCopy = NULL;

    Py_XDECREF( var_ExpressionBuiltinLocalsRef );
    var_ExpressionBuiltinLocalsRef = NULL;

    Py_XDECREF( var_ExpressionBuiltinLocalsUpdated );
    var_ExpressionBuiltinLocalsUpdated = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_provider );
    par_provider = NULL;

    Py_XDECREF( par_source_ref );
    par_source_ref = NULL;

    Py_XDECREF( var_ExpressionBuiltinGlobals );
    var_ExpressionBuiltinGlobals = NULL;

    Py_XDECREF( var_ExpressionBuiltinLocalsCopy );
    var_ExpressionBuiltinLocalsCopy = NULL;

    Py_XDECREF( var_ExpressionBuiltinLocalsRef );
    var_ExpressionBuiltinLocalsRef = NULL;

    Py_XDECREF( var_ExpressionBuiltinLocalsUpdated );
    var_ExpressionBuiltinLocalsUpdated = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( nodes$NodeMakingHelpers$$$function_19_makeExpressionBuiltinLocals );
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



static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_10_mergeStatements( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nodes$NodeMakingHelpers$$$function_10_mergeStatements,
        const_str_plain_mergeStatements,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bc3068dc32c0e8a95fe74aa573eaa0e2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nodes$NodeMakingHelpers,
        const_str_digest_48ac02d4dd12b5c1e4a18513fa76345f,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_11_makeStatementsSequenceReplacementNode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nodes$NodeMakingHelpers$$$function_11_makeStatementsSequenceReplacementNode,
        const_str_plain_makeStatementsSequenceReplacementNode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a333810d9b2d3037702e9d1db4fde0e2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nodes$NodeMakingHelpers,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_12_convertNoneConstantToNone(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nodes$NodeMakingHelpers$$$function_12_convertNoneConstantToNone,
        const_str_plain_convertNoneConstantToNone,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d217641363bd8668603e527eff029e4d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nodes$NodeMakingHelpers,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_13_wrapExpressionWithSideEffects(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nodes$NodeMakingHelpers$$$function_13_wrapExpressionWithSideEffects,
        const_str_plain_wrapExpressionWithSideEffects,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b5ff6d285d1d8171d051b3e9c06bdacd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nodes$NodeMakingHelpers,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_14_wrapExpressionWithNodeSideEffects(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nodes$NodeMakingHelpers$$$function_14_wrapExpressionWithNodeSideEffects,
        const_str_plain_wrapExpressionWithNodeSideEffects,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_eedadd114a75b5b9f703bcac0e7a5f32,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nodes$NodeMakingHelpers,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_15_wrapStatementWithSideEffects( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nodes$NodeMakingHelpers$$$function_15_wrapStatementWithSideEffects,
        const_str_plain_wrapStatementWithSideEffects,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_161350aa224d6e2f035ff3af003347df,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nodes$NodeMakingHelpers,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_16_makeStatementOnlyNodesFromExpressions(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nodes$NodeMakingHelpers$$$function_16_makeStatementOnlyNodesFromExpressions,
        const_str_plain_makeStatementOnlyNodesFromExpressions,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4cc7287bc9b7ce163b4f6ed91c4f780c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nodes$NodeMakingHelpers,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_17_makeComparisonNode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nodes$NodeMakingHelpers$$$function_17_makeComparisonNode,
        const_str_plain_makeComparisonNode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6d069620a893aec0b2b7b0e20f82ae47,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nodes$NodeMakingHelpers,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_18_makeVariableRefNode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nodes$NodeMakingHelpers$$$function_18_makeVariableRefNode,
        const_str_plain_makeVariableRefNode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a382ae84ee1fff728bb1fe1f4b76a929,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nodes$NodeMakingHelpers,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_19_makeExpressionBuiltinLocals(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nodes$NodeMakingHelpers$$$function_19_makeExpressionBuiltinLocals,
        const_str_plain_makeExpressionBuiltinLocals,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_815ab1924daf9bb0433feae51de60700,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nodes$NodeMakingHelpers,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_1_makeConstantReplacementNode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nodes$NodeMakingHelpers$$$function_1_makeConstantReplacementNode,
        const_str_plain_makeConstantReplacementNode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fef5bddd12b1fe87da015f695a3bbc7e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nodes$NodeMakingHelpers,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_2_makeRaiseExceptionReplacementExpression(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nodes$NodeMakingHelpers$$$function_2_makeRaiseExceptionReplacementExpression,
        const_str_plain_makeRaiseExceptionReplacementExpression,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e39bf304824d3414e3eb962e72a348a3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nodes$NodeMakingHelpers,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_3_makeRaiseExceptionReplacementStatement(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nodes$NodeMakingHelpers$$$function_3_makeRaiseExceptionReplacementStatement,
        const_str_plain_makeRaiseExceptionReplacementStatement,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e697048b1bcb779cd6c68f7f5f0d3265,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nodes$NodeMakingHelpers,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_4_makeRaiseExceptionReplacementExpressionFromInstance(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nodes$NodeMakingHelpers$$$function_4_makeRaiseExceptionReplacementExpressionFromInstance,
        const_str_digest_f5b3ac023638d74fd461c96d1d3e704a,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_76b9de0b378500c54a263460fa8df3d1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nodes$NodeMakingHelpers,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_5_makeRaiseExceptionExpressionFromTemplate(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nodes$NodeMakingHelpers$$$function_5_makeRaiseExceptionExpressionFromTemplate,
        const_str_plain_makeRaiseExceptionExpressionFromTemplate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_224b190f711f291edfc7bbf77c371cba,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nodes$NodeMakingHelpers,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_6_makeRaiseTypeErrorExceptionReplacementFromTemplateAndValue(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nodes$NodeMakingHelpers$$$function_6_makeRaiseTypeErrorExceptionReplacementFromTemplateAndValue,
        const_str_digest_4422bb31cd24b6f73e6b2c7baace619f,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8228492f9a24518be405329eeb9b12f1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nodes$NodeMakingHelpers,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_7_makeCompileTimeConstantReplacementNode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nodes$NodeMakingHelpers$$$function_7_makeCompileTimeConstantReplacementNode,
        const_str_plain_makeCompileTimeConstantReplacementNode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_53119eb1860a31b016ce94017b0a1f99,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nodes$NodeMakingHelpers,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_8_getComputationResult(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nodes$NodeMakingHelpers$$$function_8_getComputationResult,
        const_str_plain_getComputationResult,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_19b09fc9ebb7942025bb50069d41a655,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nodes$NodeMakingHelpers,
        const_str_digest_49dd35e5982e8228164b480e672dfd38,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_9_makeStatementExpressionOnlyReplacementNode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_nodes$NodeMakingHelpers$$$function_9_makeStatementExpressionOnlyReplacementNode,
        const_str_digest_ff35a3d9a9df2d6bb05cd386089ddde2,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7404e7fe02d3712179083a31bab9019f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_nodes$NodeMakingHelpers,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_nodes$NodeMakingHelpers =
{
    PyModuleDef_HEAD_INIT,
    "nodes.NodeMakingHelpers",   /* m_name */
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

MOD_INIT_DECL( nodes$NodeMakingHelpers )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_nodes$NodeMakingHelpers );
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
    puts("nodes.NodeMakingHelpers: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("nodes.NodeMakingHelpers: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("nodes.NodeMakingHelpers: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initnodes$NodeMakingHelpers" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_nodes$NodeMakingHelpers = Py_InitModule4(
        "nodes.NodeMakingHelpers",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_nodes$NodeMakingHelpers = PyModule_Create( &mdef_nodes$NodeMakingHelpers );
#endif

    moduledict_nodes$NodeMakingHelpers = MODULE_DICT( module_nodes$NodeMakingHelpers );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_nodes$NodeMakingHelpers,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_nodes$NodeMakingHelpers,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_nodes$NodeMakingHelpers,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_nodes$NodeMakingHelpers,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_nodes$NodeMakingHelpers );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_ac7920cddb1b3ebffd5ceeefcd2af56c, module_nodes$NodeMakingHelpers );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

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
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_fromlist_name_5;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_globals_name_5;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_level_name_5;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_locals_name_5;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_name_name_5;
    struct Nuitka_FrameObject *frame_921e28342533fd169552b13d8b4619fc;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_14aebb8a9455c86923c7bfd3607a5f31;
    UPDATE_STRING_DICT0( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_aa7d718bdb633f9b7e0eb195c2933835;
    UPDATE_STRING_DICT0( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_921e28342533fd169552b13d8b4619fc = MAKE_MODULE_FRAME( codeobj_921e28342533fd169552b13d8b4619fc, module_nodes$NodeMakingHelpers );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_921e28342533fd169552b13d8b4619fc );
    assert( Py_REFCNT( frame_921e28342533fd169552b13d8b4619fc ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_logging;
    tmp_globals_name_1 = (PyObject *)moduledict_nodes$NodeMakingHelpers;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = const_tuple_str_plain_warning_tuple;
    tmp_level_name_1 = const_int_0;
    frame_921e28342533fd169552b13d8b4619fc->m_frame.f_lineno = 29;
    tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_warning );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_warning, tmp_assign_source_4 );
    tmp_name_name_2 = const_str_plain_Builtins;
    tmp_globals_name_2 = (PyObject *)moduledict_nodes$NodeMakingHelpers;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = const_tuple_str_plain_builtin_names_tuple;
    tmp_level_name_2 = const_int_0;
    frame_921e28342533fd169552b13d8b4619fc->m_frame.f_lineno = 31;
    tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_builtin_names );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_builtin_names, tmp_assign_source_5 );
    tmp_name_name_3 = const_str_plain_Constants;
    tmp_globals_name_3 = (PyObject *)moduledict_nodes$NodeMakingHelpers;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = const_tuple_str_plain_isConstant_tuple;
    tmp_level_name_3 = const_int_0;
    frame_921e28342533fd169552b13d8b4619fc->m_frame.f_lineno = 32;
    tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_isConstant );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_isConstant, tmp_assign_source_6 );
    tmp_name_name_4 = const_str_plain_Options;
    tmp_globals_name_4 = (PyObject *)moduledict_nodes$NodeMakingHelpers;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = const_tuple_str_plain_isDebug_str_plain_shallWarnImplicitRaises_tuple;
    tmp_level_name_4 = const_int_0;
    frame_921e28342533fd169552b13d8b4619fc->m_frame.f_lineno = 33;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto frame_exception_exit_1;
    }
    assert( tmp_import_from_1__module == NULL );
    tmp_import_from_1__module = tmp_assign_source_7;

    // Tried code:
    tmp_import_name_from_4 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_4 );
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_isDebug );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_isDebug, tmp_assign_source_8 );
    tmp_import_name_from_5 = tmp_import_from_1__module;

    CHECK_OBJECT( tmp_import_name_from_5 );
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_shallWarnImplicitRaises );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_shallWarnImplicitRaises, tmp_assign_source_9 );
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

    tmp_name_name_5 = const_str_plain_PythonVersions;
    tmp_globals_name_5 = (PyObject *)moduledict_nodes$NodeMakingHelpers;
    tmp_locals_name_5 = Py_None;
    tmp_fromlist_name_5 = const_tuple_str_plain_python_version_tuple;
    tmp_level_name_5 = const_int_0;
    frame_921e28342533fd169552b13d8b4619fc->m_frame.f_lineno = 34;
    tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_python_version );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_python_version, tmp_assign_source_10 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_921e28342533fd169552b13d8b4619fc );
#endif
    popFrameStack();

    assertFrameObject( frame_921e28342533fd169552b13d8b4619fc );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_921e28342533fd169552b13d8b4619fc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_921e28342533fd169552b13d8b4619fc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_921e28342533fd169552b13d8b4619fc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_921e28342533fd169552b13d8b4619fc, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    tmp_assign_source_11 = MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_1_makeConstantReplacementNode(  );
    UPDATE_STRING_DICT1( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_makeConstantReplacementNode, tmp_assign_source_11 );
    tmp_assign_source_12 = MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_2_makeRaiseExceptionReplacementExpression(  );
    UPDATE_STRING_DICT1( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_makeRaiseExceptionReplacementExpression, tmp_assign_source_12 );
    tmp_assign_source_13 = MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_3_makeRaiseExceptionReplacementStatement(  );
    UPDATE_STRING_DICT1( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_makeRaiseExceptionReplacementStatement, tmp_assign_source_13 );
    tmp_assign_source_14 = MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_4_makeRaiseExceptionReplacementExpressionFromInstance(  );
    UPDATE_STRING_DICT1( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_digest_f5b3ac023638d74fd461c96d1d3e704a, tmp_assign_source_14 );
    tmp_assign_source_15 = MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_5_makeRaiseExceptionExpressionFromTemplate(  );
    UPDATE_STRING_DICT1( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_makeRaiseExceptionExpressionFromTemplate, tmp_assign_source_15 );
    tmp_assign_source_16 = MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_6_makeRaiseTypeErrorExceptionReplacementFromTemplateAndValue(  );
    UPDATE_STRING_DICT1( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_digest_4422bb31cd24b6f73e6b2c7baace619f, tmp_assign_source_16 );
    tmp_assign_source_17 = MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_7_makeCompileTimeConstantReplacementNode(  );
    UPDATE_STRING_DICT1( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_makeCompileTimeConstantReplacementNode, tmp_assign_source_17 );
    tmp_assign_source_18 = MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_8_getComputationResult(  );
    UPDATE_STRING_DICT1( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_getComputationResult, tmp_assign_source_18 );
    tmp_assign_source_19 = MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_9_makeStatementExpressionOnlyReplacementNode(  );
    UPDATE_STRING_DICT1( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_digest_ff35a3d9a9df2d6bb05cd386089ddde2, tmp_assign_source_19 );
    tmp_defaults_1 = const_tuple_false_tuple;
    Py_INCREF( tmp_defaults_1 );
    tmp_assign_source_20 = MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_10_mergeStatements( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_mergeStatements, tmp_assign_source_20 );
    tmp_assign_source_21 = MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_11_makeStatementsSequenceReplacementNode(  );
    UPDATE_STRING_DICT1( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_makeStatementsSequenceReplacementNode, tmp_assign_source_21 );
    tmp_assign_source_22 = MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_12_convertNoneConstantToNone(  );
    UPDATE_STRING_DICT1( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_convertNoneConstantToNone, tmp_assign_source_22 );
    tmp_assign_source_23 = MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_13_wrapExpressionWithSideEffects(  );
    UPDATE_STRING_DICT1( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_wrapExpressionWithSideEffects, tmp_assign_source_23 );
    tmp_assign_source_24 = MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_14_wrapExpressionWithNodeSideEffects(  );
    UPDATE_STRING_DICT1( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_wrapExpressionWithNodeSideEffects, tmp_assign_source_24 );
    tmp_defaults_2 = const_tuple_false_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_assign_source_25 = MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_15_wrapStatementWithSideEffects( tmp_defaults_2 );
    UPDATE_STRING_DICT1( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_wrapStatementWithSideEffects, tmp_assign_source_25 );
    tmp_assign_source_26 = MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_16_makeStatementOnlyNodesFromExpressions(  );
    UPDATE_STRING_DICT1( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_makeStatementOnlyNodesFromExpressions, tmp_assign_source_26 );
    tmp_assign_source_27 = MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_17_makeComparisonNode(  );
    UPDATE_STRING_DICT1( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_makeComparisonNode, tmp_assign_source_27 );
    tmp_assign_source_28 = MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_18_makeVariableRefNode(  );
    UPDATE_STRING_DICT1( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_makeVariableRefNode, tmp_assign_source_28 );
    tmp_assign_source_29 = MAKE_FUNCTION_nodes$NodeMakingHelpers$$$function_19_makeExpressionBuiltinLocals(  );
    UPDATE_STRING_DICT1( moduledict_nodes$NodeMakingHelpers, (Nuitka_StringObject *)const_str_plain_makeExpressionBuiltinLocals, tmp_assign_source_29 );

    return MOD_RETURN_VALUE( module_nodes$NodeMakingHelpers );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
