/* Generated code for Python source for module 'timeit'
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

/* The _module_timeit is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_timeit;
PyDictObject *moduledict_timeit;

/* The module constants used, if any. */
extern PyObject *const_str_plain_pass;
extern PyObject *const_str_plain_itertools;
extern PyObject *const_str_plain_inner;
extern PyObject *const_str_plain_metaclass;
extern PyObject *const_str_plain_prec;
extern PyObject *const_str_plain_main;
static PyObject *const_str_plain_local_ns;
static PyObject *const_str_plain_default_repeat;
extern PyObject *const_str_plain_UserWarning;
extern PyObject *const_tuple_str_plain___class___tuple;
extern PyObject *const_str_plain_precision;
extern PyObject *const_dict_empty;
static PyObject *const_str_digest_b51aa70a4c204aa11a570d8a33a12663;
extern PyObject *const_str_plain_traceback;
extern PyObject *const_slice_int_pos_1_none_none;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain__stmt;
extern PyObject *const_str_plain_warn_explicit;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_digest_103511b2d15f4b9dd33ac43d29126685;
extern PyObject *const_str_plain_max;
extern PyObject *const_str_plain_scale;
extern PyObject *const_str_angle_listcontraction;
static PyObject *const_tuple_fb2d8ec88bfb9a9bb2e89742d91aa122_tuple;
static PyObject *const_tuple_str_plain_x_str_plain_precision_tuple;
static PyObject *const_str_digest_5036806efc2ac20bbb1c4dc5889530f2;
extern PyObject *const_str_plain_items;
extern PyObject *const_str_digest_8b4c8c81913e132a2fb432c041f3150f;
static PyObject *const_str_digest_f1ec9750d101e1d77deaf939de8937eb;
static PyObject *const_tuple_57b7a2951ae5ca6b0e6601cedf807da5_tuple;
static PyObject *const_str_plain_autorange;
extern PyObject *const_str_plain_timeit;
extern PyObject *const_str_plain_num;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_isenabled;
static PyObject *const_str_digest_c584d85c5737e9d914083c14a105a3e1;
static PyObject *const_tuple_c8d76755300dc6d22fde2515a7e9310c_tuple;
extern PyObject *const_str_plain_end;
static PyObject *const_tuple_str_digest_7766392a2b5abaa49f79aa68364dc74c_tuple;
extern PyObject *const_str_plain_callable;
extern PyObject *const_str_plain_usec;
static PyObject *const_str_plain_time_taken;
extern PyObject *const_str_plain_join;
static PyObject *const_str_plain_dummy_src_name;
static PyObject *const_str_digest_7c6e644650a98759671745375ef1935e;
static PyObject *const_str_digest_20cf3cc16ef31de7a917b80b0e03187f;
extern PyObject *const_str_plain_argv;
extern PyObject *const_str_plain_cache;
static PyObject *const_str_digest_591ff80880463d5285341410cf8ff4a2;
static PyObject *const_str_digest_ce1750e23b9a7b42115035eeb53c3d61;
static PyObject *const_str_digest_e14703a56fc503f204d48b7e1a65c83e;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_setup;
static PyObject *const_str_plain_clock;
extern PyObject *const_tuple_6e0ce2585290961afef9353bf934255f_tuple;
extern PyObject *const_str_plain_sec;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_reverse;
static PyObject *const_str_plain_default_number;
static PyObject *const_str_digest_08572d151ada16695ef18846ef0999f0;
static PyObject *const_str_digest_cb28f673221132504a6bf03d8e180482;
extern PyObject *const_str_plain_time;
static PyObject *const_str_plain_gcold;
extern PyObject *const_str_plain_stmt;
extern PyObject *const_str_plain_getopt;
static PyObject *const_str_digest_195461b662806d99052f95be0a7c853e;
extern PyObject *const_str_plain_it;
static PyObject *const_tuple_a6d25c44203b132f477bbf9fc6b556f3_tuple;
extern PyObject *const_str_digest_068eb885e4aaedf6bb189a0c4eb85723;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain_template;
static PyObject *const_str_plain_timing;
extern PyObject *const_str_plain___qualname__;
extern PyObject *const_str_plain_unit;
static PyObject *const_tuple_str_plain_Timer_tuple_empty_tuple;
static PyObject *const_str_digest_5e4fcabf92f93f7053aeb447830769f8;
extern PyObject *const_str_plain_global_ns;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_plain_src;
static PyObject *const_str_digest_79812f07a0ece8a8b14e849a69a4bdc1;
static PyObject *const_str_digest_049703c18ef0c96293916413ccaae0b2;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_digest_68e779b074842129991baeb4e329e7d3;
extern PyObject *const_str_digest_8d9a7968bdcf97bf89ecd9cc70ce5a60;
static PyObject *const_str_digest_a062bb54d2d5e709bfe0b2d62e381a8f;
static PyObject *const_str_digest_368d06d32f60e24d7f6031e6bc1b8fe5;
extern PyObject *const_str_plain_insert;
extern PyObject *const_str_digest_fef05c70694d980a2a7cc5b20a1e6dd6;
static PyObject *const_str_digest_b3b0c318412dec5f595d758ec0925ea8;
extern PyObject *const_str_plain_init;
static PyObject *const_str_digest_e224eca0f2240417145f69ecb0460d13;
extern PyObject *const_int_pos_8;
static PyObject *const_tuple_af8543063bc958652753e0a711178ea3_tuple;
extern PyObject *const_str_plain_globals;
extern PyObject *const_str_digest_e82553f663df8dab605e0971ec523cc1;
extern PyObject *const_tuple_a3615cdf546544b088f29f72a042acfd_tuple;
static PyObject *const_list_e6e87c2c19a876e203cafb64c470204f_list;
extern PyObject *const_str_plain_indent;
extern PyObject *const_tuple_str_newline_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_a51bbef14853c1ad91d4b940ba774fba;
extern PyObject *const_str_space;
extern PyObject *const_str_plain_repeat;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_stderr;
static PyObject *const_str_digest_9d2b5ebdfc7ec2db24750c3eb29f60b7;
extern PyObject *const_str_plain_curdir;
extern PyObject *const_str_plain_r;
static PyObject *const_tuple_91e6f084dff6f14053e637233fad187f_tuple;
extern PyObject *const_int_pos_10;
extern PyObject *const_str_plain_linecache;
static PyObject *const_tuple_str_plain_unit_str_plain_scale_tuple;
static PyObject *const_str_digest_40f15531cf724e8c383d6837c281251e;
extern PyObject *const_str_plain_gc;
extern PyObject *const_str_plain_error;
static PyObject *const_tuple_95ad3ebb34c462f93cfb56aa68bd48d2_tuple;
static PyObject *const_str_digest_2bff8ec204a36ab73ea44757966a33b9;
static PyObject *const_str_digest_2db689004f00b3816cc56f58f22ae5bc;
extern PyObject *const_str_plain_split;
static PyObject *const_list_5e464cba68cd9ad828ebb850dedca079_list;
static PyObject *const_tuple_d4c35b1c89dc2dd134582bee108aa26c_tuple;
static PyObject *const_tuple_1257e62a8722398382ac11e25090f7dc_tuple;
static PyObject *const_str_digest_59d897cfbb44002b2224a3d0f7660316;
static PyObject *const_xrange_1_10;
extern PyObject *const_str_plain_verbose;
static PyObject *const_str_digest_0640b04cf29a16311d1a1b1108274780;
static PyObject *const_tuple_bd38caf2347077341bf86db902adc50e_tuple;
extern PyObject *const_str_plain__globals;
static PyObject *const_dict_560f6166767527ce23eb7c1434d00167;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_3c503b0baaa70090d86d1f39c627c80b;
static PyObject *const_str_plain_secs;
extern PyObject *const_str_plain_disable;
extern PyObject *const_str_digest_c836122af34ee7a172b779f26da7801f;
extern PyObject *const_int_0;
static PyObject *const_str_plain_process_time;
extern PyObject *const_float_1000000_0;
extern PyObject *const_str_plain_code;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_plain_print_exc;
static PyObject *const_str_digest_64c31788e9afa8692cf6d2cb5ef4a5ac;
extern PyObject *const_str_plain__setup;
static PyObject *const_str_plain_perf_counter;
static PyObject *const_str_plain_stmtprefix;
static PyObject *const_tuple_04e58376c5ebe0fbbe4fac7386463934_tuple;
static PyObject *const_str_digest_7766392a2b5abaa49f79aa68364dc74c;
extern PyObject *const_float_1000_0;
extern PyObject *const_str_plain_timer;
extern PyObject *const_float_0_2;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_digest_7436cd68ba8ffbc71baa1bc9f27efa15;
extern PyObject *const_int_pos_4;
static PyObject *const_dict_ba37c27eeb8c2c504891a3501230d87d;
extern PyObject *const_str_plain_callback;
static PyObject *const_tuple_897607a5df38c587a73d151b8544c2a9_tuple;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_digest_4e4a9664bf4f3f3682c520ad2ee742d1;
static PyObject *const_str_digest_1ed3208926f70ec53ffed3cde251d404;
static PyObject *const_str_digest_c98bcb8596b1629dc0d47a9c3dcb3a4c;
static PyObject *const_str_digest_9a184526abe31ebefb9cd5eefa977118;
static PyObject *const_str_digest_ddba92abe6cfba87ded8b1f2626dc277;
static PyObject *const_str_plain__wrap_timer;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_plain_reindent;
static PyObject *const_str_digest_02e1d405c354309bd7a79d0213f12ada;
static PyObject *const_str_digest_65c345ff789c0edf607543414df1985c;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_digest_7665ac667d3db26fedd965f4be5df91d;
static PyObject *const_tuple_str_digest_65c345ff789c0edf607543414df1985c_tuple;
extern PyObject *const_str_plain___module__;
static PyObject *const_tuple_391eebb79fd25273c8b6bdef9f902bc6_tuple;
extern PyObject *const_str_plain_sys;
static PyObject *const_str_digest_fa58daa946715b4bef2c9be4da481035;
static PyObject *const_str_digest_8a9e659f3f9159fd0434123c418a524c;
extern PyObject *const_str_digest_59859f73ac9e852f31ad1e0e17633e44;
static PyObject *const_str_digest_7a1a13ffd96756c39edb82262b5b7308;
static PyObject *const_str_digest_331f224e521bfec8d336fddefdc0a600;
extern PyObject *const_str_plain_default_timer;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_replace;
extern PyObject *const_dict_20f16b30e1951d468c3080dfc46b8748;
extern PyObject *const_str_plain_Timer;
static PyObject *const_str_digest_056cea1d517f0a2931333a8d8fd04f67;
static PyObject *const_str_plain_msec;
static PyObject *const_str_digest_b2c17ad22315c5ba07abd47530b5a32e;
static PyObject *const_str_digest_e725917f01a78078ace93f5c2dfeedcf;
extern PyObject *const_int_pos_1000000;
extern PyObject *const_str_newline;
extern PyObject *const_str_plain_enable;
extern PyObject *const_str_plain_print;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_58a32e928f753f63b9346f248806122b;
static PyObject *const_tuple_str_plain_src_str_plain_indent_tuple;
extern PyObject *const_str_plain_self;
static PyObject *const_tuple_eeda67ad87f171aff7be2c48b77d9656_tuple;
extern PyObject *const_str_plain_process;
static PyObject *const_tuple_224b1a911586ec904425afcc77895bf0_tuple;
static PyObject *const_tuple_8e2b48c68203121b7dc91489aed9c35c_tuple;
static PyObject *const_str_digest_c633edc849f78a17d5800d362f2a667c;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_sort;
static PyObject *const_str_digest_6200706edd1e762cc5f36aa79e76c018;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_empty;
extern PyObject *const_str_angle_string;
extern PyObject *const_str_plain_help;
extern PyObject *const_str_plain_number;
extern PyObject *const_dict_fb4ddbadafbecbaef28aef989e4b600e;
extern PyObject *const_str_plain_file;
extern PyObject *const_str_plain_exec;
static PyObject *const_str_digest_c30fdaebbd2694ec085b24e6fefc9900;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_local_ns = UNSTREAM_STRING( &constant_bin[ 2019048 ], 8, 1 );
    const_str_plain_default_repeat = UNSTREAM_STRING( &constant_bin[ 2019056 ], 14, 1 );
    const_str_digest_b51aa70a4c204aa11a570d8a33a12663 = UNSTREAM_STRING( &constant_bin[ 2019070 ], 37, 0 );
    const_str_plain__stmt = UNSTREAM_STRING( &constant_bin[ 1401883 ], 5, 1 );
    const_tuple_fb2d8ec88bfb9a9bb2e89742d91aa122_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_fb2d8ec88bfb9a9bb2e89742d91aa122_tuple, 0, const_str_digest_7665ac667d3db26fedd965f4be5df91d ); Py_INCREF( const_str_digest_7665ac667d3db26fedd965f4be5df91d );
    const_str_digest_20cf3cc16ef31de7a917b80b0e03187f = UNSTREAM_STRING( &constant_bin[ 2019107 ], 6, 0 );
    PyTuple_SET_ITEM( const_tuple_fb2d8ec88bfb9a9bb2e89742d91aa122_tuple, 1, const_str_digest_20cf3cc16ef31de7a917b80b0e03187f ); Py_INCREF( const_str_digest_20cf3cc16ef31de7a917b80b0e03187f );
    const_tuple_str_plain_x_str_plain_precision_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_precision_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_x_str_plain_precision_tuple, 1, const_str_plain_precision ); Py_INCREF( const_str_plain_precision );
    const_str_digest_5036806efc2ac20bbb1c4dc5889530f2 = UNSTREAM_STRING( &constant_bin[ 2019113 ], 136, 0 );
    const_str_digest_f1ec9750d101e1d77deaf939de8937eb = UNSTREAM_STRING( &constant_bin[ 2019249 ], 9, 0 );
    const_tuple_57b7a2951ae5ca6b0e6601cedf807da5_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_57b7a2951ae5ca6b0e6601cedf807da5_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_57b7a2951ae5ca6b0e6601cedf807da5_tuple, 1, const_str_plain_repeat ); Py_INCREF( const_str_plain_repeat );
    PyTuple_SET_ITEM( const_tuple_57b7a2951ae5ca6b0e6601cedf807da5_tuple, 2, const_str_plain_number ); Py_INCREF( const_str_plain_number );
    PyTuple_SET_ITEM( const_tuple_57b7a2951ae5ca6b0e6601cedf807da5_tuple, 3, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_57b7a2951ae5ca6b0e6601cedf807da5_tuple, 4, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_57b7a2951ae5ca6b0e6601cedf807da5_tuple, 5, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    const_str_plain_autorange = UNSTREAM_STRING( &constant_bin[ 2019258 ], 9, 1 );
    const_str_digest_c584d85c5737e9d914083c14a105a3e1 = UNSTREAM_STRING( &constant_bin[ 2019267 ], 15, 0 );
    const_tuple_c8d76755300dc6d22fde2515a7e9310c_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_c8d76755300dc6d22fde2515a7e9310c_tuple, 0, const_str_plain_stmt ); Py_INCREF( const_str_plain_stmt );
    PyTuple_SET_ITEM( const_tuple_c8d76755300dc6d22fde2515a7e9310c_tuple, 1, const_str_plain_setup ); Py_INCREF( const_str_plain_setup );
    PyTuple_SET_ITEM( const_tuple_c8d76755300dc6d22fde2515a7e9310c_tuple, 2, const_str_plain_timer ); Py_INCREF( const_str_plain_timer );
    PyTuple_SET_ITEM( const_tuple_c8d76755300dc6d22fde2515a7e9310c_tuple, 3, const_str_plain_repeat ); Py_INCREF( const_str_plain_repeat );
    PyTuple_SET_ITEM( const_tuple_c8d76755300dc6d22fde2515a7e9310c_tuple, 4, const_str_plain_number ); Py_INCREF( const_str_plain_number );
    PyTuple_SET_ITEM( const_tuple_c8d76755300dc6d22fde2515a7e9310c_tuple, 5, const_str_plain_globals ); Py_INCREF( const_str_plain_globals );
    const_tuple_str_digest_7766392a2b5abaa49f79aa68364dc74c_tuple = PyTuple_New( 1 );
    const_str_digest_7766392a2b5abaa49f79aa68364dc74c = UNSTREAM_STRING( &constant_bin[ 2019282 ], 35, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_7766392a2b5abaa49f79aa68364dc74c_tuple, 0, const_str_digest_7766392a2b5abaa49f79aa68364dc74c ); Py_INCREF( const_str_digest_7766392a2b5abaa49f79aa68364dc74c );
    const_str_plain_time_taken = UNSTREAM_STRING( &constant_bin[ 2019317 ], 10, 1 );
    const_str_plain_dummy_src_name = UNSTREAM_STRING( &constant_bin[ 2019327 ], 14, 1 );
    const_str_digest_7c6e644650a98759671745375ef1935e = UNSTREAM_STRING( &constant_bin[ 2019341 ], 659, 0 );
    const_str_digest_591ff80880463d5285341410cf8ff4a2 = UNSTREAM_STRING( &constant_bin[ 2020000 ], 35, 0 );
    const_str_digest_ce1750e23b9a7b42115035eeb53c3d61 = UNSTREAM_STRING( &constant_bin[ 2020035 ], 8, 0 );
    const_str_digest_e14703a56fc503f204d48b7e1a65c83e = UNSTREAM_STRING( &constant_bin[ 2020043 ], 5, 0 );
    const_str_plain_clock = UNSTREAM_STRING( &constant_bin[ 834130 ], 5, 1 );
    const_str_plain_default_number = UNSTREAM_STRING( &constant_bin[ 2020048 ], 14, 1 );
    const_str_digest_08572d151ada16695ef18846ef0999f0 = UNSTREAM_STRING( &constant_bin[ 2020062 ], 42, 0 );
    const_str_digest_cb28f673221132504a6bf03d8e180482 = UNSTREAM_STRING( &constant_bin[ 2020104 ], 7, 0 );
    const_str_plain_gcold = UNSTREAM_STRING( &constant_bin[ 2020111 ], 5, 1 );
    const_str_digest_195461b662806d99052f95be0a7c853e = UNSTREAM_STRING( &constant_bin[ 2020116 ], 7, 0 );
    const_tuple_a6d25c44203b132f477bbf9fc6b556f3_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_a6d25c44203b132f477bbf9fc6b556f3_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_a6d25c44203b132f477bbf9fc6b556f3_tuple, 1, const_str_plain_callback ); Py_INCREF( const_str_plain_callback );
    PyTuple_SET_ITEM( const_tuple_a6d25c44203b132f477bbf9fc6b556f3_tuple, 2, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_a6d25c44203b132f477bbf9fc6b556f3_tuple, 3, const_str_plain_number ); Py_INCREF( const_str_plain_number );
    PyTuple_SET_ITEM( const_tuple_a6d25c44203b132f477bbf9fc6b556f3_tuple, 4, const_str_plain_time_taken ); Py_INCREF( const_str_plain_time_taken );
    const_str_plain_timing = UNSTREAM_STRING( &constant_bin[ 2019633 ], 6, 1 );
    const_tuple_str_plain_Timer_tuple_empty_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Timer_tuple_empty_tuple, 0, const_str_plain_Timer ); Py_INCREF( const_str_plain_Timer );
    PyTuple_SET_ITEM( const_tuple_str_plain_Timer_tuple_empty_tuple, 1, const_tuple_empty ); Py_INCREF( const_tuple_empty );
    const_str_digest_5e4fcabf92f93f7053aeb447830769f8 = UNSTREAM_STRING( &constant_bin[ 2020123 ], 13, 0 );
    const_str_digest_79812f07a0ece8a8b14e849a69a4bdc1 = UNSTREAM_STRING( &constant_bin[ 2020136 ], 7, 0 );
    const_str_digest_049703c18ef0c96293916413ccaae0b2 = UNSTREAM_STRING( &constant_bin[ 2020143 ], 15, 0 );
    const_str_digest_a062bb54d2d5e709bfe0b2d62e381a8f = UNSTREAM_STRING( &constant_bin[ 2020158 ], 712, 0 );
    const_str_digest_368d06d32f60e24d7f6031e6bc1b8fe5 = UNSTREAM_STRING( &constant_bin[ 2020870 ], 22, 0 );
    const_str_digest_b3b0c318412dec5f595d758ec0925ea8 = UNSTREAM_STRING( &constant_bin[ 2020892 ], 10, 0 );
    const_str_digest_e224eca0f2240417145f69ecb0460d13 = UNSTREAM_STRING( &constant_bin[ 2020902 ], 13, 0 );
    const_tuple_af8543063bc958652753e0a711178ea3_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_af8543063bc958652753e0a711178ea3_tuple, 0, const_str_digest_8b4c8c81913e132a2fb432c041f3150f ); Py_INCREF( const_str_digest_8b4c8c81913e132a2fb432c041f3150f );
    PyTuple_SET_ITEM( const_tuple_af8543063bc958652753e0a711178ea3_tuple, 1, const_str_digest_cb28f673221132504a6bf03d8e180482 ); Py_INCREF( const_str_digest_cb28f673221132504a6bf03d8e180482 );
    const_list_e6e87c2c19a876e203cafb64c470204f_list = PyList_New( 9 );
    const_str_digest_64c31788e9afa8692cf6d2cb5ef4a5ac = UNSTREAM_STRING( &constant_bin[ 2020915 ], 7, 0 );
    PyList_SET_ITEM( const_list_e6e87c2c19a876e203cafb64c470204f_list, 0, const_str_digest_64c31788e9afa8692cf6d2cb5ef4a5ac ); Py_INCREF( const_str_digest_64c31788e9afa8692cf6d2cb5ef4a5ac );
    const_str_digest_ddba92abe6cfba87ded8b1f2626dc277 = UNSTREAM_STRING( &constant_bin[ 2020146 ], 6, 0 );
    PyList_SET_ITEM( const_list_e6e87c2c19a876e203cafb64c470204f_list, 1, const_str_digest_ddba92abe6cfba87ded8b1f2626dc277 ); Py_INCREF( const_str_digest_ddba92abe6cfba87ded8b1f2626dc277 );
    PyList_SET_ITEM( const_list_e6e87c2c19a876e203cafb64c470204f_list, 2, const_str_digest_79812f07a0ece8a8b14e849a69a4bdc1 ); Py_INCREF( const_str_digest_79812f07a0ece8a8b14e849a69a4bdc1 );
    PyList_SET_ITEM( const_list_e6e87c2c19a876e203cafb64c470204f_list, 3, const_str_plain_time ); Py_INCREF( const_str_plain_time );
    PyList_SET_ITEM( const_list_e6e87c2c19a876e203cafb64c470204f_list, 4, const_str_plain_clock ); Py_INCREF( const_str_plain_clock );
    PyList_SET_ITEM( const_list_e6e87c2c19a876e203cafb64c470204f_list, 5, const_str_plain_process ); Py_INCREF( const_str_plain_process );
    PyList_SET_ITEM( const_list_e6e87c2c19a876e203cafb64c470204f_list, 6, const_str_plain_verbose ); Py_INCREF( const_str_plain_verbose );
    PyList_SET_ITEM( const_list_e6e87c2c19a876e203cafb64c470204f_list, 7, const_str_digest_e14703a56fc503f204d48b7e1a65c83e ); Py_INCREF( const_str_digest_e14703a56fc503f204d48b7e1a65c83e );
    PyList_SET_ITEM( const_list_e6e87c2c19a876e203cafb64c470204f_list, 8, const_str_plain_help ); Py_INCREF( const_str_plain_help );
    const_str_digest_a51bbef14853c1ad91d4b940ba774fba = UNSTREAM_STRING( &constant_bin[ 2020922 ], 12, 0 );
    const_str_digest_9d2b5ebdfc7ec2db24750c3eb29f60b7 = UNSTREAM_STRING( &constant_bin[ 2020934 ], 12, 0 );
    const_tuple_91e6f084dff6f14053e637233fad187f_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_91e6f084dff6f14053e637233fad187f_tuple, 0, const_str_digest_103511b2d15f4b9dd33ac43d29126685 ); Py_INCREF( const_str_digest_103511b2d15f4b9dd33ac43d29126685 );
    const_str_digest_3c503b0baaa70090d86d1f39c627c80b = UNSTREAM_STRING( &constant_bin[ 2020946 ], 8, 0 );
    PyTuple_SET_ITEM( const_tuple_91e6f084dff6f14053e637233fad187f_tuple, 1, const_str_digest_3c503b0baaa70090d86d1f39c627c80b ); Py_INCREF( const_str_digest_3c503b0baaa70090d86d1f39c627c80b );
    const_tuple_str_plain_unit_str_plain_scale_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_unit_str_plain_scale_tuple, 0, const_str_plain_unit ); Py_INCREF( const_str_plain_unit );
    PyTuple_SET_ITEM( const_tuple_str_plain_unit_str_plain_scale_tuple, 1, const_str_plain_scale ); Py_INCREF( const_str_plain_scale );
    const_str_digest_40f15531cf724e8c383d6837c281251e = UNSTREAM_STRING( &constant_bin[ 2020954 ], 489, 0 );
    const_tuple_95ad3ebb34c462f93cfb56aa68bd48d2_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_95ad3ebb34c462f93cfb56aa68bd48d2_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_95ad3ebb34c462f93cfb56aa68bd48d2_tuple, 1, const_str_plain_file ); Py_INCREF( const_str_plain_file );
    PyTuple_SET_ITEM( const_tuple_95ad3ebb34c462f93cfb56aa68bd48d2_tuple, 2, const_str_plain_linecache ); Py_INCREF( const_str_plain_linecache );
    PyTuple_SET_ITEM( const_tuple_95ad3ebb34c462f93cfb56aa68bd48d2_tuple, 3, const_str_plain_traceback ); Py_INCREF( const_str_plain_traceback );
    const_str_digest_2bff8ec204a36ab73ea44757966a33b9 = UNSTREAM_STRING( &constant_bin[ 2021443 ], 35, 0 );
    const_str_digest_2db689004f00b3816cc56f58f22ae5bc = UNSTREAM_STRING( &constant_bin[ 2021478 ], 8, 0 );
    const_list_5e464cba68cd9ad828ebb850dedca079_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_5e464cba68cd9ad828ebb850dedca079_list, 0, const_str_plain_Timer ); Py_INCREF( const_str_plain_Timer );
    PyList_SET_ITEM( const_list_5e464cba68cd9ad828ebb850dedca079_list, 1, const_str_plain_timeit ); Py_INCREF( const_str_plain_timeit );
    PyList_SET_ITEM( const_list_5e464cba68cd9ad828ebb850dedca079_list, 2, const_str_plain_repeat ); Py_INCREF( const_str_plain_repeat );
    PyList_SET_ITEM( const_list_5e464cba68cd9ad828ebb850dedca079_list, 3, const_str_plain_default_timer ); Py_INCREF( const_str_plain_default_timer );
    const_tuple_d4c35b1c89dc2dd134582bee108aa26c_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_d4c35b1c89dc2dd134582bee108aa26c_tuple, 0, const_str_digest_7436cd68ba8ffbc71baa1bc9f27efa15 ); Py_INCREF( const_str_digest_7436cd68ba8ffbc71baa1bc9f27efa15 );
    PyTuple_SET_ITEM( const_tuple_d4c35b1c89dc2dd134582bee108aa26c_tuple, 1, const_str_digest_ce1750e23b9a7b42115035eeb53c3d61 ); Py_INCREF( const_str_digest_ce1750e23b9a7b42115035eeb53c3d61 );
    const_tuple_1257e62a8722398382ac11e25090f7dc_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 2021486 ], 187 );
    const_str_digest_59d897cfbb44002b2224a3d0f7660316 = UNSTREAM_STRING( &constant_bin[ 2021673 ], 7, 0 );
    const_xrange_1_10 = BUILTIN_XRANGE3( const_int_pos_1, const_int_pos_10, const_int_pos_1 );
    const_str_digest_0640b04cf29a16311d1a1b1108274780 = UNSTREAM_STRING( &constant_bin[ 2021680 ], 38, 0 );
    const_tuple_bd38caf2347077341bf86db902adc50e_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_bd38caf2347077341bf86db902adc50e_tuple, 0, const_str_digest_c836122af34ee7a172b779f26da7801f ); Py_INCREF( const_str_digest_c836122af34ee7a172b779f26da7801f );
    PyTuple_SET_ITEM( const_tuple_bd38caf2347077341bf86db902adc50e_tuple, 1, const_str_digest_195461b662806d99052f95be0a7c853e ); Py_INCREF( const_str_digest_195461b662806d99052f95be0a7c853e );
    const_dict_560f6166767527ce23eb7c1434d00167 = _PyDict_NewPresized( 3 );
    PyDict_SetItem( const_dict_560f6166767527ce23eb7c1434d00167, const_str_plain_usec, const_int_pos_1 );
    const_str_plain_msec = UNSTREAM_STRING( &constant_bin[ 1041747 ], 4, 1 );
    PyDict_SetItem( const_dict_560f6166767527ce23eb7c1434d00167, const_str_plain_msec, const_float_1000_0 );
    PyDict_SetItem( const_dict_560f6166767527ce23eb7c1434d00167, const_str_plain_sec, const_float_1000000_0 );
    assert( PyDict_Size( const_dict_560f6166767527ce23eb7c1434d00167 ) == 3 );
    const_str_plain_secs = UNSTREAM_STRING( &constant_bin[ 442015 ], 4, 1 );
    const_str_plain_process_time = UNSTREAM_STRING( &constant_bin[ 2021718 ], 12, 1 );
    const_str_plain_perf_counter = UNSTREAM_STRING( &constant_bin[ 2021730 ], 12, 1 );
    const_str_plain_stmtprefix = UNSTREAM_STRING( &constant_bin[ 2021742 ], 10, 1 );
    const_tuple_04e58376c5ebe0fbbe4fac7386463934_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_04e58376c5ebe0fbbe4fac7386463934_tuple, 0, const_str_plain_stmt ); Py_INCREF( const_str_plain_stmt );
    PyTuple_SET_ITEM( const_tuple_04e58376c5ebe0fbbe4fac7386463934_tuple, 1, const_str_plain_setup ); Py_INCREF( const_str_plain_setup );
    PyTuple_SET_ITEM( const_tuple_04e58376c5ebe0fbbe4fac7386463934_tuple, 2, const_str_plain_timer ); Py_INCREF( const_str_plain_timer );
    PyTuple_SET_ITEM( const_tuple_04e58376c5ebe0fbbe4fac7386463934_tuple, 3, const_str_plain_number ); Py_INCREF( const_str_plain_number );
    PyTuple_SET_ITEM( const_tuple_04e58376c5ebe0fbbe4fac7386463934_tuple, 4, const_str_plain_globals ); Py_INCREF( const_str_plain_globals );
    const_dict_ba37c27eeb8c2c504891a3501230d87d = _PyDict_NewPresized( 1 );
    const_str_plain__wrap_timer = UNSTREAM_STRING( &constant_bin[ 2019795 ], 11, 1 );
    PyDict_SetItem( const_dict_ba37c27eeb8c2c504891a3501230d87d, const_str_plain__wrap_timer, Py_None );
    assert( PyDict_Size( const_dict_ba37c27eeb8c2c504891a3501230d87d ) == 1 );
    const_tuple_897607a5df38c587a73d151b8544c2a9_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_897607a5df38c587a73d151b8544c2a9_tuple, 0, const_str_digest_068eb885e4aaedf6bb189a0c4eb85723 ); Py_INCREF( const_str_digest_068eb885e4aaedf6bb189a0c4eb85723 );
    const_str_digest_331f224e521bfec8d336fddefdc0a600 = UNSTREAM_STRING( &constant_bin[ 2021752 ], 9, 0 );
    PyTuple_SET_ITEM( const_tuple_897607a5df38c587a73d151b8544c2a9_tuple, 1, const_str_digest_331f224e521bfec8d336fddefdc0a600 ); Py_INCREF( const_str_digest_331f224e521bfec8d336fddefdc0a600 );
    const_str_digest_1ed3208926f70ec53ffed3cde251d404 = UNSTREAM_STRING( &constant_bin[ 2021761 ], 67, 0 );
    const_str_digest_c98bcb8596b1629dc0d47a9c3dcb3a4c = UNSTREAM_STRING( &constant_bin[ 2021828 ], 12, 0 );
    const_str_digest_9a184526abe31ebefb9cd5eefa977118 = UNSTREAM_STRING( &constant_bin[ 2021840 ], 15, 0 );
    const_str_plain_reindent = UNSTREAM_STRING( &constant_bin[ 2020072 ], 8, 1 );
    const_str_digest_02e1d405c354309bd7a79d0213f12ada = UNSTREAM_STRING( &constant_bin[ 2021855 ], 116, 0 );
    const_str_digest_65c345ff789c0edf607543414df1985c = UNSTREAM_STRING( &constant_bin[ 2021971 ], 52, 0 );
    const_tuple_str_digest_65c345ff789c0edf607543414df1985c_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_65c345ff789c0edf607543414df1985c_tuple, 0, const_str_digest_65c345ff789c0edf607543414df1985c ); Py_INCREF( const_str_digest_65c345ff789c0edf607543414df1985c );
    const_tuple_391eebb79fd25273c8b6bdef9f902bc6_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_391eebb79fd25273c8b6bdef9f902bc6_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_391eebb79fd25273c8b6bdef9f902bc6_tuple, 1, const_str_plain_stmt ); Py_INCREF( const_str_plain_stmt );
    PyTuple_SET_ITEM( const_tuple_391eebb79fd25273c8b6bdef9f902bc6_tuple, 2, const_str_plain_setup ); Py_INCREF( const_str_plain_setup );
    PyTuple_SET_ITEM( const_tuple_391eebb79fd25273c8b6bdef9f902bc6_tuple, 3, const_str_plain_timer ); Py_INCREF( const_str_plain_timer );
    PyTuple_SET_ITEM( const_tuple_391eebb79fd25273c8b6bdef9f902bc6_tuple, 4, const_str_plain_globals ); Py_INCREF( const_str_plain_globals );
    PyTuple_SET_ITEM( const_tuple_391eebb79fd25273c8b6bdef9f902bc6_tuple, 5, const_str_plain_local_ns ); Py_INCREF( const_str_plain_local_ns );
    PyTuple_SET_ITEM( const_tuple_391eebb79fd25273c8b6bdef9f902bc6_tuple, 6, const_str_plain_global_ns ); Py_INCREF( const_str_plain_global_ns );
    PyTuple_SET_ITEM( const_tuple_391eebb79fd25273c8b6bdef9f902bc6_tuple, 7, const_str_plain_init ); Py_INCREF( const_str_plain_init );
    PyTuple_SET_ITEM( const_tuple_391eebb79fd25273c8b6bdef9f902bc6_tuple, 8, const_str_plain_stmtprefix ); Py_INCREF( const_str_plain_stmtprefix );
    PyTuple_SET_ITEM( const_tuple_391eebb79fd25273c8b6bdef9f902bc6_tuple, 9, const_str_plain_src ); Py_INCREF( const_str_plain_src );
    PyTuple_SET_ITEM( const_tuple_391eebb79fd25273c8b6bdef9f902bc6_tuple, 10, const_str_plain_code ); Py_INCREF( const_str_plain_code );
    const_str_digest_fa58daa946715b4bef2c9be4da481035 = UNSTREAM_STRING( &constant_bin[ 2022023 ], 67, 0 );
    const_str_digest_8a9e659f3f9159fd0434123c418a524c = UNSTREAM_STRING( &constant_bin[ 2022090 ], 28, 0 );
    const_str_digest_7a1a13ffd96756c39edb82262b5b7308 = UNSTREAM_STRING( &constant_bin[ 2022118 ], 15, 0 );
    const_str_digest_056cea1d517f0a2931333a8d8fd04f67 = UNSTREAM_STRING( &constant_bin[ 2022133 ], 1000, 0 );
    const_str_digest_b2c17ad22315c5ba07abd47530b5a32e = UNSTREAM_STRING( &constant_bin[ 2023133 ], 464, 0 );
    const_str_digest_e725917f01a78078ace93f5c2dfeedcf = UNSTREAM_STRING( &constant_bin[ 2023597 ], 1901, 0 );
    const_str_digest_58a32e928f753f63b9346f248806122b = UNSTREAM_STRING( &constant_bin[ 2025498 ], 41, 0 );
    const_tuple_str_plain_src_str_plain_indent_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_src_str_plain_indent_tuple, 0, const_str_plain_src ); Py_INCREF( const_str_plain_src );
    PyTuple_SET_ITEM( const_tuple_str_plain_src_str_plain_indent_tuple, 1, const_str_plain_indent ); Py_INCREF( const_str_plain_indent );
    const_tuple_eeda67ad87f171aff7be2c48b77d9656_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_eeda67ad87f171aff7be2c48b77d9656_tuple, 0, const_str_plain_number ); Py_INCREF( const_str_plain_number );
    PyTuple_SET_ITEM( const_tuple_eeda67ad87f171aff7be2c48b77d9656_tuple, 1, const_str_plain_time_taken ); Py_INCREF( const_str_plain_time_taken );
    PyTuple_SET_ITEM( const_tuple_eeda67ad87f171aff7be2c48b77d9656_tuple, 2, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_eeda67ad87f171aff7be2c48b77d9656_tuple, 3, const_str_plain_precision ); Py_INCREF( const_str_plain_precision );
    const_tuple_224b1a911586ec904425afcc77895bf0_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_224b1a911586ec904425afcc77895bf0_tuple, 0, const_str_digest_59859f73ac9e852f31ad1e0e17633e44 ); Py_INCREF( const_str_digest_59859f73ac9e852f31ad1e0e17633e44 );
    const_str_digest_c633edc849f78a17d5800d362f2a667c = UNSTREAM_STRING( &constant_bin[ 2024347 ], 6, 0 );
    PyTuple_SET_ITEM( const_tuple_224b1a911586ec904425afcc77895bf0_tuple, 1, const_str_digest_c633edc849f78a17d5800d362f2a667c ); Py_INCREF( const_str_digest_c633edc849f78a17d5800d362f2a667c );
    const_tuple_8e2b48c68203121b7dc91489aed9c35c_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_8e2b48c68203121b7dc91489aed9c35c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_8e2b48c68203121b7dc91489aed9c35c_tuple, 1, const_str_plain_number ); Py_INCREF( const_str_plain_number );
    PyTuple_SET_ITEM( const_tuple_8e2b48c68203121b7dc91489aed9c35c_tuple, 2, const_str_plain_it ); Py_INCREF( const_str_plain_it );
    PyTuple_SET_ITEM( const_tuple_8e2b48c68203121b7dc91489aed9c35c_tuple, 3, const_str_plain_gcold ); Py_INCREF( const_str_plain_gcold );
    PyTuple_SET_ITEM( const_tuple_8e2b48c68203121b7dc91489aed9c35c_tuple, 4, const_str_plain_timing ); Py_INCREF( const_str_plain_timing );
    const_str_digest_6200706edd1e762cc5f36aa79e76c018 = UNSTREAM_STRING( &constant_bin[ 2021911 ], 4, 0 );
    const_str_digest_c30fdaebbd2694ec085b24e6fefc9900 = UNSTREAM_STRING( &constant_bin[ 2025539 ], 485, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_timeit( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_21d183a9513175dfcd91f311dac4988b;
static PyCodeObject *codeobj_85421c13f84d10ad70c81612949c59b7;
static PyCodeObject *codeobj_e75408b108860e456e214734b8a4baef;
static PyCodeObject *codeobj_bd25ef9abedd92d185a453a4367d6185;
static PyCodeObject *codeobj_5a1a2ff44e9a1f3055675fc3d9715168;
static PyCodeObject *codeobj_0556833f0e26bc7682b6e809f11662cf;
static PyCodeObject *codeobj_8f50628a0497b926a897ab590a9977cf;
static PyCodeObject *codeobj_14efccae7512c91f30afe30775cbeb2a;
static PyCodeObject *codeobj_3f50548c536eb67672adebba6f610958;
static PyCodeObject *codeobj_022f33d3bc8327f06ac435493b8ef35e;
static PyCodeObject *codeobj_542b882075130e3f825c5b7b4c0059f0;
static PyCodeObject *codeobj_14e97ea3c2f20ea126146492dc607e36;
static PyCodeObject *codeobj_5e1f101e788009630da542ea0e4f674f;
static PyCodeObject *codeobj_e8ee1749abf4c41caea9a2df954d977e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_58a32e928f753f63b9346f248806122b;
    codeobj_21d183a9513175dfcd91f311dac4988b = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcontraction, 335, const_tuple_str_plain_x_str_plain_precision_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_85421c13f84d10ad70c81612949c59b7 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_listcontraction, 341, const_tuple_str_plain_unit_str_plain_scale_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e75408b108860e456e214734b8a4baef = MAKE_CODEOBJ( module_filename_obj, const_str_digest_c584d85c5737e9d914083c14a105a3e1, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_bd25ef9abedd92d185a453a4367d6185 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Timer, 84, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_5a1a2ff44e9a1f3055675fc3d9715168 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 102, const_tuple_391eebb79fd25273c8b6bdef9f902bc6_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0556833f0e26bc7682b6e809f11662cf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_autorange, 210, const_tuple_a6d25c44203b132f477bbf9fc6b556f3_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8f50628a0497b926a897ab590a9977cf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_callback, 320, const_tuple_eeda67ad87f171aff7be2c48b77d9656_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_14efccae7512c91f30afe30775cbeb2a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_main, 240, const_tuple_1257e62a8722398382ac11e25090f7dc_tuple, 1, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_3f50548c536eb67672adebba6f610958 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_print_exc, 137, const_tuple_95ad3ebb34c462f93cfb56aa68bd48d2_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_022f33d3bc8327f06ac435493b8ef35e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_reindent, 80, const_tuple_str_plain_src_str_plain_indent_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_542b882075130e3f825c5b7b4c0059f0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_repeat, 184, const_tuple_57b7a2951ae5ca6b0e6601cedf807da5_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_14e97ea3c2f20ea126146492dc607e36 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_repeat, 235, const_tuple_c8d76755300dc6d22fde2515a7e9310c_tuple, 6, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5e1f101e788009630da542ea0e4f674f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_timeit, 164, const_tuple_8e2b48c68203121b7dc91489aed9c35c_tuple, 2, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e8ee1749abf4c41caea9a2df954d977e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_timeit, 230, const_tuple_04e58376c5ebe0fbbe4fac7386463934_tuple, 5, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_timeit$$$function_1_reindent(  );


static PyObject *MAKE_FUNCTION_timeit$$$function_2___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_timeit$$$function_3_print_exc( PyObject *defaults );


static PyObject *MAKE_FUNCTION_timeit$$$function_4_timeit( PyObject *defaults );


static PyObject *MAKE_FUNCTION_timeit$$$function_5_repeat( PyObject *defaults );


static PyObject *MAKE_FUNCTION_timeit$$$function_6_autorange( PyObject *defaults );


static PyObject *MAKE_FUNCTION_timeit$$$function_7_timeit( PyObject *defaults );


static PyObject *MAKE_FUNCTION_timeit$$$function_8_repeat( PyObject *defaults );


static PyObject *MAKE_FUNCTION_timeit$$$function_9_main( PyObject *defaults, PyObject *kw_defaults );


static PyObject *MAKE_FUNCTION_timeit$$$function_9_main$$$function_1_callback( struct Nuitka_CellObject *closure_precision );


// The module function definitions.
static PyObject *impl_timeit$$$function_1_reindent( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_src = python_pars[ 0 ];
    PyObject *par_indent = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_022f33d3bc8327f06ac435493b8ef35e = NULL;

    struct Nuitka_FrameObject *frame_022f33d3bc8327f06ac435493b8ef35e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_022f33d3bc8327f06ac435493b8ef35e, codeobj_022f33d3bc8327f06ac435493b8ef35e, module_timeit, sizeof(void *)+sizeof(void *) );
    frame_022f33d3bc8327f06ac435493b8ef35e = cache_frame_022f33d3bc8327f06ac435493b8ef35e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_022f33d3bc8327f06ac435493b8ef35e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_022f33d3bc8327f06ac435493b8ef35e ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = par_src;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_replace );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = const_str_newline;
    tmp_left_name_1 = const_str_newline;
    tmp_left_name_2 = const_str_space;
    tmp_right_name_2 = par_indent;

    if ( tmp_right_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "indent" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 82;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 82;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 82;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    frame_022f33d3bc8327f06ac435493b8ef35e->m_frame.f_lineno = 82;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_022f33d3bc8327f06ac435493b8ef35e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_022f33d3bc8327f06ac435493b8ef35e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_022f33d3bc8327f06ac435493b8ef35e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_022f33d3bc8327f06ac435493b8ef35e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_022f33d3bc8327f06ac435493b8ef35e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_022f33d3bc8327f06ac435493b8ef35e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_022f33d3bc8327f06ac435493b8ef35e,
        type_description_1,
        par_src,
        par_indent
    );


    // Release cached frame.
    if ( frame_022f33d3bc8327f06ac435493b8ef35e == cache_frame_022f33d3bc8327f06ac435493b8ef35e )
    {
        Py_DECREF( frame_022f33d3bc8327f06ac435493b8ef35e );
    }
    cache_frame_022f33d3bc8327f06ac435493b8ef35e = NULL;

    assertFrameObject( frame_022f33d3bc8327f06ac435493b8ef35e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( timeit$$$function_1_reindent );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_src );
    par_src = NULL;

    Py_XDECREF( par_indent );
    par_indent = NULL;

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

    Py_XDECREF( par_src );
    par_src = NULL;

    Py_XDECREF( par_indent );
    par_indent = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( timeit$$$function_1_reindent );
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


static PyObject *impl_timeit$$$function_2___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_stmt = python_pars[ 1 ];
    PyObject *par_setup = python_pars[ 2 ];
    PyObject *par_timer = python_pars[ 3 ];
    PyObject *par_globals = python_pars[ 4 ];
    PyObject *var_local_ns = NULL;
    PyObject *var_global_ns = NULL;
    PyObject *var_init = NULL;
    PyObject *var_stmtprefix = NULL;
    PyObject *var_src = NULL;
    PyObject *var_code = NULL;
    PyObject *tmp_exec_call_1__globals = NULL;
    PyObject *tmp_exec_call_1__locals = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compile_filename_1;
    PyObject *tmp_compile_filename_2;
    PyObject *tmp_compile_filename_3;
    PyObject *tmp_compile_mode_1;
    PyObject *tmp_compile_mode_2;
    PyObject *tmp_compile_mode_3;
    PyObject *tmp_compile_source_1;
    PyObject *tmp_compile_source_2;
    PyObject *tmp_compile_source_3;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_eval_compiled_1;
    PyObject *tmp_eval_globals_1;
    PyObject *tmp_eval_locals_1;
    PyObject *tmp_eval_source_1;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    bool tmp_is_4;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_5a1a2ff44e9a1f3055675fc3d9715168 = NULL;

    struct Nuitka_FrameObject *frame_5a1a2ff44e9a1f3055675fc3d9715168;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    PyObject *locals_timeit$$$function_2___init__ = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5a1a2ff44e9a1f3055675fc3d9715168, codeobj_5a1a2ff44e9a1f3055675fc3d9715168, module_timeit, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5a1a2ff44e9a1f3055675fc3d9715168 = cache_frame_5a1a2ff44e9a1f3055675fc3d9715168;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5a1a2ff44e9a1f3055675fc3d9715168 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5a1a2ff44e9a1f3055675fc3d9715168 ) == 2 ); // Frame stack

    // Framed code:
    tmp_assattr_name_1 = par_timer;

    CHECK_OBJECT( tmp_assattr_name_1 );
    tmp_assattr_target_1 = par_self;

    CHECK_OBJECT( tmp_assattr_target_1 );
    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_timer, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = PyDict_New();
    assert( var_local_ns == NULL );
    var_local_ns = tmp_assign_source_1;

    tmp_compare_left_1 = par_globals;

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "globals" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain__globals );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__globals );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_globals" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_5a1a2ff44e9a1f3055675fc3d9715168->m_frame.f_lineno = 107;
    tmp_assign_source_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_2 = par_globals;

    if ( tmp_assign_source_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "globals" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 107;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_assign_source_2 );
    condexpr_end_1:;
    assert( var_global_ns == NULL );
    var_global_ns = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_empty;
    assert( var_init == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_init = tmp_assign_source_3;

    tmp_isinstance_inst_1 = par_setup;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "setup" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 109;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_compile_source_1 = par_setup;

    if ( tmp_compile_source_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "setup" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compile_filename_1 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_dummy_src_name );

    if (unlikely( tmp_compile_filename_1 == NULL ))
    {
        tmp_compile_filename_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dummy_src_name );
    }

    if ( tmp_compile_filename_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "dummy_src_name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compile_mode_1 = const_str_plain_exec;
    tmp_unused = COMPILE_CODE( tmp_compile_source_1, tmp_compile_filename_1, tmp_compile_mode_1, NULL, NULL, NULL );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_left_name_1 = par_setup;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "setup" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 112;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = const_str_newline;
    tmp_assign_source_4 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_stmtprefix == NULL );
    var_stmtprefix = tmp_assign_source_4;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_reindent );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_reindent );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "reindent" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_setup;

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "setup" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 113;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = const_int_pos_4;
    frame_5a1a2ff44e9a1f3055675fc3d9715168->m_frame.f_lineno = 113;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_setup;
        par_setup = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_callable );
    assert( tmp_called_name_3 != NULL );
    tmp_args_element_name_3 = par_setup;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "setup" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 114;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_5a1a2ff44e9a1f3055675fc3d9715168->m_frame.f_lineno = 114;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 114;
        type_description_1 = "ooooooooooo";
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
    tmp_ass_subvalue_1 = par_setup;

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "setup" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = var_local_ns;

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "local_ns" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = const_str_plain__setup;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = var_init;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "init" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 116;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = const_str_digest_049703c18ef0c96293916413ccaae0b2;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_6 = tmp_left_name_2;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    var_init = tmp_assign_source_6;

    tmp_assign_source_7 = const_str_empty;
    assert( var_stmtprefix == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_stmtprefix = tmp_assign_source_7;

    tmp_assign_source_8 = const_str_digest_2db689004f00b3816cc56f58f22ae5bc;
    {
        PyObject *old = par_setup;
        par_setup = tmp_assign_source_8;
        Py_INCREF( par_setup );
        Py_XDECREF( old );
    }

    goto branch_end_2;
    branch_no_2:;
    tmp_make_exception_arg_1 = const_str_digest_0640b04cf29a16311d1a1b1108274780;
    frame_5a1a2ff44e9a1f3055675fc3d9715168->m_frame.f_lineno = 120;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( !(tmp_raise_type_1 == NULL) );
    exception_type = tmp_raise_type_1;
    exception_lineno = 120;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
    branch_end_2:;
    branch_end_1:;
    tmp_isinstance_inst_2 = par_stmt;

    if ( tmp_isinstance_inst_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stmt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 121;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_2 = (PyObject *)&PyUnicode_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_left_name_3 = var_stmtprefix;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stmtprefix" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 123;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = par_stmt;

    if ( tmp_right_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stmt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 123;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compile_source_2 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_compile_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compile_filename_2 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_dummy_src_name );

    if (unlikely( tmp_compile_filename_2 == NULL ))
    {
        tmp_compile_filename_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dummy_src_name );
    }

    if ( tmp_compile_filename_2 == NULL )
    {
        Py_DECREF( tmp_compile_source_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "dummy_src_name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 123;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compile_mode_2 = const_str_plain_exec;
    tmp_unused = COMPILE_CODE( tmp_compile_source_2, tmp_compile_filename_2, tmp_compile_mode_2, NULL, NULL, NULL );
    Py_DECREF( tmp_compile_source_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_reindent );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_reindent );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "reindent" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 124;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_stmt;

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stmt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 124;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = const_int_pos_8;
    frame_5a1a2ff44e9a1f3055675fc3d9715168->m_frame.f_lineno = 124;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_stmt;
        par_stmt = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    goto branch_end_3;
    branch_no_3:;
    tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_callable );
    assert( tmp_called_name_5 != NULL );
    tmp_args_element_name_6 = par_stmt;

    if ( tmp_args_element_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stmt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 125;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_5a1a2ff44e9a1f3055675fc3d9715168->m_frame.f_lineno = 125;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 125;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
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
    tmp_ass_subvalue_2 = par_stmt;

    if ( tmp_ass_subvalue_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stmt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 126;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_2 = var_local_ns;

    if ( tmp_ass_subscribed_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "local_ns" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 126;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_2 = const_str_plain__stmt;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_4 = var_init;

    if ( tmp_left_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "init" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 127;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_4 = const_str_digest_5e4fcabf92f93f7053aeb447830769f8;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
    tmp_assign_source_10 = tmp_left_name_4;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    var_init = tmp_assign_source_10;

    tmp_assign_source_11 = const_str_digest_59d897cfbb44002b2224a3d0f7660316;
    {
        PyObject *old = par_stmt;
        par_stmt = tmp_assign_source_11;
        Py_INCREF( par_stmt );
        Py_XDECREF( old );
    }

    goto branch_end_4;
    branch_no_4:;
    tmp_make_exception_arg_2 = const_str_digest_b51aa70a4c204aa11a570d8a33a12663;
    frame_5a1a2ff44e9a1f3055675fc3d9715168->m_frame.f_lineno = 130;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( !(tmp_raise_type_2 == NULL) );
    exception_type = tmp_raise_type_2;
    exception_lineno = 130;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    type_description_1 = "ooooooooooo";
    goto frame_exception_exit_1;
    branch_end_4:;
    branch_end_3:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_template );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_template );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "template" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 131;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_stmt;
    tmp_dict_value_1 = par_stmt;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stmt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 131;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_setup;
    tmp_dict_value_2 = par_setup;

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "setup" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 131;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_init;
    tmp_dict_value_3 = var_init;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "init" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 131;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_5a1a2ff44e9a1f3055675fc3d9715168->m_frame.f_lineno = 131;
    tmp_assign_source_12 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_6, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_src == NULL );
    var_src = tmp_assign_source_12;

    tmp_assattr_name_2 = var_src;

    CHECK_OBJECT( tmp_assattr_name_2 );
    tmp_assattr_target_2 = par_self;

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 132;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_src, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_compile_source_3 = var_src;

    if ( tmp_compile_source_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "src" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 133;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compile_filename_3 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_dummy_src_name );

    if (unlikely( tmp_compile_filename_3 == NULL ))
    {
        tmp_compile_filename_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dummy_src_name );
    }

    if ( tmp_compile_filename_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "dummy_src_name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 133;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compile_mode_3 = const_str_plain_exec;
    tmp_assign_source_13 = COMPILE_CODE( tmp_compile_source_3, tmp_compile_filename_3, tmp_compile_mode_3, NULL, NULL, NULL );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_code == NULL );
    var_code = tmp_assign_source_13;

    // Tried code:
    tmp_assign_source_14 = var_global_ns;

    if ( tmp_assign_source_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "global_ns" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 134;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    assert( tmp_exec_call_1__globals == NULL );
    Py_INCREF( tmp_assign_source_14 );
    tmp_exec_call_1__globals = tmp_assign_source_14;

    tmp_assign_source_15 = var_local_ns;

    if ( tmp_assign_source_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "local_ns" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 134;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    assert( tmp_exec_call_1__locals == NULL );
    Py_INCREF( tmp_assign_source_15 );
    tmp_exec_call_1__locals = tmp_assign_source_15;

    tmp_compare_left_2 = tmp_exec_call_1__locals;

    CHECK_OBJECT( tmp_compare_left_2 );
    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_compare_left_3 = tmp_exec_call_1__globals;

    CHECK_OBJECT( tmp_compare_left_3 );
    tmp_compare_right_3 = Py_None;
    tmp_is_3 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if ( tmp_is_3 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    if (locals_timeit$$$function_2___init__ == NULL) locals_timeit$$$function_2___init__ = PyDict_New();
    tmp_assign_source_16 = locals_timeit$$$function_2___init__;
    Py_INCREF( tmp_assign_source_16 );
    if ( par_self != NULL )
    {
        UPDATE_STRING_DICT0( (PyDictObject *)tmp_assign_source_16, (Nuitka_StringObject *)const_str_plain_self, par_self );
    }
    else
    {
        int res = PyDict_DelItem( tmp_assign_source_16, const_str_plain_self );

        if ( res != 0 )
        {
            CLEAR_ERROR_OCCURRED();
        }
    }

    if ( par_stmt != NULL )
    {
        UPDATE_STRING_DICT0( (PyDictObject *)tmp_assign_source_16, (Nuitka_StringObject *)const_str_plain_stmt, par_stmt );
    }
    else
    {
        int res = PyDict_DelItem( tmp_assign_source_16, const_str_plain_stmt );

        if ( res != 0 )
        {
            CLEAR_ERROR_OCCURRED();
        }
    }

    if ( par_setup != NULL )
    {
        UPDATE_STRING_DICT0( (PyDictObject *)tmp_assign_source_16, (Nuitka_StringObject *)const_str_plain_setup, par_setup );
    }
    else
    {
        int res = PyDict_DelItem( tmp_assign_source_16, const_str_plain_setup );

        if ( res != 0 )
        {
            CLEAR_ERROR_OCCURRED();
        }
    }

    if ( par_timer != NULL )
    {
        UPDATE_STRING_DICT0( (PyDictObject *)tmp_assign_source_16, (Nuitka_StringObject *)const_str_plain_timer, par_timer );
    }
    else
    {
        int res = PyDict_DelItem( tmp_assign_source_16, const_str_plain_timer );

        if ( res != 0 )
        {
            CLEAR_ERROR_OCCURRED();
        }
    }

    if ( par_globals != NULL )
    {
        UPDATE_STRING_DICT0( (PyDictObject *)tmp_assign_source_16, (Nuitka_StringObject *)const_str_plain_globals, par_globals );
    }
    else
    {
        int res = PyDict_DelItem( tmp_assign_source_16, const_str_plain_globals );

        if ( res != 0 )
        {
            CLEAR_ERROR_OCCURRED();
        }
    }

    if ( var_local_ns != NULL )
    {
        UPDATE_STRING_DICT0( (PyDictObject *)tmp_assign_source_16, (Nuitka_StringObject *)const_str_plain_local_ns, var_local_ns );
    }
    else
    {
        int res = PyDict_DelItem( tmp_assign_source_16, const_str_plain_local_ns );

        if ( res != 0 )
        {
            CLEAR_ERROR_OCCURRED();
        }
    }

    if ( var_global_ns != NULL )
    {
        UPDATE_STRING_DICT0( (PyDictObject *)tmp_assign_source_16, (Nuitka_StringObject *)const_str_plain_global_ns, var_global_ns );
    }
    else
    {
        int res = PyDict_DelItem( tmp_assign_source_16, const_str_plain_global_ns );

        if ( res != 0 )
        {
            CLEAR_ERROR_OCCURRED();
        }
    }

    if ( var_init != NULL )
    {
        UPDATE_STRING_DICT0( (PyDictObject *)tmp_assign_source_16, (Nuitka_StringObject *)const_str_plain_init, var_init );
    }
    else
    {
        int res = PyDict_DelItem( tmp_assign_source_16, const_str_plain_init );

        if ( res != 0 )
        {
            CLEAR_ERROR_OCCURRED();
        }
    }

    if ( var_stmtprefix != NULL )
    {
        UPDATE_STRING_DICT0( (PyDictObject *)tmp_assign_source_16, (Nuitka_StringObject *)const_str_plain_stmtprefix, var_stmtprefix );
    }
    else
    {
        int res = PyDict_DelItem( tmp_assign_source_16, const_str_plain_stmtprefix );

        if ( res != 0 )
        {
            CLEAR_ERROR_OCCURRED();
        }
    }

    if ( var_src != NULL )
    {
        UPDATE_STRING_DICT0( (PyDictObject *)tmp_assign_source_16, (Nuitka_StringObject *)const_str_plain_src, var_src );
    }
    else
    {
        int res = PyDict_DelItem( tmp_assign_source_16, const_str_plain_src );

        if ( res != 0 )
        {
            CLEAR_ERROR_OCCURRED();
        }
    }

    if ( var_code != NULL )
    {
        UPDATE_STRING_DICT0( (PyDictObject *)tmp_assign_source_16, (Nuitka_StringObject *)const_str_plain_code, var_code );
    }
    else
    {
        int res = PyDict_DelItem( tmp_assign_source_16, const_str_plain_code );

        if ( res != 0 )
        {
            CLEAR_ERROR_OCCURRED();
        }
    }

    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_16 = tmp_exec_call_1__globals;

    CHECK_OBJECT( tmp_assign_source_16 );
    Py_INCREF( tmp_assign_source_16 );
    condexpr_end_2:;
    {
        PyObject *old = tmp_exec_call_1__locals;
        assert( old != NULL );
        tmp_exec_call_1__locals = tmp_assign_source_16;
        Py_DECREF( old );
    }

    branch_no_5:;
    tmp_compare_left_4 = tmp_exec_call_1__globals;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = Py_None;
    tmp_is_4 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if ( tmp_is_4 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assign_source_17 = (PyObject *)moduledict_timeit;
    {
        PyObject *old = tmp_exec_call_1__globals;
        assert( old != NULL );
        tmp_exec_call_1__globals = tmp_assign_source_17;
        Py_INCREF( tmp_exec_call_1__globals );
        Py_DECREF( old );
    }

    branch_no_6:;
    tmp_eval_source_1 = var_code;

    if ( tmp_eval_source_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "code" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 134;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }

    tmp_eval_globals_1 = tmp_exec_call_1__globals;

    CHECK_OBJECT( tmp_eval_globals_1 );
    tmp_eval_locals_1 = tmp_exec_call_1__locals;

    CHECK_OBJECT( tmp_eval_locals_1 );
    tmp_eval_compiled_1 = COMPILE_CODE( tmp_eval_source_1, const_str_angle_string, const_str_plain_exec, NULL, NULL, NULL );
    if ( tmp_eval_compiled_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    tmp_outline_return_value_1 = EVAL_CODE( tmp_eval_compiled_1, tmp_eval_globals_1, tmp_eval_locals_1 );
    Py_DECREF( tmp_eval_compiled_1 );
    if ( tmp_outline_return_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_1 = "ooooooooooo";
        goto try_except_handler_2;
    }
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( timeit$$$function_2___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_exec_call_1__globals );
    Py_DECREF( tmp_exec_call_1__globals );
    tmp_exec_call_1__globals = NULL;

    CHECK_OBJECT( (PyObject *)tmp_exec_call_1__locals );
    Py_DECREF( tmp_exec_call_1__locals );
    tmp_exec_call_1__locals = NULL;

    goto outline_result_1;
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

    Py_XDECREF( tmp_exec_call_1__globals );
    tmp_exec_call_1__globals = NULL;

    Py_XDECREF( tmp_exec_call_1__locals );
    tmp_exec_call_1__locals = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( timeit$$$function_2___init__ );
    return NULL;
    outline_result_1:;
    tmp_unused = tmp_outline_return_value_1;
    Py_DECREF( tmp_unused );
    tmp_subscribed_name_1 = var_local_ns;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "local_ns" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_str_plain_inner;
    tmp_assattr_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = par_self;

    if ( tmp_assattr_target_3 == NULL )
    {
        Py_DECREF( tmp_assattr_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_inner, tmp_assattr_name_3 );
    Py_DECREF( tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        type_description_1 = "ooooooooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a1a2ff44e9a1f3055675fc3d9715168 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a1a2ff44e9a1f3055675fc3d9715168 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5a1a2ff44e9a1f3055675fc3d9715168, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5a1a2ff44e9a1f3055675fc3d9715168->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5a1a2ff44e9a1f3055675fc3d9715168, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5a1a2ff44e9a1f3055675fc3d9715168,
        type_description_1,
        par_self,
        par_stmt,
        par_setup,
        par_timer,
        par_globals,
        var_local_ns,
        var_global_ns,
        var_init,
        var_stmtprefix,
        var_src,
        var_code
    );


    // Release cached frame.
    if ( frame_5a1a2ff44e9a1f3055675fc3d9715168 == cache_frame_5a1a2ff44e9a1f3055675fc3d9715168 )
    {
        Py_DECREF( frame_5a1a2ff44e9a1f3055675fc3d9715168 );
    }
    cache_frame_5a1a2ff44e9a1f3055675fc3d9715168 = NULL;

    assertFrameObject( frame_5a1a2ff44e9a1f3055675fc3d9715168 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( timeit$$$function_2___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_stmt );
    par_stmt = NULL;

    Py_XDECREF( par_setup );
    par_setup = NULL;

    Py_XDECREF( par_timer );
    par_timer = NULL;

    Py_XDECREF( par_globals );
    par_globals = NULL;

    Py_XDECREF( var_local_ns );
    var_local_ns = NULL;

    Py_XDECREF( var_global_ns );
    var_global_ns = NULL;

    Py_XDECREF( var_init );
    var_init = NULL;

    Py_XDECREF( var_stmtprefix );
    var_stmtprefix = NULL;

    Py_XDECREF( var_src );
    var_src = NULL;

    Py_XDECREF( var_code );
    var_code = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_stmt );
    par_stmt = NULL;

    Py_XDECREF( par_setup );
    par_setup = NULL;

    Py_XDECREF( par_timer );
    par_timer = NULL;

    Py_XDECREF( par_globals );
    par_globals = NULL;

    Py_XDECREF( var_local_ns );
    var_local_ns = NULL;

    Py_XDECREF( var_global_ns );
    var_global_ns = NULL;

    Py_XDECREF( var_init );
    var_init = NULL;

    Py_XDECREF( var_stmtprefix );
    var_stmtprefix = NULL;

    Py_XDECREF( var_src );
    var_src = NULL;

    Py_XDECREF( var_code );
    var_code = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( timeit$$$function_2___init__ );
    return NULL;

function_exception_exit:
    Py_XDECREF( locals_timeit$$$function_2___init__ );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
function_return_exit:
    Py_XDECREF( locals_timeit$$$function_2___init__ );

CHECK_OBJECT( tmp_return_value );
assert( had_error || !ERROR_OCCURRED() );
return tmp_return_value;

}


static PyObject *impl_timeit$$$function_3_print_exc( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_file = python_pars[ 1 ];
    PyObject *var_linecache = NULL;
    PyObject *var_traceback = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    bool tmp_isnot_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_3f50548c536eb67672adebba6f610958 = NULL;

    struct Nuitka_FrameObject *frame_3f50548c536eb67672adebba6f610958;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3f50548c536eb67672adebba6f610958, codeobj_3f50548c536eb67672adebba6f610958, module_timeit, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3f50548c536eb67672adebba6f610958 = cache_frame_3f50548c536eb67672adebba6f610958;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3f50548c536eb67672adebba6f610958 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3f50548c536eb67672adebba6f610958 ) == 2 ); // Frame stack

    // Framed code:
    tmp_name_name_1 = const_str_plain_linecache;
    tmp_globals_name_1 = (PyObject *)moduledict_timeit;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_3f50548c536eb67672adebba6f610958->m_frame.f_lineno = 154;
    tmp_assign_source_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_linecache == NULL );
    var_linecache = tmp_assign_source_1;

    tmp_name_name_2 = const_str_plain_traceback;
    tmp_globals_name_2 = (PyObject *)moduledict_timeit;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_3f50548c536eb67672adebba6f610958->m_frame.f_lineno = 154;
    tmp_assign_source_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    assert( var_traceback == NULL );
    var_traceback = tmp_assign_source_2;

    tmp_source_name_1 = par_self;

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_src );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = Py_None;
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
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 156;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_src );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_1 = PyTuple_New( 4 );
    PyTuple_SET_ITEM( tmp_ass_subvalue_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_ass_subvalue_1, 1, tmp_tuple_element_1 );
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 158;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_src );
    if ( tmp_called_instance_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_1 );

        exception_lineno = 158;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    frame_3f50548c536eb67672adebba6f610958->m_frame.f_lineno = 158;
    tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_newline_tuple, 0 ) );

    Py_DECREF( tmp_called_instance_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_1 );

        exception_lineno = 158;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_ass_subvalue_1, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_dummy_src_name );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dummy_src_name );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "dummy_src_name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 159;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_ass_subvalue_1, 3, tmp_tuple_element_1 );
    tmp_source_name_4 = var_linecache;

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "linecache" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 156;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_cache );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_1 );

        exception_lineno = 156;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_dummy_src_name );

    if (unlikely( tmp_ass_subscript_1 == NULL ))
    {
        tmp_ass_subscript_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dummy_src_name );
    }

    if ( tmp_ass_subscript_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscribed_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "dummy_src_name" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 156;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    tmp_source_name_5 = var_traceback;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "traceback" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_print_exc );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_file;
    tmp_dict_value_1 = par_file;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "file" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 162;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_3f50548c536eb67672adebba6f610958->m_frame.f_lineno = 162;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3f50548c536eb67672adebba6f610958 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3f50548c536eb67672adebba6f610958 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3f50548c536eb67672adebba6f610958, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3f50548c536eb67672adebba6f610958->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3f50548c536eb67672adebba6f610958, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3f50548c536eb67672adebba6f610958,
        type_description_1,
        par_self,
        par_file,
        var_linecache,
        var_traceback
    );


    // Release cached frame.
    if ( frame_3f50548c536eb67672adebba6f610958 == cache_frame_3f50548c536eb67672adebba6f610958 )
    {
        Py_DECREF( frame_3f50548c536eb67672adebba6f610958 );
    }
    cache_frame_3f50548c536eb67672adebba6f610958 = NULL;

    assertFrameObject( frame_3f50548c536eb67672adebba6f610958 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( timeit$$$function_3_print_exc );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_file );
    par_file = NULL;

    Py_XDECREF( var_linecache );
    var_linecache = NULL;

    Py_XDECREF( var_traceback );
    var_traceback = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_file );
    par_file = NULL;

    Py_XDECREF( var_linecache );
    var_linecache = NULL;

    Py_XDECREF( var_traceback );
    var_traceback = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( timeit$$$function_3_print_exc );
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


static PyObject *impl_timeit$$$function_4_timeit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_number = python_pars[ 1 ];
    PyObject *var_it = NULL;
    PyObject *var_gcold = NULL;
    PyObject *var_timing = NULL;
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
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_instance_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_5e1f101e788009630da542ea0e4f674f = NULL;

    struct Nuitka_FrameObject *frame_5e1f101e788009630da542ea0e4f674f;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5e1f101e788009630da542ea0e4f674f, codeobj_5e1f101e788009630da542ea0e4f674f, module_timeit, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5e1f101e788009630da542ea0e4f674f = cache_frame_5e1f101e788009630da542ea0e4f674f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5e1f101e788009630da542ea0e4f674f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5e1f101e788009630da542ea0e4f674f ) == 2 ); // Frame stack

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_itertools );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_itertools );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "itertools" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_repeat );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = Py_None;
    tmp_args_element_name_2 = par_number;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "number" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_5e1f101e788009630da542ea0e4f674f->m_frame.f_lineno = 174;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_it == NULL );
    var_it = tmp_assign_source_1;

    tmp_called_instance_1 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_gc );

    if (unlikely( tmp_called_instance_1 == NULL ))
    {
        tmp_called_instance_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gc );
    }

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "gc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_5e1f101e788009630da542ea0e4f674f->m_frame.f_lineno = 175;
    tmp_assign_source_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_isenabled );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    assert( var_gcold == NULL );
    var_gcold = tmp_assign_source_2;

    tmp_called_instance_2 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_gc );

    if (unlikely( tmp_called_instance_2 == NULL ))
    {
        tmp_called_instance_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gc );
    }

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "gc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_5e1f101e788009630da542ea0e4f674f->m_frame.f_lineno = 176;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_disable );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Tried code:
    tmp_source_name_2 = par_self;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_inner );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = var_it;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "it" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_timer );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 178;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    frame_5e1f101e788009630da542ea0e4f674f->m_frame.f_lineno = 178;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    assert( var_timing == NULL );
    var_timing = tmp_assign_source_3;

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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_5e1f101e788009630da542ea0e4f674f, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_5e1f101e788009630da542ea0e4f674f, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_cond_value_1 = var_gcold;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "gcold" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_instance_3 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_gc );

    if (unlikely( tmp_called_instance_3 == NULL ))
    {
        tmp_called_instance_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gc );
    }

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "gc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 181;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }

    frame_5e1f101e788009630da542ea0e4f674f->m_frame.f_lineno = 181;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_enable );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 177;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_5e1f101e788009630da542ea0e4f674f->m_frame) frame_5e1f101e788009630da542ea0e4f674f->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( timeit$$$function_4_timeit );
    return NULL;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    tmp_cond_value_2 = var_gcold;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "gcold" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        type_description_1 = "ooooo";
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
    tmp_called_instance_4 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_gc );

    if (unlikely( tmp_called_instance_4 == NULL ))
    {
        tmp_called_instance_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_gc );
    }

    if ( tmp_called_instance_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "gc" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 181;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_5e1f101e788009630da542ea0e4f674f->m_frame.f_lineno = 181;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_enable );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_return_value = var_timing;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timing" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5e1f101e788009630da542ea0e4f674f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5e1f101e788009630da542ea0e4f674f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5e1f101e788009630da542ea0e4f674f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5e1f101e788009630da542ea0e4f674f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5e1f101e788009630da542ea0e4f674f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5e1f101e788009630da542ea0e4f674f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5e1f101e788009630da542ea0e4f674f,
        type_description_1,
        par_self,
        par_number,
        var_it,
        var_gcold,
        var_timing
    );


    // Release cached frame.
    if ( frame_5e1f101e788009630da542ea0e4f674f == cache_frame_5e1f101e788009630da542ea0e4f674f )
    {
        Py_DECREF( frame_5e1f101e788009630da542ea0e4f674f );
    }
    cache_frame_5e1f101e788009630da542ea0e4f674f = NULL;

    assertFrameObject( frame_5e1f101e788009630da542ea0e4f674f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( timeit$$$function_4_timeit );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_number );
    par_number = NULL;

    Py_XDECREF( var_it );
    var_it = NULL;

    Py_XDECREF( var_gcold );
    var_gcold = NULL;

    Py_XDECREF( var_timing );
    var_timing = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_number );
    par_number = NULL;

    Py_XDECREF( var_it );
    var_it = NULL;

    Py_XDECREF( var_gcold );
    var_gcold = NULL;

    Py_XDECREF( var_timing );
    var_timing = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( timeit$$$function_4_timeit );
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


static PyObject *impl_timeit$$$function_5_repeat( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_repeat = python_pars[ 1 ];
    PyObject *par_number = python_pars[ 2 ];
    PyObject *var_r = NULL;
    PyObject *var_i = NULL;
    PyObject *var_t = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    PyObject *tmp_xrange_low_1;
    static struct Nuitka_FrameObject *cache_frame_542b882075130e3f825c5b7b4c0059f0 = NULL;

    struct Nuitka_FrameObject *frame_542b882075130e3f825c5b7b4c0059f0;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_r == NULL );
    var_r = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_542b882075130e3f825c5b7b4c0059f0, codeobj_542b882075130e3f825c5b7b4c0059f0, module_timeit, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_542b882075130e3f825c5b7b4c0059f0 = cache_frame_542b882075130e3f825c5b7b4c0059f0;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_542b882075130e3f825c5b7b4c0059f0 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_542b882075130e3f825c5b7b4c0059f0 ) == 2 ); // Frame stack

    // Framed code:
    tmp_xrange_low_1 = par_repeat;

    CHECK_OBJECT( tmp_xrange_low_1 );
    tmp_iter_arg_1 = BUILTIN_XRANGE1( tmp_xrange_low_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "oooooo";
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


        type_description_1 = "oooooo";
        exception_lineno = 205;
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

        exception_lineno = 205;
        type_description_1 = "oooooo";
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
        PyObject *old = var_i;
        var_i = tmp_assign_source_4;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 206;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_timeit );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = par_number;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "number" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 206;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    frame_542b882075130e3f825c5b7b4c0059f0->m_frame.f_lineno = 206;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_t;
        var_t = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_source_name_2 = var_r;

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 207;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_2 = var_t;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "t" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 207;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }

    frame_542b882075130e3f825c5b7b4c0059f0->m_frame.f_lineno = 207;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        type_description_1 = "oooooo";
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

    tmp_return_value = var_r;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 208;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_542b882075130e3f825c5b7b4c0059f0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_542b882075130e3f825c5b7b4c0059f0 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_542b882075130e3f825c5b7b4c0059f0 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_542b882075130e3f825c5b7b4c0059f0, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_542b882075130e3f825c5b7b4c0059f0->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_542b882075130e3f825c5b7b4c0059f0, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_542b882075130e3f825c5b7b4c0059f0,
        type_description_1,
        par_self,
        par_repeat,
        par_number,
        var_r,
        var_i,
        var_t
    );


    // Release cached frame.
    if ( frame_542b882075130e3f825c5b7b4c0059f0 == cache_frame_542b882075130e3f825c5b7b4c0059f0 )
    {
        Py_DECREF( frame_542b882075130e3f825c5b7b4c0059f0 );
    }
    cache_frame_542b882075130e3f825c5b7b4c0059f0 = NULL;

    assertFrameObject( frame_542b882075130e3f825c5b7b4c0059f0 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( timeit$$$function_5_repeat );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_repeat );
    par_repeat = NULL;

    Py_XDECREF( par_number );
    par_number = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_repeat );
    par_repeat = NULL;

    Py_XDECREF( par_number );
    par_number = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( timeit$$$function_5_repeat );
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


static PyObject *impl_timeit$$$function_6_autorange( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_callback = python_pars[ 1 ];
    PyObject *var_i = NULL;
    PyObject *var_number = NULL;
    PyObject *var_time_taken = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_GtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static struct Nuitka_FrameObject *cache_frame_0556833f0e26bc7682b6e809f11662cf = NULL;

    struct Nuitka_FrameObject *frame_0556833f0e26bc7682b6e809f11662cf;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_iter_arg_1 = const_xrange_1_10;
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    assert( !(tmp_assign_source_1 == NULL) );
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0556833f0e26bc7682b6e809f11662cf, codeobj_0556833f0e26bc7682b6e809f11662cf, module_timeit, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0556833f0e26bc7682b6e809f11662cf = cache_frame_0556833f0e26bc7682b6e809f11662cf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0556833f0e26bc7682b6e809f11662cf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0556833f0e26bc7682b6e809f11662cf ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_2 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_2 == NULL )
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


        type_description_1 = "ooooo";
        exception_lineno = 221;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
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

        exception_lineno = 221;
        type_description_1 = "ooooo";
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
    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_3 );
    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_3;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_left_name_1 = const_int_pos_10;
    tmp_right_name_1 = var_i;

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_assign_source_4 = POWER_OPERATION( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_number;
        var_number = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_source_name_1 = par_self;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 223;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_timeit );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = var_number;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "number" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 223;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    frame_0556833f0e26bc7682b6e809f11662cf->m_frame.f_lineno = 223;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_time_taken;
        var_time_taken = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_cond_value_1 = par_callback;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "callback" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 224;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_2 = par_callback;

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "callback" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 225;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = var_number;

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "number" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 225;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_args_element_name_3 = var_time_taken;

    CHECK_OBJECT( tmp_args_element_name_3 );
    frame_0556833f0e26bc7682b6e809f11662cf->m_frame.f_lineno = 225;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_2:;
    tmp_compare_left_2 = var_time_taken;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "time_taken" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 226;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }

    tmp_compare_right_2 = const_float_0_2;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    goto loop_end_1;
    branch_no_3:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        type_description_1 = "ooooo";
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

    tmp_tuple_element_1 = var_number;

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "number" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 228;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_time_taken;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "time_taken" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 228;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0556833f0e26bc7682b6e809f11662cf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0556833f0e26bc7682b6e809f11662cf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0556833f0e26bc7682b6e809f11662cf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0556833f0e26bc7682b6e809f11662cf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0556833f0e26bc7682b6e809f11662cf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0556833f0e26bc7682b6e809f11662cf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0556833f0e26bc7682b6e809f11662cf,
        type_description_1,
        par_self,
        par_callback,
        var_i,
        var_number,
        var_time_taken
    );


    // Release cached frame.
    if ( frame_0556833f0e26bc7682b6e809f11662cf == cache_frame_0556833f0e26bc7682b6e809f11662cf )
    {
        Py_DECREF( frame_0556833f0e26bc7682b6e809f11662cf );
    }
    cache_frame_0556833f0e26bc7682b6e809f11662cf = NULL;

    assertFrameObject( frame_0556833f0e26bc7682b6e809f11662cf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( timeit$$$function_6_autorange );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_callback );
    par_callback = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_number );
    var_number = NULL;

    Py_XDECREF( var_time_taken );
    var_time_taken = NULL;

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

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_callback );
    par_callback = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_number );
    var_number = NULL;

    Py_XDECREF( var_time_taken );
    var_time_taken = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( timeit$$$function_6_autorange );
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


static PyObject *impl_timeit$$$function_7_timeit( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stmt = python_pars[ 0 ];
    PyObject *par_setup = python_pars[ 1 ];
    PyObject *par_timer = python_pars[ 2 ];
    PyObject *par_number = python_pars[ 3 ];
    PyObject *par_globals = python_pars[ 4 ];
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
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_e8ee1749abf4c41caea9a2df954d977e = NULL;

    struct Nuitka_FrameObject *frame_e8ee1749abf4c41caea9a2df954d977e;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e8ee1749abf4c41caea9a2df954d977e, codeobj_e8ee1749abf4c41caea9a2df954d977e, module_timeit, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e8ee1749abf4c41caea9a2df954d977e = cache_frame_e8ee1749abf4c41caea9a2df954d977e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e8ee1749abf4c41caea9a2df954d977e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e8ee1749abf4c41caea9a2df954d977e ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_Timer );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Timer );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Timer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 233;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_stmt;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_setup;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_timer;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = par_globals;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_e8ee1749abf4c41caea9a2df954d977e->m_frame.f_lineno = 233;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
    }

    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_timeit );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = par_number;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "number" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 233;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_e8ee1749abf4c41caea9a2df954d977e->m_frame.f_lineno = 233;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e8ee1749abf4c41caea9a2df954d977e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e8ee1749abf4c41caea9a2df954d977e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e8ee1749abf4c41caea9a2df954d977e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e8ee1749abf4c41caea9a2df954d977e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e8ee1749abf4c41caea9a2df954d977e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e8ee1749abf4c41caea9a2df954d977e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e8ee1749abf4c41caea9a2df954d977e,
        type_description_1,
        par_stmt,
        par_setup,
        par_timer,
        par_number,
        par_globals
    );


    // Release cached frame.
    if ( frame_e8ee1749abf4c41caea9a2df954d977e == cache_frame_e8ee1749abf4c41caea9a2df954d977e )
    {
        Py_DECREF( frame_e8ee1749abf4c41caea9a2df954d977e );
    }
    cache_frame_e8ee1749abf4c41caea9a2df954d977e = NULL;

    assertFrameObject( frame_e8ee1749abf4c41caea9a2df954d977e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( timeit$$$function_7_timeit );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_stmt );
    par_stmt = NULL;

    Py_XDECREF( par_setup );
    par_setup = NULL;

    Py_XDECREF( par_timer );
    par_timer = NULL;

    Py_XDECREF( par_number );
    par_number = NULL;

    Py_XDECREF( par_globals );
    par_globals = NULL;

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

    Py_XDECREF( par_stmt );
    par_stmt = NULL;

    Py_XDECREF( par_setup );
    par_setup = NULL;

    Py_XDECREF( par_timer );
    par_timer = NULL;

    Py_XDECREF( par_number );
    par_number = NULL;

    Py_XDECREF( par_globals );
    par_globals = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( timeit$$$function_7_timeit );
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


static PyObject *impl_timeit$$$function_8_repeat( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_stmt = python_pars[ 0 ];
    PyObject *par_setup = python_pars[ 1 ];
    PyObject *par_timer = python_pars[ 2 ];
    PyObject *par_repeat = python_pars[ 3 ];
    PyObject *par_number = python_pars[ 4 ];
    PyObject *par_globals = python_pars[ 5 ];
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
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static struct Nuitka_FrameObject *cache_frame_14e97ea3c2f20ea126146492dc607e36 = NULL;

    struct Nuitka_FrameObject *frame_14e97ea3c2f20ea126146492dc607e36;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_14e97ea3c2f20ea126146492dc607e36, codeobj_14e97ea3c2f20ea126146492dc607e36, module_timeit, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_14e97ea3c2f20ea126146492dc607e36 = cache_frame_14e97ea3c2f20ea126146492dc607e36;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_14e97ea3c2f20ea126146492dc607e36 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_14e97ea3c2f20ea126146492dc607e36 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_Timer );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Timer );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Timer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 238;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_stmt;

    CHECK_OBJECT( tmp_args_element_name_1 );
    tmp_args_element_name_2 = par_setup;

    CHECK_OBJECT( tmp_args_element_name_2 );
    tmp_args_element_name_3 = par_timer;

    CHECK_OBJECT( tmp_args_element_name_3 );
    tmp_args_element_name_4 = par_globals;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_14e97ea3c2f20ea126146492dc607e36->m_frame.f_lineno = 238;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
    }

    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_repeat );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = par_repeat;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "repeat" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 238;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = par_number;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "number" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 238;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    frame_14e97ea3c2f20ea126146492dc607e36->m_frame.f_lineno = 238;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_14e97ea3c2f20ea126146492dc607e36 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_14e97ea3c2f20ea126146492dc607e36 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_14e97ea3c2f20ea126146492dc607e36 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_14e97ea3c2f20ea126146492dc607e36, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_14e97ea3c2f20ea126146492dc607e36->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_14e97ea3c2f20ea126146492dc607e36, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_14e97ea3c2f20ea126146492dc607e36,
        type_description_1,
        par_stmt,
        par_setup,
        par_timer,
        par_repeat,
        par_number,
        par_globals
    );


    // Release cached frame.
    if ( frame_14e97ea3c2f20ea126146492dc607e36 == cache_frame_14e97ea3c2f20ea126146492dc607e36 )
    {
        Py_DECREF( frame_14e97ea3c2f20ea126146492dc607e36 );
    }
    cache_frame_14e97ea3c2f20ea126146492dc607e36 = NULL;

    assertFrameObject( frame_14e97ea3c2f20ea126146492dc607e36 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( timeit$$$function_8_repeat );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_stmt );
    par_stmt = NULL;

    Py_XDECREF( par_setup );
    par_setup = NULL;

    Py_XDECREF( par_timer );
    par_timer = NULL;

    Py_XDECREF( par_repeat );
    par_repeat = NULL;

    Py_XDECREF( par_number );
    par_number = NULL;

    Py_XDECREF( par_globals );
    par_globals = NULL;

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

    Py_XDECREF( par_stmt );
    par_stmt = NULL;

    Py_XDECREF( par_setup );
    par_setup = NULL;

    Py_XDECREF( par_timer );
    par_timer = NULL;

    Py_XDECREF( par_repeat );
    par_repeat = NULL;

    Py_XDECREF( par_number );
    par_number = NULL;

    Py_XDECREF( par_globals );
    par_globals = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( timeit$$$function_8_repeat );
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


static PyObject *impl_timeit$$$function_9_main( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *par__wrap_timer = python_pars[ 1 ];
    PyObject *var_getopt = NULL;
    PyObject *var_opts = NULL;
    PyObject *var_err = NULL;
    PyObject *var_timer = NULL;
    PyObject *var_stmt = NULL;
    PyObject *var_number = NULL;
    PyObject *var_setup = NULL;
    PyObject *var_repeat = NULL;
    PyObject *var_verbose = NULL;
    PyObject *var_time_unit = NULL;
    PyObject *var_units = NULL;
    struct Nuitka_CellObject *var_precision = PyCell_EMPTY();
    PyObject *var_o = NULL;
    PyObject *var_a = NULL;
    PyObject *var_os = NULL;
    PyObject *var_t = NULL;
    PyObject *var_callback = NULL;
    PyObject *var__ = NULL;
    PyObject *var_r = NULL;
    PyObject *var_best = NULL;
    PyObject *var_usec = NULL;
    PyObject *var_scale = NULL;
    PyObject *var_scales = NULL;
    PyObject *var_worst = NULL;
    PyObject *var_warnings = NULL;
    PyObject *outline_0_var_x = NULL;
    PyObject *outline_1_var_unit = NULL;
    PyObject *outline_1_var_scale = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_listcontraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcontraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcontraction$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcontraction_1__$0 = NULL;
    PyObject *tmp_listcontraction_1__contraction = NULL;
    PyObject *tmp_listcontraction_1__iter_value_0 = NULL;
    PyObject *tmp_listcontraction_2__$0 = NULL;
    PyObject *tmp_listcontraction_2__contraction = NULL;
    PyObject *tmp_listcontraction_2__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
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
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_preserved_type_1;
    PyObject *exception_preserved_value_1;
    PyTracebackObject *exception_preserved_tb_1;
    PyObject *exception_preserved_type_2;
    PyObject *exception_preserved_value_2;
    PyTracebackObject *exception_preserved_tb_2;
    PyObject *exception_preserved_type_3;
    PyObject *exception_preserved_value_3;
    PyTracebackObject *exception_preserved_tb_3;
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_list_2;
    PyObject *tmp_append_value_1;
    PyObject *tmp_append_value_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_args_element_name_18;
    PyObject *tmp_args_element_name_19;
    PyObject *tmp_args_element_name_20;
    PyObject *tmp_args_element_name_21;
    PyObject *tmp_args_element_name_22;
    PyObject *tmp_args_element_name_23;
    PyObject *tmp_args_element_name_24;
    PyObject *tmp_args_element_name_25;
    PyObject *tmp_args_element_name_26;
    PyObject *tmp_args_element_name_27;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
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
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_assign_source_37;
    PyObject *tmp_assign_source_38;
    PyObject *tmp_assign_source_39;
    PyObject *tmp_assign_source_40;
    PyObject *tmp_assign_source_41;
    PyObject *tmp_assign_source_42;
    PyObject *tmp_assign_source_43;
    PyObject *tmp_assign_source_44;
    PyObject *tmp_assign_source_45;
    PyObject *tmp_assign_source_46;
    PyObject *tmp_assign_source_47;
    PyObject *tmp_assign_source_48;
    PyObject *tmp_assign_source_49;
    PyObject *tmp_assign_source_50;
    PyObject *tmp_assign_source_51;
    PyObject *tmp_assign_source_52;
    PyObject *tmp_assign_source_53;
    PyObject *tmp_assign_source_54;
    PyObject *tmp_assign_source_55;
    PyObject *tmp_assign_source_56;
    PyObject *tmp_assign_source_57;
    PyObject *tmp_assign_source_58;
    PyObject *tmp_assign_source_59;
    PyObject *tmp_assign_source_60;
    PyObject *tmp_assign_source_61;
    PyObject *tmp_assign_source_62;
    PyObject *tmp_assign_source_63;
    PyObject *tmp_assign_source_64;
    PyObject *tmp_assign_source_65;
    PyObject *tmp_assign_source_66;
    PyObject *tmp_assign_source_67;
    PyObject *tmp_assign_source_68;
    PyObject *tmp_assign_source_69;
    PyObject *tmp_assign_source_70;
    PyObject *tmp_assign_source_71;
    PyObject *tmp_assign_source_72;
    PyObject *tmp_assign_source_73;
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_instance_2;
    PyObject *tmp_called_instance_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    PyObject *tmp_called_name_14;
    PyObject *tmp_called_name_15;
    PyObject *tmp_called_name_16;
    PyObject *tmp_called_name_17;
    PyObject *tmp_called_name_18;
    PyObject *tmp_called_name_19;
    PyObject *tmp_called_name_20;
    PyObject *tmp_called_name_21;
    PyObject *tmp_called_name_22;
    int tmp_cmp_Eq_1;
    int tmp_cmp_GtE_1;
    int tmp_cmp_GtE_2;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
    int tmp_cmp_In_7;
    int tmp_cmp_In_8;
    int tmp_cmp_In_9;
    int tmp_cmp_In_10;
    int tmp_cmp_LtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_left_8;
    PyObject *tmp_compare_left_9;
    PyObject *tmp_compare_left_10;
    PyObject *tmp_compare_left_11;
    PyObject *tmp_compare_left_12;
    PyObject *tmp_compare_left_13;
    PyObject *tmp_compare_left_14;
    PyObject *tmp_compare_left_15;
    PyObject *tmp_compare_left_16;
    PyObject *tmp_compare_left_17;
    PyObject *tmp_compare_left_18;
    PyObject *tmp_compare_left_19;
    PyObject *tmp_compare_left_20;
    PyObject *tmp_compare_left_21;
    PyObject *tmp_compare_left_22;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_compare_right_8;
    PyObject *tmp_compare_right_9;
    PyObject *tmp_compare_right_10;
    PyObject *tmp_compare_right_11;
    PyObject *tmp_compare_right_12;
    PyObject *tmp_compare_right_13;
    PyObject *tmp_compare_right_14;
    PyObject *tmp_compare_right_15;
    PyObject *tmp_compare_right_16;
    PyObject *tmp_compare_right_17;
    PyObject *tmp_compare_right_18;
    PyObject *tmp_compare_right_19;
    PyObject *tmp_compare_right_20;
    PyObject *tmp_compare_right_21;
    PyObject *tmp_compare_right_22;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    int tmp_exc_match_exception_match_4;
    int tmp_exc_match_exception_match_5;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_int_arg_2;
    bool tmp_is_1;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iter_arg_6;
    PyObject *tmp_iter_arg_7;
    PyObject *tmp_iter_arg_8;
    PyObject *tmp_iter_arg_9;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_iterator_name_3;
    PyObject *tmp_iterator_name_4;
    PyObject *tmp_iterator_name_5;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_left_name_9;
    PyObject *tmp_left_name_10;
    PyObject *tmp_left_name_11;
    PyObject *tmp_left_name_12;
    PyObject *tmp_left_name_13;
    PyObject *tmp_left_name_14;
    PyObject *tmp_left_name_15;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_right_name_8;
    PyObject *tmp_right_name_9;
    PyObject *tmp_right_name_10;
    PyObject *tmp_right_name_11;
    PyObject *tmp_right_name_12;
    PyObject *tmp_right_name_13;
    PyObject *tmp_right_name_14;
    PyObject *tmp_right_name_15;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    PyObject *tmp_unpack_6;
    PyObject *tmp_unpack_7;
    PyObject *tmp_unpack_8;
    PyObject *tmp_unpack_9;
    PyObject *tmp_unpack_10;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    PyObject *tmp_value_name_2;
    PyObject *tmp_value_name_3;
    PyObject *tmp_value_name_4;
    static struct Nuitka_FrameObject *cache_frame_21d183a9513175dfcd91f311dac4988b_2 = NULL;

    struct Nuitka_FrameObject *frame_21d183a9513175dfcd91f311dac4988b_2;

    static struct Nuitka_FrameObject *cache_frame_85421c13f84d10ad70c81612949c59b7_3 = NULL;

    struct Nuitka_FrameObject *frame_85421c13f84d10ad70c81612949c59b7_3;

    static struct Nuitka_FrameObject *cache_frame_14efccae7512c91f30afe30775cbeb2a = NULL;

    struct Nuitka_FrameObject *frame_14efccae7512c91f30afe30775cbeb2a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_14efccae7512c91f30afe30775cbeb2a, codeobj_14efccae7512c91f30afe30775cbeb2a, module_timeit, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_14efccae7512c91f30afe30775cbeb2a = cache_frame_14efccae7512c91f30afe30775cbeb2a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_14efccae7512c91f30afe30775cbeb2a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_14efccae7512c91f30afe30775cbeb2a ) == 2 ); // Frame stack

    // Framed code:
    tmp_compare_left_1 = par_args;

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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 258;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_argv );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_slice_int_pos_1_none_none;
    tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_args;
        par_args = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    branch_no_1:;
    tmp_name_name_1 = const_str_plain_getopt;
    tmp_globals_name_1 = (PyObject *)moduledict_timeit;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_14efccae7512c91f30afe30775cbeb2a->m_frame.f_lineno = 259;
    tmp_assign_source_2 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 259;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_getopt == NULL );
    var_getopt = tmp_assign_source_2;

    // Tried code:
    // Tried code:
    tmp_source_name_2 = var_getopt;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_getopt );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 261;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_args_element_name_1 = par_args;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "args" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 261;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_3;
    }

    tmp_args_element_name_2 = const_str_digest_e224eca0f2240417145f69ecb0460d13;
    tmp_args_element_name_3 = LIST_COPY( const_list_e6e87c2c19a876e203cafb64c470204f_list );
    frame_14efccae7512c91f30afe30775cbeb2a->m_frame.f_lineno = 261;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 261;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_3;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 261;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_4 == NULL )
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


        type_description_1 = "ooooooooooooocooooooooooooo";
        exception_lineno = 261;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_5 == NULL )
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


        type_description_1 = "ooooooooooooocooooooooooooo";
        exception_lineno = 261;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_iterator_name_1 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooooooooooocooooooooooooo";
                exception_lineno = 261;
                goto try_except_handler_4;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooooooooocooooooooooooo";
        exception_lineno = 261;
        goto try_except_handler_4;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_14efccae7512c91f30afe30775cbeb2a, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != 0 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_14efccae7512c91f30afe30775cbeb2a, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PyException_SetTraceback( exception_keeper_value_3, (PyObject *)exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    // Tried code:
    tmp_compare_left_2 = EXC_TYPE(PyThreadState_GET());
    tmp_source_name_3 = var_getopt;

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "getopt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 265;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_5;
    }

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_error );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 265;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_5;
    }
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 265;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_5;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_6 = EXC_VALUE(PyThreadState_GET());
    assert( var_err == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_err = tmp_assign_source_6;

    // Tried code:
    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_print );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_4 = var_err;

    CHECK_OBJECT( tmp_args_element_name_4 );
    frame_14efccae7512c91f30afe30775cbeb2a->m_frame.f_lineno = 266;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_print );
    assert( tmp_called_name_3 != NULL );
    frame_14efccae7512c91f30afe30775cbeb2a->m_frame.f_lineno = 267;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_digest_7766392a2b5abaa49f79aa68364dc74c_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 267;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = const_int_pos_2;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( timeit$$$function_9_main );
    return NULL;
    // Return handler code:
    try_return_handler_6:;
    Py_XDECREF( var_err );
    var_err = NULL;

    goto try_return_handler_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_err );
    var_err = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 260;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_14efccae7512c91f30afe30775cbeb2a->m_frame) frame_14efccae7512c91f30afe30775cbeb2a->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooooocooooooooooooo";
    goto try_except_handler_5;
    branch_end_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( timeit$$$function_9_main );
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_7 );
    assert( var_opts == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_opts = tmp_assign_source_7;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_8 );
    {
        PyObject *old = par_args;
        par_args = tmp_assign_source_8;
        Py_INCREF( par_args );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_9 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_default_timer );

    if (unlikely( tmp_assign_source_9 == NULL ))
    {
        tmp_assign_source_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_default_timer );
    }

    if ( tmp_assign_source_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "default_timer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 269;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    assert( var_timer == NULL );
    Py_INCREF( tmp_assign_source_9 );
    var_timer = tmp_assign_source_9;

    tmp_source_name_4 = const_str_newline;
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_join );
    assert( !(tmp_called_name_4 == NULL) );
    tmp_args_element_name_5 = par_args;

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "args" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 270;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_14efccae7512c91f30afe30775cbeb2a->m_frame.f_lineno = 270;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_or_left_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 270;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 270;
        type_description_1 = "ooooooooooooocooooooooooooo";
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
    tmp_or_right_value_1 = const_str_plain_pass;
    Py_INCREF( tmp_or_right_value_1 );
    tmp_assign_source_10 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assign_source_10 = tmp_or_left_value_1;
    or_end_1:;
    assert( var_stmt == NULL );
    var_stmt = tmp_assign_source_10;

    tmp_assign_source_11 = const_int_0;
    assert( var_number == NULL );
    Py_INCREF( tmp_assign_source_11 );
    var_number = tmp_assign_source_11;

    tmp_assign_source_12 = PyList_New( 0 );
    assert( var_setup == NULL );
    var_setup = tmp_assign_source_12;

    tmp_assign_source_13 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_default_repeat );

    if (unlikely( tmp_assign_source_13 == NULL ))
    {
        tmp_assign_source_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_default_repeat );
    }

    if ( tmp_assign_source_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "default_repeat" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 273;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    assert( var_repeat == NULL );
    Py_INCREF( tmp_assign_source_13 );
    var_repeat = tmp_assign_source_13;

    tmp_assign_source_14 = const_int_0;
    assert( var_verbose == NULL );
    Py_INCREF( tmp_assign_source_14 );
    var_verbose = tmp_assign_source_14;

    tmp_assign_source_15 = Py_None;
    assert( var_time_unit == NULL );
    Py_INCREF( tmp_assign_source_15 );
    var_time_unit = tmp_assign_source_15;

    tmp_assign_source_16 = PyDict_Copy( const_dict_560f6166767527ce23eb7c1434d00167 );
    assert( var_units == NULL );
    var_units = tmp_assign_source_16;

    tmp_assign_source_17 = const_int_pos_3;
    assert( PyCell_GET( var_precision ) == NULL );
    Py_INCREF( tmp_assign_source_17 );
    PyCell_SET( var_precision, tmp_assign_source_17 );

    tmp_iter_arg_2 = var_opts;

    if ( tmp_iter_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "opts" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 278;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_18 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_18;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    CHECK_OBJECT( tmp_value_name_1 );
    tmp_assign_source_19 = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_assign_source_19 == NULL )
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


        type_description_1 = "ooooooooooooocooooooooooooo";
        exception_lineno = 278;
        goto try_except_handler_8;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_19;
        Py_XDECREF( old );
    }

    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_3 = exception_keeper_type_6;
    tmp_compare_right_3 = PyExc_StopIteration;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_6 );
        Py_XDECREF( exception_keeper_value_6 );
        Py_XDECREF( exception_keeper_tb_6 );

        exception_lineno = 278;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    Py_DECREF( exception_keeper_type_6 );
    Py_XDECREF( exception_keeper_value_6 );
    Py_XDECREF( exception_keeper_tb_6 );
    goto loop_end_1;
    goto branch_end_3;
    branch_no_3:;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_7;
    branch_end_3:;
    // End of try:
    try_end_4:;
    // Tried code:
    tmp_iter_arg_3 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_iter_arg_3 );
    tmp_assign_source_20 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_9;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter;
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_20;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_3 );
    tmp_assign_source_21 = UNPACK_NEXT( tmp_unpack_3, 0, 2 );
    if ( tmp_assign_source_21 == NULL )
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


        type_description_1 = "ooooooooooooocooooooooooooo";
        exception_lineno = 278;
        goto try_except_handler_10;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_1;
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_21;
        Py_XDECREF( old );
    }

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_unpack_4 );
    tmp_assign_source_22 = UNPACK_NEXT( tmp_unpack_4, 1, 2 );
    if ( tmp_assign_source_22 == NULL )
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


        type_description_1 = "ooooooooooooocooooooooooooo";
        exception_lineno = 278;
        goto try_except_handler_10;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_2;
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_22;
        Py_XDECREF( old );
    }

    tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;

    CHECK_OBJECT( tmp_iterator_name_2 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooooooooooocooooooooooooo";
                exception_lineno = 278;
                goto try_except_handler_10;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooooooooocooooooooooooo";
        exception_lineno = 278;
        goto try_except_handler_10;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_9;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_7;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    tmp_assign_source_23 = tmp_tuple_unpack_2__element_1;

    CHECK_OBJECT( tmp_assign_source_23 );
    {
        PyObject *old = var_o;
        var_o = tmp_assign_source_23;
        Py_INCREF( var_o );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_assign_source_24 = tmp_tuple_unpack_2__element_2;

    CHECK_OBJECT( tmp_assign_source_24 );
    {
        PyObject *old = var_a;
        var_a = tmp_assign_source_24;
        Py_INCREF( var_a );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    tmp_compare_left_4 = var_o;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "o" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 279;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_compare_right_4 = const_tuple_d4c35b1c89dc2dd134582bee108aa26c_tuple;
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_int_arg_1 = var_a;

    if ( tmp_int_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 280;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_assign_source_25 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }
    {
        PyObject *old = var_number;
        var_number = tmp_assign_source_25;
        Py_XDECREF( old );
    }

    branch_no_4:;
    tmp_compare_left_5 = var_o;

    if ( tmp_compare_left_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "o" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 281;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_compare_right_5 = const_tuple_bd38caf2347077341bf86db902adc50e_tuple;
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_5 = var_setup;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "setup" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 282;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_append );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_args_element_name_6 = var_a;

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 282;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }

    frame_14efccae7512c91f30afe30775cbeb2a->m_frame.f_lineno = 282;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_unused );
    branch_no_5:;
    tmp_compare_left_6 = var_o;

    if ( tmp_compare_left_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "o" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 283;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_compare_right_6 = const_tuple_fb2d8ec88bfb9a9bb2e89742d91aa122_tuple;
    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
    assert( !(tmp_cmp_In_3 == -1) );
    if ( tmp_cmp_In_3 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_compare_left_7 = var_a;

    if ( tmp_compare_left_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 284;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_compare_right_7 = var_units;

    if ( tmp_compare_right_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "units" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 284;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    assert( !(tmp_cmp_In_4 == -1) );
    if ( tmp_cmp_In_4 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assign_source_26 = var_a;

    if ( tmp_assign_source_26 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 285;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }

    {
        PyObject *old = var_time_unit;
        var_time_unit = tmp_assign_source_26;
        Py_INCREF( var_time_unit );
        Py_XDECREF( old );
    }

    goto branch_end_7;
    branch_no_7:;
    tmp_called_name_6 = LOOKUP_BUILTIN( const_str_plain_print );
    assert( tmp_called_name_6 != NULL );
    tmp_args_name_1 = const_tuple_str_digest_65c345ff789c0edf607543414df1985c_tuple;
    tmp_dict_key_1 = const_str_plain_file;
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 288;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_stderr );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 288;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    frame_14efccae7512c91f30afe30775cbeb2a->m_frame.f_lineno = 287;
    tmp_unused = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = const_int_pos_2;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_7;
    branch_end_7:;
    branch_no_6:;
    tmp_compare_left_8 = var_o;

    if ( tmp_compare_left_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "o" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 290;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_compare_right_8 = const_tuple_91e6f084dff6f14053e637233fad187f_tuple;
    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_8, tmp_compare_left_8 );
    assert( !(tmp_cmp_In_5 == -1) );
    if ( tmp_cmp_In_5 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_int_arg_2 = var_a;

    if ( tmp_int_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 291;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_assign_source_27 = PyNumber_Int( tmp_int_arg_2 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }
    {
        PyObject *old = var_repeat;
        var_repeat = tmp_assign_source_27;
        Py_XDECREF( old );
    }

    tmp_compare_left_9 = var_repeat;

    CHECK_OBJECT( tmp_compare_left_9 );
    tmp_compare_right_9 = const_int_0;
    tmp_cmp_LtE_1 = RICH_COMPARE_BOOL_LE( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_cmp_LtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 292;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }
    if ( tmp_cmp_LtE_1 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_assign_source_28 = const_int_pos_1;
    {
        PyObject *old = var_repeat;
        var_repeat = tmp_assign_source_28;
        Py_INCREF( var_repeat );
        Py_XDECREF( old );
    }

    branch_no_9:;
    branch_no_8:;
    tmp_compare_left_10 = var_o;

    if ( tmp_compare_left_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "o" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 294;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_compare_right_10 = const_tuple_224b1a911586ec904425afcc77895bf0_tuple;
    tmp_cmp_In_6 = PySequence_Contains( tmp_compare_right_10, tmp_compare_left_10 );
    assert( !(tmp_cmp_In_6 == -1) );
    if ( tmp_cmp_In_6 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 295;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_assign_source_29 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_time );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 295;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }
    {
        PyObject *old = var_timer;
        var_timer = tmp_assign_source_29;
        Py_XDECREF( old );
    }

    branch_no_10:;
    tmp_compare_left_11 = var_o;

    if ( tmp_compare_left_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "o" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 296;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_compare_right_11 = const_tuple_af8543063bc958652753e0a711178ea3_tuple;
    tmp_cmp_In_7 = PySequence_Contains( tmp_compare_right_11, tmp_compare_left_11 );
    assert( !(tmp_cmp_In_7 == -1) );
    if ( tmp_cmp_In_7 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 297;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_assign_source_30 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_clock );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 297;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }
    {
        PyObject *old = var_timer;
        var_timer = tmp_assign_source_30;
        Py_XDECREF( old );
    }

    branch_no_11:;
    tmp_compare_left_12 = var_o;

    if ( tmp_compare_left_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "o" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 298;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_compare_right_12 = const_tuple_897607a5df38c587a73d151b8544c2a9_tuple;
    tmp_cmp_In_8 = PySequence_Contains( tmp_compare_right_12, tmp_compare_left_12 );
    assert( !(tmp_cmp_In_8 == -1) );
    if ( tmp_cmp_In_8 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "time" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 299;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_assign_source_31 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_process_time );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }
    {
        PyObject *old = var_timer;
        var_timer = tmp_assign_source_31;
        Py_XDECREF( old );
    }

    branch_no_12:;
    tmp_compare_left_13 = var_o;

    if ( tmp_compare_left_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "o" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 300;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_compare_right_13 = const_tuple_6e0ce2585290961afef9353bf934255f_tuple;
    tmp_cmp_In_9 = PySequence_Contains( tmp_compare_right_13, tmp_compare_left_13 );
    assert( !(tmp_cmp_In_9 == -1) );
    if ( tmp_cmp_In_9 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_cond_value_1 = var_verbose;

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "verbose" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 301;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 301;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    if ( var_precision == NULL )
    {
        tmp_left_name_1 = NULL;
    }
    else
    {
        tmp_left_name_1 = PyCell_GET( var_precision );
    }

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "precision" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 302;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_right_name_1 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_32 = tmp_left_name_1;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 302;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }
    PyCell_SET( var_precision, tmp_assign_source_32 );

    branch_no_14:;
    tmp_left_name_2 = var_verbose;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "verbose" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 303;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_right_name_2 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_33 = tmp_left_name_2;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }
    var_verbose = tmp_assign_source_33;

    branch_no_13:;
    tmp_compare_left_14 = var_o;

    if ( tmp_compare_left_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "o" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 304;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_compare_right_14 = const_tuple_a3615cdf546544b088f29f72a042acfd_tuple;
    tmp_cmp_In_10 = PySequence_Contains( tmp_compare_right_14, tmp_compare_left_14 );
    assert( !(tmp_cmp_In_10 == -1) );
    if ( tmp_cmp_In_10 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_called_name_7 = LOOKUP_BUILTIN( const_str_plain_print );
    assert( tmp_called_name_7 != NULL );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain___doc__ );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___doc__ );
    }

    if ( tmp_tuple_element_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "__doc__" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 305;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }

    tmp_args_name_2 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_1 );
    tmp_kw_name_2 = PyDict_Copy( const_dict_fb4ddbadafbecbaef28aef989e4b600e );
    frame_14efccae7512c91f30afe30775cbeb2a->m_frame.f_lineno = 305;
    tmp_unused = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 305;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = const_int_0;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_7;
    branch_no_15:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_7;
    // Return handler code:
    try_return_handler_7:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__iter_value );
    Py_DECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_source_name_10 = const_str_newline;
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_join );
    assert( !(tmp_called_name_8 == NULL) );
    tmp_args_element_name_7 = var_setup;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "setup" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 307;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_14efccae7512c91f30afe30775cbeb2a->m_frame.f_lineno = 307;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_or_left_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_2 );

        exception_lineno = 307;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_2 == 1 )
    {
        goto or_left_2;
    }
    else
    {
        goto or_right_2;
    }
    or_right_2:;
    Py_DECREF( tmp_or_left_value_2 );
    tmp_or_right_value_2 = const_str_plain_pass;
    Py_INCREF( tmp_or_right_value_2 );
    tmp_assign_source_34 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_assign_source_34 = tmp_or_left_value_2;
    or_end_2:;
    {
        PyObject *old = var_setup;
        var_setup = tmp_assign_source_34;
        Py_XDECREF( old );
    }

    tmp_name_name_2 = const_str_plain_os;
    tmp_globals_name_2 = (PyObject *)moduledict_timeit;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    frame_14efccae7512c91f30afe30775cbeb2a->m_frame.f_lineno = 311;
    tmp_assign_source_35 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_os == NULL );
    var_os = tmp_assign_source_35;

    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 312;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_path );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_insert );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = const_int_0;
    tmp_source_name_13 = var_os;

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "os" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 312;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_curdir );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 312;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_14efccae7512c91f30afe30775cbeb2a->m_frame.f_lineno = 312;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_compare_left_15 = par__wrap_timer;

    if ( tmp_compare_left_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_wrap_timer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 313;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_15 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_15 != tmp_compare_right_15 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_called_name_10 = par__wrap_timer;

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "_wrap_timer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 314;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = var_timer;

    if ( tmp_args_element_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 314;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_14efccae7512c91f30afe30775cbeb2a->m_frame.f_lineno = 314;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 314;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_timer;
        var_timer = tmp_assign_source_36;
        Py_XDECREF( old );
    }

    branch_no_16:;
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_Timer );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Timer );
    }

    if ( tmp_called_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "Timer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 315;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = var_stmt;

    if ( tmp_args_element_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "stmt" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 315;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = var_setup;

    if ( tmp_args_element_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "setup" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 315;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_13 = var_timer;

    if ( tmp_args_element_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "timer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 315;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_14efccae7512c91f30afe30775cbeb2a->m_frame.f_lineno = 315;
    {
        PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
        tmp_assign_source_37 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_11, call_args );
    }

    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 315;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_t == NULL );
    var_t = tmp_assign_source_37;

    tmp_compare_left_16 = var_number;

    if ( tmp_compare_left_16 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "number" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 316;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_16 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_16, tmp_compare_right_16 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 316;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_assign_source_38 = Py_None;
    assert( var_callback == NULL );
    Py_INCREF( tmp_assign_source_38 );
    var_callback = tmp_assign_source_38;

    tmp_cond_value_2 = var_verbose;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "verbose" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 319;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 319;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_assign_source_39 = MAKE_FUNCTION_timeit$$$function_9_main$$$function_1_callback( var_precision );
    {
        PyObject *old = var_callback;
        assert( old != NULL );
        var_callback = tmp_assign_source_39;
        Py_DECREF( old );
    }

    branch_no_18:;
    // Tried code:
    // Tried code:
    tmp_source_name_14 = var_t;

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "t" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 324;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_12;
    }

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_autorange );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 324;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_12;
    }
    tmp_args_element_name_14 = var_callback;

    if ( tmp_args_element_name_14 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "callback" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 324;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_12;
    }

    frame_14efccae7512c91f30afe30775cbeb2a->m_frame.f_lineno = 324;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_iter_arg_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 324;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_12;
    }
    tmp_assign_source_40 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 324;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_12;
    }
    assert( tmp_tuple_unpack_3__source_iter == NULL );
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_40;

    // Tried code:
    tmp_unpack_5 = tmp_tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_unpack_5 );
    tmp_assign_source_41 = UNPACK_NEXT( tmp_unpack_5, 0, 2 );
    if ( tmp_assign_source_41 == NULL )
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


        type_description_1 = "ooooooooooooocooooooooooooo";
        exception_lineno = 324;
        goto try_except_handler_13;
    }
    assert( tmp_tuple_unpack_3__element_1 == NULL );
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_41;

    tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_unpack_6 );
    tmp_assign_source_42 = UNPACK_NEXT( tmp_unpack_6, 1, 2 );
    if ( tmp_assign_source_42 == NULL )
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


        type_description_1 = "ooooooooooooocooooooooooooo";
        exception_lineno = 324;
        goto try_except_handler_13;
    }
    assert( tmp_tuple_unpack_3__element_2 == NULL );
    tmp_tuple_unpack_3__element_2 = tmp_assign_source_42;

    tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;

    CHECK_OBJECT( tmp_iterator_name_3 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_3 ); assert( HAS_ITERNEXT( tmp_iterator_name_3 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_3 )->tp_iternext)( tmp_iterator_name_3 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooooooooooocooooooooooooo";
                exception_lineno = 324;
                goto try_except_handler_13;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooooooooocooooooooooooo";
        exception_lineno = 324;
        goto try_except_handler_13;
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_12;
    // End of try:
    try_end_8:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_11;
    // End of try:
    try_end_9:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_2 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_2 );
    exception_preserved_value_2 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_2 );
    exception_preserved_tb_2 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_2 );

    if ( exception_keeper_tb_12 == NULL )
    {
        exception_keeper_tb_12 = MAKE_TRACEBACK( frame_14efccae7512c91f30afe30775cbeb2a, exception_keeper_lineno_12 );
    }
    else if ( exception_keeper_lineno_12 != 0 )
    {
        exception_keeper_tb_12 = ADD_TRACEBACK( exception_keeper_tb_12, frame_14efccae7512c91f30afe30775cbeb2a, exception_keeper_lineno_12 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_12, &exception_keeper_value_12, &exception_keeper_tb_12 );
    PyException_SetTraceback( exception_keeper_value_12, (PyObject *)exception_keeper_tb_12 );
    PUBLISH_EXCEPTION( &exception_keeper_type_12, &exception_keeper_value_12, &exception_keeper_tb_12 );
    // Tried code:
    tmp_called_instance_1 = var_t;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "t" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 326;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_14;
    }

    frame_14efccae7512c91f30afe30775cbeb2a->m_frame.f_lineno = 326;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_print_exc );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_14;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = const_int_pos_1;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_14;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( timeit$$$function_9_main );
    return NULL;
    // Return handler code:
    try_return_handler_14:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_2, exception_preserved_value_2, exception_preserved_tb_2 );
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_10:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    tmp_assign_source_43 = tmp_tuple_unpack_3__element_1;

    CHECK_OBJECT( tmp_assign_source_43 );
    {
        PyObject *old = var_number;
        var_number = tmp_assign_source_43;
        Py_INCREF( var_number );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    tmp_assign_source_44 = tmp_tuple_unpack_3__element_2;

    CHECK_OBJECT( tmp_assign_source_44 );
    assert( var__ == NULL );
    Py_INCREF( tmp_assign_source_44 );
    var__ = tmp_assign_source_44;

    Py_XDECREF( tmp_tuple_unpack_3__element_2 );
    tmp_tuple_unpack_3__element_2 = NULL;

    branch_no_17:;
    // Tried code:
    tmp_source_name_15 = var_t;

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "t" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 329;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_15;
    }

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_repeat );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_15;
    }
    tmp_args_element_name_15 = var_repeat;

    if ( tmp_args_element_name_15 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "repeat" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 329;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_15;
    }

    tmp_args_element_name_16 = var_number;

    if ( tmp_args_element_name_16 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "number" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 329;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_15;
    }

    frame_14efccae7512c91f30afe30775cbeb2a->m_frame.f_lineno = 329;
    {
        PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
        tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_called_name_13 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_15;
    }
    assert( var_r == NULL );
    var_r = tmp_assign_source_45;

    goto try_end_11;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    exception_preserved_type_3 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_3 );
    exception_preserved_value_3 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_3 );
    exception_preserved_tb_3 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_3 );

    if ( exception_keeper_tb_14 == NULL )
    {
        exception_keeper_tb_14 = MAKE_TRACEBACK( frame_14efccae7512c91f30afe30775cbeb2a, exception_keeper_lineno_14 );
    }
    else if ( exception_keeper_lineno_14 != 0 )
    {
        exception_keeper_tb_14 = ADD_TRACEBACK( exception_keeper_tb_14, frame_14efccae7512c91f30afe30775cbeb2a, exception_keeper_lineno_14 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_14, &exception_keeper_value_14, &exception_keeper_tb_14 );
    PyException_SetTraceback( exception_keeper_value_14, (PyObject *)exception_keeper_tb_14 );
    PUBLISH_EXCEPTION( &exception_keeper_type_14, &exception_keeper_value_14, &exception_keeper_tb_14 );
    // Tried code:
    tmp_called_instance_2 = var_t;

    if ( tmp_called_instance_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "t" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 331;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_16;
    }

    frame_14efccae7512c91f30afe30775cbeb2a->m_frame.f_lineno = 331;
    tmp_unused = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_print_exc );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_16;
    }
    Py_DECREF( tmp_unused );
    tmp_return_value = const_int_pos_1;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_16;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( timeit$$$function_9_main );
    return NULL;
    // Return handler code:
    try_return_handler_16:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_3, exception_preserved_value_3, exception_preserved_tb_3 );
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_11:;
    tmp_called_name_14 = LOOKUP_BUILTIN( const_str_plain_min );
    assert( tmp_called_name_14 != NULL );
    tmp_args_element_name_17 = var_r;

    CHECK_OBJECT( tmp_args_element_name_17 );
    frame_14efccae7512c91f30afe30775cbeb2a->m_frame.f_lineno = 333;
    {
        PyObject *call_args[] = { tmp_args_element_name_17 };
        tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 333;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_best == NULL );
    var_best = tmp_assign_source_46;

    tmp_cond_value_3 = var_verbose;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "verbose" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 334;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_called_name_15 = LOOKUP_BUILTIN( const_str_plain_print );
    assert( tmp_called_name_15 != NULL );
    tmp_args_element_name_18 = const_str_digest_b3b0c318412dec5f595d758ec0925ea8;
    tmp_source_name_16 = const_str_space;
    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_join );
    assert( !(tmp_called_name_16 == NULL) );
    // Tried code:
    tmp_iter_arg_5 = var_r;

    CHECK_OBJECT( tmp_iter_arg_5 );
    tmp_assign_source_47 = MAKE_ITERATOR( tmp_iter_arg_5 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_17;
    }
    assert( tmp_listcontraction_1__$0 == NULL );
    tmp_listcontraction_1__$0 = tmp_assign_source_47;

    tmp_assign_source_48 = PyList_New( 0 );
    assert( tmp_listcontraction_1__contraction == NULL );
    tmp_listcontraction_1__contraction = tmp_assign_source_48;

    MAKE_OR_REUSE_FRAME( cache_frame_21d183a9513175dfcd91f311dac4988b_2, codeobj_21d183a9513175dfcd91f311dac4988b, module_timeit, sizeof(void *)+sizeof(void *) );
    frame_21d183a9513175dfcd91f311dac4988b_2 = cache_frame_21d183a9513175dfcd91f311dac4988b_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_21d183a9513175dfcd91f311dac4988b_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_21d183a9513175dfcd91f311dac4988b_2 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_2:;
    // Tried code:
    tmp_value_name_2 = tmp_listcontraction_1__$0;

    CHECK_OBJECT( tmp_value_name_2 );
    tmp_assign_source_49 = ITERATOR_NEXT( tmp_value_name_2 );
    if ( tmp_assign_source_49 == NULL )
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


        type_description_2 = "oc";
        exception_lineno = 335;
        goto try_except_handler_19;
    }
    {
        PyObject *old = tmp_listcontraction_1__iter_value_0;
        tmp_listcontraction_1__iter_value_0 = tmp_assign_source_49;
        Py_XDECREF( old );
    }

    goto try_end_12;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_17 = exception_keeper_type_16;
    tmp_compare_right_17 = PyExc_StopIteration;
    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_17, tmp_compare_right_17 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_16 );
        Py_XDECREF( exception_keeper_value_16 );
        Py_XDECREF( exception_keeper_tb_16 );

        exception_lineno = 335;
        type_description_2 = "oc";
        goto try_except_handler_18;
    }
    if ( tmp_exc_match_exception_match_3 == 1 )
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    Py_DECREF( exception_keeper_type_16 );
    Py_XDECREF( exception_keeper_value_16 );
    Py_XDECREF( exception_keeper_tb_16 );
    goto loop_end_2;
    goto branch_end_20;
    branch_no_20:;
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_18;
    branch_end_20:;
    // End of try:
    try_end_12:;
    tmp_assign_source_50 = tmp_listcontraction_1__iter_value_0;

    CHECK_OBJECT( tmp_assign_source_50 );
    {
        PyObject *old = outline_0_var_x;
        outline_0_var_x = tmp_assign_source_50;
        Py_INCREF( outline_0_var_x );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_append_list_1 );
    tmp_left_name_3 = const_str_digest_6200706edd1e762cc5f36aa79e76c018;
    if ( var_precision == NULL )
    {
        tmp_tuple_element_2 = NULL;
    }
    else
    {
        tmp_tuple_element_2 = PyCell_GET( var_precision );
    }

    if ( tmp_tuple_element_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "precision" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 335;
        type_description_2 = "oc";
        goto try_except_handler_18;
    }

    tmp_right_name_3 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = outline_0_var_x;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_2 );
    tmp_append_value_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;
        type_description_2 = "oc";
        goto try_except_handler_18;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;
        type_description_2 = "oc";
        goto try_except_handler_18;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;
        type_description_2 = "oc";
        goto try_except_handler_18;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_outline_return_value_1 = tmp_listcontraction_1__contraction;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_18;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( timeit$$$function_9_main );
    return NULL;
    // Return handler code:
    try_return_handler_18:;
    CHECK_OBJECT( (PyObject *)tmp_listcontraction_1__$0 );
    Py_DECREF( tmp_listcontraction_1__$0 );
    tmp_listcontraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_listcontraction_1__contraction );
    Py_DECREF( tmp_listcontraction_1__contraction );
    tmp_listcontraction_1__contraction = NULL;

    Py_XDECREF( tmp_listcontraction_1__iter_value_0 );
    tmp_listcontraction_1__iter_value_0 = NULL;

    goto frame_return_exit_2;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_listcontraction_1__$0 );
    Py_DECREF( tmp_listcontraction_1__$0 );
    tmp_listcontraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_listcontraction_1__contraction );
    Py_DECREF( tmp_listcontraction_1__contraction );
    tmp_listcontraction_1__contraction = NULL;

    Py_XDECREF( tmp_listcontraction_1__iter_value_0 );
    tmp_listcontraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_2;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_21d183a9513175dfcd91f311dac4988b_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_2:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_21d183a9513175dfcd91f311dac4988b_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_17;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_21d183a9513175dfcd91f311dac4988b_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_21d183a9513175dfcd91f311dac4988b_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_21d183a9513175dfcd91f311dac4988b_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_21d183a9513175dfcd91f311dac4988b_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_21d183a9513175dfcd91f311dac4988b_2,
        type_description_2,
        outline_0_var_x,
        var_precision
    );


    // Release cached frame.
    if ( frame_21d183a9513175dfcd91f311dac4988b_2 == cache_frame_21d183a9513175dfcd91f311dac4988b_2 )
    {
        Py_DECREF( frame_21d183a9513175dfcd91f311dac4988b_2 );
    }
    cache_frame_21d183a9513175dfcd91f311dac4988b_2 = NULL;

    assertFrameObject( frame_21d183a9513175dfcd91f311dac4988b_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;
    type_description_1 = "ooooooooooooocooooooooooooo";
    goto try_except_handler_17;
    skip_nested_handling_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( timeit$$$function_9_main );
    return NULL;
    // Return handler code:
    try_return_handler_17:;
    Py_XDECREF( outline_0_var_x );
    outline_0_var_x = NULL;

    goto outline_result_1;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_0_var_x );
    outline_0_var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( timeit$$$function_9_main );
    return NULL;
    outline_exception_1:;
    exception_lineno = 335;
    goto frame_exception_exit_1;
    outline_result_1:;
    tmp_args_element_name_20 = tmp_outline_return_value_1;
    frame_14efccae7512c91f30afe30775cbeb2a->m_frame.f_lineno = 335;
    {
        PyObject *call_args[] = { tmp_args_element_name_20 };
        tmp_args_element_name_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_called_name_16 );
    Py_DECREF( tmp_args_element_name_20 );
    if ( tmp_args_element_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_14efccae7512c91f30afe30775cbeb2a->m_frame.f_lineno = 335;
    {
        PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_args_element_name_19 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_19:;
    tmp_called_name_17 = LOOKUP_BUILTIN( const_str_plain_print );
    assert( tmp_called_name_17 != NULL );
    tmp_left_name_4 = const_str_digest_f1ec9750d101e1d77deaf939de8937eb;
    tmp_right_name_4 = var_number;

    if ( tmp_right_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "number" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 336;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_3 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_name_3 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
    tmp_kw_name_3 = PyDict_Copy( const_dict_fb4ddbadafbecbaef28aef989e4b600e );
    frame_14efccae7512c91f30afe30775cbeb2a->m_frame.f_lineno = 336;
    tmp_unused = CALL_FUNCTION( tmp_called_name_17, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_left_name_6 = var_best;

    if ( tmp_left_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "best" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 337;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_5 = const_float_1000000_0;
    tmp_left_name_5 = BINARY_OPERATION_MUL( tmp_left_name_6, tmp_right_name_5 );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_6 = var_number;

    if ( tmp_right_name_6 == NULL )
    {
        Py_DECREF( tmp_left_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "number" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 337;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_51 = BINARY_OPERATION_TRUEDIV( tmp_left_name_5, tmp_right_name_6 );
    Py_DECREF( tmp_left_name_5 );
    if ( tmp_assign_source_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_usec == NULL );
    var_usec = tmp_assign_source_51;

    tmp_compare_left_18 = var_time_unit;

    if ( tmp_compare_left_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "time_unit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 338;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_compare_right_18 = Py_None;
    tmp_isnot_2 = ( tmp_compare_left_18 != tmp_compare_right_18 );
    if ( tmp_isnot_2 )
    {
        goto branch_yes_21;
    }
    else
    {
        goto branch_no_21;
    }
    branch_yes_21:;
    tmp_subscribed_name_2 = var_units;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "units" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 339;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_2 = var_time_unit;

    if ( tmp_subscript_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "time_unit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 339;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_52 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 339;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_scale == NULL );
    var_scale = tmp_assign_source_52;

    goto branch_end_21;
    branch_no_21:;
    // Tried code:
    tmp_called_instance_3 = var_units;

    if ( tmp_called_instance_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "units" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 341;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_20;
    }

    frame_14efccae7512c91f30afe30775cbeb2a->m_frame.f_lineno = 341;
    tmp_iter_arg_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_items );
    if ( tmp_iter_arg_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 341;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_20;
    }
    tmp_assign_source_54 = MAKE_ITERATOR( tmp_iter_arg_6 );
    Py_DECREF( tmp_iter_arg_6 );
    if ( tmp_assign_source_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 341;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_20;
    }
    assert( tmp_listcontraction_2__$0 == NULL );
    tmp_listcontraction_2__$0 = tmp_assign_source_54;

    tmp_assign_source_55 = PyList_New( 0 );
    assert( tmp_listcontraction_2__contraction == NULL );
    tmp_listcontraction_2__contraction = tmp_assign_source_55;

    MAKE_OR_REUSE_FRAME( cache_frame_85421c13f84d10ad70c81612949c59b7_3, codeobj_85421c13f84d10ad70c81612949c59b7, module_timeit, sizeof(void *)+sizeof(void *) );
    frame_85421c13f84d10ad70c81612949c59b7_3 = cache_frame_85421c13f84d10ad70c81612949c59b7_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_85421c13f84d10ad70c81612949c59b7_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_85421c13f84d10ad70c81612949c59b7_3 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    loop_start_3:;
    // Tried code:
    tmp_value_name_3 = tmp_listcontraction_2__$0;

    CHECK_OBJECT( tmp_value_name_3 );
    tmp_assign_source_56 = ITERATOR_NEXT( tmp_value_name_3 );
    if ( tmp_assign_source_56 == NULL )
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


        type_description_2 = "oo";
        exception_lineno = 341;
        goto try_except_handler_22;
    }
    {
        PyObject *old = tmp_listcontraction_2__iter_value_0;
        tmp_listcontraction_2__iter_value_0 = tmp_assign_source_56;
        Py_XDECREF( old );
    }

    goto try_end_13;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_19 = exception_keeper_type_19;
    tmp_compare_right_19 = PyExc_StopIteration;
    tmp_exc_match_exception_match_4 = EXCEPTION_MATCH_BOOL( tmp_compare_left_19, tmp_compare_right_19 );
    if ( tmp_exc_match_exception_match_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_19 );
        Py_XDECREF( exception_keeper_value_19 );
        Py_XDECREF( exception_keeper_tb_19 );

        exception_lineno = 341;
        type_description_2 = "oo";
        goto try_except_handler_21;
    }
    if ( tmp_exc_match_exception_match_4 == 1 )
    {
        goto branch_yes_22;
    }
    else
    {
        goto branch_no_22;
    }
    branch_yes_22:;
    Py_DECREF( exception_keeper_type_19 );
    Py_XDECREF( exception_keeper_value_19 );
    Py_XDECREF( exception_keeper_tb_19 );
    goto loop_end_3;
    goto branch_end_22;
    branch_no_22:;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto try_except_handler_21;
    branch_end_22:;
    // End of try:
    try_end_13:;
    // Tried code:
    tmp_iter_arg_7 = tmp_listcontraction_2__iter_value_0;

    CHECK_OBJECT( tmp_iter_arg_7 );
    tmp_assign_source_57 = MAKE_ITERATOR( tmp_iter_arg_7 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 341;
        type_description_2 = "oo";
        goto try_except_handler_23;
    }
    {
        PyObject *old = tmp_listcontraction$tuple_unpack_1__source_iter;
        tmp_listcontraction$tuple_unpack_1__source_iter = tmp_assign_source_57;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_7 = tmp_listcontraction$tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_7 );
    tmp_assign_source_58 = UNPACK_NEXT( tmp_unpack_7, 0, 2 );
    if ( tmp_assign_source_58 == NULL )
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


        type_description_2 = "oo";
        exception_lineno = 341;
        goto try_except_handler_24;
    }
    {
        PyObject *old = tmp_listcontraction$tuple_unpack_1__element_1;
        tmp_listcontraction$tuple_unpack_1__element_1 = tmp_assign_source_58;
        Py_XDECREF( old );
    }

    tmp_unpack_8 = tmp_listcontraction$tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_8 );
    tmp_assign_source_59 = UNPACK_NEXT( tmp_unpack_8, 1, 2 );
    if ( tmp_assign_source_59 == NULL )
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


        type_description_2 = "oo";
        exception_lineno = 341;
        goto try_except_handler_24;
    }
    {
        PyObject *old = tmp_listcontraction$tuple_unpack_1__element_2;
        tmp_listcontraction$tuple_unpack_1__element_2 = tmp_assign_source_59;
        Py_XDECREF( old );
    }

    tmp_iterator_name_4 = tmp_listcontraction$tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_iterator_name_4 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_4 ); assert( HAS_ITERNEXT( tmp_iterator_name_4 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_4 )->tp_iternext)( tmp_iterator_name_4 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_2 = "oo";
                exception_lineno = 341;
                goto try_except_handler_24;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_2 = "oo";
        exception_lineno = 341;
        goto try_except_handler_24;
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_listcontraction$tuple_unpack_1__source_iter );
    Py_DECREF( tmp_listcontraction$tuple_unpack_1__source_iter );
    tmp_listcontraction$tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_23;
    // End of try:
    try_end_14:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__element_1 );
    tmp_listcontraction$tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__element_2 );
    tmp_listcontraction$tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto try_except_handler_21;
    // End of try:
    try_end_15:;
    CHECK_OBJECT( (PyObject *)tmp_listcontraction$tuple_unpack_1__source_iter );
    Py_DECREF( tmp_listcontraction$tuple_unpack_1__source_iter );
    tmp_listcontraction$tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_60 = tmp_listcontraction$tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_60 );
    {
        PyObject *old = outline_1_var_unit;
        outline_1_var_unit = tmp_assign_source_60;
        Py_INCREF( outline_1_var_unit );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__element_1 );
    tmp_listcontraction$tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_61 = tmp_listcontraction$tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_61 );
    {
        PyObject *old = outline_1_var_scale;
        outline_1_var_scale = tmp_assign_source_61;
        Py_INCREF( outline_1_var_scale );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_listcontraction$tuple_unpack_1__element_2 );
    tmp_listcontraction$tuple_unpack_1__element_2 = NULL;

    tmp_append_list_2 = tmp_listcontraction_2__contraction;

    CHECK_OBJECT( tmp_append_list_2 );
    tmp_tuple_element_4 = outline_1_var_scale;

    if ( tmp_tuple_element_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scale" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 341;
        type_description_2 = "oo";
        goto try_except_handler_21;
    }

    tmp_append_value_2 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_append_value_2, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = outline_1_var_unit;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_append_value_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "unit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 341;
        type_description_2 = "oo";
        goto try_except_handler_21;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_append_value_2, 1, tmp_tuple_element_4 );
    assert( PyList_Check( tmp_append_list_2 ) );
    tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
    Py_DECREF( tmp_append_value_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 341;
        type_description_2 = "oo";
        goto try_except_handler_21;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 341;
        type_description_2 = "oo";
        goto try_except_handler_21;
    }
    goto loop_start_3;
    loop_end_3:;
    tmp_outline_return_value_2 = tmp_listcontraction_2__contraction;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_21;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( timeit$$$function_9_main );
    return NULL;
    // Return handler code:
    try_return_handler_21:;
    CHECK_OBJECT( (PyObject *)tmp_listcontraction_2__$0 );
    Py_DECREF( tmp_listcontraction_2__$0 );
    tmp_listcontraction_2__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_listcontraction_2__contraction );
    Py_DECREF( tmp_listcontraction_2__contraction );
    tmp_listcontraction_2__contraction = NULL;

    Py_XDECREF( tmp_listcontraction_2__iter_value_0 );
    tmp_listcontraction_2__iter_value_0 = NULL;

    goto frame_return_exit_3;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_listcontraction_2__$0 );
    Py_DECREF( tmp_listcontraction_2__$0 );
    tmp_listcontraction_2__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_listcontraction_2__contraction );
    Py_DECREF( tmp_listcontraction_2__contraction );
    tmp_listcontraction_2__contraction = NULL;

    Py_XDECREF( tmp_listcontraction_2__iter_value_0 );
    tmp_listcontraction_2__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_3;
    // End of try:

#if 0
    RESTORE_FRAME_EXCEPTION( frame_85421c13f84d10ad70c81612949c59b7_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_return_exit_3:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_85421c13f84d10ad70c81612949c59b7_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_20;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_85421c13f84d10ad70c81612949c59b7_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_85421c13f84d10ad70c81612949c59b7_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_85421c13f84d10ad70c81612949c59b7_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_85421c13f84d10ad70c81612949c59b7_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_85421c13f84d10ad70c81612949c59b7_3,
        type_description_2,
        outline_1_var_unit,
        outline_1_var_scale
    );


    // Release cached frame.
    if ( frame_85421c13f84d10ad70c81612949c59b7_3 == cache_frame_85421c13f84d10ad70c81612949c59b7_3 )
    {
        Py_DECREF( frame_85421c13f84d10ad70c81612949c59b7_3 );
    }
    cache_frame_85421c13f84d10ad70c81612949c59b7_3 = NULL;

    assertFrameObject( frame_85421c13f84d10ad70c81612949c59b7_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;
    type_description_1 = "ooooooooooooocooooooooooooo";
    goto try_except_handler_20;
    skip_nested_handling_2:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( timeit$$$function_9_main );
    return NULL;
    // Return handler code:
    try_return_handler_20:;
    Py_XDECREF( outline_1_var_unit );
    outline_1_var_unit = NULL;

    Py_XDECREF( outline_1_var_scale );
    outline_1_var_scale = NULL;

    goto outline_result_2;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( outline_1_var_unit );
    outline_1_var_unit = NULL;

    Py_XDECREF( outline_1_var_scale );
    outline_1_var_scale = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( timeit$$$function_9_main );
    return NULL;
    outline_exception_2:;
    exception_lineno = 341;
    goto frame_exception_exit_1;
    outline_result_2:;
    tmp_assign_source_53 = tmp_outline_return_value_2;
    assert( var_scales == NULL );
    var_scales = tmp_assign_source_53;

    tmp_source_name_17 = var_scales;

    CHECK_OBJECT( tmp_source_name_17 );
    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_sort );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 342;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_kw_name_4 = PyDict_Copy( const_dict_20f16b30e1951d468c3080dfc46b8748 );
    frame_14efccae7512c91f30afe30775cbeb2a->m_frame.f_lineno = 342;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_18, tmp_kw_name_4 );
    Py_DECREF( tmp_called_name_18 );
    Py_DECREF( tmp_kw_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 342;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_8 = var_scales;

    if ( tmp_iter_arg_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scales" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 343;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_62 = MAKE_ITERATOR( tmp_iter_arg_8 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_62;

    // Tried code:
    loop_start_4:;
    // Tried code:
    tmp_value_name_4 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_value_name_4 );
    tmp_assign_source_63 = ITERATOR_NEXT( tmp_value_name_4 );
    if ( tmp_assign_source_63 == NULL )
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


        type_description_1 = "ooooooooooooocooooooooooooo";
        exception_lineno = 343;
        goto try_except_handler_26;
    }
    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_63;
        Py_XDECREF( old );
    }

    goto try_end_16;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_20 = exception_keeper_type_24;
    tmp_compare_right_20 = PyExc_StopIteration;
    tmp_exc_match_exception_match_5 = EXCEPTION_MATCH_BOOL( tmp_compare_left_20, tmp_compare_right_20 );
    if ( tmp_exc_match_exception_match_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_24 );
        Py_XDECREF( exception_keeper_value_24 );
        Py_XDECREF( exception_keeper_tb_24 );

        exception_lineno = 343;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_25;
    }
    if ( tmp_exc_match_exception_match_5 == 1 )
    {
        goto branch_yes_23;
    }
    else
    {
        goto branch_no_23;
    }
    branch_yes_23:;
    Py_DECREF( exception_keeper_type_24 );
    Py_XDECREF( exception_keeper_value_24 );
    Py_XDECREF( exception_keeper_tb_24 );
    goto loop_end_4;
    goto branch_end_23;
    branch_no_23:;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto try_except_handler_25;
    branch_end_23:;
    // End of try:
    try_end_16:;
    // Tried code:
    tmp_iter_arg_9 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_iter_arg_9 );
    tmp_assign_source_64 = MAKE_ITERATOR( tmp_iter_arg_9 );
    if ( tmp_assign_source_64 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_27;
    }
    {
        PyObject *old = tmp_tuple_unpack_4__source_iter;
        tmp_tuple_unpack_4__source_iter = tmp_assign_source_64;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_9 = tmp_tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_unpack_9 );
    tmp_assign_source_65 = UNPACK_NEXT( tmp_unpack_9, 0, 2 );
    if ( tmp_assign_source_65 == NULL )
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


        type_description_1 = "ooooooooooooocooooooooooooo";
        exception_lineno = 343;
        goto try_except_handler_28;
    }
    {
        PyObject *old = tmp_tuple_unpack_4__element_1;
        tmp_tuple_unpack_4__element_1 = tmp_assign_source_65;
        Py_XDECREF( old );
    }

    tmp_unpack_10 = tmp_tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_unpack_10 );
    tmp_assign_source_66 = UNPACK_NEXT( tmp_unpack_10, 1, 2 );
    if ( tmp_assign_source_66 == NULL )
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


        type_description_1 = "ooooooooooooocooooooooooooo";
        exception_lineno = 343;
        goto try_except_handler_28;
    }
    {
        PyObject *old = tmp_tuple_unpack_4__element_2;
        tmp_tuple_unpack_4__element_2 = tmp_assign_source_66;
        Py_XDECREF( old );
    }

    tmp_iterator_name_5 = tmp_tuple_unpack_4__source_iter;

    CHECK_OBJECT( tmp_iterator_name_5 );
    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_5 ); assert( HAS_ITERNEXT( tmp_iterator_name_5 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_5 )->tp_iternext)( tmp_iterator_name_5 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooooooooooooocooooooooooooo";
                exception_lineno = 343;
                goto try_except_handler_28;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        type_description_1 = "ooooooooooooocooooooooooooo";
        exception_lineno = 343;
        goto try_except_handler_28;
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto try_except_handler_27;
    // End of try:
    try_end_17:;
    goto try_end_18;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto try_except_handler_25;
    // End of try:
    try_end_18:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_4__source_iter );
    Py_DECREF( tmp_tuple_unpack_4__source_iter );
    tmp_tuple_unpack_4__source_iter = NULL;

    tmp_assign_source_67 = tmp_tuple_unpack_4__element_1;

    CHECK_OBJECT( tmp_assign_source_67 );
    {
        PyObject *old = var_scale;
        var_scale = tmp_assign_source_67;
        Py_INCREF( var_scale );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_4__element_1 );
    tmp_tuple_unpack_4__element_1 = NULL;

    tmp_assign_source_68 = tmp_tuple_unpack_4__element_2;

    CHECK_OBJECT( tmp_assign_source_68 );
    {
        PyObject *old = var_time_unit;
        var_time_unit = tmp_assign_source_68;
        Py_INCREF( var_time_unit );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_4__element_2 );
    tmp_tuple_unpack_4__element_2 = NULL;

    tmp_compare_left_21 = var_usec;

    if ( tmp_compare_left_21 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "usec" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 344;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_25;
    }

    tmp_compare_right_21 = var_scale;

    if ( tmp_compare_right_21 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scale" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 344;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_25;
    }

    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_21, tmp_compare_right_21 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 344;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_25;
    }
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_24;
    }
    else
    {
        goto branch_no_24;
    }
    branch_yes_24:;
    goto loop_end_4;
    branch_no_24:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto try_except_handler_25;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_19;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    branch_end_21:;
    tmp_called_name_19 = LOOKUP_BUILTIN( const_str_plain_print );
    assert( tmp_called_name_19 != NULL );
    tmp_left_name_7 = const_str_digest_8a9e659f3f9159fd0434123c418a524c;
    tmp_tuple_element_5 = var_repeat;

    if ( tmp_tuple_element_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "repeat" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 346;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_7 = PyTuple_New( 4 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_right_name_7, 0, tmp_tuple_element_5 );
    if ( var_precision == NULL )
    {
        tmp_tuple_element_5 = NULL;
    }
    else
    {
        tmp_tuple_element_5 = PyCell_GET( var_precision );
    }

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_right_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "precision" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 346;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_right_name_7, 1, tmp_tuple_element_5 );
    tmp_left_name_8 = var_usec;

    if ( tmp_left_name_8 == NULL )
    {
        Py_DECREF( tmp_right_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "usec" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 347;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_8 = var_scale;

    if ( tmp_right_name_8 == NULL )
    {
        Py_DECREF( tmp_right_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scale" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 347;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_5 = BINARY_OPERATION_TRUEDIV( tmp_left_name_8, tmp_right_name_8 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_7 );

        exception_lineno = 347;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_7, 2, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_time_unit;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_right_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "time_unit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 347;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_right_name_7, 3, tmp_tuple_element_5 );
    tmp_args_element_name_21 = BINARY_OPERATION_REMAINDER( tmp_left_name_7, tmp_right_name_7 );
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_args_element_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 346;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    frame_14efccae7512c91f30afe30775cbeb2a->m_frame.f_lineno = 346;
    {
        PyObject *call_args[] = { tmp_args_element_name_21 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
    }

    Py_DECREF( tmp_args_element_name_21 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 346;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_20 = LOOKUP_BUILTIN( const_str_plain_min );
    assert( tmp_called_name_20 != NULL );
    tmp_args_element_name_22 = var_r;

    if ( tmp_args_element_name_22 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 348;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_14efccae7512c91f30afe30775cbeb2a->m_frame.f_lineno = 348;
    {
        PyObject *call_args[] = { tmp_args_element_name_22 };
        tmp_assign_source_69 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
    }

    if ( tmp_assign_source_69 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 348;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_best;
        var_best = tmp_assign_source_69;
        Py_XDECREF( old );
    }

    tmp_left_name_10 = var_best;

    CHECK_OBJECT( tmp_left_name_10 );
    tmp_right_name_9 = const_float_1000000_0;
    tmp_left_name_9 = BINARY_OPERATION_MUL( tmp_left_name_10, tmp_right_name_9 );
    if ( tmp_left_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_10 = var_number;

    if ( tmp_right_name_10 == NULL )
    {
        Py_DECREF( tmp_left_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "number" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 349;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_70 = BINARY_OPERATION_TRUEDIV( tmp_left_name_9, tmp_right_name_10 );
    Py_DECREF( tmp_left_name_9 );
    if ( tmp_assign_source_70 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_usec;
        var_usec = tmp_assign_source_70;
        Py_XDECREF( old );
    }

    tmp_called_name_21 = LOOKUP_BUILTIN( const_str_plain_max );
    assert( tmp_called_name_21 != NULL );
    tmp_args_element_name_23 = var_r;

    if ( tmp_args_element_name_23 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 350;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    frame_14efccae7512c91f30afe30775cbeb2a->m_frame.f_lineno = 350;
    {
        PyObject *call_args[] = { tmp_args_element_name_23 };
        tmp_assign_source_71 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_21, call_args );
    }

    if ( tmp_assign_source_71 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_worst == NULL );
    var_worst = tmp_assign_source_71;

    tmp_compare_left_22 = var_worst;

    CHECK_OBJECT( tmp_compare_left_22 );
    tmp_left_name_11 = var_best;

    if ( tmp_left_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "best" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 351;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_11 = const_int_pos_4;
    tmp_compare_right_22 = BINARY_OPERATION_MUL( tmp_left_name_11, tmp_right_name_11 );
    if ( tmp_compare_right_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 351;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_cmp_GtE_2 = RICH_COMPARE_BOOL_GE( tmp_compare_left_22, tmp_compare_right_22 );
    Py_DECREF( tmp_compare_right_22 );
    if ( tmp_cmp_GtE_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 351;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_GtE_2 == 1 )
    {
        goto branch_yes_25;
    }
    else
    {
        goto branch_no_25;
    }
    branch_yes_25:;
    tmp_left_name_13 = var_worst;

    if ( tmp_left_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "worst" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 352;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_12 = const_float_1000000_0;
    tmp_left_name_12 = BINARY_OPERATION_MUL( tmp_left_name_13, tmp_right_name_12 );
    if ( tmp_left_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 352;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_right_name_13 = var_number;

    if ( tmp_right_name_13 == NULL )
    {
        Py_DECREF( tmp_left_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "number" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 352;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_72 = BINARY_OPERATION_TRUEDIV( tmp_left_name_12, tmp_right_name_13 );
    Py_DECREF( tmp_left_name_12 );
    if ( tmp_assign_source_72 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 352;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_usec;
        var_usec = tmp_assign_source_72;
        Py_XDECREF( old );
    }

    tmp_name_name_3 = const_str_plain_warnings;
    tmp_globals_name_3 = (PyObject *)moduledict_timeit;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    frame_14efccae7512c91f30afe30775cbeb2a->m_frame.f_lineno = 353;
    tmp_assign_source_73 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    if ( tmp_assign_source_73 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 353;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    assert( var_warnings == NULL );
    var_warnings = tmp_assign_source_73;

    tmp_source_name_18 = var_warnings;

    CHECK_OBJECT( tmp_source_name_18 );
    tmp_called_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_warn_explicit );
    if ( tmp_called_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 354;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_14 = const_str_digest_02e1d405c354309bd7a79d0213f12ada;
    if ( var_precision == NULL )
    {
        tmp_tuple_element_6 = NULL;
    }
    else
    {
        tmp_tuple_element_6 = PyCell_GET( var_precision );
    }

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_called_name_22 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "precision" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 357;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_14 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_right_name_14, 0, tmp_tuple_element_6 );
    tmp_left_name_15 = var_usec;

    if ( tmp_left_name_15 == NULL )
    {
        Py_DECREF( tmp_called_name_22 );
        Py_DECREF( tmp_right_name_14 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "usec" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 357;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_15 = var_scale;

    if ( tmp_right_name_15 == NULL )
    {
        Py_DECREF( tmp_called_name_22 );
        Py_DECREF( tmp_right_name_14 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "scale" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 357;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_6 = BINARY_OPERATION_TRUEDIV( tmp_left_name_15, tmp_right_name_15 );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_22 );
        Py_DECREF( tmp_right_name_14 );

        exception_lineno = 357;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_14, 1, tmp_tuple_element_6 );
    tmp_tuple_element_6 = var_time_unit;

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_called_name_22 );
        Py_DECREF( tmp_right_name_14 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "time_unit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 357;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_right_name_14, 2, tmp_tuple_element_6 );
    tmp_args_element_name_24 = BINARY_OPERATION_REMAINDER( tmp_left_name_14, tmp_right_name_14 );
    Py_DECREF( tmp_right_name_14 );
    if ( tmp_args_element_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_22 );

        exception_lineno = 355;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_25 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_UserWarning );

    if (unlikely( tmp_args_element_name_25 == NULL ))
    {
        tmp_args_element_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UserWarning );
    }

    if ( tmp_args_element_name_25 == NULL )
    {
        Py_DECREF( tmp_called_name_22 );
        Py_DECREF( tmp_args_element_name_24 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UserWarning" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 358;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_26 = const_str_empty;
    tmp_args_element_name_27 = const_int_0;
    frame_14efccae7512c91f30afe30775cbeb2a->m_frame.f_lineno = 354;
    {
        PyObject *call_args[] = { tmp_args_element_name_24, tmp_args_element_name_25, tmp_args_element_name_26, tmp_args_element_name_27 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_22, call_args );
    }

    Py_DECREF( tmp_called_name_22 );
    Py_DECREF( tmp_args_element_name_24 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 354;
        type_description_1 = "ooooooooooooocooooooooooooo";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_25:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_14efccae7512c91f30afe30775cbeb2a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_14efccae7512c91f30afe30775cbeb2a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_14efccae7512c91f30afe30775cbeb2a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_14efccae7512c91f30afe30775cbeb2a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_14efccae7512c91f30afe30775cbeb2a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_14efccae7512c91f30afe30775cbeb2a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_14efccae7512c91f30afe30775cbeb2a,
        type_description_1,
        par_args,
        par__wrap_timer,
        var_getopt,
        var_opts,
        var_err,
        var_timer,
        var_stmt,
        var_number,
        var_setup,
        var_repeat,
        var_verbose,
        var_time_unit,
        var_units,
        var_precision,
        var_o,
        var_a,
        var_os,
        var_t,
        var_callback,
        var__,
        var_r,
        var_best,
        var_usec,
        var_scale,
        var_scales,
        var_worst,
        var_warnings
    );


    // Release cached frame.
    if ( frame_14efccae7512c91f30afe30775cbeb2a == cache_frame_14efccae7512c91f30afe30775cbeb2a )
    {
        Py_DECREF( frame_14efccae7512c91f30afe30775cbeb2a );
    }
    cache_frame_14efccae7512c91f30afe30775cbeb2a = NULL;

    assertFrameObject( frame_14efccae7512c91f30afe30775cbeb2a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_3:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( timeit$$$function_9_main );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par__wrap_timer );
    par__wrap_timer = NULL;

    Py_XDECREF( var_getopt );
    var_getopt = NULL;

    Py_XDECREF( var_opts );
    var_opts = NULL;

    Py_XDECREF( var_err );
    var_err = NULL;

    Py_XDECREF( var_timer );
    var_timer = NULL;

    Py_XDECREF( var_stmt );
    var_stmt = NULL;

    Py_XDECREF( var_number );
    var_number = NULL;

    Py_XDECREF( var_setup );
    var_setup = NULL;

    Py_XDECREF( var_repeat );
    var_repeat = NULL;

    Py_XDECREF( var_verbose );
    var_verbose = NULL;

    Py_XDECREF( var_time_unit );
    var_time_unit = NULL;

    Py_XDECREF( var_units );
    var_units = NULL;

    CHECK_OBJECT( (PyObject *)var_precision );
    Py_DECREF( var_precision );
    var_precision = NULL;

    Py_XDECREF( var_o );
    var_o = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_os );
    var_os = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_callback );
    var_callback = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_best );
    var_best = NULL;

    Py_XDECREF( var_usec );
    var_usec = NULL;

    Py_XDECREF( var_scale );
    var_scale = NULL;

    Py_XDECREF( var_scales );
    var_scales = NULL;

    Py_XDECREF( var_worst );
    var_worst = NULL;

    Py_XDECREF( var_warnings );
    var_warnings = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_args );
    par_args = NULL;

    Py_XDECREF( par__wrap_timer );
    par__wrap_timer = NULL;

    Py_XDECREF( var_getopt );
    var_getopt = NULL;

    Py_XDECREF( var_opts );
    var_opts = NULL;

    Py_XDECREF( var_err );
    var_err = NULL;

    Py_XDECREF( var_timer );
    var_timer = NULL;

    Py_XDECREF( var_stmt );
    var_stmt = NULL;

    Py_XDECREF( var_number );
    var_number = NULL;

    Py_XDECREF( var_setup );
    var_setup = NULL;

    Py_XDECREF( var_repeat );
    var_repeat = NULL;

    Py_XDECREF( var_verbose );
    var_verbose = NULL;

    Py_XDECREF( var_time_unit );
    var_time_unit = NULL;

    Py_XDECREF( var_units );
    var_units = NULL;

    CHECK_OBJECT( (PyObject *)var_precision );
    Py_DECREF( var_precision );
    var_precision = NULL;

    Py_XDECREF( var_o );
    var_o = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_os );
    var_os = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_callback );
    var_callback = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_best );
    var_best = NULL;

    Py_XDECREF( var_usec );
    var_usec = NULL;

    Py_XDECREF( var_scale );
    var_scale = NULL;

    Py_XDECREF( var_scales );
    var_scales = NULL;

    Py_XDECREF( var_worst );
    var_worst = NULL;

    Py_XDECREF( var_warnings );
    var_warnings = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( timeit$$$function_9_main );
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


static PyObject *impl_timeit$$$function_9_main$$$function_1_callback( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_number = python_pars[ 0 ];
    PyObject *par_time_taken = python_pars[ 1 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_8f50628a0497b926a897ab590a9977cf = NULL;

    struct Nuitka_FrameObject *frame_8f50628a0497b926a897ab590a9977cf;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8f50628a0497b926a897ab590a9977cf, codeobj_8f50628a0497b926a897ab590a9977cf, module_timeit, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_8f50628a0497b926a897ab590a9977cf = cache_frame_8f50628a0497b926a897ab590a9977cf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8f50628a0497b926a897ab590a9977cf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8f50628a0497b926a897ab590a9977cf ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_print );
    assert( tmp_called_name_1 != NULL );
    tmp_source_name_1 = const_str_digest_2bff8ec204a36ab73ea44757966a33b9;
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_format );
    assert( !(tmp_called_name_2 == NULL) );
    tmp_dict_key_1 = const_str_plain_num;
    tmp_dict_value_1 = par_number;

    CHECK_OBJECT( tmp_dict_value_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_2 = const_str_plain_secs;
    tmp_dict_value_2 = par_time_taken;

    CHECK_OBJECT( tmp_dict_value_2 );
    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( !(tmp_res != 0) );
    tmp_dict_key_3 = const_str_plain_prec;
    if ( self->m_closure[0] == NULL )
    {
        tmp_dict_value_3 = NULL;
    }
    else
    {
        tmp_dict_value_3 = PyCell_GET( self->m_closure[0] );
    }

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "precision" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 322;
        type_description_1 = "ooNc";
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    assert( !(tmp_res != 0) );
    frame_8f50628a0497b926a897ab590a9977cf->m_frame.f_lineno = 322;
    tmp_args_element_name_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 322;
        type_description_1 = "ooNc";
        goto frame_exception_exit_1;
    }
    frame_8f50628a0497b926a897ab590a9977cf->m_frame.f_lineno = 322;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 322;
        type_description_1 = "ooNc";
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8f50628a0497b926a897ab590a9977cf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8f50628a0497b926a897ab590a9977cf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8f50628a0497b926a897ab590a9977cf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8f50628a0497b926a897ab590a9977cf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8f50628a0497b926a897ab590a9977cf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8f50628a0497b926a897ab590a9977cf,
        type_description_1,
        par_number,
        par_time_taken,
        NULL,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_8f50628a0497b926a897ab590a9977cf == cache_frame_8f50628a0497b926a897ab590a9977cf )
    {
        Py_DECREF( frame_8f50628a0497b926a897ab590a9977cf );
    }
    cache_frame_8f50628a0497b926a897ab590a9977cf = NULL;

    assertFrameObject( frame_8f50628a0497b926a897ab590a9977cf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( timeit$$$function_9_main$$$function_1_callback );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_number );
    par_number = NULL;

    Py_XDECREF( par_time_taken );
    par_time_taken = NULL;

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

    Py_XDECREF( par_number );
    par_number = NULL;

    Py_XDECREF( par_time_taken );
    par_time_taken = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( timeit$$$function_9_main$$$function_1_callback );
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



static PyObject *MAKE_FUNCTION_timeit$$$function_1_reindent(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_timeit$$$function_1_reindent,
        const_str_plain_reindent,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_022f33d3bc8327f06ac435493b8ef35e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_timeit,
        const_str_digest_08572d151ada16695ef18846ef0999f0,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_timeit$$$function_2___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_timeit$$$function_2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        const_str_digest_fef05c70694d980a2a7cc5b20a1e6dd6,
#endif
        codeobj_5a1a2ff44e9a1f3055675fc3d9715168,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_timeit,
        const_str_digest_591ff80880463d5285341410cf8ff4a2,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_timeit$$$function_3_print_exc( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_timeit$$$function_3_print_exc,
        const_str_plain_print_exc,
#if PYTHON_VERSION >= 330
        const_str_digest_9a184526abe31ebefb9cd5eefa977118,
#endif
        codeobj_3f50548c536eb67672adebba6f610958,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_timeit,
        const_str_digest_40f15531cf724e8c383d6837c281251e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_timeit$$$function_4_timeit( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_timeit$$$function_4_timeit,
        const_str_plain_timeit,
#if PYTHON_VERSION >= 330
        const_str_digest_c98bcb8596b1629dc0d47a9c3dcb3a4c,
#endif
        codeobj_5e1f101e788009630da542ea0e4f674f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_timeit,
        const_str_digest_b2c17ad22315c5ba07abd47530b5a32e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_timeit$$$function_5_repeat( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_timeit$$$function_5_repeat,
        const_str_plain_repeat,
#if PYTHON_VERSION >= 330
        const_str_digest_9d2b5ebdfc7ec2db24750c3eb29f60b7,
#endif
        codeobj_542b882075130e3f825c5b7b4c0059f0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_timeit,
        const_str_digest_056cea1d517f0a2931333a8d8fd04f67,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_timeit$$$function_6_autorange( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_timeit$$$function_6_autorange,
        const_str_plain_autorange,
#if PYTHON_VERSION >= 330
        const_str_digest_7a1a13ffd96756c39edb82262b5b7308,
#endif
        codeobj_0556833f0e26bc7682b6e809f11662cf,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_timeit,
        const_str_digest_c30fdaebbd2694ec085b24e6fefc9900,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_timeit$$$function_7_timeit( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_timeit$$$function_7_timeit,
        const_str_plain_timeit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e8ee1749abf4c41caea9a2df954d977e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_timeit,
        const_str_digest_fa58daa946715b4bef2c9be4da481035,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_timeit$$$function_8_repeat( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_timeit$$$function_8_repeat,
        const_str_plain_repeat,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_14e97ea3c2f20ea126146492dc607e36,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_timeit,
        const_str_digest_1ed3208926f70ec53ffed3cde251d404,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_timeit$$$function_9_main( PyObject *defaults, PyObject *kw_defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_timeit$$$function_9_main,
        const_str_plain_main,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_14efccae7512c91f30afe30775cbeb2a,
        defaults,
#if PYTHON_VERSION >= 300
        kw_defaults,
        const_dict_empty,
#endif
        module_timeit,
        const_str_digest_7c6e644650a98759671745375ef1935e,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_timeit$$$function_9_main$$$function_1_callback( struct Nuitka_CellObject *closure_precision )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_timeit$$$function_9_main$$$function_1_callback,
        const_str_plain_callback,
#if PYTHON_VERSION >= 330
        const_str_digest_368d06d32f60e24d7f6031e6bc1b8fe5,
#endif
        codeobj_8f50628a0497b926a897ab590a9977cf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_timeit,
        Py_None,
        1
    );

result->m_closure[0] = closure_precision;
Py_INCREF( result->m_closure[0] );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_timeit =
{
    PyModuleDef_HEAD_INIT,
    "timeit",   /* m_name */
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

MOD_INIT_DECL( timeit )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_timeit );
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
    puts("timeit: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("timeit: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("timeit: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in inittimeit" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_timeit = Py_InitModule4(
        "timeit",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_timeit = PyModule_Create( &mdef_timeit );
#endif

    moduledict_timeit = MODULE_DICT( module_timeit );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_timeit,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_timeit,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_timeit,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_timeit,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_timeit );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_timeit, module_timeit );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_timeit, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_timeit, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_timeit, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_timeit, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_defaults_6;
    PyObject *tmp_defaults_7;
    PyObject *tmp_defaults_8;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_fromlist_name_2;
    PyObject *tmp_fromlist_name_3;
    PyObject *tmp_fromlist_name_4;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_globals_name_2;
    PyObject *tmp_globals_name_3;
    PyObject *tmp_globals_name_4;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_kw_defaults_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_level_name_1;
    PyObject *tmp_level_name_2;
    PyObject *tmp_level_name_3;
    PyObject *tmp_level_name_4;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_locals_name_2;
    PyObject *tmp_locals_name_3;
    PyObject *tmp_locals_name_4;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_name_name_1;
    PyObject *tmp_name_name_2;
    PyObject *tmp_name_name_3;
    PyObject *tmp_name_name_4;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_set_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    static struct Nuitka_FrameObject *cache_frame_bd25ef9abedd92d185a453a4367d6185_2 = NULL;

    struct Nuitka_FrameObject *frame_bd25ef9abedd92d185a453a4367d6185_2;

    struct Nuitka_FrameObject *frame_e75408b108860e456e214734b8a4baef;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    tmp_outline_return_value_1 = NULL;
    PyObject *locals_Timer_84 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_e725917f01a78078ace93f5c2dfeedcf;
    UPDATE_STRING_DICT0( moduledict_timeit, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_58a32e928f753f63b9346f248806122b;
    UPDATE_STRING_DICT0( moduledict_timeit, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_timeit, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_name_name_1 = const_str_plain_gc;
    tmp_globals_name_1 = (PyObject *)moduledict_timeit;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    assert( !(tmp_assign_source_4 == NULL) );
    UPDATE_STRING_DICT1( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_gc, tmp_assign_source_4 );
    tmp_name_name_2 = const_str_plain_sys;
    tmp_globals_name_2 = (PyObject *)moduledict_timeit;
    tmp_locals_name_2 = Py_None;
    tmp_fromlist_name_2 = Py_None;
    tmp_level_name_2 = const_int_0;
    tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
    assert( !(tmp_assign_source_5 == NULL) );
    UPDATE_STRING_DICT1( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_5 );
    tmp_name_name_3 = const_str_plain_time;
    tmp_globals_name_3 = (PyObject *)moduledict_timeit;
    tmp_locals_name_3 = Py_None;
    tmp_fromlist_name_3 = Py_None;
    tmp_level_name_3 = const_int_0;
    tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
    assert( !(tmp_assign_source_6 == NULL) );
    UPDATE_STRING_DICT1( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_6 );
    tmp_name_name_4 = const_str_plain_itertools;
    tmp_globals_name_4 = (PyObject *)moduledict_timeit;
    tmp_locals_name_4 = Py_None;
    tmp_fromlist_name_4 = Py_None;
    tmp_level_name_4 = const_int_0;
    tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
    assert( !(tmp_assign_source_7 == NULL) );
    UPDATE_STRING_DICT1( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_itertools, tmp_assign_source_7 );
    tmp_assign_source_8 = LIST_COPY( const_list_5e464cba68cd9ad828ebb850dedca079_list );
    UPDATE_STRING_DICT1( moduledict_timeit, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8 );
    tmp_assign_source_9 = const_str_digest_a51bbef14853c1ad91d4b940ba774fba;
    UPDATE_STRING_DICT0( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_dummy_src_name, tmp_assign_source_9 );
    tmp_assign_source_10 = const_int_pos_1000000;
    UPDATE_STRING_DICT0( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_default_number, tmp_assign_source_10 );
    tmp_assign_source_11 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_default_repeat, tmp_assign_source_11 );
    // Frame without reuse.
    frame_e75408b108860e456e214734b8a4baef = MAKE_MODULE_FRAME( codeobj_e75408b108860e456e214734b8a4baef, module_timeit );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_e75408b108860e456e214734b8a4baef );
    assert( Py_REFCNT( frame_e75408b108860e456e214734b8a4baef ) == 2 );

    // Framed code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_time );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
    }

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_12 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_perf_counter );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_default_timer, tmp_assign_source_12 );
    tmp_assign_source_13 = LOOKUP_BUILTIN( const_str_plain_globals );
    assert( tmp_assign_source_13 != NULL );
    UPDATE_STRING_DICT0( moduledict_timeit, (Nuitka_StringObject *)const_str_plain__globals, tmp_assign_source_13 );
    tmp_assign_source_14 = const_str_digest_5036806efc2ac20bbb1c4dc5889530f2;
    UPDATE_STRING_DICT0( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_template, tmp_assign_source_14 );
    tmp_assign_source_15 = MAKE_FUNCTION_timeit$$$function_1_reindent(  );
    UPDATE_STRING_DICT1( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_reindent, tmp_assign_source_15 );
    tmp_assign_source_16 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_16;

    // Tried code:
    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_1;
    }
    tmp_cond_value_1 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dict_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_2 );
    tmp_key_name_2 = const_str_plain_metaclass;
    tmp_metaclass_name_1 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_metaclass_name_1 = (PyObject *)&PyType_Type;
    Py_INCREF( tmp_metaclass_name_1 );
    condexpr_end_1:;
    tmp_bases_name_1 = const_tuple_empty;
    tmp_assign_source_17 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    Py_DECREF( tmp_metaclass_name_1 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_17;

    tmp_key_name_3 = const_str_plain_metaclass;
    tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_1;
    }
    tmp_cond_value_2 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_dictdel_dict = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_1;
    }
    branch_no_1:;
    tmp_hasattr_source_1 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_1 );
    tmp_hasattr_attr_1 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_1;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_source_name_2 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___prepare__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_1;
    }
    tmp_args_name_1 = const_tuple_str_plain_Timer_tuple_empty_tuple;
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_e75408b108860e456e214734b8a4baef->m_frame.f_lineno = 84;
    tmp_assign_source_18 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_1;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_18 = PyDict_New();
    condexpr_end_2:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_18;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_Timer_84 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_plain_timeit;
    tmp_res = PyObject_SetItem( locals_Timer_84, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_3;
    }
    tmp_dictset_value = const_str_digest_a062bb54d2d5e709bfe0b2d62e381a8f;
    tmp_res = PyObject_SetItem( locals_Timer_84, const_str_plain___doc__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_3;
    }
    tmp_dictset_value = const_str_plain_Timer;
    tmp_res = PyObject_SetItem( locals_Timer_84, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_3;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_bd25ef9abedd92d185a453a4367d6185_2, codeobj_bd25ef9abedd92d185a453a4367d6185, module_timeit, sizeof(void *) );
    frame_bd25ef9abedd92d185a453a4367d6185_2 = cache_frame_bd25ef9abedd92d185a453a4367d6185_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bd25ef9abedd92d185a453a4367d6185_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bd25ef9abedd92d185a453a4367d6185_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_tuple_element_1 = const_str_plain_pass;
    tmp_defaults_1 = PyTuple_New( 4 );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_str_plain_pass;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyObject_GetItem( locals_Timer_84, const_str_plain_default_timer );

    if ( tmp_tuple_element_1 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_default_timer );

        if (unlikely( tmp_tuple_element_1 == NULL ))
        {
            tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_default_timer );
        }

        if ( tmp_tuple_element_1 == NULL )
        {
            Py_DECREF( tmp_defaults_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "default_timer" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 102;
            type_description_2 = "N";
            goto frame_exception_exit_2;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 3, tmp_tuple_element_1 );
    tmp_dictset_value = MAKE_FUNCTION_timeit$$$function_2___init__( tmp_defaults_1 );
    tmp_res = PyObject_SetItem( locals_Timer_84, const_str_plain___init__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_defaults_2 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_2 );
    tmp_dictset_value = MAKE_FUNCTION_timeit$$$function_3_print_exc( tmp_defaults_2 );
    tmp_res = PyObject_SetItem( locals_Timer_84, const_str_plain_print_exc, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_tuple_element_2 = PyObject_GetItem( locals_Timer_84, const_str_plain_default_number );

    if ( tmp_tuple_element_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_default_number );

        if (unlikely( tmp_tuple_element_2 == NULL ))
        {
            tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_default_number );
        }

        if ( tmp_tuple_element_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "default_number" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 164;
            type_description_2 = "N";
            goto frame_exception_exit_2;
        }

        }
    }

    tmp_defaults_3 = PyTuple_New( 1 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_3, 0, tmp_tuple_element_2 );
    tmp_dictset_value = MAKE_FUNCTION_timeit$$$function_4_timeit( tmp_defaults_3 );
    tmp_res = PyObject_SetItem( locals_Timer_84, const_str_plain_timeit, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_tuple_element_3 = PyObject_GetItem( locals_Timer_84, const_str_plain_default_repeat );

    if ( tmp_tuple_element_3 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_default_repeat );

        if (unlikely( tmp_tuple_element_3 == NULL ))
        {
            tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_default_repeat );
        }

        if ( tmp_tuple_element_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "default_repeat" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 184;
            type_description_2 = "N";
            goto frame_exception_exit_2;
        }

        }
    }

    tmp_defaults_4 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_4, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = PyObject_GetItem( locals_Timer_84, const_str_plain_default_number );

    if ( tmp_tuple_element_3 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_default_number );

        if (unlikely( tmp_tuple_element_3 == NULL ))
        {
            tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_default_number );
        }

        if ( tmp_tuple_element_3 == NULL )
        {
            Py_DECREF( tmp_defaults_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "default_number" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 184;
            type_description_2 = "N";
            goto frame_exception_exit_2;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_defaults_4, 1, tmp_tuple_element_3 );
    tmp_dictset_value = MAKE_FUNCTION_timeit$$$function_5_repeat( tmp_defaults_4 );
    tmp_res = PyObject_SetItem( locals_Timer_84, const_str_plain_repeat, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_defaults_5 = const_tuple_none_tuple;
    Py_INCREF( tmp_defaults_5 );
    tmp_dictset_value = MAKE_FUNCTION_timeit$$$function_6_autorange( tmp_defaults_5 );
    tmp_res = PyObject_SetItem( locals_Timer_84, const_str_plain_autorange, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd25ef9abedd92d185a453a4367d6185_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bd25ef9abedd92d185a453a4367d6185_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bd25ef9abedd92d185a453a4367d6185_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bd25ef9abedd92d185a453a4367d6185_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bd25ef9abedd92d185a453a4367d6185_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bd25ef9abedd92d185a453a4367d6185_2,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_bd25ef9abedd92d185a453a4367d6185_2 == cache_frame_bd25ef9abedd92d185a453a4367d6185_2 )
    {
        Py_DECREF( frame_bd25ef9abedd92d185a453a4367d6185_2 );
    }
    cache_frame_bd25ef9abedd92d185a453a4367d6185_2 = NULL;

    assertFrameObject( frame_bd25ef9abedd92d185a453a4367d6185_2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_1;

    frame_no_exception_1:;

    goto skip_nested_handling_1;
    nested_frame_exit_1:;

    goto try_except_handler_3;
    skip_nested_handling_1:;
    tmp_called_name_2 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_called_name_2 );
    tmp_tuple_element_4 = const_str_plain_Timer;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = const_tuple_empty;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_4 );
    tmp_tuple_element_4 = locals_Timer_84;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_4 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_e75408b108860e456e214734b8a4baef->m_frame.f_lineno = 84;
    tmp_assign_source_20 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;

        goto try_except_handler_3;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_20;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( timeit );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    Py_DECREF( locals_Timer_84 );
    locals_Timer_84 = NULL;
    goto try_return_handler_2;
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

    Py_DECREF( locals_Timer_84 );
    locals_Timer_84 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( timeit );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)outline_0_var___class__ );
    Py_DECREF( outline_0_var___class__ );
    outline_0_var___class__ = NULL;

    goto outline_result_1;
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

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( timeit );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 84;
    goto try_except_handler_1;
    outline_result_1:;
    tmp_assign_source_19 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_Timer, tmp_assign_source_19 );
    goto try_end_1;
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__prepared );
    Py_DECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    tmp_tuple_element_5 = const_str_plain_pass;
    tmp_defaults_6 = PyTuple_New( 5 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_defaults_6, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = const_str_plain_pass;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_defaults_6, 1, tmp_tuple_element_5 );
    tmp_tuple_element_5 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_default_timer );

    if (unlikely( tmp_tuple_element_5 == NULL ))
    {
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_default_timer );
    }

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_defaults_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "default_timer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 230;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_defaults_6, 2, tmp_tuple_element_5 );
    tmp_tuple_element_5 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_default_number );

    if (unlikely( tmp_tuple_element_5 == NULL ))
    {
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_default_number );
    }

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_defaults_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "default_number" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 231;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_defaults_6, 3, tmp_tuple_element_5 );
    tmp_tuple_element_5 = Py_None;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_defaults_6, 4, tmp_tuple_element_5 );
    tmp_assign_source_21 = MAKE_FUNCTION_timeit$$$function_7_timeit( tmp_defaults_6 );
    UPDATE_STRING_DICT1( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_timeit, tmp_assign_source_21 );
    tmp_tuple_element_6 = const_str_plain_pass;
    tmp_defaults_7 = PyTuple_New( 6 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_defaults_7, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = const_str_plain_pass;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_defaults_7, 1, tmp_tuple_element_6 );
    tmp_tuple_element_6 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_default_timer );

    if (unlikely( tmp_tuple_element_6 == NULL ))
    {
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_default_timer );
    }

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_defaults_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "default_timer" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 235;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_defaults_7, 2, tmp_tuple_element_6 );
    tmp_tuple_element_6 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_default_repeat );

    if (unlikely( tmp_tuple_element_6 == NULL ))
    {
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_default_repeat );
    }

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_defaults_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "default_repeat" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 236;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_defaults_7, 3, tmp_tuple_element_6 );
    tmp_tuple_element_6 = GET_STRING_DICT_VALUE( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_default_number );

    if (unlikely( tmp_tuple_element_6 == NULL ))
    {
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_default_number );
    }

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_defaults_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "default_number" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 236;

        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_defaults_7, 4, tmp_tuple_element_6 );
    tmp_tuple_element_6 = Py_None;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_defaults_7, 5, tmp_tuple_element_6 );
    tmp_assign_source_22 = MAKE_FUNCTION_timeit$$$function_8_repeat( tmp_defaults_7 );
    UPDATE_STRING_DICT1( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_repeat, tmp_assign_source_22 );

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e75408b108860e456e214734b8a4baef );
#endif
    popFrameStack();

    assertFrameObject( frame_e75408b108860e456e214734b8a4baef );

    goto frame_no_exception_2;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e75408b108860e456e214734b8a4baef );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e75408b108860e456e214734b8a4baef, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e75408b108860e456e214734b8a4baef->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e75408b108860e456e214734b8a4baef, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_2:;
    tmp_defaults_8 = const_tuple_none_tuple;
    tmp_kw_defaults_1 = PyDict_Copy( const_dict_ba37c27eeb8c2c504891a3501230d87d );
    Py_INCREF( tmp_defaults_8 );
    tmp_assign_source_23 = MAKE_FUNCTION_timeit$$$function_9_main( tmp_defaults_8, tmp_kw_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_timeit, (Nuitka_StringObject *)const_str_plain_main, tmp_assign_source_23 );

    return MOD_RETURN_VALUE( module_timeit );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
