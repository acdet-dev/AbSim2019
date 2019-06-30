/* Generated code for Python source for module 'stat'
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

/* The _module_stat is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_stat;
PyDictObject *moduledict_stat;

/* The module constants used, if any. */
static PyObject *const_str_plain_S_IWGRP;
static PyObject *const_str_plain_S_IXOTH;
static PyObject *const_str_plain_UF_COMPRESSED;
extern PyObject *const_dict_empty;
extern PyObject *const_int_pos_9;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_S_ISGID;
static PyObject *const_str_digest_924aab62c7d25de82915ac6aa9ad7372;
static PyObject *const_int_pos_2097152;
static PyObject *const_str_plain_ST_INO;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_str_plain_SF_ARCHIVED;
static PyObject *const_str_plain_ST_NLINK;
extern PyObject *const_int_pos_2048;
static PyObject *const_str_plain_FILE_ATTRIBUTE_INTEGRITY_STREAM;
extern PyObject *const_int_pos_56;
static PyObject *const_str_plain_S_IWUSR;
extern PyObject *const_str_plain_mode;
extern PyObject *const_int_pos_128;
extern PyObject *const_str_chr_42;
static PyObject *const_str_plain_perm;
extern PyObject *const_str_plain_bit;
extern PyObject *const_int_pos_6;
static PyObject *const_str_digest_d2ce3f98ec7fd6aa38a88031acf1531a;
static PyObject *const_str_plain_UF_OPAQUE;
extern PyObject *const_int_pos_512;
extern PyObject *const_int_pos_448;
static PyObject *const_int_pos_24576;
static PyObject *const_str_plain_S_IFDIR;
extern PyObject *const_int_pos_5;
extern PyObject *const_str_plain_stat;
static PyObject *const_str_plain_FILE_ATTRIBUTE_REPARSE_POINT;
extern PyObject *const_int_pos_1024;
static PyObject *const_str_plain_S_ENFMT;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain__stat;
static PyObject *const_str_plain_S_IREAD;
static PyObject *const_str_plain_S_IXUSR;
extern PyObject *const_tuple_str_plain_mode_tuple;
extern PyObject *const_int_pos_16;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_int_pos_32;
static PyObject *const_str_plain_SF_IMMUTABLE;
extern PyObject *const_str_plain_S_ISDIR;
static PyObject *const_str_plain_S_IWOTH;
extern PyObject *const_str_plain_s;
static PyObject *const_str_plain_FILE_ATTRIBUTE_SYSTEM;
static PyObject *const_str_plain_FILE_ATTRIBUTE_NO_SCRUB_DATA;
static PyObject *const_str_plain_FILE_ATTRIBUTE_HIDDEN;
static PyObject *const_str_plain_S_IRGRP;
static PyObject *const_str_plain_S_IWRITE;
static PyObject *const_str_plain_ST_MTIME;
static PyObject *const_str_plain_UF_IMMUTABLE;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_S_IMODE;
static PyObject *const_str_digest_b9e6b6de7d43b586ef3cbd4d6c761812;
extern PyObject *const_str_plain_w;
static PyObject *const_str_plain_FILE_ATTRIBUTE_OFFLINE;
static PyObject *const_str_plain_FILE_ATTRIBUTE_READONLY;
extern PyObject *const_str_chr_45;
extern PyObject *const_str_plain_p;
static PyObject *const_str_plain_S_IROTH;
extern PyObject *const_int_pos_131072;
extern PyObject *const_str_plain_S_IRWXG;
extern PyObject *const_int_pos_8;
static PyObject *const_str_plain_UF_HIDDEN;
static PyObject *const_str_plain_FILE_ATTRIBUTE_TEMPORARY;
extern PyObject *const_str_plain_l;
extern PyObject *const_tuple_str_chr_45_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_ST_UID;
static PyObject *const_int_pos_49152;
extern PyObject *const_str_plain_append;
extern PyObject *const_int_pos_4095;
static PyObject *const_str_plain_SF_APPEND;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_S_IFBLK;
static PyObject *const_str_plain_UF_NODUMP;
static PyObject *const_str_plain_FILE_ATTRIBUTE_DEVICE;
static PyObject *const_str_digest_74533aa6ab312c31fa47717036495fd6;
extern PyObject *const_str_plain_b;
static PyObject *const_str_plain_S_IFSOCK;
static PyObject *const_str_digest_9c530db538eb75c2ad233af390c31632;
static PyObject *const_str_plain_S_IFIFO;
static PyObject *const_str_plain_FILE_ATTRIBUTE_COMPRESSED;
extern PyObject *const_str_plain_char;
extern PyObject *const_str_plain_S_ISCHR;
extern PyObject *const_str_plain_filemode;
extern PyObject *const_int_pos_8192;
extern PyObject *const_int_pos_4096;
static PyObject *const_str_plain_FILE_ATTRIBUTE_SPARSE_FILE;
static PyObject *const_str_plain_S_IFLNK;
extern PyObject *const_int_0;
static PyObject *const_str_plain_S_IRWXU;
extern PyObject *const_int_pos_1048576;
extern PyObject *const_str_plain_S_IFREG;
static PyObject *const_str_plain_ST_MODE;
extern PyObject *const_str_plain_S_ISFIFO;
static PyObject *const_str_plain_FILE_ATTRIBUTE_ENCRYPTED;
extern PyObject *const_str_plain_S_IFCHR;
static PyObject *const_str_plain_UF_APPEND;
static PyObject *const_str_digest_7796df748c2730e89fbc88e35b8f6c81;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_c;
extern PyObject *const_int_pos_64;
static PyObject *const_str_plain_FILE_ATTRIBUTE_ARCHIVE;
static PyObject *const_str_digest_01b02879d1918d1e66ac4015cec6e093;
extern PyObject *const_int_pos_4;
extern PyObject *const_int_pos_32768;
static PyObject *const_str_digest_86145e11162143dca0cb6c77be1adb1f;
static PyObject *const_str_plain_FILE_ATTRIBUTE_VIRTUAL;
extern PyObject *const_int_pos_16384;
static PyObject *const_str_plain_SF_SNAPSHOT;
extern PyObject *const_int_pos_61440;
extern PyObject *const_str_plain_d;
static PyObject *const_str_plain_ST_DEV;
extern PyObject *const_str_plain___cached__;
static PyObject *const_str_plain_FILE_ATTRIBUTE_NOT_CONTENT_INDEXED;
static PyObject *const_str_plain_ST_SIZE;
extern PyObject *const_str_plain_S;
static PyObject *const_str_plain_S_ISUID;
static PyObject *const_str_digest_fa6ee53c021ba34f69403db887912e7b;
static PyObject *const_str_plain_FILE_ATTRIBUTE_DIRECTORY;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_S_ISREG;
extern PyObject *const_int_pos_256;
static PyObject *const_str_digest_3bd7ec6a3827de4204fd550e3d3d49df;
static PyObject *const_str_plain_S_IRUSR;
extern PyObject *const_int_pos_3;
static PyObject *const_str_plain_S_IEXEC;
static PyObject *const_str_plain_UF_NOUNLINK;
extern PyObject *const_str_plain_FILE_ATTRIBUTE_NORMAL;
extern PyObject *const_str_plain_S_IFMT;
extern PyObject *const_str_plain_T;
extern PyObject *const_int_pos_7;
static PyObject *const_str_plain_S_ISVTX;
static PyObject *const_str_plain__filemode_table;
static PyObject *const_str_plain_ST_GID;
extern PyObject *const_str_plain_S_ISLNK;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_2dbd333add01102f1cfe63ade93214a4;
static PyObject *const_int_pos_40960;
static PyObject *const_str_plain_SF_NOUNLINK;
extern PyObject *const_int_pos_262144;
extern PyObject *const_str_plain_table;
static PyObject *const_str_plain_ST_CTIME;
extern PyObject *const_str_plain_S_IRWXO;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_2fb4c2f6d416a690b5219620714fc1d8;
static PyObject *const_str_digest_3f3ee4dc3f1eb1a51673afcaea04bdd3;
extern PyObject *const_int_pos_65536;
static PyObject *const_tuple_d45ebd7faddb6e9ddb9d074fbde49308_tuple;
static PyObject *const_str_plain_ST_ATIME;
extern PyObject *const_str_plain_S_ISBLK;
static PyObject *const_str_plain_S_IXGRP;
static PyObject *const_str_plain_S_ISSOCK;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_S_IWGRP = UNSTREAM_STRING( &constant_bin[ 1939421 ], 7, 1 );
    const_str_plain_S_IXOTH = UNSTREAM_STRING( &constant_bin[ 1939428 ], 7, 1 );
    const_str_plain_UF_COMPRESSED = UNSTREAM_STRING( &constant_bin[ 1939435 ], 13, 1 );
    const_str_plain_S_ISGID = UNSTREAM_STRING( &constant_bin[ 1939448 ], 7, 1 );
    const_str_digest_924aab62c7d25de82915ac6aa9ad7372 = UNSTREAM_STRING( &constant_bin[ 1939455 ], 13, 0 );
    const_int_pos_2097152 = PyLong_FromUnsignedLong( 2097152ul );
    const_str_plain_ST_INO = UNSTREAM_STRING( &constant_bin[ 1939468 ], 6, 1 );
    const_str_plain_SF_ARCHIVED = UNSTREAM_STRING( &constant_bin[ 1939474 ], 11, 1 );
    const_str_plain_ST_NLINK = UNSTREAM_STRING( &constant_bin[ 1939485 ], 8, 1 );
    const_str_plain_FILE_ATTRIBUTE_INTEGRITY_STREAM = UNSTREAM_STRING( &constant_bin[ 1939493 ], 31, 1 );
    const_str_plain_S_IWUSR = UNSTREAM_STRING( &constant_bin[ 1939524 ], 7, 1 );
    const_str_plain_perm = UNSTREAM_STRING( &constant_bin[ 59254 ], 4, 1 );
    const_str_digest_d2ce3f98ec7fd6aa38a88031acf1531a = UNSTREAM_STRING( &constant_bin[ 1939531 ], 60, 0 );
    const_str_plain_UF_OPAQUE = UNSTREAM_STRING( &constant_bin[ 1939591 ], 9, 1 );
    const_int_pos_24576 = PyLong_FromUnsignedLong( 24576ul );
    const_str_plain_S_IFDIR = UNSTREAM_STRING( &constant_bin[ 1939600 ], 7, 1 );
    const_str_plain_FILE_ATTRIBUTE_REPARSE_POINT = UNSTREAM_STRING( &constant_bin[ 1939607 ], 28, 1 );
    const_str_plain_S_ENFMT = UNSTREAM_STRING( &constant_bin[ 1939635 ], 7, 1 );
    const_str_plain_S_IREAD = UNSTREAM_STRING( &constant_bin[ 1939642 ], 7, 1 );
    const_str_plain_S_IXUSR = UNSTREAM_STRING( &constant_bin[ 1939649 ], 7, 1 );
    const_str_plain_SF_IMMUTABLE = UNSTREAM_STRING( &constant_bin[ 1939656 ], 12, 1 );
    const_str_plain_S_IWOTH = UNSTREAM_STRING( &constant_bin[ 1939668 ], 7, 1 );
    const_str_plain_FILE_ATTRIBUTE_SYSTEM = UNSTREAM_STRING( &constant_bin[ 1939675 ], 21, 1 );
    const_str_plain_FILE_ATTRIBUTE_NO_SCRUB_DATA = UNSTREAM_STRING( &constant_bin[ 1939696 ], 28, 1 );
    const_str_plain_FILE_ATTRIBUTE_HIDDEN = UNSTREAM_STRING( &constant_bin[ 1939724 ], 21, 1 );
    const_str_plain_S_IRGRP = UNSTREAM_STRING( &constant_bin[ 1939745 ], 7, 1 );
    const_str_plain_S_IWRITE = UNSTREAM_STRING( &constant_bin[ 1939752 ], 8, 1 );
    const_str_plain_ST_MTIME = UNSTREAM_STRING( &constant_bin[ 1939760 ], 8, 1 );
    const_str_plain_UF_IMMUTABLE = UNSTREAM_STRING( &constant_bin[ 1939768 ], 12, 1 );
    const_str_digest_b9e6b6de7d43b586ef3cbd4d6c761812 = UNSTREAM_STRING( &constant_bin[ 1939780 ], 43, 0 );
    const_str_plain_FILE_ATTRIBUTE_OFFLINE = UNSTREAM_STRING( &constant_bin[ 1939823 ], 22, 1 );
    const_str_plain_FILE_ATTRIBUTE_READONLY = UNSTREAM_STRING( &constant_bin[ 1939845 ], 23, 1 );
    const_str_plain_S_IROTH = UNSTREAM_STRING( &constant_bin[ 1939868 ], 7, 1 );
    const_str_plain_UF_HIDDEN = UNSTREAM_STRING( &constant_bin[ 1939875 ], 9, 1 );
    const_str_plain_FILE_ATTRIBUTE_TEMPORARY = UNSTREAM_STRING( &constant_bin[ 1939884 ], 24, 1 );
    const_str_plain_ST_UID = UNSTREAM_STRING( &constant_bin[ 1939908 ], 6, 1 );
    const_int_pos_49152 = PyLong_FromUnsignedLong( 49152ul );
    const_str_plain_SF_APPEND = UNSTREAM_STRING( &constant_bin[ 1939914 ], 9, 1 );
    const_str_plain_UF_NODUMP = UNSTREAM_STRING( &constant_bin[ 1939923 ], 9, 1 );
    const_str_plain_FILE_ATTRIBUTE_DEVICE = UNSTREAM_STRING( &constant_bin[ 1939932 ], 21, 1 );
    const_str_digest_74533aa6ab312c31fa47717036495fd6 = UNSTREAM_STRING( &constant_bin[ 1939953 ], 37, 0 );
    const_str_plain_S_IFSOCK = UNSTREAM_STRING( &constant_bin[ 1939990 ], 8, 1 );
    const_str_digest_9c530db538eb75c2ad233af390c31632 = UNSTREAM_STRING( &constant_bin[ 1939998 ], 44, 0 );
    const_str_plain_S_IFIFO = UNSTREAM_STRING( &constant_bin[ 1940042 ], 7, 1 );
    const_str_plain_FILE_ATTRIBUTE_COMPRESSED = UNSTREAM_STRING( &constant_bin[ 1940049 ], 25, 1 );
    const_str_plain_FILE_ATTRIBUTE_SPARSE_FILE = UNSTREAM_STRING( &constant_bin[ 1940074 ], 26, 1 );
    const_str_plain_S_IFLNK = UNSTREAM_STRING( &constant_bin[ 1940100 ], 7, 1 );
    const_str_plain_S_IRWXU = UNSTREAM_STRING( &constant_bin[ 1940107 ], 7, 1 );
    const_str_plain_ST_MODE = UNSTREAM_STRING( &constant_bin[ 1940114 ], 7, 1 );
    const_str_plain_FILE_ATTRIBUTE_ENCRYPTED = UNSTREAM_STRING( &constant_bin[ 1940121 ], 24, 1 );
    const_str_plain_UF_APPEND = UNSTREAM_STRING( &constant_bin[ 1940145 ], 9, 1 );
    const_str_digest_7796df748c2730e89fbc88e35b8f6c81 = UNSTREAM_STRING( &constant_bin[ 1940154 ], 48, 0 );
    const_str_plain_FILE_ATTRIBUTE_ARCHIVE = UNSTREAM_STRING( &constant_bin[ 1940202 ], 22, 1 );
    const_str_digest_01b02879d1918d1e66ac4015cec6e093 = UNSTREAM_STRING( &constant_bin[ 1940224 ], 111, 0 );
    const_str_digest_86145e11162143dca0cb6c77be1adb1f = UNSTREAM_STRING( &constant_bin[ 1940335 ], 59, 0 );
    const_str_plain_FILE_ATTRIBUTE_VIRTUAL = UNSTREAM_STRING( &constant_bin[ 1940394 ], 22, 1 );
    const_str_plain_SF_SNAPSHOT = UNSTREAM_STRING( &constant_bin[ 1940416 ], 11, 1 );
    const_str_plain_ST_DEV = UNSTREAM_STRING( &constant_bin[ 1940427 ], 6, 1 );
    const_str_plain_FILE_ATTRIBUTE_NOT_CONTENT_INDEXED = UNSTREAM_STRING( &constant_bin[ 1940433 ], 34, 1 );
    const_str_plain_ST_SIZE = UNSTREAM_STRING( &constant_bin[ 1940467 ], 7, 1 );
    const_str_plain_S_ISUID = UNSTREAM_STRING( &constant_bin[ 1940474 ], 7, 1 );
    const_str_digest_fa6ee53c021ba34f69403db887912e7b = UNSTREAM_STRING( &constant_bin[ 1940481 ], 76, 0 );
    const_str_plain_FILE_ATTRIBUTE_DIRECTORY = UNSTREAM_STRING( &constant_bin[ 1940557 ], 24, 1 );
    const_str_digest_3bd7ec6a3827de4204fd550e3d3d49df = UNSTREAM_STRING( &constant_bin[ 1940581 ], 56, 0 );
    const_str_plain_S_IRUSR = UNSTREAM_STRING( &constant_bin[ 1940637 ], 7, 1 );
    const_str_plain_S_IEXEC = UNSTREAM_STRING( &constant_bin[ 1940644 ], 7, 1 );
    const_str_plain_UF_NOUNLINK = UNSTREAM_STRING( &constant_bin[ 1940651 ], 11, 1 );
    const_str_plain_S_ISVTX = UNSTREAM_STRING( &constant_bin[ 1940662 ], 7, 1 );
    const_str_plain__filemode_table = UNSTREAM_STRING( &constant_bin[ 1940669 ], 15, 1 );
    const_str_plain_ST_GID = UNSTREAM_STRING( &constant_bin[ 1940684 ], 6, 1 );
    const_str_digest_2dbd333add01102f1cfe63ade93214a4 = UNSTREAM_STRING( &constant_bin[ 1940690 ], 39, 0 );
    const_int_pos_40960 = PyLong_FromUnsignedLong( 40960ul );
    const_str_plain_SF_NOUNLINK = UNSTREAM_STRING( &constant_bin[ 1940729 ], 11, 1 );
    const_str_plain_ST_CTIME = UNSTREAM_STRING( &constant_bin[ 1940740 ], 8, 1 );
    const_str_digest_2fb4c2f6d416a690b5219620714fc1d8 = UNSTREAM_STRING( &constant_bin[ 1940748 ], 40, 0 );
    const_str_digest_3f3ee4dc3f1eb1a51673afcaea04bdd3 = UNSTREAM_STRING( &constant_bin[ 1940788 ], 77, 0 );
    const_tuple_d45ebd7faddb6e9ddb9d074fbde49308_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_d45ebd7faddb6e9ddb9d074fbde49308_tuple, 0, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    PyTuple_SET_ITEM( const_tuple_d45ebd7faddb6e9ddb9d074fbde49308_tuple, 1, const_str_plain_perm ); Py_INCREF( const_str_plain_perm );
    PyTuple_SET_ITEM( const_tuple_d45ebd7faddb6e9ddb9d074fbde49308_tuple, 2, const_str_plain_table ); Py_INCREF( const_str_plain_table );
    PyTuple_SET_ITEM( const_tuple_d45ebd7faddb6e9ddb9d074fbde49308_tuple, 3, const_str_plain_bit ); Py_INCREF( const_str_plain_bit );
    PyTuple_SET_ITEM( const_tuple_d45ebd7faddb6e9ddb9d074fbde49308_tuple, 4, const_str_plain_char ); Py_INCREF( const_str_plain_char );
    const_str_plain_ST_ATIME = UNSTREAM_STRING( &constant_bin[ 1940865 ], 8, 1 );
    const_str_plain_S_IXGRP = UNSTREAM_STRING( &constant_bin[ 1940873 ], 7, 1 );
    const_str_plain_S_ISSOCK = UNSTREAM_STRING( &constant_bin[ 1940880 ], 8, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_stat( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_6dca8cf1b254b754a46dc2bb6e05e2f7;
static PyCodeObject *codeobj_2a7a88722b608f302c3179a2ec1d3b73;
static PyCodeObject *codeobj_fe7ccd9746e631ef1b32152c19828bd4;
static PyCodeObject *codeobj_de01cd9662bbbb85f28588b3cc27ec5a;
static PyCodeObject *codeobj_402dae7901da2c26a263a08220675bf1;
static PyCodeObject *codeobj_600ad252ae9e6cc3e3dc5d7c31d945aa;
static PyCodeObject *codeobj_d9ead1571d02a93c0d579d58906ecdb7;
static PyCodeObject *codeobj_2493be4d818d48221bb5469148f0be00;
static PyCodeObject *codeobj_5a62e9f22a9f33836b7fe38f2965551b;
static PyCodeObject *codeobj_8badc45eddc676d76399b46a01135fa9;
static PyCodeObject *codeobj_20cf7c7d475a17a816687f7438a8b053;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_2dbd333add01102f1cfe63ade93214a4;
    codeobj_6dca8cf1b254b754a46dc2bb6e05e2f7 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_924aab62c7d25de82915ac6aa9ad7372, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_2a7a88722b608f302c3179a2ec1d3b73 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_S_IFMT, 27, const_tuple_str_plain_mode_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fe7ccd9746e631ef1b32152c19828bd4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_S_IMODE, 21, const_tuple_str_plain_mode_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_de01cd9662bbbb85f28588b3cc27ec5a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_S_ISBLK, 54, const_tuple_str_plain_mode_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_402dae7901da2c26a263a08220675bf1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_S_ISCHR, 50, const_tuple_str_plain_mode_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_600ad252ae9e6cc3e3dc5d7c31d945aa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_S_ISDIR, 46, const_tuple_str_plain_mode_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_d9ead1571d02a93c0d579d58906ecdb7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_S_ISFIFO, 62, const_tuple_str_plain_mode_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2493be4d818d48221bb5469148f0be00 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_S_ISLNK, 66, const_tuple_str_plain_mode_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5a62e9f22a9f33836b7fe38f2965551b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_S_ISREG, 58, const_tuple_str_plain_mode_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8badc45eddc676d76399b46a01135fa9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_S_ISSOCK, 70, const_tuple_str_plain_mode_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_20cf7c7d475a17a816687f7438a8b053 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_filemode, 139, const_tuple_d45ebd7faddb6e9ddb9d074fbde49308_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_stat$$$function_10_filemode(  );


static PyObject *MAKE_FUNCTION_stat$$$function_1_S_IMODE(  );


static PyObject *MAKE_FUNCTION_stat$$$function_2_S_IFMT(  );


static PyObject *MAKE_FUNCTION_stat$$$function_3_S_ISDIR(  );


static PyObject *MAKE_FUNCTION_stat$$$function_4_S_ISCHR(  );


static PyObject *MAKE_FUNCTION_stat$$$function_5_S_ISBLK(  );


static PyObject *MAKE_FUNCTION_stat$$$function_6_S_ISREG(  );


static PyObject *MAKE_FUNCTION_stat$$$function_7_S_ISFIFO(  );


static PyObject *MAKE_FUNCTION_stat$$$function_8_S_ISLNK(  );


static PyObject *MAKE_FUNCTION_stat$$$function_9_S_ISSOCK(  );


// The module function definitions.
static PyObject *impl_stat$$$function_1_S_IMODE( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mode = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    static struct Nuitka_FrameObject *cache_frame_fe7ccd9746e631ef1b32152c19828bd4 = NULL;

    struct Nuitka_FrameObject *frame_fe7ccd9746e631ef1b32152c19828bd4;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fe7ccd9746e631ef1b32152c19828bd4, codeobj_fe7ccd9746e631ef1b32152c19828bd4, module_stat, sizeof(void *) );
    frame_fe7ccd9746e631ef1b32152c19828bd4 = cache_frame_fe7ccd9746e631ef1b32152c19828bd4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fe7ccd9746e631ef1b32152c19828bd4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fe7ccd9746e631ef1b32152c19828bd4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_left_name_1 = par_mode;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = const_int_pos_4095;
    tmp_return_value = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fe7ccd9746e631ef1b32152c19828bd4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fe7ccd9746e631ef1b32152c19828bd4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fe7ccd9746e631ef1b32152c19828bd4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fe7ccd9746e631ef1b32152c19828bd4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fe7ccd9746e631ef1b32152c19828bd4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fe7ccd9746e631ef1b32152c19828bd4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fe7ccd9746e631ef1b32152c19828bd4,
        type_description_1,
        par_mode
    );


    // Release cached frame.
    if ( frame_fe7ccd9746e631ef1b32152c19828bd4 == cache_frame_fe7ccd9746e631ef1b32152c19828bd4 )
    {
        Py_DECREF( frame_fe7ccd9746e631ef1b32152c19828bd4 );
    }
    cache_frame_fe7ccd9746e631ef1b32152c19828bd4 = NULL;

    assertFrameObject( frame_fe7ccd9746e631ef1b32152c19828bd4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( stat$$$function_1_S_IMODE );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_mode );
    par_mode = NULL;

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

    Py_XDECREF( par_mode );
    par_mode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( stat$$$function_1_S_IMODE );
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


static PyObject *impl_stat$$$function_2_S_IFMT( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mode = python_pars[ 0 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    static struct Nuitka_FrameObject *cache_frame_2a7a88722b608f302c3179a2ec1d3b73 = NULL;

    struct Nuitka_FrameObject *frame_2a7a88722b608f302c3179a2ec1d3b73;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2a7a88722b608f302c3179a2ec1d3b73, codeobj_2a7a88722b608f302c3179a2ec1d3b73, module_stat, sizeof(void *) );
    frame_2a7a88722b608f302c3179a2ec1d3b73 = cache_frame_2a7a88722b608f302c3179a2ec1d3b73;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2a7a88722b608f302c3179a2ec1d3b73 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2a7a88722b608f302c3179a2ec1d3b73 ) == 2 ); // Frame stack

    // Framed code:
    tmp_left_name_1 = par_mode;

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = const_int_pos_61440;
    tmp_return_value = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a7a88722b608f302c3179a2ec1d3b73 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a7a88722b608f302c3179a2ec1d3b73 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2a7a88722b608f302c3179a2ec1d3b73 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2a7a88722b608f302c3179a2ec1d3b73, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2a7a88722b608f302c3179a2ec1d3b73->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2a7a88722b608f302c3179a2ec1d3b73, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2a7a88722b608f302c3179a2ec1d3b73,
        type_description_1,
        par_mode
    );


    // Release cached frame.
    if ( frame_2a7a88722b608f302c3179a2ec1d3b73 == cache_frame_2a7a88722b608f302c3179a2ec1d3b73 )
    {
        Py_DECREF( frame_2a7a88722b608f302c3179a2ec1d3b73 );
    }
    cache_frame_2a7a88722b608f302c3179a2ec1d3b73 = NULL;

    assertFrameObject( frame_2a7a88722b608f302c3179a2ec1d3b73 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( stat$$$function_2_S_IFMT );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_mode );
    par_mode = NULL;

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

    Py_XDECREF( par_mode );
    par_mode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( stat$$$function_2_S_IFMT );
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


static PyObject *impl_stat$$$function_3_S_ISDIR( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mode = python_pars[ 0 ];
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_600ad252ae9e6cc3e3dc5d7c31d945aa = NULL;

    struct Nuitka_FrameObject *frame_600ad252ae9e6cc3e3dc5d7c31d945aa;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_600ad252ae9e6cc3e3dc5d7c31d945aa, codeobj_600ad252ae9e6cc3e3dc5d7c31d945aa, module_stat, sizeof(void *) );
    frame_600ad252ae9e6cc3e3dc5d7c31d945aa = cache_frame_600ad252ae9e6cc3e3dc5d7c31d945aa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_600ad252ae9e6cc3e3dc5d7c31d945aa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_600ad252ae9e6cc3e3dc5d7c31d945aa ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IFMT );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IFMT );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S_IFMT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_mode;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_600ad252ae9e6cc3e3dc5d7c31d945aa->m_frame.f_lineno = 48;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IFDIR );

    if (unlikely( tmp_compexpr_right_1 == NULL ))
    {
        tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IFDIR );
    }

    if ( tmp_compexpr_right_1 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S_IFDIR" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 48;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_return_value = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_600ad252ae9e6cc3e3dc5d7c31d945aa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_600ad252ae9e6cc3e3dc5d7c31d945aa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_600ad252ae9e6cc3e3dc5d7c31d945aa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_600ad252ae9e6cc3e3dc5d7c31d945aa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_600ad252ae9e6cc3e3dc5d7c31d945aa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_600ad252ae9e6cc3e3dc5d7c31d945aa, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_600ad252ae9e6cc3e3dc5d7c31d945aa,
        type_description_1,
        par_mode
    );


    // Release cached frame.
    if ( frame_600ad252ae9e6cc3e3dc5d7c31d945aa == cache_frame_600ad252ae9e6cc3e3dc5d7c31d945aa )
    {
        Py_DECREF( frame_600ad252ae9e6cc3e3dc5d7c31d945aa );
    }
    cache_frame_600ad252ae9e6cc3e3dc5d7c31d945aa = NULL;

    assertFrameObject( frame_600ad252ae9e6cc3e3dc5d7c31d945aa );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( stat$$$function_3_S_ISDIR );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_mode );
    par_mode = NULL;

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

    Py_XDECREF( par_mode );
    par_mode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( stat$$$function_3_S_ISDIR );
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


static PyObject *impl_stat$$$function_4_S_ISCHR( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mode = python_pars[ 0 ];
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_402dae7901da2c26a263a08220675bf1 = NULL;

    struct Nuitka_FrameObject *frame_402dae7901da2c26a263a08220675bf1;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_402dae7901da2c26a263a08220675bf1, codeobj_402dae7901da2c26a263a08220675bf1, module_stat, sizeof(void *) );
    frame_402dae7901da2c26a263a08220675bf1 = cache_frame_402dae7901da2c26a263a08220675bf1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_402dae7901da2c26a263a08220675bf1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_402dae7901da2c26a263a08220675bf1 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IFMT );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IFMT );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S_IFMT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_mode;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_402dae7901da2c26a263a08220675bf1->m_frame.f_lineno = 52;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IFCHR );

    if (unlikely( tmp_compexpr_right_1 == NULL ))
    {
        tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IFCHR );
    }

    if ( tmp_compexpr_right_1 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S_IFCHR" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_return_value = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_402dae7901da2c26a263a08220675bf1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_402dae7901da2c26a263a08220675bf1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_402dae7901da2c26a263a08220675bf1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_402dae7901da2c26a263a08220675bf1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_402dae7901da2c26a263a08220675bf1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_402dae7901da2c26a263a08220675bf1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_402dae7901da2c26a263a08220675bf1,
        type_description_1,
        par_mode
    );


    // Release cached frame.
    if ( frame_402dae7901da2c26a263a08220675bf1 == cache_frame_402dae7901da2c26a263a08220675bf1 )
    {
        Py_DECREF( frame_402dae7901da2c26a263a08220675bf1 );
    }
    cache_frame_402dae7901da2c26a263a08220675bf1 = NULL;

    assertFrameObject( frame_402dae7901da2c26a263a08220675bf1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( stat$$$function_4_S_ISCHR );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_mode );
    par_mode = NULL;

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

    Py_XDECREF( par_mode );
    par_mode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( stat$$$function_4_S_ISCHR );
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


static PyObject *impl_stat$$$function_5_S_ISBLK( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mode = python_pars[ 0 ];
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_de01cd9662bbbb85f28588b3cc27ec5a = NULL;

    struct Nuitka_FrameObject *frame_de01cd9662bbbb85f28588b3cc27ec5a;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_de01cd9662bbbb85f28588b3cc27ec5a, codeobj_de01cd9662bbbb85f28588b3cc27ec5a, module_stat, sizeof(void *) );
    frame_de01cd9662bbbb85f28588b3cc27ec5a = cache_frame_de01cd9662bbbb85f28588b3cc27ec5a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_de01cd9662bbbb85f28588b3cc27ec5a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_de01cd9662bbbb85f28588b3cc27ec5a ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IFMT );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IFMT );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S_IFMT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_mode;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_de01cd9662bbbb85f28588b3cc27ec5a->m_frame.f_lineno = 56;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IFBLK );

    if (unlikely( tmp_compexpr_right_1 == NULL ))
    {
        tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IFBLK );
    }

    if ( tmp_compexpr_right_1 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S_IFBLK" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_return_value = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_de01cd9662bbbb85f28588b3cc27ec5a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_de01cd9662bbbb85f28588b3cc27ec5a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_de01cd9662bbbb85f28588b3cc27ec5a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_de01cd9662bbbb85f28588b3cc27ec5a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_de01cd9662bbbb85f28588b3cc27ec5a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_de01cd9662bbbb85f28588b3cc27ec5a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_de01cd9662bbbb85f28588b3cc27ec5a,
        type_description_1,
        par_mode
    );


    // Release cached frame.
    if ( frame_de01cd9662bbbb85f28588b3cc27ec5a == cache_frame_de01cd9662bbbb85f28588b3cc27ec5a )
    {
        Py_DECREF( frame_de01cd9662bbbb85f28588b3cc27ec5a );
    }
    cache_frame_de01cd9662bbbb85f28588b3cc27ec5a = NULL;

    assertFrameObject( frame_de01cd9662bbbb85f28588b3cc27ec5a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( stat$$$function_5_S_ISBLK );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_mode );
    par_mode = NULL;

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

    Py_XDECREF( par_mode );
    par_mode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( stat$$$function_5_S_ISBLK );
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


static PyObject *impl_stat$$$function_6_S_ISREG( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mode = python_pars[ 0 ];
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_5a62e9f22a9f33836b7fe38f2965551b = NULL;

    struct Nuitka_FrameObject *frame_5a62e9f22a9f33836b7fe38f2965551b;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5a62e9f22a9f33836b7fe38f2965551b, codeobj_5a62e9f22a9f33836b7fe38f2965551b, module_stat, sizeof(void *) );
    frame_5a62e9f22a9f33836b7fe38f2965551b = cache_frame_5a62e9f22a9f33836b7fe38f2965551b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5a62e9f22a9f33836b7fe38f2965551b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5a62e9f22a9f33836b7fe38f2965551b ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IFMT );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IFMT );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S_IFMT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_mode;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_5a62e9f22a9f33836b7fe38f2965551b->m_frame.f_lineno = 60;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IFREG );

    if (unlikely( tmp_compexpr_right_1 == NULL ))
    {
        tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IFREG );
    }

    if ( tmp_compexpr_right_1 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S_IFREG" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_return_value = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a62e9f22a9f33836b7fe38f2965551b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a62e9f22a9f33836b7fe38f2965551b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a62e9f22a9f33836b7fe38f2965551b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5a62e9f22a9f33836b7fe38f2965551b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5a62e9f22a9f33836b7fe38f2965551b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5a62e9f22a9f33836b7fe38f2965551b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5a62e9f22a9f33836b7fe38f2965551b,
        type_description_1,
        par_mode
    );


    // Release cached frame.
    if ( frame_5a62e9f22a9f33836b7fe38f2965551b == cache_frame_5a62e9f22a9f33836b7fe38f2965551b )
    {
        Py_DECREF( frame_5a62e9f22a9f33836b7fe38f2965551b );
    }
    cache_frame_5a62e9f22a9f33836b7fe38f2965551b = NULL;

    assertFrameObject( frame_5a62e9f22a9f33836b7fe38f2965551b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( stat$$$function_6_S_ISREG );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_mode );
    par_mode = NULL;

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

    Py_XDECREF( par_mode );
    par_mode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( stat$$$function_6_S_ISREG );
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


static PyObject *impl_stat$$$function_7_S_ISFIFO( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mode = python_pars[ 0 ];
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_d9ead1571d02a93c0d579d58906ecdb7 = NULL;

    struct Nuitka_FrameObject *frame_d9ead1571d02a93c0d579d58906ecdb7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d9ead1571d02a93c0d579d58906ecdb7, codeobj_d9ead1571d02a93c0d579d58906ecdb7, module_stat, sizeof(void *) );
    frame_d9ead1571d02a93c0d579d58906ecdb7 = cache_frame_d9ead1571d02a93c0d579d58906ecdb7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d9ead1571d02a93c0d579d58906ecdb7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d9ead1571d02a93c0d579d58906ecdb7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IFMT );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IFMT );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S_IFMT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_mode;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_d9ead1571d02a93c0d579d58906ecdb7->m_frame.f_lineno = 64;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IFIFO );

    if (unlikely( tmp_compexpr_right_1 == NULL ))
    {
        tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IFIFO );
    }

    if ( tmp_compexpr_right_1 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S_IFIFO" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 64;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_return_value = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9ead1571d02a93c0d579d58906ecdb7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9ead1571d02a93c0d579d58906ecdb7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9ead1571d02a93c0d579d58906ecdb7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d9ead1571d02a93c0d579d58906ecdb7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d9ead1571d02a93c0d579d58906ecdb7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d9ead1571d02a93c0d579d58906ecdb7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d9ead1571d02a93c0d579d58906ecdb7,
        type_description_1,
        par_mode
    );


    // Release cached frame.
    if ( frame_d9ead1571d02a93c0d579d58906ecdb7 == cache_frame_d9ead1571d02a93c0d579d58906ecdb7 )
    {
        Py_DECREF( frame_d9ead1571d02a93c0d579d58906ecdb7 );
    }
    cache_frame_d9ead1571d02a93c0d579d58906ecdb7 = NULL;

    assertFrameObject( frame_d9ead1571d02a93c0d579d58906ecdb7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( stat$$$function_7_S_ISFIFO );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_mode );
    par_mode = NULL;

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

    Py_XDECREF( par_mode );
    par_mode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( stat$$$function_7_S_ISFIFO );
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


static PyObject *impl_stat$$$function_8_S_ISLNK( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mode = python_pars[ 0 ];
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_2493be4d818d48221bb5469148f0be00 = NULL;

    struct Nuitka_FrameObject *frame_2493be4d818d48221bb5469148f0be00;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_2493be4d818d48221bb5469148f0be00, codeobj_2493be4d818d48221bb5469148f0be00, module_stat, sizeof(void *) );
    frame_2493be4d818d48221bb5469148f0be00 = cache_frame_2493be4d818d48221bb5469148f0be00;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2493be4d818d48221bb5469148f0be00 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2493be4d818d48221bb5469148f0be00 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IFMT );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IFMT );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S_IFMT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_mode;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_2493be4d818d48221bb5469148f0be00->m_frame.f_lineno = 68;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IFLNK );

    if (unlikely( tmp_compexpr_right_1 == NULL ))
    {
        tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IFLNK );
    }

    if ( tmp_compexpr_right_1 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S_IFLNK" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 68;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_return_value = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2493be4d818d48221bb5469148f0be00 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_2493be4d818d48221bb5469148f0be00 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2493be4d818d48221bb5469148f0be00 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2493be4d818d48221bb5469148f0be00, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2493be4d818d48221bb5469148f0be00->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2493be4d818d48221bb5469148f0be00, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2493be4d818d48221bb5469148f0be00,
        type_description_1,
        par_mode
    );


    // Release cached frame.
    if ( frame_2493be4d818d48221bb5469148f0be00 == cache_frame_2493be4d818d48221bb5469148f0be00 )
    {
        Py_DECREF( frame_2493be4d818d48221bb5469148f0be00 );
    }
    cache_frame_2493be4d818d48221bb5469148f0be00 = NULL;

    assertFrameObject( frame_2493be4d818d48221bb5469148f0be00 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( stat$$$function_8_S_ISLNK );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_mode );
    par_mode = NULL;

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

    Py_XDECREF( par_mode );
    par_mode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( stat$$$function_8_S_ISLNK );
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


static PyObject *impl_stat$$$function_9_S_ISSOCK( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mode = python_pars[ 0 ];
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_return_value;
    static struct Nuitka_FrameObject *cache_frame_8badc45eddc676d76399b46a01135fa9 = NULL;

    struct Nuitka_FrameObject *frame_8badc45eddc676d76399b46a01135fa9;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8badc45eddc676d76399b46a01135fa9, codeobj_8badc45eddc676d76399b46a01135fa9, module_stat, sizeof(void *) );
    frame_8badc45eddc676d76399b46a01135fa9 = cache_frame_8badc45eddc676d76399b46a01135fa9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8badc45eddc676d76399b46a01135fa9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8badc45eddc676d76399b46a01135fa9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IFMT );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IFMT );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S_IFMT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_mode;

    CHECK_OBJECT( tmp_args_element_name_1 );
    frame_8badc45eddc676d76399b46a01135fa9->m_frame.f_lineno = 72;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IFSOCK );

    if (unlikely( tmp_compexpr_right_1 == NULL ))
    {
        tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IFSOCK );
    }

    if ( tmp_compexpr_right_1 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S_IFSOCK" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 72;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_return_value = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8badc45eddc676d76399b46a01135fa9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8badc45eddc676d76399b46a01135fa9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8badc45eddc676d76399b46a01135fa9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8badc45eddc676d76399b46a01135fa9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8badc45eddc676d76399b46a01135fa9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8badc45eddc676d76399b46a01135fa9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8badc45eddc676d76399b46a01135fa9,
        type_description_1,
        par_mode
    );


    // Release cached frame.
    if ( frame_8badc45eddc676d76399b46a01135fa9 == cache_frame_8badc45eddc676d76399b46a01135fa9 )
    {
        Py_DECREF( frame_8badc45eddc676d76399b46a01135fa9 );
    }
    cache_frame_8badc45eddc676d76399b46a01135fa9 = NULL;

    assertFrameObject( frame_8badc45eddc676d76399b46a01135fa9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( stat$$$function_9_S_ISSOCK );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_mode );
    par_mode = NULL;

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

    Py_XDECREF( par_mode );
    par_mode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( stat$$$function_9_S_ISSOCK );
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


static PyObject *impl_stat$$$function_10_filemode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mode = python_pars[ 0 ];
    PyObject *var_perm = NULL;
    PyObject *var_table = NULL;
    PyObject *var_bit = NULL;
    PyObject *var_char = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__break_indicator = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
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
    PyObject *tmp_called_instance_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    PyObject *tmp_value_name_2;
    static struct Nuitka_FrameObject *cache_frame_20cf7c7d475a17a816687f7438a8b053 = NULL;

    struct Nuitka_FrameObject *frame_20cf7c7d475a17a816687f7438a8b053;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_perm == NULL );
    var_perm = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_20cf7c7d475a17a816687f7438a8b053, codeobj_20cf7c7d475a17a816687f7438a8b053, module_stat, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_20cf7c7d475a17a816687f7438a8b053 = cache_frame_20cf7c7d475a17a816687f7438a8b053;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_20cf7c7d475a17a816687f7438a8b053 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_20cf7c7d475a17a816687f7438a8b053 ) == 2 ); // Frame stack

    // Framed code:
    tmp_iter_arg_1 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain__filemode_table );

    if (unlikely( tmp_iter_arg_1 == NULL ))
    {
        tmp_iter_arg_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__filemode_table );
    }

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_filemode_table" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 142;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "ooooo";
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


        type_description_1 = "ooooo";
        exception_lineno = 142;
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

        exception_lineno = 142;
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
    tmp_assign_source_4 = tmp_for_loop_1__iter_value;

    CHECK_OBJECT( tmp_assign_source_4 );
    {
        PyObject *old = var_table;
        var_table = tmp_assign_source_4;
        Py_INCREF( var_table );
        Py_XDECREF( old );
    }

    tmp_assign_source_5 = Py_False;
    {
        PyObject *old = tmp_for_loop_2__break_indicator;
        tmp_for_loop_2__break_indicator = tmp_assign_source_5;
        Py_INCREF( tmp_for_loop_2__break_indicator );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = var_table;

    CHECK_OBJECT( tmp_iter_arg_2 );
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_2:;
    // Tried code:
    tmp_value_name_2 = tmp_for_loop_2__for_iterator;

    CHECK_OBJECT( tmp_value_name_2 );
    tmp_assign_source_7 = ITERATOR_NEXT( tmp_value_name_2 );
    if ( tmp_assign_source_7 == NULL )
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
        exception_lineno = 143;
        goto try_except_handler_6;
    }
    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    tmp_compare_left_2 = exception_keeper_type_2;
    tmp_compare_right_2 = PyExc_StopIteration;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_2 );
        Py_XDECREF( exception_keeper_value_2 );
        Py_XDECREF( exception_keeper_tb_2 );

        exception_lineno = 143;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_8 = Py_True;
    {
        PyObject *old = tmp_for_loop_2__break_indicator;
        assert( old != NULL );
        tmp_for_loop_2__break_indicator = tmp_assign_source_8;
        Py_INCREF( tmp_for_loop_2__break_indicator );
        Py_DECREF( old );
    }

    Py_DECREF( exception_keeper_type_2 );
    Py_XDECREF( exception_keeper_value_2 );
    Py_XDECREF( exception_keeper_tb_2 );
    goto loop_end_2;
    goto branch_end_2;
    branch_no_2:;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_5;
    branch_end_2:;
    // End of try:
    try_end_2:;
    // Tried code:
    tmp_iter_arg_3 = tmp_for_loop_2__iter_value;

    CHECK_OBJECT( tmp_iter_arg_3 );
    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "ooooo";
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_1 );
    tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_1, 0, 2 );
    if ( tmp_assign_source_10 == NULL )
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
        exception_lineno = 143;
        goto try_except_handler_8;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    CHECK_OBJECT( tmp_unpack_2 );
    tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_2, 1, 2 );
    if ( tmp_assign_source_11 == NULL )
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
        exception_lineno = 143;
        goto try_except_handler_8;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;
        Py_XDECREF( old );
    }

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

                type_description_1 = "ooooo";
                exception_lineno = 143;
                goto try_except_handler_8;
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

        type_description_1 = "ooooo";
        exception_lineno = 143;
        goto try_except_handler_8;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_7;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;

    CHECK_OBJECT( tmp_assign_source_12 );
    {
        PyObject *old = var_bit;
        var_bit = tmp_assign_source_12;
        Py_INCREF( var_bit );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assign_source_13 = tmp_tuple_unpack_1__element_2;

    CHECK_OBJECT( tmp_assign_source_13 );
    {
        PyObject *old = var_char;
        var_char = tmp_assign_source_13;
        Py_INCREF( var_char );
        Py_XDECREF( old );
    }

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_left_name_1 = par_mode;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "mode" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 144;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_right_name_1 = var_bit;

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 144;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_compare_left_3 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    tmp_compare_right_3 = var_bit;

    if ( tmp_compare_right_3 == NULL )
    {
        Py_DECREF( tmp_compare_left_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "bit" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 144;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_1 = var_perm;

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "perm" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 145;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    tmp_args_element_name_1 = var_char;

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "char" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 145;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }

    frame_20cf7c7d475a17a816687f7438a8b053->m_frame.f_lineno = 145;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_unused );
    goto loop_end_2;
    branch_no_3:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_5;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_4;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_compare_left_4 = tmp_for_loop_2__break_indicator;

    CHECK_OBJECT( tmp_compare_left_4 );
    tmp_compare_right_4 = Py_True;
    tmp_is_1 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if ( tmp_is_1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_instance_1 = var_perm;

    if ( tmp_called_instance_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "perm" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 148;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }

    frame_20cf7c7d475a17a816687f7438a8b053->m_frame.f_lineno = 148;
    tmp_unused = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_append, &PyTuple_GET_ITEM( const_tuple_str_chr_45_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    branch_no_4:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_for_loop_2__break_indicator );
    tmp_for_loop_2__break_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_2;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__break_indicator );
    Py_DECREF( tmp_for_loop_2__break_indicator );
    tmp_for_loop_2__break_indicator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_source_name_2 = const_str_empty;
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_join );
    assert( !(tmp_called_name_2 == NULL) );
    tmp_args_element_name_2 = var_perm;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "perm" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 149;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }

    frame_20cf7c7d475a17a816687f7438a8b053->m_frame.f_lineno = 149;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_20cf7c7d475a17a816687f7438a8b053 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_20cf7c7d475a17a816687f7438a8b053 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_20cf7c7d475a17a816687f7438a8b053 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_20cf7c7d475a17a816687f7438a8b053, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_20cf7c7d475a17a816687f7438a8b053->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_20cf7c7d475a17a816687f7438a8b053, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_20cf7c7d475a17a816687f7438a8b053,
        type_description_1,
        par_mode,
        var_perm,
        var_table,
        var_bit,
        var_char
    );


    // Release cached frame.
    if ( frame_20cf7c7d475a17a816687f7438a8b053 == cache_frame_20cf7c7d475a17a816687f7438a8b053 )
    {
        Py_DECREF( frame_20cf7c7d475a17a816687f7438a8b053 );
    }
    cache_frame_20cf7c7d475a17a816687f7438a8b053 = NULL;

    assertFrameObject( frame_20cf7c7d475a17a816687f7438a8b053 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( stat$$$function_10_filemode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_mode );
    par_mode = NULL;

    Py_XDECREF( var_perm );
    var_perm = NULL;

    Py_XDECREF( var_table );
    var_table = NULL;

    Py_XDECREF( var_bit );
    var_bit = NULL;

    Py_XDECREF( var_char );
    var_char = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( par_mode );
    par_mode = NULL;

    Py_XDECREF( var_perm );
    var_perm = NULL;

    Py_XDECREF( var_table );
    var_table = NULL;

    Py_XDECREF( var_bit );
    var_bit = NULL;

    Py_XDECREF( var_char );
    var_char = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( stat$$$function_10_filemode );
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



static PyObject *MAKE_FUNCTION_stat$$$function_10_filemode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_stat$$$function_10_filemode,
        const_str_plain_filemode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_20cf7c7d475a17a816687f7438a8b053,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_stat,
        const_str_digest_86145e11162143dca0cb6c77be1adb1f,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_stat$$$function_1_S_IMODE(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_stat$$$function_1_S_IMODE,
        const_str_plain_S_IMODE,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fe7ccd9746e631ef1b32152c19828bd4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_stat,
        const_str_digest_3f3ee4dc3f1eb1a51673afcaea04bdd3,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_stat$$$function_2_S_IFMT(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_stat$$$function_2_S_IFMT,
        const_str_plain_S_IFMT,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2a7a88722b608f302c3179a2ec1d3b73,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_stat,
        const_str_digest_fa6ee53c021ba34f69403db887912e7b,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_stat$$$function_3_S_ISDIR(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_stat$$$function_3_S_ISDIR,
        const_str_plain_S_ISDIR,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_600ad252ae9e6cc3e3dc5d7c31d945aa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_stat,
        const_str_digest_2fb4c2f6d416a690b5219620714fc1d8,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_stat$$$function_4_S_ISCHR(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_stat$$$function_4_S_ISCHR,
        const_str_plain_S_ISCHR,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_402dae7901da2c26a263a08220675bf1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_stat,
        const_str_digest_d2ce3f98ec7fd6aa38a88031acf1531a,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_stat$$$function_5_S_ISBLK(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_stat$$$function_5_S_ISBLK,
        const_str_plain_S_ISBLK,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_de01cd9662bbbb85f28588b3cc27ec5a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_stat,
        const_str_digest_3bd7ec6a3827de4204fd550e3d3d49df,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_stat$$$function_6_S_ISREG(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_stat$$$function_6_S_ISREG,
        const_str_plain_S_ISREG,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5a62e9f22a9f33836b7fe38f2965551b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_stat,
        const_str_digest_b9e6b6de7d43b586ef3cbd4d6c761812,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_stat$$$function_7_S_ISFIFO(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_stat$$$function_7_S_ISFIFO,
        const_str_plain_S_ISFIFO,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d9ead1571d02a93c0d579d58906ecdb7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_stat,
        const_str_digest_7796df748c2730e89fbc88e35b8f6c81,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_stat$$$function_8_S_ISLNK(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_stat$$$function_8_S_ISLNK,
        const_str_plain_S_ISLNK,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2493be4d818d48221bb5469148f0be00,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_stat,
        const_str_digest_9c530db538eb75c2ad233af390c31632,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_stat$$$function_9_S_ISSOCK(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_stat$$$function_9_S_ISSOCK,
        const_str_plain_S_ISSOCK,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8badc45eddc676d76399b46a01135fa9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_stat,
        const_str_digest_74533aa6ab312c31fa47717036495fd6,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_stat =
{
    PyModuleDef_HEAD_INIT,
    "stat",   /* m_name */
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

MOD_INIT_DECL( stat )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_stat );
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
    puts("stat: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("stat: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("stat: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initstat" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_stat = Py_InitModule4(
        "stat",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_stat = PyModule_Create( &mdef_stat );
#endif

    moduledict_stat = MODULE_DICT( module_stat );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_stat,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_stat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_stat,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_stat,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_stat );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_stat, module_stat );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_stat, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
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
    PyObject *tmp_assign_source_74;
    PyObject *tmp_assign_source_75;
    PyObject *tmp_assign_source_76;
    PyObject *tmp_assign_source_77;
    PyObject *tmp_assign_source_78;
    PyObject *tmp_assign_source_79;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_level_name_1;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_name_name_1;
    bool tmp_result;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_star_imported_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyObject *tmp_tuple_element_8;
    PyObject *tmp_tuple_element_9;
    PyObject *tmp_tuple_element_10;
    PyObject *tmp_tuple_element_11;
    PyObject *tmp_tuple_element_12;
    PyObject *tmp_tuple_element_13;
    PyObject *tmp_tuple_element_14;
    PyObject *tmp_tuple_element_15;
    PyObject *tmp_tuple_element_16;
    PyObject *tmp_tuple_element_17;
    PyObject *tmp_tuple_element_18;
    PyObject *tmp_tuple_element_19;
    PyObject *tmp_tuple_element_20;
    PyObject *tmp_tuple_element_21;
    PyObject *tmp_tuple_element_22;
    PyObject *tmp_tuple_element_23;
    PyObject *tmp_tuple_element_24;
    PyObject *tmp_tuple_element_25;
    PyObject *tmp_tuple_element_26;
    PyObject *tmp_tuple_element_27;
    PyObject *tmp_tuple_element_28;
    PyObject *tmp_tuple_element_29;
    PyObject *tmp_tuple_element_30;
    PyObject *tmp_tuple_element_31;
    PyObject *tmp_tuple_element_32;
    struct Nuitka_FrameObject *frame_6dca8cf1b254b754a46dc2bb6e05e2f7;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;

    // Module code.
    tmp_assign_source_1 = const_str_digest_01b02879d1918d1e66ac4015cec6e093;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_2dbd333add01102f1cfe63ade93214a4;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_ST_MODE, tmp_assign_source_4 );
    tmp_assign_source_5 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_ST_INO, tmp_assign_source_5 );
    tmp_assign_source_6 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_ST_DEV, tmp_assign_source_6 );
    tmp_assign_source_7 = const_int_pos_3;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_ST_NLINK, tmp_assign_source_7 );
    tmp_assign_source_8 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_ST_UID, tmp_assign_source_8 );
    tmp_assign_source_9 = const_int_pos_5;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_ST_GID, tmp_assign_source_9 );
    tmp_assign_source_10 = const_int_pos_6;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_ST_SIZE, tmp_assign_source_10 );
    tmp_assign_source_11 = const_int_pos_7;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_ST_ATIME, tmp_assign_source_11 );
    tmp_assign_source_12 = const_int_pos_8;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_ST_MTIME, tmp_assign_source_12 );
    tmp_assign_source_13 = const_int_pos_9;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_ST_CTIME, tmp_assign_source_13 );
    tmp_assign_source_14 = MAKE_FUNCTION_stat$$$function_1_S_IMODE(  );
    UPDATE_STRING_DICT1( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IMODE, tmp_assign_source_14 );
    tmp_assign_source_15 = MAKE_FUNCTION_stat$$$function_2_S_IFMT(  );
    UPDATE_STRING_DICT1( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IFMT, tmp_assign_source_15 );
    tmp_assign_source_16 = const_int_pos_16384;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IFDIR, tmp_assign_source_16 );
    tmp_assign_source_17 = const_int_pos_8192;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IFCHR, tmp_assign_source_17 );
    tmp_assign_source_18 = const_int_pos_24576;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IFBLK, tmp_assign_source_18 );
    tmp_assign_source_19 = const_int_pos_32768;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IFREG, tmp_assign_source_19 );
    tmp_assign_source_20 = const_int_pos_4096;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IFIFO, tmp_assign_source_20 );
    tmp_assign_source_21 = const_int_pos_40960;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IFLNK, tmp_assign_source_21 );
    tmp_assign_source_22 = const_int_pos_49152;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IFSOCK, tmp_assign_source_22 );
    tmp_assign_source_23 = MAKE_FUNCTION_stat$$$function_3_S_ISDIR(  );
    UPDATE_STRING_DICT1( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_ISDIR, tmp_assign_source_23 );
    tmp_assign_source_24 = MAKE_FUNCTION_stat$$$function_4_S_ISCHR(  );
    UPDATE_STRING_DICT1( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_ISCHR, tmp_assign_source_24 );
    tmp_assign_source_25 = MAKE_FUNCTION_stat$$$function_5_S_ISBLK(  );
    UPDATE_STRING_DICT1( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_ISBLK, tmp_assign_source_25 );
    tmp_assign_source_26 = MAKE_FUNCTION_stat$$$function_6_S_ISREG(  );
    UPDATE_STRING_DICT1( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_ISREG, tmp_assign_source_26 );
    tmp_assign_source_27 = MAKE_FUNCTION_stat$$$function_7_S_ISFIFO(  );
    UPDATE_STRING_DICT1( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_ISFIFO, tmp_assign_source_27 );
    tmp_assign_source_28 = MAKE_FUNCTION_stat$$$function_8_S_ISLNK(  );
    UPDATE_STRING_DICT1( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_ISLNK, tmp_assign_source_28 );
    tmp_assign_source_29 = MAKE_FUNCTION_stat$$$function_9_S_ISSOCK(  );
    UPDATE_STRING_DICT1( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_ISSOCK, tmp_assign_source_29 );
    tmp_assign_source_30 = const_int_pos_2048;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_ISUID, tmp_assign_source_30 );
    tmp_assign_source_31 = const_int_pos_1024;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_ISGID, tmp_assign_source_31 );
    tmp_assign_source_32 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_ISGID );

    if (unlikely( tmp_assign_source_32 == NULL ))
    {
        tmp_assign_source_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_ISGID );
    }

    CHECK_OBJECT( tmp_assign_source_32 );
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_ENFMT, tmp_assign_source_32 );
    tmp_assign_source_33 = const_int_pos_512;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_ISVTX, tmp_assign_source_33 );
    tmp_assign_source_34 = const_int_pos_256;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IREAD, tmp_assign_source_34 );
    tmp_assign_source_35 = const_int_pos_128;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IWRITE, tmp_assign_source_35 );
    tmp_assign_source_36 = const_int_pos_64;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IEXEC, tmp_assign_source_36 );
    tmp_assign_source_37 = const_int_pos_448;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IRWXU, tmp_assign_source_37 );
    tmp_assign_source_38 = const_int_pos_256;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IRUSR, tmp_assign_source_38 );
    tmp_assign_source_39 = const_int_pos_128;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IWUSR, tmp_assign_source_39 );
    tmp_assign_source_40 = const_int_pos_64;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IXUSR, tmp_assign_source_40 );
    tmp_assign_source_41 = const_int_pos_56;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IRWXG, tmp_assign_source_41 );
    tmp_assign_source_42 = const_int_pos_32;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IRGRP, tmp_assign_source_42 );
    tmp_assign_source_43 = const_int_pos_16;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IWGRP, tmp_assign_source_43 );
    tmp_assign_source_44 = const_int_pos_8;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IXGRP, tmp_assign_source_44 );
    tmp_assign_source_45 = const_int_pos_7;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IRWXO, tmp_assign_source_45 );
    tmp_assign_source_46 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IROTH, tmp_assign_source_46 );
    tmp_assign_source_47 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IWOTH, tmp_assign_source_47 );
    tmp_assign_source_48 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IXOTH, tmp_assign_source_48 );
    tmp_assign_source_49 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_UF_NODUMP, tmp_assign_source_49 );
    tmp_assign_source_50 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_UF_IMMUTABLE, tmp_assign_source_50 );
    tmp_assign_source_51 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_UF_APPEND, tmp_assign_source_51 );
    tmp_assign_source_52 = const_int_pos_8;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_UF_OPAQUE, tmp_assign_source_52 );
    tmp_assign_source_53 = const_int_pos_16;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_UF_NOUNLINK, tmp_assign_source_53 );
    tmp_assign_source_54 = const_int_pos_32;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_UF_COMPRESSED, tmp_assign_source_54 );
    tmp_assign_source_55 = const_int_pos_32768;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_UF_HIDDEN, tmp_assign_source_55 );
    tmp_assign_source_56 = const_int_pos_65536;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_SF_ARCHIVED, tmp_assign_source_56 );
    tmp_assign_source_57 = const_int_pos_131072;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_SF_IMMUTABLE, tmp_assign_source_57 );
    tmp_assign_source_58 = const_int_pos_262144;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_SF_APPEND, tmp_assign_source_58 );
    tmp_assign_source_59 = const_int_pos_1048576;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_SF_NOUNLINK, tmp_assign_source_59 );
    tmp_assign_source_60 = const_int_pos_2097152;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_SF_SNAPSHOT, tmp_assign_source_60 );
    // Frame without reuse.
    frame_6dca8cf1b254b754a46dc2bb6e05e2f7 = MAKE_MODULE_FRAME( codeobj_6dca8cf1b254b754a46dc2bb6e05e2f7, module_stat );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_6dca8cf1b254b754a46dc2bb6e05e2f7 );
    assert( Py_REFCNT( frame_6dca8cf1b254b754a46dc2bb6e05e2f7 ) == 2 );

    // Framed code:
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IFLNK );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IFLNK );
    }

    CHECK_OBJECT( tmp_tuple_element_3 );
    tmp_tuple_element_2 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = const_str_plain_l;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_tuple_element_2, 1, tmp_tuple_element_3 );
    tmp_tuple_element_1 = PyTuple_New( 6 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IFREG );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IFREG );
    }

    CHECK_OBJECT( tmp_tuple_element_4 );
    tmp_tuple_element_2 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = const_str_chr_45;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_tuple_element_2, 1, tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
    tmp_tuple_element_5 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IFBLK );

    if (unlikely( tmp_tuple_element_5 == NULL ))
    {
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IFBLK );
    }

    CHECK_OBJECT( tmp_tuple_element_5 );
    tmp_tuple_element_2 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = const_str_plain_b;
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_tuple_element_2, 1, tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 2, tmp_tuple_element_2 );
    tmp_tuple_element_6 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IFDIR );

    if (unlikely( tmp_tuple_element_6 == NULL ))
    {
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IFDIR );
    }

    CHECK_OBJECT( tmp_tuple_element_6 );
    tmp_tuple_element_2 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = const_str_plain_d;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_tuple_element_2, 1, tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 3, tmp_tuple_element_2 );
    tmp_tuple_element_7 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IFCHR );

    if (unlikely( tmp_tuple_element_7 == NULL ))
    {
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IFCHR );
    }

    CHECK_OBJECT( tmp_tuple_element_7 );
    tmp_tuple_element_2 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = const_str_plain_c;
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_tuple_element_2, 1, tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 4, tmp_tuple_element_2 );
    tmp_tuple_element_8 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IFIFO );

    if (unlikely( tmp_tuple_element_8 == NULL ))
    {
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IFIFO );
    }

    CHECK_OBJECT( tmp_tuple_element_8 );
    tmp_tuple_element_2 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = const_str_plain_p;
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_tuple_element_2, 1, tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 5, tmp_tuple_element_2 );
    tmp_assign_source_61 = PyTuple_New( 10 );
    PyTuple_SET_ITEM( tmp_assign_source_61, 0, tmp_tuple_element_1 );
    tmp_tuple_element_10 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IRUSR );

    if (unlikely( tmp_tuple_element_10 == NULL ))
    {
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IRUSR );
    }

    CHECK_OBJECT( tmp_tuple_element_10 );
    tmp_tuple_element_9 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_tuple_element_9, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = const_str_plain_r;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_tuple_element_9, 1, tmp_tuple_element_10 );
    tmp_tuple_element_1 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_assign_source_61, 1, tmp_tuple_element_1 );
    tmp_tuple_element_12 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IWUSR );

    if (unlikely( tmp_tuple_element_12 == NULL ))
    {
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IWUSR );
    }

    CHECK_OBJECT( tmp_tuple_element_12 );
    tmp_tuple_element_11 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_tuple_element_11, 0, tmp_tuple_element_12 );
    tmp_tuple_element_12 = const_str_plain_w;
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_tuple_element_11, 1, tmp_tuple_element_12 );
    tmp_tuple_element_1 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_11 );
    PyTuple_SET_ITEM( tmp_assign_source_61, 2, tmp_tuple_element_1 );
    tmp_left_name_1 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IXUSR );

    if (unlikely( tmp_left_name_1 == NULL ))
    {
        tmp_left_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IXUSR );
    }

    CHECK_OBJECT( tmp_left_name_1 );
    tmp_right_name_1 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_ISUID );

    if (unlikely( tmp_right_name_1 == NULL ))
    {
        tmp_right_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_ISUID );
    }

    CHECK_OBJECT( tmp_right_name_1 );
    tmp_tuple_element_14 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_tuple_element_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_61 );

        exception_lineno = 122;

        goto frame_exception_exit_1;
    }
    tmp_tuple_element_13 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_tuple_element_13, 0, tmp_tuple_element_14 );
    tmp_tuple_element_14 = const_str_plain_s;
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_tuple_element_13, 1, tmp_tuple_element_14 );
    tmp_tuple_element_1 = PyTuple_New( 3 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_13 );
    tmp_tuple_element_15 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_ISUID );

    if (unlikely( tmp_tuple_element_15 == NULL ))
    {
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_ISUID );
    }

    if ( tmp_tuple_element_15 == NULL )
    {
        Py_DECREF( tmp_assign_source_61 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S_ISUID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 123;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_13 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_tuple_element_13, 0, tmp_tuple_element_15 );
    tmp_tuple_element_15 = const_str_plain_S;
    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_tuple_element_13, 1, tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_13 );
    tmp_tuple_element_16 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IXUSR );

    if (unlikely( tmp_tuple_element_16 == NULL ))
    {
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IXUSR );
    }

    if ( tmp_tuple_element_16 == NULL )
    {
        Py_DECREF( tmp_assign_source_61 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S_IXUSR" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 124;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_13 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_tuple_element_13, 0, tmp_tuple_element_16 );
    tmp_tuple_element_16 = const_str_plain_x;
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_tuple_element_13, 1, tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 2, tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_assign_source_61, 3, tmp_tuple_element_1 );
    tmp_tuple_element_18 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IRGRP );

    if (unlikely( tmp_tuple_element_18 == NULL ))
    {
        tmp_tuple_element_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IRGRP );
    }

    if ( tmp_tuple_element_18 == NULL )
    {
        Py_DECREF( tmp_assign_source_61 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S_IRGRP" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 126;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_17 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_tuple_element_17, 0, tmp_tuple_element_18 );
    tmp_tuple_element_18 = const_str_plain_r;
    Py_INCREF( tmp_tuple_element_18 );
    PyTuple_SET_ITEM( tmp_tuple_element_17, 1, tmp_tuple_element_18 );
    tmp_tuple_element_1 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_assign_source_61, 4, tmp_tuple_element_1 );
    tmp_tuple_element_20 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IWGRP );

    if (unlikely( tmp_tuple_element_20 == NULL ))
    {
        tmp_tuple_element_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IWGRP );
    }

    if ( tmp_tuple_element_20 == NULL )
    {
        Py_DECREF( tmp_assign_source_61 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S_IWGRP" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 127;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_19 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_tuple_element_19, 0, tmp_tuple_element_20 );
    tmp_tuple_element_20 = const_str_plain_w;
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_tuple_element_19, 1, tmp_tuple_element_20 );
    tmp_tuple_element_1 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_assign_source_61, 5, tmp_tuple_element_1 );
    tmp_left_name_2 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IXGRP );

    if (unlikely( tmp_left_name_2 == NULL ))
    {
        tmp_left_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IXGRP );
    }

    if ( tmp_left_name_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_61 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S_IXGRP" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 128;

        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_ISGID );

    if (unlikely( tmp_right_name_2 == NULL ))
    {
        tmp_right_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_ISGID );
    }

    if ( tmp_right_name_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_61 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S_ISGID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 128;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_22 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_tuple_element_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_61 );

        exception_lineno = 128;

        goto frame_exception_exit_1;
    }
    tmp_tuple_element_21 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_tuple_element_21, 0, tmp_tuple_element_22 );
    tmp_tuple_element_22 = const_str_plain_s;
    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_tuple_element_21, 1, tmp_tuple_element_22 );
    tmp_tuple_element_1 = PyTuple_New( 3 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_21 );
    tmp_tuple_element_23 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_ISGID );

    if (unlikely( tmp_tuple_element_23 == NULL ))
    {
        tmp_tuple_element_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_ISGID );
    }

    if ( tmp_tuple_element_23 == NULL )
    {
        Py_DECREF( tmp_assign_source_61 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S_ISGID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 129;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_21 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_tuple_element_21, 0, tmp_tuple_element_23 );
    tmp_tuple_element_23 = const_str_plain_S;
    Py_INCREF( tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_tuple_element_21, 1, tmp_tuple_element_23 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_21 );
    tmp_tuple_element_24 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IXGRP );

    if (unlikely( tmp_tuple_element_24 == NULL ))
    {
        tmp_tuple_element_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IXGRP );
    }

    if ( tmp_tuple_element_24 == NULL )
    {
        Py_DECREF( tmp_assign_source_61 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S_IXGRP" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 130;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_21 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_tuple_element_21, 0, tmp_tuple_element_24 );
    tmp_tuple_element_24 = const_str_plain_x;
    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_tuple_element_21, 1, tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 2, tmp_tuple_element_21 );
    PyTuple_SET_ITEM( tmp_assign_source_61, 6, tmp_tuple_element_1 );
    tmp_tuple_element_26 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IROTH );

    if (unlikely( tmp_tuple_element_26 == NULL ))
    {
        tmp_tuple_element_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IROTH );
    }

    if ( tmp_tuple_element_26 == NULL )
    {
        Py_DECREF( tmp_assign_source_61 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S_IROTH" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 132;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_25 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_tuple_element_25, 0, tmp_tuple_element_26 );
    tmp_tuple_element_26 = const_str_plain_r;
    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_tuple_element_25, 1, tmp_tuple_element_26 );
    tmp_tuple_element_1 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_assign_source_61, 7, tmp_tuple_element_1 );
    tmp_tuple_element_28 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IWOTH );

    if (unlikely( tmp_tuple_element_28 == NULL ))
    {
        tmp_tuple_element_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IWOTH );
    }

    if ( tmp_tuple_element_28 == NULL )
    {
        Py_DECREF( tmp_assign_source_61 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S_IWOTH" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 133;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_27 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_28 );
    PyTuple_SET_ITEM( tmp_tuple_element_27, 0, tmp_tuple_element_28 );
    tmp_tuple_element_28 = const_str_plain_w;
    Py_INCREF( tmp_tuple_element_28 );
    PyTuple_SET_ITEM( tmp_tuple_element_27, 1, tmp_tuple_element_28 );
    tmp_tuple_element_1 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_27 );
    PyTuple_SET_ITEM( tmp_assign_source_61, 8, tmp_tuple_element_1 );
    tmp_left_name_3 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IXOTH );

    if (unlikely( tmp_left_name_3 == NULL ))
    {
        tmp_left_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IXOTH );
    }

    if ( tmp_left_name_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_61 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S_IXOTH" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 134;

        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_ISVTX );

    if (unlikely( tmp_right_name_3 == NULL ))
    {
        tmp_right_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_ISVTX );
    }

    if ( tmp_right_name_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_61 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S_ISVTX" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 134;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_30 = BINARY_OPERATION( PyNumber_Or, tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_tuple_element_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assign_source_61 );

        exception_lineno = 134;

        goto frame_exception_exit_1;
    }
    tmp_tuple_element_29 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_tuple_element_29, 0, tmp_tuple_element_30 );
    tmp_tuple_element_30 = const_str_plain_t;
    Py_INCREF( tmp_tuple_element_30 );
    PyTuple_SET_ITEM( tmp_tuple_element_29, 1, tmp_tuple_element_30 );
    tmp_tuple_element_1 = PyTuple_New( 3 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_29 );
    tmp_tuple_element_31 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_ISVTX );

    if (unlikely( tmp_tuple_element_31 == NULL ))
    {
        tmp_tuple_element_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_ISVTX );
    }

    if ( tmp_tuple_element_31 == NULL )
    {
        Py_DECREF( tmp_assign_source_61 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S_ISVTX" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 135;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_29 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_31 );
    PyTuple_SET_ITEM( tmp_tuple_element_29, 0, tmp_tuple_element_31 );
    tmp_tuple_element_31 = const_str_plain_T;
    Py_INCREF( tmp_tuple_element_31 );
    PyTuple_SET_ITEM( tmp_tuple_element_29, 1, tmp_tuple_element_31 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_29 );
    tmp_tuple_element_32 = GET_STRING_DICT_VALUE( moduledict_stat, (Nuitka_StringObject *)const_str_plain_S_IXOTH );

    if (unlikely( tmp_tuple_element_32 == NULL ))
    {
        tmp_tuple_element_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_S_IXOTH );
    }

    if ( tmp_tuple_element_32 == NULL )
    {
        Py_DECREF( tmp_assign_source_61 );
        Py_DECREF( tmp_tuple_element_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "S_IXOTH" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 136;

        goto frame_exception_exit_1;
    }

    tmp_tuple_element_29 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_32 );
    PyTuple_SET_ITEM( tmp_tuple_element_29, 0, tmp_tuple_element_32 );
    tmp_tuple_element_32 = const_str_plain_x;
    Py_INCREF( tmp_tuple_element_32 );
    PyTuple_SET_ITEM( tmp_tuple_element_29, 1, tmp_tuple_element_32 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 2, tmp_tuple_element_29 );
    PyTuple_SET_ITEM( tmp_assign_source_61, 9, tmp_tuple_element_1 );
    UPDATE_STRING_DICT1( moduledict_stat, (Nuitka_StringObject *)const_str_plain__filemode_table, tmp_assign_source_61 );
    tmp_assign_source_62 = MAKE_FUNCTION_stat$$$function_10_filemode(  );
    UPDATE_STRING_DICT1( moduledict_stat, (Nuitka_StringObject *)const_str_plain_filemode, tmp_assign_source_62 );
    tmp_assign_source_63 = const_int_pos_32;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_FILE_ATTRIBUTE_ARCHIVE, tmp_assign_source_63 );
    tmp_assign_source_64 = const_int_pos_2048;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_FILE_ATTRIBUTE_COMPRESSED, tmp_assign_source_64 );
    tmp_assign_source_65 = const_int_pos_64;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_FILE_ATTRIBUTE_DEVICE, tmp_assign_source_65 );
    tmp_assign_source_66 = const_int_pos_16;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_FILE_ATTRIBUTE_DIRECTORY, tmp_assign_source_66 );
    tmp_assign_source_67 = const_int_pos_16384;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_FILE_ATTRIBUTE_ENCRYPTED, tmp_assign_source_67 );
    tmp_assign_source_68 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_FILE_ATTRIBUTE_HIDDEN, tmp_assign_source_68 );
    tmp_assign_source_69 = const_int_pos_32768;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_FILE_ATTRIBUTE_INTEGRITY_STREAM, tmp_assign_source_69 );
    tmp_assign_source_70 = const_int_pos_128;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_FILE_ATTRIBUTE_NORMAL, tmp_assign_source_70 );
    tmp_assign_source_71 = const_int_pos_8192;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_FILE_ATTRIBUTE_NOT_CONTENT_INDEXED, tmp_assign_source_71 );
    tmp_assign_source_72 = const_int_pos_131072;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_FILE_ATTRIBUTE_NO_SCRUB_DATA, tmp_assign_source_72 );
    tmp_assign_source_73 = const_int_pos_4096;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_FILE_ATTRIBUTE_OFFLINE, tmp_assign_source_73 );
    tmp_assign_source_74 = const_int_pos_1;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_FILE_ATTRIBUTE_READONLY, tmp_assign_source_74 );
    tmp_assign_source_75 = const_int_pos_1024;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_FILE_ATTRIBUTE_REPARSE_POINT, tmp_assign_source_75 );
    tmp_assign_source_76 = const_int_pos_512;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_FILE_ATTRIBUTE_SPARSE_FILE, tmp_assign_source_76 );
    tmp_assign_source_77 = const_int_pos_4;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_FILE_ATTRIBUTE_SYSTEM, tmp_assign_source_77 );
    tmp_assign_source_78 = const_int_pos_256;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_FILE_ATTRIBUTE_TEMPORARY, tmp_assign_source_78 );
    tmp_assign_source_79 = const_int_pos_65536;
    UPDATE_STRING_DICT0( moduledict_stat, (Nuitka_StringObject *)const_str_plain_FILE_ATTRIBUTE_VIRTUAL, tmp_assign_source_79 );
    // Tried code:
    tmp_name_name_1 = const_str_plain__stat;
    tmp_globals_name_1 = (PyObject *)moduledict_stat;
    tmp_locals_name_1 = (PyObject *)moduledict_stat;
    tmp_fromlist_name_1 = const_tuple_str_chr_42_tuple;
    tmp_level_name_1 = const_int_0;
    frame_6dca8cf1b254b754a46dc2bb6e05e2f7->m_frame.f_lineno = 176;
    tmp_star_imported_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    assert( !(tmp_star_imported_1 == NULL) );
    tmp_result = IMPORT_MODULE_STAR( module_stat, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto try_except_handler_1;
    }
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

    // Preserve existing published exception.
    exception_preserved_type_1 = EXC_TYPE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_type_1 );
    exception_preserved_value_1 = EXC_VALUE(PyThreadState_GET());
    Py_XINCREF( exception_preserved_value_1 );
    exception_preserved_tb_1 = (PyTracebackObject *)EXC_TRACEBACK(PyThreadState_GET());
    Py_XINCREF( exception_preserved_tb_1 );

    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_6dca8cf1b254b754a46dc2bb6e05e2f7, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_6dca8cf1b254b754a46dc2bb6e05e2f7, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PyException_SetTraceback( exception_keeper_value_1, (PyObject *)exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    // Tried code:
    tmp_compare_left_1 = EXC_TYPE(PyThreadState_GET());
    tmp_compare_right_1 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;

        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (unlikely( tmp_result == false ))
    {
        exception_lineno = 175;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_6dca8cf1b254b754a46dc2bb6e05e2f7->m_frame) frame_6dca8cf1b254b754a46dc2bb6e05e2f7->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_2;
    branch_no_1:;
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

    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception.
    SET_CURRENT_EXCEPTION( exception_preserved_type_1, exception_preserved_value_1, exception_preserved_tb_1 );
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( stat );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6dca8cf1b254b754a46dc2bb6e05e2f7 );
#endif
    popFrameStack();

    assertFrameObject( frame_6dca8cf1b254b754a46dc2bb6e05e2f7 );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_6dca8cf1b254b754a46dc2bb6e05e2f7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6dca8cf1b254b754a46dc2bb6e05e2f7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6dca8cf1b254b754a46dc2bb6e05e2f7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6dca8cf1b254b754a46dc2bb6e05e2f7, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    return MOD_RETURN_VALUE( module_stat );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
