/* Generated code for Python source for module 'ctypes.wintypes'
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

/* The _module_ctypes$wintypes is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_ctypes$wintypes;
PyDictObject *moduledict_ctypes$wintypes;

/* The module constants used, if any. */
static PyObject *const_str_plain_ATOM;
extern PyObject *const_str_plain_metaclass;
static PyObject *const_str_plain_PBOOL;
static PyObject *const_str_plain_PBYTE;
extern PyObject *const_str_plain_INT;
static PyObject *const_str_plain_HICON;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_plain_PUSHORT;
static PyObject *const_str_plain_LCTYPE;
static PyObject *const_str_plain_LPBOOL;
extern PyObject *const_tuple_str_plain___class___tuple;
static PyObject *const_str_plain_ULONG;
static PyObject *const_str_plain_PULARGE_INTEGER;
extern PyObject *const_str_plain_c_wchar_p;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_MAX_PATH;
static PyObject *const_str_plain_LPFILETIME;
static PyObject *const_str_digest_addd42a1fd87d71111870fd0a46e8850;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain__ULARGE_INTEGER;
static PyObject *const_str_plain__LARGE_INTEGER;
extern PyObject *const_str_plain_c_char_p;
static PyObject *const_str_plain__RECTL;
static PyObject *const_str_plain_HRGN;
extern PyObject *const_str_plain_LONG;
extern PyObject *const_str_plain_BOOL;
extern PyObject *const_str_plain_c_long;
extern PyObject *const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
static PyObject *const_str_plain_LANGID;
static PyObject *const_str_plain_WPARAM;
static PyObject *const_str_plain_HDC;
static PyObject *const_str_digest_226578bed50812bc2d21c3dafddb24ad;
static PyObject *const_str_plain_LPBYTE;
static PyObject *const_str_plain_pt;
extern PyObject *const_str_plain__fields_;
extern PyObject *const_str_plain_FLOAT;
static PyObject *const_str_plain_HPALETTE;
static PyObject *const_str_plain_Left;
extern PyObject *const_str_plain_LPCSTR;
static PyObject *const_str_plain_HFONT;
static PyObject *const_str_plain_HTASK;
static PyObject *const_str_plain_Top;
extern PyObject *const_str_plain_c_void_p;
static PyObject *const_str_plain_RGB;
static PyObject *const_str_plain_HDESK;
static PyObject *const_str_plain_hWnd;
extern PyObject *const_str_plain_c_wchar;
static PyObject *const_str_plain_cx;
static PyObject *const_str_plain_SIZE;
extern PyObject *const_str_plain_Y;
static PyObject *const_str_plain_WIN32_FIND_DATAW;
static PyObject *const_str_plain_LPRECT;
extern PyObject *const_int_pos_16;
static PyObject *const_str_plain_LPHANDLE;
extern PyObject *const_str_plain___doc__;
static PyObject *const_str_plain_HINSTANCE;
extern PyObject *const_str_plain_LPCWSTR;
static PyObject *const_str_plain_tagMSG;
extern PyObject *const_str_plain_Structure;
static PyObject *const_str_plain_Bottom;
static PyObject *const_str_plain_tagSIZE;
static PyObject *const_str_plain_COLORREF;
extern PyObject *const_str_plain_LPVOID;
extern PyObject *const_str_plain_time;
static PyObject *const_str_plain_cFileName;
static PyObject *const_str_plain_cAlternateFileName;
extern PyObject *const_str_plain_POINTER;
extern PyObject *const_str_plain_DWORD;
static PyObject *const_str_plain_CHAR;
extern PyObject *const_str_plain_WORD;
extern PyObject *const_str_plain_BYTE;
extern PyObject *const_str_plain_c_uint;
static PyObject *const_str_plain_POINTL;
extern PyObject *const_str_plain_red;
extern PyObject *const_str_plain___qualname__;
static PyObject *const_str_plain_nFileSizeHigh;
static PyObject *const_str_plain_PFLOAT;
static PyObject *const_str_plain_HCOLORSPACE;
extern PyObject *const_str_plain_LPDWORD;
static PyObject *const_str_plain_PUINT;
extern PyObject *const_str_plain_HANDLE;
extern PyObject *const_str_plain_sizeof;
static PyObject *const_str_plain_HKL;
static PyObject *const_str_plain_HLOCAL;
extern PyObject *const_str_plain_value;
extern PyObject *const_str_plain_c_ulong;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_plain_HGLOBAL;
static PyObject *const_str_plain_PSHORT;
static PyObject *const_tuple_str_plain_red_str_plain_green_str_plain_blue_tuple;
extern PyObject *const_str_plain_message;
extern PyObject *const_int_pos_8;
static PyObject *const_str_plain_LPARAM;
static PyObject *const_str_plain_LPPOINT;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_PWCHAR;
static PyObject *const_str_plain_FILETIME;
static PyObject *const_str_plain_WIN32_FIND_DATAA;
static PyObject *const_str_plain_dwHighDateTime;
extern PyObject *const_str_plain_top;
extern PyObject *const_str_plain_LPCVOID;
static PyObject *const_str_plain_dwLowDateTime;
static PyObject *const_str_plain_MSG;
static PyObject *const_str_plain_LPSC_HANDLE;
static PyObject *const_str_plain_PWIN32_FIND_DATAA;
static PyObject *const_str_plain_HMODULE;
extern PyObject *const_str_plain_c_ushort;
static PyObject *const_str_plain_SHORT;
extern PyObject *const_str_plain_c_longlong;
extern PyObject *const_str_plain_c_int;
static PyObject *const_str_plain_LPSIZEL;
static PyObject *const_str_plain_LPHKL;
static PyObject *const_str_plain__POINTL;
static PyObject *const_str_plain_LPWORD;
static PyObject *const_str_plain_HMENU;
extern PyObject *const_str_plain_DOUBLE;
static PyObject *const_int_pos_260;
extern PyObject *const_str_plain_c_byte;
static PyObject *const_str_plain_LPSTR;
static PyObject *const_str_plain_RECT;
static PyObject *const_str_plain_ftLastAccessTime;
static PyObject *const_str_plain_PSIZEL;
static PyObject *const_str_plain_OLESTR;
static PyObject *const_str_plain_LPRECTL;
static PyObject *const_str_digest_fb4ae9f735decc5abd7c4bf31d9aaf0c;
static PyObject *const_str_plain_SERVICE_STATUS_HANDLE;
static PyObject *const_str_plain_PLONG;
extern PyObject *const_str_plain_c_float;
static PyObject *const_str_plain_LPMSG;
static PyObject *const_str_plain_USHORT;
static PyObject *const_str_plain_Right;
extern PyObject *const_str_plain_green;
static PyObject *const_str_plain_wParam;
extern PyObject *const_str_plain__type_;
static PyObject *const_str_plain_dwReserved0;
static PyObject *const_str_plain_HDWP;
static PyObject *const_str_plain_LPINT;
static PyObject *const_str_plain_HWINSTA;
static PyObject *const_str_plain_HBRUSH;
static PyObject *const_str_plain_LPCOLORREF;
extern PyObject *const_str_plain_ctypes;
extern PyObject *const_int_0;
static PyObject *const_str_plain_HKEY;
static PyObject *const_str_plain_RECTL;
static PyObject *const_str_plain_PLARGE_INTEGER;
static PyObject *const_str_plain_HSTR;
static PyObject *const_str_plain_LPWIN32_FIND_DATAW;
extern PyObject *const_str_plain_BOOLEAN;
static PyObject *const_str_plain_nFileSizeLow;
static PyObject *const_str_plain_SC_HANDLE;
static PyObject *const_str_plain__SMALL_RECT;
static PyObject *const_str_plain_PMSG;
extern PyObject *const_str_plain_c_ulonglong;
extern PyObject *const_str_plain_c_char;
static PyObject *const_str_plain_PINT;
extern PyObject *const_str_plain_right;
extern PyObject *const_str_plain_x;
static PyObject *const_str_plain_WCHAR;
static PyObject *const_str_plain_dwFileAttributes;
static PyObject *const_str_plain_SMALL_RECT;
extern PyObject *const_str_plain_c_double;
static PyObject *const_str_plain_HMONITOR;
static PyObject *const_str_plain_POINT;
extern PyObject *const_str_plain_LPWSTR;
static PyObject *const_str_plain_SIZEL;
static PyObject *const_str_plain_LPLONG;
static PyObject *const_str_plain_HPEN;
extern PyObject *const_str_plain___cached__;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain___class__;
static PyObject *const_str_plain_HMETAFILE;
static PyObject *const_str_plain__FILETIME;
static PyObject *const_str_plain_LCID;
static PyObject *const_str_plain_PRECT;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_plain_PWIN32_FIND_DATAW;
static PyObject *const_str_plain_PDWORD;
static PyObject *const_str_plain_bottom;
static PyObject *const_str_plain_tagPOINT;
static PyObject *const_str_plain_HRSRC;
extern PyObject *const_str_plain_y;
static PyObject *const_str_plain_PHKEY;
static PyObject *const_str_plain_LPWIN32_FIND_DATAA;
static PyObject *const_str_plain_HGDIOBJ;
static PyObject *const_str_plain_PULONG;
static PyObject *const_str_plain_PSMALL_RECT;
static PyObject *const_str_plain_LPUINT;
extern PyObject *const_str_plain_X;
static PyObject *const_str_plain_cy;
static PyObject *const_str_plain_lParam;
static PyObject *const_str_plain_PPOINT;
static PyObject *const_str_plain_LPCOLESTR;
static PyObject *const_str_plain_HBITMAP;
static PyObject *const_str_plain_PRECTL;
extern PyObject *const_str_plain___prepare__;
extern PyObject *const_str_plain_left;
static PyObject *const_str_plain_LARGE_INTEGER;
static PyObject *const_str_plain_HACCEL;
static PyObject *const_str_plain__COORD;
static PyObject *const_str_plain_ftCreationTime;
static PyObject *const_str_plain_PHANDLE;
static PyObject *const_str_plain_PLCID;
extern PyObject *const_str_plain__SimpleCData;
static PyObject *const_str_plain_LGRPID;
static PyObject *const_str_plain_HHOOK;
static PyObject *const_str_plain_HWND;
static PyObject *const_str_plain_tagRECT;
static PyObject *const_str_plain_PBOOLEAN;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_c_short;
extern PyObject *const_str_plain___repr__;
static PyObject *const_str_plain_ULARGE_INTEGER;
static PyObject *const_str_plain_HENHMETAFILE;
static PyObject *const_str_plain_UINT;
static PyObject *const_str_plain_PPOINTL;
extern PyObject *const_str_digest_d44bacc2290b5d18e632348ff9d94d65;
static PyObject *const_str_plain_LPOLESTR;
static PyObject *const_str_plain_VARIANT_BOOL;
static PyObject *const_str_plain_PFILETIME;
static PyObject *const_str_plain_ftLastWriteTime;
static PyObject *const_str_plain_PSIZE;
static PyObject *const_str_plain_PWORD;
static PyObject *const_str_plain_dwReserved1;
extern PyObject *const_int_pos_14;
static PyObject *const_str_plain_LPSIZE;
static PyObject *const_str_plain_PCHAR;
extern PyObject *const_str_plain_blue;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_ATOM = UNSTREAM_STRING( &constant_bin[ 438758 ], 4, 1 );
    const_str_plain_PBOOL = UNSTREAM_STRING( &constant_bin[ 438762 ], 5, 1 );
    const_str_plain_PBYTE = UNSTREAM_STRING( &constant_bin[ 438767 ], 5, 1 );
    const_str_plain_HICON = UNSTREAM_STRING( &constant_bin[ 438772 ], 5, 1 );
    const_str_plain_PUSHORT = UNSTREAM_STRING( &constant_bin[ 438777 ], 7, 1 );
    const_str_plain_LCTYPE = UNSTREAM_STRING( &constant_bin[ 438784 ], 6, 1 );
    const_str_plain_LPBOOL = UNSTREAM_STRING( &constant_bin[ 438790 ], 6, 1 );
    const_str_plain_ULONG = UNSTREAM_STRING( &constant_bin[ 438796 ], 5, 1 );
    const_str_plain_PULARGE_INTEGER = UNSTREAM_STRING( &constant_bin[ 438801 ], 15, 1 );
    const_str_plain_LPFILETIME = UNSTREAM_STRING( &constant_bin[ 438816 ], 10, 1 );
    const_str_digest_addd42a1fd87d71111870fd0a46e8850 = UNSTREAM_STRING( &constant_bin[ 438826 ], 24, 0 );
    const_str_plain__ULARGE_INTEGER = UNSTREAM_STRING( &constant_bin[ 438850 ], 15, 1 );
    const_str_plain__LARGE_INTEGER = UNSTREAM_STRING( &constant_bin[ 438865 ], 14, 1 );
    const_str_plain__RECTL = UNSTREAM_STRING( &constant_bin[ 438879 ], 6, 1 );
    const_str_plain_HRGN = UNSTREAM_STRING( &constant_bin[ 438885 ], 4, 1 );
    const_str_plain_LANGID = UNSTREAM_STRING( &constant_bin[ 438889 ], 6, 1 );
    const_str_plain_WPARAM = UNSTREAM_STRING( &constant_bin[ 438895 ], 6, 1 );
    const_str_plain_HDC = UNSTREAM_STRING( &constant_bin[ 438901 ], 3, 1 );
    const_str_digest_226578bed50812bc2d21c3dafddb24ad = UNSTREAM_STRING( &constant_bin[ 438904 ], 50, 0 );
    const_str_plain_LPBYTE = UNSTREAM_STRING( &constant_bin[ 438766 ], 6, 1 );
    const_str_plain_pt = UNSTREAM_STRING( &constant_bin[ 31 ], 2, 1 );
    const_str_plain_HPALETTE = UNSTREAM_STRING( &constant_bin[ 438954 ], 8, 1 );
    const_str_plain_Left = UNSTREAM_STRING( &constant_bin[ 205655 ], 4, 1 );
    const_str_plain_HFONT = UNSTREAM_STRING( &constant_bin[ 438962 ], 5, 1 );
    const_str_plain_HTASK = UNSTREAM_STRING( &constant_bin[ 438967 ], 5, 1 );
    const_str_plain_Top = UNSTREAM_STRING( &constant_bin[ 438972 ], 3, 1 );
    const_str_plain_RGB = UNSTREAM_STRING( &constant_bin[ 438975 ], 3, 1 );
    const_str_plain_HDESK = UNSTREAM_STRING( &constant_bin[ 438978 ], 5, 1 );
    const_str_plain_hWnd = UNSTREAM_STRING( &constant_bin[ 438983 ], 4, 1 );
    const_str_plain_cx = UNSTREAM_STRING( &constant_bin[ 438987 ], 2, 1 );
    const_str_plain_SIZE = UNSTREAM_STRING( &constant_bin[ 39455 ], 4, 1 );
    const_str_plain_WIN32_FIND_DATAW = UNSTREAM_STRING( &constant_bin[ 438989 ], 16, 1 );
    const_str_plain_LPRECT = UNSTREAM_STRING( &constant_bin[ 439005 ], 6, 1 );
    const_str_plain_LPHANDLE = UNSTREAM_STRING( &constant_bin[ 439011 ], 8, 1 );
    const_str_plain_HINSTANCE = UNSTREAM_STRING( &constant_bin[ 439019 ], 9, 1 );
    const_str_plain_tagMSG = UNSTREAM_STRING( &constant_bin[ 439028 ], 6, 1 );
    const_str_plain_Bottom = UNSTREAM_STRING( &constant_bin[ 439034 ], 6, 1 );
    const_str_plain_tagSIZE = UNSTREAM_STRING( &constant_bin[ 439040 ], 7, 1 );
    const_str_plain_COLORREF = UNSTREAM_STRING( &constant_bin[ 439047 ], 8, 1 );
    const_str_plain_cFileName = UNSTREAM_STRING( &constant_bin[ 439055 ], 9, 1 );
    const_str_plain_cAlternateFileName = UNSTREAM_STRING( &constant_bin[ 439064 ], 18, 1 );
    const_str_plain_CHAR = UNSTREAM_STRING( &constant_bin[ 237442 ], 4, 1 );
    const_str_plain_POINTL = UNSTREAM_STRING( &constant_bin[ 439082 ], 6, 1 );
    const_str_plain_nFileSizeHigh = UNSTREAM_STRING( &constant_bin[ 439088 ], 13, 1 );
    const_str_plain_PFLOAT = UNSTREAM_STRING( &constant_bin[ 439101 ], 6, 1 );
    const_str_plain_HCOLORSPACE = UNSTREAM_STRING( &constant_bin[ 439107 ], 11, 1 );
    const_str_plain_PUINT = UNSTREAM_STRING( &constant_bin[ 439118 ], 5, 1 );
    const_str_plain_HKL = UNSTREAM_STRING( &constant_bin[ 439123 ], 3, 1 );
    const_str_plain_HLOCAL = UNSTREAM_STRING( &constant_bin[ 439126 ], 6, 1 );
    const_str_plain_HGLOBAL = UNSTREAM_STRING( &constant_bin[ 439132 ], 7, 1 );
    const_str_plain_PSHORT = UNSTREAM_STRING( &constant_bin[ 439139 ], 6, 1 );
    const_tuple_str_plain_red_str_plain_green_str_plain_blue_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_red_str_plain_green_str_plain_blue_tuple, 0, const_str_plain_red ); Py_INCREF( const_str_plain_red );
    PyTuple_SET_ITEM( const_tuple_str_plain_red_str_plain_green_str_plain_blue_tuple, 1, const_str_plain_green ); Py_INCREF( const_str_plain_green );
    PyTuple_SET_ITEM( const_tuple_str_plain_red_str_plain_green_str_plain_blue_tuple, 2, const_str_plain_blue ); Py_INCREF( const_str_plain_blue );
    const_str_plain_LPARAM = UNSTREAM_STRING( &constant_bin[ 439145 ], 6, 1 );
    const_str_plain_LPPOINT = UNSTREAM_STRING( &constant_bin[ 439151 ], 7, 1 );
    const_str_plain_PWCHAR = UNSTREAM_STRING( &constant_bin[ 439158 ], 6, 1 );
    const_str_plain_FILETIME = UNSTREAM_STRING( &constant_bin[ 438818 ], 8, 1 );
    const_str_plain_WIN32_FIND_DATAA = UNSTREAM_STRING( &constant_bin[ 439164 ], 16, 1 );
    const_str_plain_dwHighDateTime = UNSTREAM_STRING( &constant_bin[ 439180 ], 14, 1 );
    const_str_plain_dwLowDateTime = UNSTREAM_STRING( &constant_bin[ 439194 ], 13, 1 );
    const_str_plain_MSG = UNSTREAM_STRING( &constant_bin[ 439031 ], 3, 1 );
    const_str_plain_LPSC_HANDLE = UNSTREAM_STRING( &constant_bin[ 439207 ], 11, 1 );
    const_str_plain_PWIN32_FIND_DATAA = UNSTREAM_STRING( &constant_bin[ 439218 ], 17, 1 );
    const_str_plain_HMODULE = UNSTREAM_STRING( &constant_bin[ 439235 ], 7, 1 );
    const_str_plain_SHORT = UNSTREAM_STRING( &constant_bin[ 438779 ], 5, 1 );
    const_str_plain_LPSIZEL = UNSTREAM_STRING( &constant_bin[ 439242 ], 7, 1 );
    const_str_plain_LPHKL = UNSTREAM_STRING( &constant_bin[ 439249 ], 5, 1 );
    const_str_plain__POINTL = UNSTREAM_STRING( &constant_bin[ 439254 ], 7, 1 );
    const_str_plain_LPWORD = UNSTREAM_STRING( &constant_bin[ 439261 ], 6, 1 );
    const_str_plain_HMENU = UNSTREAM_STRING( &constant_bin[ 439267 ], 5, 1 );
    const_int_pos_260 = PyLong_FromUnsignedLong( 260ul );
    const_str_plain_LPSTR = UNSTREAM_STRING( &constant_bin[ 439272 ], 5, 1 );
    const_str_plain_RECT = UNSTREAM_STRING( &constant_bin[ 8613 ], 4, 1 );
    const_str_plain_ftLastAccessTime = UNSTREAM_STRING( &constant_bin[ 439277 ], 16, 1 );
    const_str_plain_PSIZEL = UNSTREAM_STRING( &constant_bin[ 439243 ], 6, 1 );
    const_str_plain_OLESTR = UNSTREAM_STRING( &constant_bin[ 439293 ], 6, 1 );
    const_str_plain_LPRECTL = UNSTREAM_STRING( &constant_bin[ 439005 ], 7, 1 );
    const_str_digest_fb4ae9f735decc5abd7c4bf31d9aaf0c = UNSTREAM_STRING( &constant_bin[ 439299 ], 21, 0 );
    const_str_plain_SERVICE_STATUS_HANDLE = UNSTREAM_STRING( &constant_bin[ 439320 ], 21, 1 );
    const_str_plain_PLONG = UNSTREAM_STRING( &constant_bin[ 439341 ], 5, 1 );
    const_str_plain_LPMSG = UNSTREAM_STRING( &constant_bin[ 439346 ], 5, 1 );
    const_str_plain_USHORT = UNSTREAM_STRING( &constant_bin[ 438778 ], 6, 1 );
    const_str_plain_Right = UNSTREAM_STRING( &constant_bin[ 205959 ], 5, 1 );
    const_str_plain_wParam = UNSTREAM_STRING( &constant_bin[ 439351 ], 6, 1 );
    const_str_plain_dwReserved0 = UNSTREAM_STRING( &constant_bin[ 439357 ], 11, 1 );
    const_str_plain_HDWP = UNSTREAM_STRING( &constant_bin[ 439368 ], 4, 1 );
    const_str_plain_LPINT = UNSTREAM_STRING( &constant_bin[ 439372 ], 5, 1 );
    const_str_plain_HWINSTA = UNSTREAM_STRING( &constant_bin[ 439377 ], 7, 1 );
    const_str_plain_HBRUSH = UNSTREAM_STRING( &constant_bin[ 439384 ], 6, 1 );
    const_str_plain_LPCOLORREF = UNSTREAM_STRING( &constant_bin[ 439390 ], 10, 1 );
    const_str_plain_HKEY = UNSTREAM_STRING( &constant_bin[ 439400 ], 4, 1 );
    const_str_plain_RECTL = UNSTREAM_STRING( &constant_bin[ 438880 ], 5, 1 );
    const_str_plain_PLARGE_INTEGER = UNSTREAM_STRING( &constant_bin[ 439404 ], 14, 1 );
    const_str_plain_HSTR = UNSTREAM_STRING( &constant_bin[ 439418 ], 4, 1 );
    const_str_plain_LPWIN32_FIND_DATAW = UNSTREAM_STRING( &constant_bin[ 439422 ], 18, 1 );
    const_str_plain_nFileSizeLow = UNSTREAM_STRING( &constant_bin[ 439440 ], 12, 1 );
    const_str_plain_SC_HANDLE = UNSTREAM_STRING( &constant_bin[ 439209 ], 9, 1 );
    const_str_plain__SMALL_RECT = UNSTREAM_STRING( &constant_bin[ 439452 ], 11, 1 );
    const_str_plain_PMSG = UNSTREAM_STRING( &constant_bin[ 439347 ], 4, 1 );
    const_str_plain_PINT = UNSTREAM_STRING( &constant_bin[ 439373 ], 4, 1 );
    const_str_plain_WCHAR = UNSTREAM_STRING( &constant_bin[ 439159 ], 5, 1 );
    const_str_plain_dwFileAttributes = UNSTREAM_STRING( &constant_bin[ 439463 ], 16, 1 );
    const_str_plain_SMALL_RECT = UNSTREAM_STRING( &constant_bin[ 439453 ], 10, 1 );
    const_str_plain_HMONITOR = UNSTREAM_STRING( &constant_bin[ 439479 ], 8, 1 );
    const_str_plain_POINT = UNSTREAM_STRING( &constant_bin[ 439082 ], 5, 1 );
    const_str_plain_SIZEL = UNSTREAM_STRING( &constant_bin[ 439244 ], 5, 1 );
    const_str_plain_LPLONG = UNSTREAM_STRING( &constant_bin[ 439487 ], 6, 1 );
    const_str_plain_HPEN = UNSTREAM_STRING( &constant_bin[ 439493 ], 4, 1 );
    const_str_plain_HMETAFILE = UNSTREAM_STRING( &constant_bin[ 439497 ], 9, 1 );
    const_str_plain__FILETIME = UNSTREAM_STRING( &constant_bin[ 439506 ], 9, 1 );
    const_str_plain_LCID = UNSTREAM_STRING( &constant_bin[ 439515 ], 4, 1 );
    const_str_plain_PRECT = UNSTREAM_STRING( &constant_bin[ 439006 ], 5, 1 );
    const_str_plain_PWIN32_FIND_DATAW = UNSTREAM_STRING( &constant_bin[ 439423 ], 17, 1 );
    const_str_plain_PDWORD = UNSTREAM_STRING( &constant_bin[ 439519 ], 6, 1 );
    const_str_plain_bottom = UNSTREAM_STRING( &constant_bin[ 429414 ], 6, 1 );
    const_str_plain_tagPOINT = UNSTREAM_STRING( &constant_bin[ 439525 ], 8, 1 );
    const_str_plain_HRSRC = UNSTREAM_STRING( &constant_bin[ 439533 ], 5, 1 );
    const_str_plain_PHKEY = UNSTREAM_STRING( &constant_bin[ 439538 ], 5, 1 );
    const_str_plain_LPWIN32_FIND_DATAA = UNSTREAM_STRING( &constant_bin[ 439543 ], 18, 1 );
    const_str_plain_HGDIOBJ = UNSTREAM_STRING( &constant_bin[ 439561 ], 7, 1 );
    const_str_plain_PULONG = UNSTREAM_STRING( &constant_bin[ 439568 ], 6, 1 );
    const_str_plain_PSMALL_RECT = UNSTREAM_STRING( &constant_bin[ 439574 ], 11, 1 );
    const_str_plain_LPUINT = UNSTREAM_STRING( &constant_bin[ 439585 ], 6, 1 );
    const_str_plain_cy = UNSTREAM_STRING( &constant_bin[ 846 ], 2, 1 );
    const_str_plain_lParam = UNSTREAM_STRING( &constant_bin[ 439591 ], 6, 1 );
    const_str_plain_PPOINT = UNSTREAM_STRING( &constant_bin[ 439152 ], 6, 1 );
    const_str_plain_LPCOLESTR = UNSTREAM_STRING( &constant_bin[ 439597 ], 9, 1 );
    const_str_plain_HBITMAP = UNSTREAM_STRING( &constant_bin[ 439606 ], 7, 1 );
    const_str_plain_PRECTL = UNSTREAM_STRING( &constant_bin[ 439006 ], 6, 1 );
    const_str_plain_LARGE_INTEGER = UNSTREAM_STRING( &constant_bin[ 438803 ], 13, 1 );
    const_str_plain_HACCEL = UNSTREAM_STRING( &constant_bin[ 439613 ], 6, 1 );
    const_str_plain__COORD = UNSTREAM_STRING( &constant_bin[ 439619 ], 6, 1 );
    const_str_plain_ftCreationTime = UNSTREAM_STRING( &constant_bin[ 439625 ], 14, 1 );
    const_str_plain_PHANDLE = UNSTREAM_STRING( &constant_bin[ 439012 ], 7, 1 );
    const_str_plain_PLCID = UNSTREAM_STRING( &constant_bin[ 439639 ], 5, 1 );
    const_str_plain_LGRPID = UNSTREAM_STRING( &constant_bin[ 439644 ], 6, 1 );
    const_str_plain_HHOOK = UNSTREAM_STRING( &constant_bin[ 439650 ], 5, 1 );
    const_str_plain_HWND = UNSTREAM_STRING( &constant_bin[ 439655 ], 4, 1 );
    const_str_plain_tagRECT = UNSTREAM_STRING( &constant_bin[ 439659 ], 7, 1 );
    const_str_plain_PBOOLEAN = UNSTREAM_STRING( &constant_bin[ 439666 ], 8, 1 );
    const_str_plain_ULARGE_INTEGER = UNSTREAM_STRING( &constant_bin[ 438802 ], 14, 1 );
    const_str_plain_HENHMETAFILE = UNSTREAM_STRING( &constant_bin[ 439674 ], 12, 1 );
    const_str_plain_UINT = UNSTREAM_STRING( &constant_bin[ 439119 ], 4, 1 );
    const_str_plain_PPOINTL = UNSTREAM_STRING( &constant_bin[ 439686 ], 7, 1 );
    const_str_plain_LPOLESTR = UNSTREAM_STRING( &constant_bin[ 439693 ], 8, 1 );
    const_str_plain_VARIANT_BOOL = UNSTREAM_STRING( &constant_bin[ 439299 ], 12, 1 );
    const_str_plain_PFILETIME = UNSTREAM_STRING( &constant_bin[ 438817 ], 9, 1 );
    const_str_plain_ftLastWriteTime = UNSTREAM_STRING( &constant_bin[ 439701 ], 15, 1 );
    const_str_plain_PSIZE = UNSTREAM_STRING( &constant_bin[ 151044 ], 5, 1 );
    const_str_plain_PWORD = UNSTREAM_STRING( &constant_bin[ 439262 ], 5, 1 );
    const_str_plain_dwReserved1 = UNSTREAM_STRING( &constant_bin[ 439716 ], 11, 1 );
    const_str_plain_LPSIZE = UNSTREAM_STRING( &constant_bin[ 439242 ], 6, 1 );
    const_str_plain_PCHAR = UNSTREAM_STRING( &constant_bin[ 439727 ], 5, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_ctypes$wintypes( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_579ff0fb490bef2aa8f06b4861507834;
static PyCodeObject *codeobj_e4e9581dbca2d971bf23a161321c4652;
static PyCodeObject *codeobj_d6f7ed2d7e05ae44e62673b7ff15ec5f;
static PyCodeObject *codeobj_2862df3176ecf90d7fe03de65fe2bbf6;
static PyCodeObject *codeobj_12c81d339c62241300e8b6aa10f78dd1;
static PyCodeObject *codeobj_bf1d2d4b6a2fc3c6010769afda7e0adc;
static PyCodeObject *codeobj_de6b6dbef24bead99026302dfc13c522;
static PyCodeObject *codeobj_d74126046c8854fa78e92f2b54dcfc77;
static PyCodeObject *codeobj_10a98a656fb78d06d337dfc6810a6e25;
static PyCodeObject *codeobj_016a64d87105893cca35a708be27affe;
static PyCodeObject *codeobj_5f6a648973f1a04c153fa4957c165188;
static PyCodeObject *codeobj_f7087ddba4ee43a3a9fe5c5666a34db1;
static PyCodeObject *codeobj_92192b71b8e7c1a146cc950132334e87;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_226578bed50812bc2d21c3dafddb24ad;
    codeobj_579ff0fb490bef2aa8f06b4861507834 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_addd42a1fd87d71111870fd0a46e8850, 1, const_tuple_empty, 0, 0, CO_NOFREE );
    codeobj_e4e9581dbca2d971bf23a161321c4652 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_FILETIME, 128, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_d6f7ed2d7e05ae44e62673b7ff15ec5f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_MSG, 133, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_2862df3176ecf90d7fe03de65fe2bbf6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_POINT, 115, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_12c81d339c62241300e8b6aa10f78dd1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_RECT, 97, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_bf1d2d4b6a2fc3c6010769afda7e0adc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_RGB, 125, const_tuple_str_plain_red_str_plain_green_str_plain_blue_tuple, 3, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_de6b6dbef24bead99026302dfc13c522 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SIZE, 120, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_d74126046c8854fa78e92f2b54dcfc77 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_VARIANT_BOOL, 20, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_10a98a656fb78d06d337dfc6810a6e25 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_WIN32_FIND_DATAA, 143, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_016a64d87105893cca35a708be27affe = MAKE_CODEOBJ( module_filename_obj, const_str_plain_WIN32_FIND_DATAW, 155, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_5f6a648973f1a04c153fa4957c165188 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__COORD, 111, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_f7087ddba4ee43a3a9fe5c5666a34db1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__SMALL_RECT, 104, const_tuple_str_plain___class___tuple, 0, 0, CO_NOFREE );
    codeobj_92192b71b8e7c1a146cc950132334e87 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 22, const_tuple_str_plain_self_tuple, 1, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_ctypes$wintypes$$$function_1___repr__(  );


static PyObject *MAKE_FUNCTION_ctypes$wintypes$$$function_2_RGB(  );


// The module function definitions.
static PyObject *impl_ctypes$wintypes$$$function_1___repr__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
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
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    static struct Nuitka_FrameObject *cache_frame_92192b71b8e7c1a146cc950132334e87 = NULL;

    struct Nuitka_FrameObject *frame_92192b71b8e7c1a146cc950132334e87;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_92192b71b8e7c1a146cc950132334e87, codeobj_92192b71b8e7c1a146cc950132334e87, module_ctypes$wintypes, sizeof(void *) );
    frame_92192b71b8e7c1a146cc950132334e87 = cache_frame_92192b71b8e7c1a146cc950132334e87;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_92192b71b8e7c1a146cc950132334e87 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_92192b71b8e7c1a146cc950132334e87 ) == 2 ); // Frame stack

    // Framed code:
    tmp_left_name_1 = const_str_digest_d44bacc2290b5d18e632348ff9d94d65;
    tmp_source_name_2 = par_self;

    CHECK_OBJECT( tmp_source_name_2 );
    tmp_source_name_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = PyTuple_New( 2 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_source_name_3 = par_self;

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 23;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_value );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 23;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_92192b71b8e7c1a146cc950132334e87 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_92192b71b8e7c1a146cc950132334e87 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_92192b71b8e7c1a146cc950132334e87 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_92192b71b8e7c1a146cc950132334e87, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_92192b71b8e7c1a146cc950132334e87->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_92192b71b8e7c1a146cc950132334e87, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_92192b71b8e7c1a146cc950132334e87,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_92192b71b8e7c1a146cc950132334e87 == cache_frame_92192b71b8e7c1a146cc950132334e87 )
    {
        Py_DECREF( frame_92192b71b8e7c1a146cc950132334e87 );
    }
    cache_frame_92192b71b8e7c1a146cc950132334e87 = NULL;

    assertFrameObject( frame_92192b71b8e7c1a146cc950132334e87 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes$$$function_1___repr__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes$$$function_1___repr__ );
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


static PyObject *impl_ctypes$wintypes$$$function_2_RGB( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_red = python_pars[ 0 ];
    PyObject *par_green = python_pars[ 1 ];
    PyObject *par_blue = python_pars[ 2 ];
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    static struct Nuitka_FrameObject *cache_frame_bf1d2d4b6a2fc3c6010769afda7e0adc = NULL;

    struct Nuitka_FrameObject *frame_bf1d2d4b6a2fc3c6010769afda7e0adc;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bf1d2d4b6a2fc3c6010769afda7e0adc, codeobj_bf1d2d4b6a2fc3c6010769afda7e0adc, module_ctypes$wintypes, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_bf1d2d4b6a2fc3c6010769afda7e0adc = cache_frame_bf1d2d4b6a2fc3c6010769afda7e0adc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bf1d2d4b6a2fc3c6010769afda7e0adc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bf1d2d4b6a2fc3c6010769afda7e0adc ) == 2 ); // Frame stack

    // Framed code:
    tmp_left_name_2 = par_red;

    CHECK_OBJECT( tmp_left_name_2 );
    tmp_left_name_3 = par_green;

    CHECK_OBJECT( tmp_left_name_3 );
    tmp_right_name_2 = const_int_pos_8;
    tmp_right_name_1 = BINARY_OPERATION( PyNumber_Lshift, tmp_left_name_3, tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_left_name_4 = par_blue;

    if ( tmp_left_name_4 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "local variable '%s' referenced before assignment", "blue" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 126;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_right_name_4 = const_int_pos_16;
    tmp_right_name_3 = BINARY_OPERATION( PyNumber_Lshift, tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 126;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bf1d2d4b6a2fc3c6010769afda7e0adc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_bf1d2d4b6a2fc3c6010769afda7e0adc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bf1d2d4b6a2fc3c6010769afda7e0adc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bf1d2d4b6a2fc3c6010769afda7e0adc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bf1d2d4b6a2fc3c6010769afda7e0adc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bf1d2d4b6a2fc3c6010769afda7e0adc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bf1d2d4b6a2fc3c6010769afda7e0adc,
        type_description_1,
        par_red,
        par_green,
        par_blue
    );


    // Release cached frame.
    if ( frame_bf1d2d4b6a2fc3c6010769afda7e0adc == cache_frame_bf1d2d4b6a2fc3c6010769afda7e0adc )
    {
        Py_DECREF( frame_bf1d2d4b6a2fc3c6010769afda7e0adc );
    }
    cache_frame_bf1d2d4b6a2fc3c6010769afda7e0adc = NULL;

    assertFrameObject( frame_bf1d2d4b6a2fc3c6010769afda7e0adc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes$$$function_2_RGB );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_red );
    par_red = NULL;

    Py_XDECREF( par_green );
    par_green = NULL;

    Py_XDECREF( par_blue );
    par_blue = NULL;

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

    Py_XDECREF( par_red );
    par_red = NULL;

    Py_XDECREF( par_green );
    par_green = NULL;

    Py_XDECREF( par_blue );
    par_blue = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes$$$function_2_RGB );
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



static PyObject *MAKE_FUNCTION_ctypes$wintypes$$$function_1___repr__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ctypes$wintypes$$$function_1___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 330
        const_str_digest_fb4ae9f735decc5abd7c4bf31d9aaf0c,
#endif
        codeobj_92192b71b8e7c1a146cc950132334e87,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_ctypes$wintypes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_ctypes$wintypes$$$function_2_RGB(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_ctypes$wintypes$$$function_2_RGB,
        const_str_plain_RGB,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bf1d2d4b6a2fc3c6010769afda7e0adc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_ctypes$wintypes,
        Py_None,
        0
    );


    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_ctypes$wintypes =
{
    PyModuleDef_HEAD_INIT,
    "ctypes.wintypes",   /* m_name */
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

MOD_INIT_DECL( ctypes$wintypes )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_ctypes$wintypes );
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
    puts("ctypes.wintypes: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("ctypes.wintypes: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("ctypes.wintypes: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initctypes$wintypes" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_ctypes$wintypes = Py_InitModule4(
        "ctypes.wintypes",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_ctypes$wintypes = PyModule_Create( &mdef_ctypes$wintypes );
#endif

    moduledict_ctypes$wintypes = MODULE_DICT( module_ctypes$wintypes );

    // Update "__package__" value to what it ought to be.
    {
#if 0
#if PYTHON_VERSION < 300 || PYTHON_VERSION >= 330
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_ctypes$wintypes,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#endif

#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_ctypes$wintypes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#elif PYTHON_VERSION < 330
        UPDATE_STRING_DICT1(
            moduledict_ctypes$wintypes,
            (Nuitka_StringObject *)const_str_plain___package__,
            Py_None
        );
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_ctypes$wintypes,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_ctypes$wintypes );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_5cf36b708703fd37649115cac3d2ec3c, module_ctypes$wintypes );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 330
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain___loader__, metapath_based_loader );
#endif

#if PYTHON_VERSION >= 340
#if 0
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain___name__ ),
            metapath_based_loader
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );

        UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );

        Py_DECREF( module_spec_class );
    }
#endif
#endif


    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *outline_5_var___class__ = NULL;
    PyObject *outline_6_var___class__ = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *outline_8_var___class__ = NULL;
    PyObject *outline_9_var___class__ = NULL;
    PyObject *tmp_assign_unpack_10__assign_source = NULL;
    PyObject *tmp_assign_unpack_11__assign_source = NULL;
    PyObject *tmp_assign_unpack_12__assign_source = NULL;
    PyObject *tmp_assign_unpack_13__assign_source = NULL;
    PyObject *tmp_assign_unpack_14__assign_source = NULL;
    PyObject *tmp_assign_unpack_15__assign_source = NULL;
    PyObject *tmp_assign_unpack_16__assign_source = NULL;
    PyObject *tmp_assign_unpack_17__assign_source = NULL;
    PyObject *tmp_assign_unpack_18__assign_source = NULL;
    PyObject *tmp_assign_unpack_19__assign_source = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_assign_unpack_20__assign_source = NULL;
    PyObject *tmp_assign_unpack_21__assign_source = NULL;
    PyObject *tmp_assign_unpack_22__assign_source = NULL;
    PyObject *tmp_assign_unpack_23__assign_source = NULL;
    PyObject *tmp_assign_unpack_24__assign_source = NULL;
    PyObject *tmp_assign_unpack_25__assign_source = NULL;
    PyObject *tmp_assign_unpack_26__assign_source = NULL;
    PyObject *tmp_assign_unpack_2__assign_source = NULL;
    PyObject *tmp_assign_unpack_3__assign_source = NULL;
    PyObject *tmp_assign_unpack_4__assign_source = NULL;
    PyObject *tmp_assign_unpack_5__assign_source = NULL;
    PyObject *tmp_assign_unpack_6__assign_source = NULL;
    PyObject *tmp_assign_unpack_7__assign_source = NULL;
    PyObject *tmp_assign_unpack_8__assign_source = NULL;
    PyObject *tmp_assign_unpack_9__assign_source = NULL;
    PyObject *tmp_class_creation_10__bases = NULL;
    PyObject *tmp_class_creation_10__class_decl_dict = NULL;
    PyObject *tmp_class_creation_10__metaclass = NULL;
    PyObject *tmp_class_creation_10__prepared = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__class_decl_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_class_creation_6__prepared = NULL;
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__class_decl_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__prepared = NULL;
    PyObject *tmp_class_creation_8__bases = NULL;
    PyObject *tmp_class_creation_8__class_decl_dict = NULL;
    PyObject *tmp_class_creation_8__metaclass = NULL;
    PyObject *tmp_class_creation_8__prepared = NULL;
    PyObject *tmp_class_creation_9__bases = NULL;
    PyObject *tmp_class_creation_9__class_decl_dict = NULL;
    PyObject *tmp_class_creation_9__metaclass = NULL;
    PyObject *tmp_class_creation_9__prepared = NULL;
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
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
    PyObject *exception_keeper_type_54;
    PyObject *exception_keeper_value_54;
    PyTracebackObject *exception_keeper_tb_54;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
    PyObject *exception_keeper_type_55;
    PyObject *exception_keeper_value_55;
    PyTracebackObject *exception_keeper_tb_55;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
    PyObject *exception_keeper_type_56;
    PyObject *exception_keeper_value_56;
    PyTracebackObject *exception_keeper_tb_56;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
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
    PyObject *tmp_args_element_name_28;
    PyObject *tmp_args_element_name_29;
    PyObject *tmp_args_element_name_30;
    PyObject *tmp_args_element_name_31;
    PyObject *tmp_args_element_name_32;
    PyObject *tmp_args_element_name_33;
    PyObject *tmp_args_element_name_34;
    PyObject *tmp_args_element_name_35;
    PyObject *tmp_args_element_name_36;
    PyObject *tmp_args_element_name_37;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_args_name_5;
    PyObject *tmp_args_name_6;
    PyObject *tmp_args_name_7;
    PyObject *tmp_args_name_8;
    PyObject *tmp_args_name_9;
    PyObject *tmp_args_name_10;
    PyObject *tmp_args_name_11;
    PyObject *tmp_args_name_12;
    PyObject *tmp_args_name_13;
    PyObject *tmp_args_name_14;
    PyObject *tmp_args_name_15;
    PyObject *tmp_args_name_16;
    PyObject *tmp_args_name_17;
    PyObject *tmp_args_name_18;
    PyObject *tmp_args_name_19;
    PyObject *tmp_args_name_20;
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
    PyObject *tmp_assign_source_80;
    PyObject *tmp_assign_source_81;
    PyObject *tmp_assign_source_82;
    PyObject *tmp_assign_source_83;
    PyObject *tmp_assign_source_84;
    PyObject *tmp_assign_source_85;
    PyObject *tmp_assign_source_86;
    PyObject *tmp_assign_source_87;
    PyObject *tmp_assign_source_88;
    PyObject *tmp_assign_source_89;
    PyObject *tmp_assign_source_90;
    PyObject *tmp_assign_source_91;
    PyObject *tmp_assign_source_92;
    PyObject *tmp_assign_source_93;
    PyObject *tmp_assign_source_94;
    PyObject *tmp_assign_source_95;
    PyObject *tmp_assign_source_96;
    PyObject *tmp_assign_source_97;
    PyObject *tmp_assign_source_98;
    PyObject *tmp_assign_source_99;
    PyObject *tmp_assign_source_100;
    PyObject *tmp_assign_source_101;
    PyObject *tmp_assign_source_102;
    PyObject *tmp_assign_source_103;
    PyObject *tmp_assign_source_104;
    PyObject *tmp_assign_source_105;
    PyObject *tmp_assign_source_106;
    PyObject *tmp_assign_source_107;
    PyObject *tmp_assign_source_108;
    PyObject *tmp_assign_source_109;
    PyObject *tmp_assign_source_110;
    PyObject *tmp_assign_source_111;
    PyObject *tmp_assign_source_112;
    PyObject *tmp_assign_source_113;
    PyObject *tmp_assign_source_114;
    PyObject *tmp_assign_source_115;
    PyObject *tmp_assign_source_116;
    PyObject *tmp_assign_source_117;
    PyObject *tmp_assign_source_118;
    PyObject *tmp_assign_source_119;
    PyObject *tmp_assign_source_120;
    PyObject *tmp_assign_source_121;
    PyObject *tmp_assign_source_122;
    PyObject *tmp_assign_source_123;
    PyObject *tmp_assign_source_124;
    PyObject *tmp_assign_source_125;
    PyObject *tmp_assign_source_126;
    PyObject *tmp_assign_source_127;
    PyObject *tmp_assign_source_128;
    PyObject *tmp_assign_source_129;
    PyObject *tmp_assign_source_130;
    PyObject *tmp_assign_source_131;
    PyObject *tmp_assign_source_132;
    PyObject *tmp_assign_source_133;
    PyObject *tmp_assign_source_134;
    PyObject *tmp_assign_source_135;
    PyObject *tmp_assign_source_136;
    PyObject *tmp_assign_source_137;
    PyObject *tmp_assign_source_138;
    PyObject *tmp_assign_source_139;
    PyObject *tmp_assign_source_140;
    PyObject *tmp_assign_source_141;
    PyObject *tmp_assign_source_142;
    PyObject *tmp_assign_source_143;
    PyObject *tmp_assign_source_144;
    PyObject *tmp_assign_source_145;
    PyObject *tmp_assign_source_146;
    PyObject *tmp_assign_source_147;
    PyObject *tmp_assign_source_148;
    PyObject *tmp_assign_source_149;
    PyObject *tmp_assign_source_150;
    PyObject *tmp_assign_source_151;
    PyObject *tmp_assign_source_152;
    PyObject *tmp_assign_source_153;
    PyObject *tmp_assign_source_154;
    PyObject *tmp_assign_source_155;
    PyObject *tmp_assign_source_156;
    PyObject *tmp_assign_source_157;
    PyObject *tmp_assign_source_158;
    PyObject *tmp_assign_source_159;
    PyObject *tmp_assign_source_160;
    PyObject *tmp_assign_source_161;
    PyObject *tmp_assign_source_162;
    PyObject *tmp_assign_source_163;
    PyObject *tmp_assign_source_164;
    PyObject *tmp_assign_source_165;
    PyObject *tmp_assign_source_166;
    PyObject *tmp_assign_source_167;
    PyObject *tmp_assign_source_168;
    PyObject *tmp_assign_source_169;
    PyObject *tmp_assign_source_170;
    PyObject *tmp_assign_source_171;
    PyObject *tmp_assign_source_172;
    PyObject *tmp_assign_source_173;
    PyObject *tmp_assign_source_174;
    PyObject *tmp_assign_source_175;
    PyObject *tmp_assign_source_176;
    PyObject *tmp_assign_source_177;
    PyObject *tmp_assign_source_178;
    PyObject *tmp_assign_source_179;
    PyObject *tmp_assign_source_180;
    PyObject *tmp_assign_source_181;
    PyObject *tmp_assign_source_182;
    PyObject *tmp_assign_source_183;
    PyObject *tmp_assign_source_184;
    PyObject *tmp_assign_source_185;
    PyObject *tmp_assign_source_186;
    PyObject *tmp_assign_source_187;
    PyObject *tmp_assign_source_188;
    PyObject *tmp_assign_source_189;
    PyObject *tmp_assign_source_190;
    PyObject *tmp_assign_source_191;
    PyObject *tmp_assign_source_192;
    PyObject *tmp_assign_source_193;
    PyObject *tmp_assign_source_194;
    PyObject *tmp_assign_source_195;
    PyObject *tmp_assign_source_196;
    PyObject *tmp_assign_source_197;
    PyObject *tmp_assign_source_198;
    PyObject *tmp_assign_source_199;
    PyObject *tmp_assign_source_200;
    PyObject *tmp_assign_source_201;
    PyObject *tmp_assign_source_202;
    PyObject *tmp_assign_source_203;
    PyObject *tmp_assign_source_204;
    PyObject *tmp_assign_source_205;
    PyObject *tmp_assign_source_206;
    PyObject *tmp_assign_source_207;
    PyObject *tmp_assign_source_208;
    PyObject *tmp_assign_source_209;
    PyObject *tmp_assign_source_210;
    PyObject *tmp_assign_source_211;
    PyObject *tmp_assign_source_212;
    PyObject *tmp_assign_source_213;
    PyObject *tmp_assign_source_214;
    PyObject *tmp_assign_source_215;
    PyObject *tmp_assign_source_216;
    PyObject *tmp_assign_source_217;
    PyObject *tmp_assign_source_218;
    PyObject *tmp_assign_source_219;
    PyObject *tmp_assign_source_220;
    PyObject *tmp_assign_source_221;
    PyObject *tmp_assign_source_222;
    PyObject *tmp_assign_source_223;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_bases_name_3;
    PyObject *tmp_bases_name_4;
    PyObject *tmp_bases_name_5;
    PyObject *tmp_bases_name_6;
    PyObject *tmp_bases_name_7;
    PyObject *tmp_bases_name_8;
    PyObject *tmp_bases_name_9;
    PyObject *tmp_bases_name_10;
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
    PyObject *tmp_called_name_23;
    PyObject *tmp_called_name_24;
    PyObject *tmp_called_name_25;
    PyObject *tmp_called_name_26;
    PyObject *tmp_called_name_27;
    PyObject *tmp_called_name_28;
    PyObject *tmp_called_name_29;
    PyObject *tmp_called_name_30;
    PyObject *tmp_called_name_31;
    PyObject *tmp_called_name_32;
    PyObject *tmp_called_name_33;
    PyObject *tmp_called_name_34;
    PyObject *tmp_called_name_35;
    PyObject *tmp_called_name_36;
    PyObject *tmp_called_name_37;
    PyObject *tmp_called_name_38;
    PyObject *tmp_called_name_39;
    PyObject *tmp_called_name_40;
    PyObject *tmp_called_name_41;
    PyObject *tmp_called_name_42;
    PyObject *tmp_called_name_43;
    PyObject *tmp_called_name_44;
    PyObject *tmp_called_name_45;
    PyObject *tmp_called_name_46;
    PyObject *tmp_called_name_47;
    PyObject *tmp_called_name_48;
    PyObject *tmp_called_name_49;
    PyObject *tmp_called_name_50;
    PyObject *tmp_called_name_51;
    PyObject *tmp_called_name_52;
    PyObject *tmp_called_name_53;
    PyObject *tmp_called_name_54;
    PyObject *tmp_called_name_55;
    PyObject *tmp_called_name_56;
    PyObject *tmp_called_name_57;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    int tmp_cond_truth_9;
    int tmp_cond_truth_10;
    int tmp_cond_truth_11;
    int tmp_cond_truth_12;
    int tmp_cond_truth_13;
    int tmp_cond_truth_14;
    int tmp_cond_truth_15;
    int tmp_cond_truth_16;
    int tmp_cond_truth_17;
    int tmp_cond_truth_18;
    int tmp_cond_truth_19;
    int tmp_cond_truth_20;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_cond_value_9;
    PyObject *tmp_cond_value_10;
    PyObject *tmp_cond_value_11;
    PyObject *tmp_cond_value_12;
    PyObject *tmp_cond_value_13;
    PyObject *tmp_cond_value_14;
    PyObject *tmp_cond_value_15;
    PyObject *tmp_cond_value_16;
    PyObject *tmp_cond_value_17;
    PyObject *tmp_cond_value_18;
    PyObject *tmp_cond_value_19;
    PyObject *tmp_cond_value_20;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_dict_name_6;
    PyObject *tmp_dict_name_7;
    PyObject *tmp_dict_name_8;
    PyObject *tmp_dict_name_9;
    PyObject *tmp_dict_name_10;
    PyObject *tmp_dict_name_11;
    PyObject *tmp_dict_name_12;
    PyObject *tmp_dict_name_13;
    PyObject *tmp_dict_name_14;
    PyObject *tmp_dict_name_15;
    PyObject *tmp_dict_name_16;
    PyObject *tmp_dict_name_17;
    PyObject *tmp_dict_name_18;
    PyObject *tmp_dict_name_19;
    PyObject *tmp_dict_name_20;
    PyObject *tmp_dict_name_21;
    PyObject *tmp_dict_name_22;
    PyObject *tmp_dict_name_23;
    PyObject *tmp_dict_name_24;
    PyObject *tmp_dict_name_25;
    PyObject *tmp_dict_name_26;
    PyObject *tmp_dict_name_27;
    PyObject *tmp_dict_name_28;
    PyObject *tmp_dict_name_29;
    PyObject *tmp_dict_name_30;
    PyObject *tmp_dictdel_dict;
    PyObject *tmp_dictdel_key;
    PyObject *tmp_dictset_value;
    PyObject *tmp_fromlist_name_1;
    PyObject *tmp_globals_name_1;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_attr_3;
    PyObject *tmp_hasattr_attr_4;
    PyObject *tmp_hasattr_attr_5;
    PyObject *tmp_hasattr_attr_6;
    PyObject *tmp_hasattr_attr_7;
    PyObject *tmp_hasattr_attr_8;
    PyObject *tmp_hasattr_attr_9;
    PyObject *tmp_hasattr_attr_10;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    PyObject *tmp_hasattr_source_3;
    PyObject *tmp_hasattr_source_4;
    PyObject *tmp_hasattr_source_5;
    PyObject *tmp_hasattr_source_6;
    PyObject *tmp_hasattr_source_7;
    PyObject *tmp_hasattr_source_8;
    PyObject *tmp_hasattr_source_9;
    PyObject *tmp_hasattr_source_10;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_key_name_4;
    PyObject *tmp_key_name_5;
    PyObject *tmp_key_name_6;
    PyObject *tmp_key_name_7;
    PyObject *tmp_key_name_8;
    PyObject *tmp_key_name_9;
    PyObject *tmp_key_name_10;
    PyObject *tmp_key_name_11;
    PyObject *tmp_key_name_12;
    PyObject *tmp_key_name_13;
    PyObject *tmp_key_name_14;
    PyObject *tmp_key_name_15;
    PyObject *tmp_key_name_16;
    PyObject *tmp_key_name_17;
    PyObject *tmp_key_name_18;
    PyObject *tmp_key_name_19;
    PyObject *tmp_key_name_20;
    PyObject *tmp_key_name_21;
    PyObject *tmp_key_name_22;
    PyObject *tmp_key_name_23;
    PyObject *tmp_key_name_24;
    PyObject *tmp_key_name_25;
    PyObject *tmp_key_name_26;
    PyObject *tmp_key_name_27;
    PyObject *tmp_key_name_28;
    PyObject *tmp_key_name_29;
    PyObject *tmp_key_name_30;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_kw_name_6;
    PyObject *tmp_kw_name_7;
    PyObject *tmp_kw_name_8;
    PyObject *tmp_kw_name_9;
    PyObject *tmp_kw_name_10;
    PyObject *tmp_kw_name_11;
    PyObject *tmp_kw_name_12;
    PyObject *tmp_kw_name_13;
    PyObject *tmp_kw_name_14;
    PyObject *tmp_kw_name_15;
    PyObject *tmp_kw_name_16;
    PyObject *tmp_kw_name_17;
    PyObject *tmp_kw_name_18;
    PyObject *tmp_kw_name_19;
    PyObject *tmp_kw_name_20;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_level_name_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_list_element_3;
    PyObject *tmp_list_element_4;
    PyObject *tmp_list_element_5;
    PyObject *tmp_list_element_6;
    PyObject *tmp_list_element_7;
    PyObject *tmp_list_element_8;
    PyObject *tmp_list_element_9;
    PyObject *tmp_locals_name_1;
    PyObject *tmp_metaclass_name_1;
    PyObject *tmp_metaclass_name_2;
    PyObject *tmp_metaclass_name_3;
    PyObject *tmp_metaclass_name_4;
    PyObject *tmp_metaclass_name_5;
    PyObject *tmp_metaclass_name_6;
    PyObject *tmp_metaclass_name_7;
    PyObject *tmp_metaclass_name_8;
    PyObject *tmp_metaclass_name_9;
    PyObject *tmp_metaclass_name_10;
    PyObject *tmp_name_name_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_outline_return_value_3;
    PyObject *tmp_outline_return_value_4;
    PyObject *tmp_outline_return_value_5;
    PyObject *tmp_outline_return_value_6;
    PyObject *tmp_outline_return_value_7;
    PyObject *tmp_outline_return_value_8;
    PyObject *tmp_outline_return_value_9;
    PyObject *tmp_outline_return_value_10;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_set_locals;
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
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_source_name_26;
    PyObject *tmp_source_name_27;
    PyObject *tmp_source_name_28;
    PyObject *tmp_source_name_29;
    PyObject *tmp_source_name_30;
    PyObject *tmp_source_name_31;
    PyObject *tmp_source_name_32;
    PyObject *tmp_source_name_33;
    PyObject *tmp_source_name_34;
    PyObject *tmp_source_name_35;
    PyObject *tmp_source_name_36;
    PyObject *tmp_source_name_37;
    PyObject *tmp_source_name_38;
    PyObject *tmp_source_name_39;
    PyObject *tmp_source_name_40;
    PyObject *tmp_source_name_41;
    PyObject *tmp_source_name_42;
    PyObject *tmp_source_name_43;
    PyObject *tmp_source_name_44;
    PyObject *tmp_source_name_45;
    PyObject *tmp_source_name_46;
    PyObject *tmp_source_name_47;
    PyObject *tmp_source_name_48;
    PyObject *tmp_source_name_49;
    PyObject *tmp_source_name_50;
    PyObject *tmp_source_name_51;
    PyObject *tmp_source_name_52;
    PyObject *tmp_source_name_53;
    PyObject *tmp_source_name_54;
    PyObject *tmp_source_name_55;
    PyObject *tmp_source_name_56;
    PyObject *tmp_source_name_57;
    PyObject *tmp_source_name_58;
    PyObject *tmp_source_name_59;
    PyObject *tmp_source_name_60;
    PyObject *tmp_source_name_61;
    PyObject *tmp_source_name_62;
    PyObject *tmp_source_name_63;
    PyObject *tmp_source_name_64;
    PyObject *tmp_source_name_65;
    PyObject *tmp_source_name_66;
    PyObject *tmp_source_name_67;
    PyObject *tmp_source_name_68;
    PyObject *tmp_source_name_69;
    PyObject *tmp_source_name_70;
    PyObject *tmp_source_name_71;
    PyObject *tmp_source_name_72;
    PyObject *tmp_source_name_73;
    PyObject *tmp_source_name_74;
    PyObject *tmp_source_name_75;
    PyObject *tmp_source_name_76;
    PyObject *tmp_source_name_77;
    PyObject *tmp_source_name_78;
    PyObject *tmp_source_name_79;
    PyObject *tmp_source_name_80;
    PyObject *tmp_source_name_81;
    PyObject *tmp_source_name_82;
    PyObject *tmp_source_name_83;
    PyObject *tmp_source_name_84;
    PyObject *tmp_source_name_85;
    PyObject *tmp_source_name_86;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscribed_name_8;
    PyObject *tmp_subscribed_name_9;
    PyObject *tmp_subscribed_name_10;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_subscript_name_8;
    PyObject *tmp_subscript_name_9;
    PyObject *tmp_subscript_name_10;
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
    PyObject *tmp_tuple_element_33;
    PyObject *tmp_tuple_element_34;
    PyObject *tmp_tuple_element_35;
    PyObject *tmp_tuple_element_36;
    PyObject *tmp_tuple_element_37;
    PyObject *tmp_tuple_element_38;
    PyObject *tmp_tuple_element_39;
    PyObject *tmp_tuple_element_40;
    PyObject *tmp_tuple_element_41;
    PyObject *tmp_tuple_element_42;
    PyObject *tmp_tuple_element_43;
    PyObject *tmp_tuple_element_44;
    PyObject *tmp_tuple_element_45;
    PyObject *tmp_tuple_element_46;
    PyObject *tmp_tuple_element_47;
    PyObject *tmp_tuple_element_48;
    PyObject *tmp_tuple_element_49;
    PyObject *tmp_tuple_element_50;
    PyObject *tmp_tuple_element_51;
    PyObject *tmp_tuple_element_52;
    PyObject *tmp_tuple_element_53;
    PyObject *tmp_tuple_element_54;
    PyObject *tmp_tuple_element_55;
    PyObject *tmp_tuple_element_56;
    PyObject *tmp_tuple_element_57;
    PyObject *tmp_tuple_element_58;
    PyObject *tmp_tuple_element_59;
    PyObject *tmp_tuple_element_60;
    PyObject *tmp_tuple_element_61;
    PyObject *tmp_tuple_element_62;
    PyObject *tmp_tuple_element_63;
    PyObject *tmp_tuple_element_64;
    PyObject *tmp_tuple_element_65;
    PyObject *tmp_tuple_element_66;
    PyObject *tmp_tuple_element_67;
    PyObject *tmp_tuple_element_68;
    PyObject *tmp_tuple_element_69;
    PyObject *tmp_tuple_element_70;
    PyObject *tmp_tuple_element_71;
    PyObject *tmp_tuple_element_72;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    PyObject *tmp_type_arg_3;
    PyObject *tmp_type_arg_4;
    PyObject *tmp_type_arg_5;
    PyObject *tmp_type_arg_6;
    PyObject *tmp_type_arg_7;
    PyObject *tmp_type_arg_8;
    PyObject *tmp_type_arg_9;
    PyObject *tmp_type_arg_10;
    static struct Nuitka_FrameObject *cache_frame_d74126046c8854fa78e92f2b54dcfc77_2 = NULL;

    struct Nuitka_FrameObject *frame_d74126046c8854fa78e92f2b54dcfc77_2;

    static struct Nuitka_FrameObject *cache_frame_12c81d339c62241300e8b6aa10f78dd1_3 = NULL;

    struct Nuitka_FrameObject *frame_12c81d339c62241300e8b6aa10f78dd1_3;

    static struct Nuitka_FrameObject *cache_frame_f7087ddba4ee43a3a9fe5c5666a34db1_4 = NULL;

    struct Nuitka_FrameObject *frame_f7087ddba4ee43a3a9fe5c5666a34db1_4;

    static struct Nuitka_FrameObject *cache_frame_5f6a648973f1a04c153fa4957c165188_5 = NULL;

    struct Nuitka_FrameObject *frame_5f6a648973f1a04c153fa4957c165188_5;

    static struct Nuitka_FrameObject *cache_frame_2862df3176ecf90d7fe03de65fe2bbf6_6 = NULL;

    struct Nuitka_FrameObject *frame_2862df3176ecf90d7fe03de65fe2bbf6_6;

    static struct Nuitka_FrameObject *cache_frame_de6b6dbef24bead99026302dfc13c522_7 = NULL;

    struct Nuitka_FrameObject *frame_de6b6dbef24bead99026302dfc13c522_7;

    static struct Nuitka_FrameObject *cache_frame_e4e9581dbca2d971bf23a161321c4652_8 = NULL;

    struct Nuitka_FrameObject *frame_e4e9581dbca2d971bf23a161321c4652_8;

    static struct Nuitka_FrameObject *cache_frame_d6f7ed2d7e05ae44e62673b7ff15ec5f_9 = NULL;

    struct Nuitka_FrameObject *frame_d6f7ed2d7e05ae44e62673b7ff15ec5f_9;

    static struct Nuitka_FrameObject *cache_frame_10a98a656fb78d06d337dfc6810a6e25_10 = NULL;

    struct Nuitka_FrameObject *frame_10a98a656fb78d06d337dfc6810a6e25_10;

    static struct Nuitka_FrameObject *cache_frame_016a64d87105893cca35a708be27affe_11 = NULL;

    struct Nuitka_FrameObject *frame_016a64d87105893cca35a708be27affe_11;

    struct Nuitka_FrameObject *frame_579ff0fb490bef2aa8f06b4861507834;

    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_10 = NULL;
    NUITKA_MAY_BE_UNUSED char const *type_description_11 = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;
    tmp_outline_return_value_3 = NULL;
    tmp_outline_return_value_4 = NULL;
    tmp_outline_return_value_5 = NULL;
    tmp_outline_return_value_6 = NULL;
    tmp_outline_return_value_7 = NULL;
    tmp_outline_return_value_8 = NULL;
    tmp_outline_return_value_9 = NULL;
    tmp_outline_return_value_10 = NULL;
    PyObject *locals_WIN32_FIND_DATAA_143 = NULL;
    PyObject *locals__COORD_111 = NULL;
    PyObject *locals_WIN32_FIND_DATAW_155 = NULL;
    PyObject *locals_RECT_97 = NULL;
    PyObject *locals_POINT_115 = NULL;
    PyObject *locals_MSG_133 = NULL;
    PyObject *locals_FILETIME_128 = NULL;
    PyObject *locals_VARIANT_BOOL_20 = NULL;
    PyObject *locals_SIZE_120 = NULL;
    PyObject *locals__SMALL_RECT_104 = NULL;

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_226578bed50812bc2d21c3dafddb24ad;
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = Py_None;
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain___cached__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_579ff0fb490bef2aa8f06b4861507834 = MAKE_MODULE_FRAME( codeobj_579ff0fb490bef2aa8f06b4861507834, module_ctypes$wintypes );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_579ff0fb490bef2aa8f06b4861507834 );
    assert( Py_REFCNT( frame_579ff0fb490bef2aa8f06b4861507834 ) == 2 );

    // Framed code:
    tmp_name_name_1 = const_str_plain_ctypes;
    tmp_globals_name_1 = (PyObject *)moduledict_ctypes$wintypes;
    tmp_locals_name_1 = Py_None;
    tmp_fromlist_name_1 = Py_None;
    tmp_level_name_1 = const_int_0;
    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 2;
    tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes, tmp_assign_source_4 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    CHECK_OBJECT( tmp_source_name_1 );
    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_c_byte );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_BYTE, tmp_assign_source_5 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 5;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_c_ushort );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_WORD, tmp_assign_source_6 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 6;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_c_ulong );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_DWORD, tmp_assign_source_7 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 9;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_8 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_c_char );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_CHAR, tmp_assign_source_8 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 10;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_c_wchar );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_WCHAR, tmp_assign_source_9 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 11;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_10 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_c_uint );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_UINT, tmp_assign_source_10 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 12;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_11 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_c_int );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_INT, tmp_assign_source_11 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 14;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_12 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_c_double );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_DOUBLE, tmp_assign_source_12 );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 15;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_13 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_c_float );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_FLOAT, tmp_assign_source_13 );
    tmp_assign_source_14 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_BYTE );

    if (unlikely( tmp_assign_source_14 == NULL ))
    {
        tmp_assign_source_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BYTE );
    }

    if ( tmp_assign_source_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BYTE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 17;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_BOOLEAN, tmp_assign_source_14 );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 18;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_15 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_c_long );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_BOOL, tmp_assign_source_15 );
    // Tried code:
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 20;

        goto try_except_handler_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain__SimpleCData );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_1;
    }
    tmp_assign_source_16 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_assign_source_16, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_16;

    tmp_assign_source_17 = PyDict_New();
    assert( tmp_class_creation_1__class_decl_dict == NULL );
    tmp_class_creation_1__class_decl_dict = tmp_assign_source_17;

    tmp_key_name_1 = const_str_plain_metaclass;
    tmp_dict_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_1 );
    tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_1;
    }
    tmp_cond_value_1 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

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


        exception_lineno = 20;

        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_subscribed_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_subscribed_name_1 );
    tmp_subscript_name_1 = const_int_0;
    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_1;
    }
    tmp_metaclass_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_metaclass_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_1;
    }
    condexpr_end_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_bases_name_1 );
    tmp_assign_source_18 = SELECT_METACLASS( tmp_metaclass_name_1, tmp_bases_name_1 );
    Py_DECREF( tmp_metaclass_name_1 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_18;

    tmp_key_name_3 = const_str_plain_metaclass;
    tmp_dict_name_3 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_3 );
    tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_1;
    }
    tmp_cond_value_2 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

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


        exception_lineno = 20;

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


        exception_lineno = 20;

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
    tmp_source_name_12 = tmp_class_creation_1__metaclass;

    CHECK_OBJECT( tmp_source_name_12 );
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___prepare__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_1;
    }
    tmp_tuple_element_2 = const_str_plain_VARIANT_BOOL;
    tmp_args_name_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_2 );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_1 );
    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 20;
    tmp_assign_source_19 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_1;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_assign_source_19 = PyDict_New();
    condexpr_end_2:;
    assert( tmp_class_creation_1__prepared == NULL );
    tmp_class_creation_1__prepared = tmp_assign_source_19;

    tmp_set_locals = tmp_class_creation_1__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_VARIANT_BOOL_20 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
    tmp_res = PyObject_SetItem( locals_VARIANT_BOOL_20, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_3;
    }
    tmp_dictset_value = const_str_plain_VARIANT_BOOL;
    tmp_res = PyObject_SetItem( locals_VARIANT_BOOL_20, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_3;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_d74126046c8854fa78e92f2b54dcfc77_2, codeobj_d74126046c8854fa78e92f2b54dcfc77, module_ctypes$wintypes, sizeof(void *) );
    frame_d74126046c8854fa78e92f2b54dcfc77_2 = cache_frame_d74126046c8854fa78e92f2b54dcfc77_2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d74126046c8854fa78e92f2b54dcfc77_2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d74126046c8854fa78e92f2b54dcfc77_2 ) == 2 ); // Frame stack

    // Framed code:
    tmp_dictset_value = const_str_plain_v;
    tmp_res = PyObject_SetItem( locals_VARIANT_BOOL_20, const_str_plain__type_, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }
    tmp_dictset_value = MAKE_FUNCTION_ctypes$wintypes$$$function_1___repr__(  );
    tmp_res = PyObject_SetItem( locals_VARIANT_BOOL_20, const_str_plain___repr__, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        type_description_2 = "N";
        goto frame_exception_exit_2;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d74126046c8854fa78e92f2b54dcfc77_2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d74126046c8854fa78e92f2b54dcfc77_2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d74126046c8854fa78e92f2b54dcfc77_2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d74126046c8854fa78e92f2b54dcfc77_2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d74126046c8854fa78e92f2b54dcfc77_2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d74126046c8854fa78e92f2b54dcfc77_2,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_d74126046c8854fa78e92f2b54dcfc77_2 == cache_frame_d74126046c8854fa78e92f2b54dcfc77_2 )
    {
        Py_DECREF( frame_d74126046c8854fa78e92f2b54dcfc77_2 );
    }
    cache_frame_d74126046c8854fa78e92f2b54dcfc77_2 = NULL;

    assertFrameObject( frame_d74126046c8854fa78e92f2b54dcfc77_2 );

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
    tmp_tuple_element_3 = const_str_plain_VARIANT_BOOL;
    tmp_args_name_2 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = tmp_class_creation_1__bases;

    CHECK_OBJECT( tmp_tuple_element_3 );
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = locals_VARIANT_BOOL_20;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 2, tmp_tuple_element_3 );
    tmp_kw_name_2 = tmp_class_creation_1__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_2 );
    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 20;
    tmp_assign_source_21 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;

        goto try_except_handler_3;
    }
    assert( outline_0_var___class__ == NULL );
    outline_0_var___class__ = tmp_assign_source_21;

    tmp_outline_return_value_1 = outline_0_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_1 );
    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_3:;
    Py_DECREF( locals_VARIANT_BOOL_20 );
    locals_VARIANT_BOOL_20 = NULL;
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

    Py_DECREF( locals_VARIANT_BOOL_20 );
    locals_VARIANT_BOOL_20 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
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
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_1:;
    exception_lineno = 20;
    goto try_except_handler_1;
    outline_result_1:;
    tmp_assign_source_20 = tmp_outline_return_value_1;
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_VARIANT_BOOL, tmp_assign_source_20 );
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

    Py_XDECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_decl_dict );
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
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_decl_dict );
    Py_DECREF( tmp_class_creation_1__class_decl_dict );
    tmp_class_creation_1__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__prepared );
    Py_DECREF( tmp_class_creation_1__prepared );
    tmp_class_creation_1__prepared = NULL;

    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 25;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_22 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_c_ulong );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ULONG, tmp_assign_source_22 );
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 26;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_23 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_c_long );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LONG, tmp_assign_source_23 );
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 28;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_24 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_c_ushort );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_USHORT, tmp_assign_source_24 );
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 29;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_25 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_c_short );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_SHORT, tmp_assign_source_25 );
    // Tried code:
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 32;

        goto try_except_handler_4;
    }

    tmp_assign_source_26 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_c_longlong );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;

        goto try_except_handler_4;
    }
    assert( tmp_assign_unpack_1__assign_source == NULL );
    tmp_assign_unpack_1__assign_source = tmp_assign_source_26;

    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_assign_source_27 = tmp_assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_27 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain__LARGE_INTEGER, tmp_assign_source_27 );
    tmp_assign_source_28 = tmp_assign_unpack_1__assign_source;

    CHECK_OBJECT( tmp_assign_source_28 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LARGE_INTEGER, tmp_assign_source_28 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
    Py_DECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    // Tried code:
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 33;

        goto try_except_handler_5;
    }

    tmp_assign_source_29 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_c_ulonglong );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;

        goto try_except_handler_5;
    }
    assert( tmp_assign_unpack_2__assign_source == NULL );
    tmp_assign_unpack_2__assign_source = tmp_assign_source_29;

    goto try_end_3;
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

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    tmp_assign_source_30 = tmp_assign_unpack_2__assign_source;

    CHECK_OBJECT( tmp_assign_source_30 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain__ULARGE_INTEGER, tmp_assign_source_30 );
    tmp_assign_source_31 = tmp_assign_unpack_2__assign_source;

    CHECK_OBJECT( tmp_assign_source_31 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ULARGE_INTEGER, tmp_assign_source_31 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_2__assign_source );
    Py_DECREF( tmp_assign_unpack_2__assign_source );
    tmp_assign_unpack_2__assign_source = NULL;

    // Tried code:
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 35;

        goto try_except_handler_6;
    }

    tmp_assign_source_32 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_c_wchar_p );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;

        goto try_except_handler_6;
    }
    assert( tmp_assign_unpack_3__assign_source == NULL );
    tmp_assign_unpack_3__assign_source = tmp_assign_source_32;

    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    tmp_assign_source_33 = tmp_assign_unpack_3__assign_source;

    CHECK_OBJECT( tmp_assign_source_33 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPCOLESTR, tmp_assign_source_33 );
    tmp_assign_source_34 = tmp_assign_unpack_3__assign_source;

    CHECK_OBJECT( tmp_assign_source_34 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPOLESTR, tmp_assign_source_34 );
    tmp_assign_source_35 = tmp_assign_unpack_3__assign_source;

    CHECK_OBJECT( tmp_assign_source_35 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_OLESTR, tmp_assign_source_35 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_3__assign_source );
    Py_DECREF( tmp_assign_unpack_3__assign_source );
    tmp_assign_unpack_3__assign_source = NULL;

    // Tried code:
    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_20 == NULL ))
    {
        tmp_source_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_20 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 36;

        goto try_except_handler_7;
    }

    tmp_assign_source_36 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_c_wchar_p );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;

        goto try_except_handler_7;
    }
    assert( tmp_assign_unpack_4__assign_source == NULL );
    tmp_assign_unpack_4__assign_source = tmp_assign_source_36;

    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    tmp_assign_source_37 = tmp_assign_unpack_4__assign_source;

    CHECK_OBJECT( tmp_assign_source_37 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPCWSTR, tmp_assign_source_37 );
    tmp_assign_source_38 = tmp_assign_unpack_4__assign_source;

    CHECK_OBJECT( tmp_assign_source_38 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPWSTR, tmp_assign_source_38 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_4__assign_source );
    Py_DECREF( tmp_assign_unpack_4__assign_source );
    tmp_assign_unpack_4__assign_source = NULL;

    // Tried code:
    tmp_source_name_21 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_21 == NULL ))
    {
        tmp_source_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_21 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 37;

        goto try_except_handler_8;
    }

    tmp_assign_source_39 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_c_char_p );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;

        goto try_except_handler_8;
    }
    assert( tmp_assign_unpack_5__assign_source == NULL );
    tmp_assign_unpack_5__assign_source = tmp_assign_source_39;

    goto try_end_6;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    tmp_assign_source_40 = tmp_assign_unpack_5__assign_source;

    CHECK_OBJECT( tmp_assign_source_40 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPCSTR, tmp_assign_source_40 );
    tmp_assign_source_41 = tmp_assign_unpack_5__assign_source;

    CHECK_OBJECT( tmp_assign_source_41 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPSTR, tmp_assign_source_41 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_5__assign_source );
    Py_DECREF( tmp_assign_unpack_5__assign_source );
    tmp_assign_unpack_5__assign_source = NULL;

    // Tried code:
    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_22 == NULL ))
    {
        tmp_source_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 38;

        goto try_except_handler_9;
    }

    tmp_assign_source_42 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_c_void_p );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;

        goto try_except_handler_9;
    }
    assert( tmp_assign_unpack_6__assign_source == NULL );
    tmp_assign_unpack_6__assign_source = tmp_assign_source_42;

    goto try_end_7;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    tmp_assign_source_43 = tmp_assign_unpack_6__assign_source;

    CHECK_OBJECT( tmp_assign_source_43 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPCVOID, tmp_assign_source_43 );
    tmp_assign_source_44 = tmp_assign_unpack_6__assign_source;

    CHECK_OBJECT( tmp_assign_source_44 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPVOID, tmp_assign_source_44 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_6__assign_source );
    Py_DECREF( tmp_assign_unpack_6__assign_source );
    tmp_assign_unpack_6__assign_source = NULL;

    tmp_source_name_23 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_23 == NULL ))
    {
        tmp_source_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;

        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_sizeof );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto frame_exception_exit_1;
    }
    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_24 == NULL ))
    {
        tmp_source_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_24 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_c_long );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 42;

        goto frame_exception_exit_1;
    }
    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 42;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_compare_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

        goto frame_exception_exit_1;
    }
    tmp_source_name_25 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_25 == NULL ))
    {
        tmp_source_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_25 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;

        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_sizeof );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 42;

        goto frame_exception_exit_1;
    }
    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_26 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 42;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_c_void_p );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 42;

        goto frame_exception_exit_1;
    }
    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 42;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_compare_right_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 42;

        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_1, tmp_compare_right_1 );
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;

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
    tmp_source_name_27 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_27 == NULL ))
    {
        tmp_source_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_27 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 43;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_45 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_c_ulong );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_WPARAM, tmp_assign_source_45 );
    tmp_source_name_28 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_28 == NULL ))
    {
        tmp_source_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_28 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 44;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_46 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_c_long );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPARAM, tmp_assign_source_46 );
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_29 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_29 == NULL ))
    {
        tmp_source_name_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_29 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;

        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_sizeof );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto frame_exception_exit_1;
    }
    tmp_source_name_30 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_30 == NULL ))
    {
        tmp_source_name_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_30 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_c_longlong );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 45;

        goto frame_exception_exit_1;
    }
    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 45;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_compare_left_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto frame_exception_exit_1;
    }
    tmp_source_name_31 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_31 == NULL ))
    {
        tmp_source_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_31 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;

        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_sizeof );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 45;

        goto frame_exception_exit_1;
    }
    tmp_source_name_32 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_32 == NULL ))
    {
        tmp_source_name_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_32 == NULL )
    {
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 45;

        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_c_void_p );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 45;

        goto frame_exception_exit_1;
    }
    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 45;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_compare_right_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 45;

        goto frame_exception_exit_1;
    }
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_2, tmp_compare_right_2 );
    Py_DECREF( tmp_compare_left_2 );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;

        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_33 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_33 == NULL ))
    {
        tmp_source_name_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_33 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 46;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_47 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_c_ulonglong );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_WPARAM, tmp_assign_source_47 );
    tmp_source_name_34 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_34 == NULL ))
    {
        tmp_source_name_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_34 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 47;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_48 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_c_longlong );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPARAM, tmp_assign_source_48 );
    branch_no_3:;
    branch_end_2:;
    tmp_assign_source_49 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_WORD );

    if (unlikely( tmp_assign_source_49 == NULL ))
    {
        tmp_assign_source_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WORD );
    }

    if ( tmp_assign_source_49 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 49;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ATOM, tmp_assign_source_49 );
    tmp_assign_source_50 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_WORD );

    if (unlikely( tmp_assign_source_50 == NULL ))
    {
        tmp_assign_source_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WORD );
    }

    if ( tmp_assign_source_50 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 50;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LANGID, tmp_assign_source_50 );
    tmp_assign_source_51 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_assign_source_51 == NULL ))
    {
        tmp_assign_source_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_assign_source_51 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 52;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_COLORREF, tmp_assign_source_51 );
    tmp_assign_source_52 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_assign_source_52 == NULL ))
    {
        tmp_assign_source_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_assign_source_52 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 53;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LGRPID, tmp_assign_source_52 );
    tmp_assign_source_53 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_assign_source_53 == NULL ))
    {
        tmp_assign_source_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_assign_source_53 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 54;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LCTYPE, tmp_assign_source_53 );
    tmp_assign_source_54 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_assign_source_54 == NULL ))
    {
        tmp_assign_source_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_assign_source_54 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 56;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LCID, tmp_assign_source_54 );
    tmp_source_name_35 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_35 == NULL ))
    {
        tmp_source_name_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_35 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 60;

        goto frame_exception_exit_1;
    }

    tmp_assign_source_55 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_c_void_p );
    if ( tmp_assign_source_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE, tmp_assign_source_55 );
    tmp_assign_source_56 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_56 == NULL ))
    {
        tmp_assign_source_56 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_56 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HACCEL, tmp_assign_source_56 );
    tmp_assign_source_57 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_57 == NULL ))
    {
        tmp_assign_source_57 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_57 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HBITMAP, tmp_assign_source_57 );
    tmp_assign_source_58 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_58 == NULL ))
    {
        tmp_assign_source_58 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_58 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HBRUSH, tmp_assign_source_58 );
    tmp_assign_source_59 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_59 == NULL ))
    {
        tmp_assign_source_59 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_59 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HCOLORSPACE, tmp_assign_source_59 );
    tmp_assign_source_60 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_60 == NULL ))
    {
        tmp_assign_source_60 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_60 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HDC, tmp_assign_source_60 );
    tmp_assign_source_61 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_61 == NULL ))
    {
        tmp_assign_source_61 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_61 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HDESK, tmp_assign_source_61 );
    tmp_assign_source_62 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_62 == NULL ))
    {
        tmp_assign_source_62 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_62 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HDWP, tmp_assign_source_62 );
    tmp_assign_source_63 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_63 == NULL ))
    {
        tmp_assign_source_63 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_63 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HENHMETAFILE, tmp_assign_source_63 );
    tmp_assign_source_64 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_64 == NULL ))
    {
        tmp_assign_source_64 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_64 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HFONT, tmp_assign_source_64 );
    tmp_assign_source_65 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_65 == NULL ))
    {
        tmp_assign_source_65 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_65 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HGDIOBJ, tmp_assign_source_65 );
    tmp_assign_source_66 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_66 == NULL ))
    {
        tmp_assign_source_66 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_66 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HGLOBAL, tmp_assign_source_66 );
    tmp_assign_source_67 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_67 == NULL ))
    {
        tmp_assign_source_67 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_67 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HHOOK, tmp_assign_source_67 );
    tmp_assign_source_68 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_68 == NULL ))
    {
        tmp_assign_source_68 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_68 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HICON, tmp_assign_source_68 );
    tmp_assign_source_69 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_69 == NULL ))
    {
        tmp_assign_source_69 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_69 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HINSTANCE, tmp_assign_source_69 );
    tmp_assign_source_70 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_70 == NULL ))
    {
        tmp_assign_source_70 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_70 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HKEY, tmp_assign_source_70 );
    tmp_assign_source_71 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_71 == NULL ))
    {
        tmp_assign_source_71 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_71 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HKL, tmp_assign_source_71 );
    tmp_assign_source_72 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_72 == NULL ))
    {
        tmp_assign_source_72 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_72 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HLOCAL, tmp_assign_source_72 );
    tmp_assign_source_73 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_73 == NULL ))
    {
        tmp_assign_source_73 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_73 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HMENU, tmp_assign_source_73 );
    tmp_assign_source_74 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_74 == NULL ))
    {
        tmp_assign_source_74 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_74 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HMETAFILE, tmp_assign_source_74 );
    tmp_assign_source_75 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_75 == NULL ))
    {
        tmp_assign_source_75 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_75 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HMODULE, tmp_assign_source_75 );
    tmp_assign_source_76 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_76 == NULL ))
    {
        tmp_assign_source_76 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_76 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HMONITOR, tmp_assign_source_76 );
    tmp_assign_source_77 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_77 == NULL ))
    {
        tmp_assign_source_77 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_77 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HPALETTE, tmp_assign_source_77 );
    tmp_assign_source_78 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_78 == NULL ))
    {
        tmp_assign_source_78 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_78 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HPEN, tmp_assign_source_78 );
    tmp_assign_source_79 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_79 == NULL ))
    {
        tmp_assign_source_79 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_79 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HRGN, tmp_assign_source_79 );
    tmp_assign_source_80 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_80 == NULL ))
    {
        tmp_assign_source_80 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_80 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HRSRC, tmp_assign_source_80 );
    tmp_assign_source_81 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_81 == NULL ))
    {
        tmp_assign_source_81 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_81 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HSTR, tmp_assign_source_81 );
    tmp_assign_source_82 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_82 == NULL ))
    {
        tmp_assign_source_82 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_82 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HTASK, tmp_assign_source_82 );
    tmp_assign_source_83 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_83 == NULL ))
    {
        tmp_assign_source_83 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_83 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HWINSTA, tmp_assign_source_83 );
    tmp_assign_source_84 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_84 == NULL ))
    {
        tmp_assign_source_84 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_84 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HWND, tmp_assign_source_84 );
    tmp_assign_source_85 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_85 == NULL ))
    {
        tmp_assign_source_85 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_85 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_SC_HANDLE, tmp_assign_source_85 );
    tmp_assign_source_86 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_assign_source_86 == NULL ))
    {
        tmp_assign_source_86 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    CHECK_OBJECT( tmp_assign_source_86 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_SERVICE_STATUS_HANDLE, tmp_assign_source_86 );
    // Tried code:
    tmp_source_name_36 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_36 == NULL ))
    {
        tmp_source_name_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_36 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 97;

        goto try_except_handler_10;
    }

    tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_Structure );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_10;
    }
    tmp_assign_source_87 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_assign_source_87, 0, tmp_tuple_element_4 );
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_87;

    tmp_assign_source_88 = PyDict_New();
    assert( tmp_class_creation_2__class_decl_dict == NULL );
    tmp_class_creation_2__class_decl_dict = tmp_assign_source_88;

    tmp_key_name_4 = const_str_plain_metaclass;
    tmp_dict_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_4 );
    tmp_res = PyDict_Contains( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_10;
    }
    tmp_cond_value_3 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_10;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_dict_name_5 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_5 );
    tmp_key_name_5 = const_str_plain_metaclass;
    tmp_metaclass_name_2 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_10;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_subscribed_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_subscribed_name_2 );
    tmp_subscript_name_2 = const_int_0;
    tmp_type_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_type_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_10;
    }
    tmp_metaclass_name_2 = BUILTIN_TYPE1( tmp_type_arg_2 );
    Py_DECREF( tmp_type_arg_2 );
    if ( tmp_metaclass_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_10;
    }
    condexpr_end_3:;
    tmp_bases_name_2 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_bases_name_2 );
    tmp_assign_source_89 = SELECT_METACLASS( tmp_metaclass_name_2, tmp_bases_name_2 );
    Py_DECREF( tmp_metaclass_name_2 );
    if ( tmp_assign_source_89 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_10;
    }
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_89;

    tmp_key_name_6 = const_str_plain_metaclass;
    tmp_dict_name_6 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_6 );
    tmp_res = PyDict_Contains( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_10;
    }
    tmp_cond_value_4 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_10;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_dictdel_dict = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_10;
    }
    branch_no_4:;
    tmp_hasattr_source_2 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_2 );
    tmp_hasattr_attr_2 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_2, tmp_hasattr_attr_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_10;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_4;
    }
    else
    {
        goto condexpr_false_4;
    }
    condexpr_true_4:;
    tmp_source_name_37 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_source_name_37 );
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain___prepare__ );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_10;
    }
    tmp_tuple_element_5 = const_str_plain_RECT;
    tmp_args_name_3 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_5 );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_5 );
    tmp_kw_name_3 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_3 );
    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 97;
    tmp_assign_source_90 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_3 );
    if ( tmp_assign_source_90 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_10;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_assign_source_90 = PyDict_New();
    condexpr_end_4:;
    assert( tmp_class_creation_2__prepared == NULL );
    tmp_class_creation_2__prepared = tmp_assign_source_90;

    tmp_set_locals = tmp_class_creation_2__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_RECT_97 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
    tmp_res = PyObject_SetItem( locals_RECT_97, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_12;
    }
    tmp_dictset_value = const_str_plain_RECT;
    tmp_res = PyObject_SetItem( locals_RECT_97, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_12;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_12c81d339c62241300e8b6aa10f78dd1_3, codeobj_12c81d339c62241300e8b6aa10f78dd1, module_ctypes$wintypes, sizeof(void *) );
    frame_12c81d339c62241300e8b6aa10f78dd1_3 = cache_frame_12c81d339c62241300e8b6aa10f78dd1_3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_12c81d339c62241300e8b6aa10f78dd1_3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_12c81d339c62241300e8b6aa10f78dd1_3 ) == 2 ); // Frame stack

    // Framed code:
    tmp_tuple_element_6 = const_str_plain_left;
    tmp_list_element_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = PyObject_GetItem( locals_RECT_97, const_str_plain_LONG );

    if ( tmp_tuple_element_6 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LONG );

        if (unlikely( tmp_tuple_element_6 == NULL ))
        {
            tmp_tuple_element_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LONG );
        }

        if ( tmp_tuple_element_6 == NULL )
        {
            Py_DECREF( tmp_list_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LONG" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 98;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_6 );
    tmp_dictset_value = PyList_New( 4 );
    PyList_SET_ITEM( tmp_dictset_value, 0, tmp_list_element_1 );
    tmp_tuple_element_7 = const_str_plain_top;
    tmp_list_element_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = PyObject_GetItem( locals_RECT_97, const_str_plain_LONG );

    if ( tmp_tuple_element_7 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LONG );

        if (unlikely( tmp_tuple_element_7 == NULL ))
        {
            tmp_tuple_element_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LONG );
        }

        if ( tmp_tuple_element_7 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LONG" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 99;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_7 );
    PyList_SET_ITEM( tmp_dictset_value, 1, tmp_list_element_1 );
    tmp_tuple_element_8 = const_str_plain_right;
    tmp_list_element_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_8 );
    tmp_tuple_element_8 = PyObject_GetItem( locals_RECT_97, const_str_plain_LONG );

    if ( tmp_tuple_element_8 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LONG );

        if (unlikely( tmp_tuple_element_8 == NULL ))
        {
            tmp_tuple_element_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LONG );
        }

        if ( tmp_tuple_element_8 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LONG" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 100;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_8 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_8 );
    PyList_SET_ITEM( tmp_dictset_value, 2, tmp_list_element_1 );
    tmp_tuple_element_9 = const_str_plain_bottom;
    tmp_list_element_1 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_9 );
    tmp_tuple_element_9 = PyObject_GetItem( locals_RECT_97, const_str_plain_LONG );

    if ( tmp_tuple_element_9 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LONG );

        if (unlikely( tmp_tuple_element_9 == NULL ))
        {
            tmp_tuple_element_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LONG );
        }

        if ( tmp_tuple_element_9 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LONG" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 101;
            type_description_2 = "N";
            goto frame_exception_exit_3;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_9 );
    PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_9 );
    PyList_SET_ITEM( tmp_dictset_value, 3, tmp_list_element_1 );
    tmp_res = PyObject_SetItem( locals_RECT_97, const_str_plain__fields_, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        type_description_2 = "N";
        goto frame_exception_exit_3;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_12c81d339c62241300e8b6aa10f78dd1_3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;

    frame_exception_exit_3:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_12c81d339c62241300e8b6aa10f78dd1_3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_12c81d339c62241300e8b6aa10f78dd1_3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_12c81d339c62241300e8b6aa10f78dd1_3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_12c81d339c62241300e8b6aa10f78dd1_3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_12c81d339c62241300e8b6aa10f78dd1_3,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_12c81d339c62241300e8b6aa10f78dd1_3 == cache_frame_12c81d339c62241300e8b6aa10f78dd1_3 )
    {
        Py_DECREF( frame_12c81d339c62241300e8b6aa10f78dd1_3 );
    }
    cache_frame_12c81d339c62241300e8b6aa10f78dd1_3 = NULL;

    assertFrameObject( frame_12c81d339c62241300e8b6aa10f78dd1_3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;

    frame_no_exception_2:;

    goto skip_nested_handling_2;
    nested_frame_exit_2:;

    goto try_except_handler_12;
    skip_nested_handling_2:;
    tmp_called_name_8 = tmp_class_creation_2__metaclass;

    CHECK_OBJECT( tmp_called_name_8 );
    tmp_tuple_element_10 = const_str_plain_RECT;
    tmp_args_name_4 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_10 );
    tmp_tuple_element_10 = tmp_class_creation_2__bases;

    CHECK_OBJECT( tmp_tuple_element_10 );
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_10 );
    tmp_tuple_element_10 = locals_RECT_97;
    Py_INCREF( tmp_tuple_element_10 );
    PyTuple_SET_ITEM( tmp_args_name_4, 2, tmp_tuple_element_10 );
    tmp_kw_name_4 = tmp_class_creation_2__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_4 );
    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 97;
    tmp_assign_source_92 = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    if ( tmp_assign_source_92 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;

        goto try_except_handler_12;
    }
    assert( outline_1_var___class__ == NULL );
    outline_1_var___class__ = tmp_assign_source_92;

    tmp_outline_return_value_2 = outline_1_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_2 );
    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_12;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_12:;
    Py_DECREF( locals_RECT_97 );
    locals_RECT_97 = NULL;
    goto try_return_handler_11;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_RECT_97 );
    locals_RECT_97 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_11;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_11:;
    CHECK_OBJECT( (PyObject *)outline_1_var___class__ );
    Py_DECREF( outline_1_var___class__ );
    outline_1_var___class__ = NULL;

    goto outline_result_2;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto outline_exception_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_2:;
    exception_lineno = 97;
    goto try_except_handler_10;
    outline_result_2:;
    tmp_assign_source_91 = tmp_outline_return_value_2;
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_RECT, tmp_assign_source_91 );
    goto try_end_8;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_decl_dict );
    Py_DECREF( tmp_class_creation_2__class_decl_dict );
    tmp_class_creation_2__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__prepared );
    Py_DECREF( tmp_class_creation_2__prepared );
    tmp_class_creation_2__prepared = NULL;

    // Tried code:
    tmp_assign_source_93 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_RECT );

    if (unlikely( tmp_assign_source_93 == NULL ))
    {
        tmp_assign_source_93 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RECT );
    }

    if ( tmp_assign_source_93 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RECT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 102;

        goto try_except_handler_13;
    }

    assert( tmp_assign_unpack_7__assign_source == NULL );
    Py_INCREF( tmp_assign_source_93 );
    tmp_assign_unpack_7__assign_source = tmp_assign_source_93;

    goto try_end_9;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    tmp_assign_source_94 = tmp_assign_unpack_7__assign_source;

    CHECK_OBJECT( tmp_assign_source_94 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_tagRECT, tmp_assign_source_94 );
    tmp_assign_source_95 = tmp_assign_unpack_7__assign_source;

    CHECK_OBJECT( tmp_assign_source_95 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain__RECTL, tmp_assign_source_95 );
    tmp_assign_source_96 = tmp_assign_unpack_7__assign_source;

    CHECK_OBJECT( tmp_assign_source_96 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_RECTL, tmp_assign_source_96 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_7__assign_source );
    Py_DECREF( tmp_assign_unpack_7__assign_source );
    tmp_assign_unpack_7__assign_source = NULL;

    // Tried code:
    tmp_source_name_38 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_38 == NULL ))
    {
        tmp_source_name_38 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_38 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 104;

        goto try_except_handler_14;
    }

    tmp_tuple_element_11 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_Structure );
    if ( tmp_tuple_element_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_14;
    }
    tmp_assign_source_97 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_assign_source_97, 0, tmp_tuple_element_11 );
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_97;

    tmp_assign_source_98 = PyDict_New();
    assert( tmp_class_creation_3__class_decl_dict == NULL );
    tmp_class_creation_3__class_decl_dict = tmp_assign_source_98;

    tmp_key_name_7 = const_str_plain_metaclass;
    tmp_dict_name_7 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_7 );
    tmp_res = PyDict_Contains( tmp_dict_name_7, tmp_key_name_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_14;
    }
    tmp_cond_value_5 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_14;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto condexpr_true_5;
    }
    else
    {
        goto condexpr_false_5;
    }
    condexpr_true_5:;
    tmp_dict_name_8 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_8 );
    tmp_key_name_8 = const_str_plain_metaclass;
    tmp_metaclass_name_3 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_14;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_subscribed_name_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_subscribed_name_3 );
    tmp_subscript_name_3 = const_int_0;
    tmp_type_arg_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_type_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_14;
    }
    tmp_metaclass_name_3 = BUILTIN_TYPE1( tmp_type_arg_3 );
    Py_DECREF( tmp_type_arg_3 );
    if ( tmp_metaclass_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_14;
    }
    condexpr_end_5:;
    tmp_bases_name_3 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_bases_name_3 );
    tmp_assign_source_99 = SELECT_METACLASS( tmp_metaclass_name_3, tmp_bases_name_3 );
    Py_DECREF( tmp_metaclass_name_3 );
    if ( tmp_assign_source_99 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_14;
    }
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_99;

    tmp_key_name_9 = const_str_plain_metaclass;
    tmp_dict_name_9 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_9 );
    tmp_res = PyDict_Contains( tmp_dict_name_9, tmp_key_name_9 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_14;
    }
    tmp_cond_value_6 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_14;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_dictdel_dict = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_14;
    }
    branch_no_5:;
    tmp_hasattr_source_3 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_3 );
    tmp_hasattr_attr_3 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_3, tmp_hasattr_attr_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_14;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_6;
    }
    else
    {
        goto condexpr_false_6;
    }
    condexpr_true_6:;
    tmp_source_name_39 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_source_name_39 );
    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain___prepare__ );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_14;
    }
    tmp_tuple_element_12 = const_str_plain__SMALL_RECT;
    tmp_args_name_5 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_12 );
    tmp_tuple_element_12 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_12 );
    Py_INCREF( tmp_tuple_element_12 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_12 );
    tmp_kw_name_5 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_5 );
    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 104;
    tmp_assign_source_100 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_name_5 );
    if ( tmp_assign_source_100 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_14;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_assign_source_100 = PyDict_New();
    condexpr_end_6:;
    assert( tmp_class_creation_3__prepared == NULL );
    tmp_class_creation_3__prepared = tmp_assign_source_100;

    tmp_set_locals = tmp_class_creation_3__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals__SMALL_RECT_104 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
    tmp_res = PyObject_SetItem( locals__SMALL_RECT_104, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_16;
    }
    tmp_dictset_value = const_str_plain__SMALL_RECT;
    tmp_res = PyObject_SetItem( locals__SMALL_RECT_104, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_16;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_f7087ddba4ee43a3a9fe5c5666a34db1_4, codeobj_f7087ddba4ee43a3a9fe5c5666a34db1, module_ctypes$wintypes, sizeof(void *) );
    frame_f7087ddba4ee43a3a9fe5c5666a34db1_4 = cache_frame_f7087ddba4ee43a3a9fe5c5666a34db1_4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f7087ddba4ee43a3a9fe5c5666a34db1_4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f7087ddba4ee43a3a9fe5c5666a34db1_4 ) == 2 ); // Frame stack

    // Framed code:
    tmp_tuple_element_13 = const_str_plain_Left;
    tmp_list_element_2 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_list_element_2, 0, tmp_tuple_element_13 );
    tmp_tuple_element_13 = PyObject_GetItem( locals__SMALL_RECT_104, const_str_plain_SHORT );

    if ( tmp_tuple_element_13 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_13 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_SHORT );

        if (unlikely( tmp_tuple_element_13 == NULL ))
        {
            tmp_tuple_element_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SHORT );
        }

        if ( tmp_tuple_element_13 == NULL )
        {
            Py_DECREF( tmp_list_element_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SHORT" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 105;
            type_description_2 = "N";
            goto frame_exception_exit_4;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_13 );
    PyTuple_SET_ITEM( tmp_list_element_2, 1, tmp_tuple_element_13 );
    tmp_dictset_value = PyList_New( 4 );
    PyList_SET_ITEM( tmp_dictset_value, 0, tmp_list_element_2 );
    tmp_tuple_element_14 = const_str_plain_Top;
    tmp_list_element_2 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_list_element_2, 0, tmp_tuple_element_14 );
    tmp_tuple_element_14 = PyObject_GetItem( locals__SMALL_RECT_104, const_str_plain_SHORT );

    if ( tmp_tuple_element_14 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_14 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_SHORT );

        if (unlikely( tmp_tuple_element_14 == NULL ))
        {
            tmp_tuple_element_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SHORT );
        }

        if ( tmp_tuple_element_14 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SHORT" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 106;
            type_description_2 = "N";
            goto frame_exception_exit_4;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_14 );
    PyTuple_SET_ITEM( tmp_list_element_2, 1, tmp_tuple_element_14 );
    PyList_SET_ITEM( tmp_dictset_value, 1, tmp_list_element_2 );
    tmp_tuple_element_15 = const_str_plain_Right;
    tmp_list_element_2 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_list_element_2, 0, tmp_tuple_element_15 );
    tmp_tuple_element_15 = PyObject_GetItem( locals__SMALL_RECT_104, const_str_plain_SHORT );

    if ( tmp_tuple_element_15 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_SHORT );

        if (unlikely( tmp_tuple_element_15 == NULL ))
        {
            tmp_tuple_element_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SHORT );
        }

        if ( tmp_tuple_element_15 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SHORT" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 107;
            type_description_2 = "N";
            goto frame_exception_exit_4;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_15 );
    PyTuple_SET_ITEM( tmp_list_element_2, 1, tmp_tuple_element_15 );
    PyList_SET_ITEM( tmp_dictset_value, 2, tmp_list_element_2 );
    tmp_tuple_element_16 = const_str_plain_Bottom;
    tmp_list_element_2 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_list_element_2, 0, tmp_tuple_element_16 );
    tmp_tuple_element_16 = PyObject_GetItem( locals__SMALL_RECT_104, const_str_plain_SHORT );

    if ( tmp_tuple_element_16 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_SHORT );

        if (unlikely( tmp_tuple_element_16 == NULL ))
        {
            tmp_tuple_element_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SHORT );
        }

        if ( tmp_tuple_element_16 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SHORT" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 108;
            type_description_2 = "N";
            goto frame_exception_exit_4;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_16 );
    PyTuple_SET_ITEM( tmp_list_element_2, 1, tmp_tuple_element_16 );
    PyList_SET_ITEM( tmp_dictset_value, 3, tmp_list_element_2 );
    tmp_res = PyObject_SetItem( locals__SMALL_RECT_104, const_str_plain__fields_, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        type_description_2 = "N";
        goto frame_exception_exit_4;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f7087ddba4ee43a3a9fe5c5666a34db1_4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;

    frame_exception_exit_4:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f7087ddba4ee43a3a9fe5c5666a34db1_4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f7087ddba4ee43a3a9fe5c5666a34db1_4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f7087ddba4ee43a3a9fe5c5666a34db1_4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f7087ddba4ee43a3a9fe5c5666a34db1_4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f7087ddba4ee43a3a9fe5c5666a34db1_4,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_f7087ddba4ee43a3a9fe5c5666a34db1_4 == cache_frame_f7087ddba4ee43a3a9fe5c5666a34db1_4 )
    {
        Py_DECREF( frame_f7087ddba4ee43a3a9fe5c5666a34db1_4 );
    }
    cache_frame_f7087ddba4ee43a3a9fe5c5666a34db1_4 = NULL;

    assertFrameObject( frame_f7087ddba4ee43a3a9fe5c5666a34db1_4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_3;

    frame_no_exception_3:;

    goto skip_nested_handling_3;
    nested_frame_exit_3:;

    goto try_except_handler_16;
    skip_nested_handling_3:;
    tmp_called_name_10 = tmp_class_creation_3__metaclass;

    CHECK_OBJECT( tmp_called_name_10 );
    tmp_tuple_element_17 = const_str_plain__SMALL_RECT;
    tmp_args_name_6 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_17 );
    tmp_tuple_element_17 = tmp_class_creation_3__bases;

    CHECK_OBJECT( tmp_tuple_element_17 );
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_args_name_6, 1, tmp_tuple_element_17 );
    tmp_tuple_element_17 = locals__SMALL_RECT_104;
    Py_INCREF( tmp_tuple_element_17 );
    PyTuple_SET_ITEM( tmp_args_name_6, 2, tmp_tuple_element_17 );
    tmp_kw_name_6 = tmp_class_creation_3__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_6 );
    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 104;
    tmp_assign_source_102 = CALL_FUNCTION( tmp_called_name_10, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_args_name_6 );
    if ( tmp_assign_source_102 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;

        goto try_except_handler_16;
    }
    assert( outline_2_var___class__ == NULL );
    outline_2_var___class__ = tmp_assign_source_102;

    tmp_outline_return_value_3 = outline_2_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_3 );
    Py_INCREF( tmp_outline_return_value_3 );
    goto try_return_handler_16;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_16:;
    Py_DECREF( locals__SMALL_RECT_104 );
    locals__SMALL_RECT_104 = NULL;
    goto try_return_handler_15;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals__SMALL_RECT_104 );
    locals__SMALL_RECT_104 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_15;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_15:;
    CHECK_OBJECT( (PyObject *)outline_2_var___class__ );
    Py_DECREF( outline_2_var___class__ );
    outline_2_var___class__ = NULL;

    goto outline_result_3;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto outline_exception_3;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_3:;
    exception_lineno = 104;
    goto try_except_handler_14;
    outline_result_3:;
    tmp_assign_source_101 = tmp_outline_return_value_3;
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain__SMALL_RECT, tmp_assign_source_101 );
    goto try_end_10;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases );
    Py_DECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_decl_dict );
    Py_DECREF( tmp_class_creation_3__class_decl_dict );
    tmp_class_creation_3__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__prepared );
    Py_DECREF( tmp_class_creation_3__prepared );
    tmp_class_creation_3__prepared = NULL;

    tmp_assign_source_103 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain__SMALL_RECT );

    if (unlikely( tmp_assign_source_103 == NULL ))
    {
        tmp_assign_source_103 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__SMALL_RECT );
    }

    if ( tmp_assign_source_103 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "_SMALL_RECT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 109;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_SMALL_RECT, tmp_assign_source_103 );
    // Tried code:
    tmp_source_name_40 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_40 == NULL ))
    {
        tmp_source_name_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_40 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 111;

        goto try_except_handler_17;
    }

    tmp_tuple_element_18 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_Structure );
    if ( tmp_tuple_element_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto try_except_handler_17;
    }
    tmp_assign_source_104 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_assign_source_104, 0, tmp_tuple_element_18 );
    assert( tmp_class_creation_4__bases == NULL );
    tmp_class_creation_4__bases = tmp_assign_source_104;

    tmp_assign_source_105 = PyDict_New();
    assert( tmp_class_creation_4__class_decl_dict == NULL );
    tmp_class_creation_4__class_decl_dict = tmp_assign_source_105;

    tmp_key_name_10 = const_str_plain_metaclass;
    tmp_dict_name_10 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_10 );
    tmp_res = PyDict_Contains( tmp_dict_name_10, tmp_key_name_10 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto try_except_handler_17;
    }
    tmp_cond_value_7 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto try_except_handler_17;
    }
    if ( tmp_cond_truth_7 == 1 )
    {
        goto condexpr_true_7;
    }
    else
    {
        goto condexpr_false_7;
    }
    condexpr_true_7:;
    tmp_dict_name_11 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_11 );
    tmp_key_name_11 = const_str_plain_metaclass;
    tmp_metaclass_name_4 = DICT_GET_ITEM( tmp_dict_name_11, tmp_key_name_11 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto try_except_handler_17;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_subscribed_name_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_subscribed_name_4 );
    tmp_subscript_name_4 = const_int_0;
    tmp_type_arg_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_type_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto try_except_handler_17;
    }
    tmp_metaclass_name_4 = BUILTIN_TYPE1( tmp_type_arg_4 );
    Py_DECREF( tmp_type_arg_4 );
    if ( tmp_metaclass_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto try_except_handler_17;
    }
    condexpr_end_7:;
    tmp_bases_name_4 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_bases_name_4 );
    tmp_assign_source_106 = SELECT_METACLASS( tmp_metaclass_name_4, tmp_bases_name_4 );
    Py_DECREF( tmp_metaclass_name_4 );
    if ( tmp_assign_source_106 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto try_except_handler_17;
    }
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_106;

    tmp_key_name_12 = const_str_plain_metaclass;
    tmp_dict_name_12 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_12 );
    tmp_res = PyDict_Contains( tmp_dict_name_12, tmp_key_name_12 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto try_except_handler_17;
    }
    tmp_cond_value_8 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto try_except_handler_17;
    }
    if ( tmp_cond_truth_8 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_dictdel_dict = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto try_except_handler_17;
    }
    branch_no_6:;
    tmp_hasattr_source_4 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_4 );
    tmp_hasattr_attr_4 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_4, tmp_hasattr_attr_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto try_except_handler_17;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_8;
    }
    else
    {
        goto condexpr_false_8;
    }
    condexpr_true_8:;
    tmp_source_name_41 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_source_name_41 );
    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain___prepare__ );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto try_except_handler_17;
    }
    tmp_tuple_element_19 = const_str_plain__COORD;
    tmp_args_name_7 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_19 );
    tmp_tuple_element_19 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_19 );
    Py_INCREF( tmp_tuple_element_19 );
    PyTuple_SET_ITEM( tmp_args_name_7, 1, tmp_tuple_element_19 );
    tmp_kw_name_7 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_7 );
    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 111;
    tmp_assign_source_107 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_7, tmp_kw_name_7 );
    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_name_7 );
    if ( tmp_assign_source_107 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto try_except_handler_17;
    }
    goto condexpr_end_8;
    condexpr_false_8:;
    tmp_assign_source_107 = PyDict_New();
    condexpr_end_8:;
    assert( tmp_class_creation_4__prepared == NULL );
    tmp_class_creation_4__prepared = tmp_assign_source_107;

    tmp_set_locals = tmp_class_creation_4__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals__COORD_111 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
    tmp_res = PyObject_SetItem( locals__COORD_111, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto try_except_handler_19;
    }
    tmp_dictset_value = const_str_plain__COORD;
    tmp_res = PyObject_SetItem( locals__COORD_111, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto try_except_handler_19;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_5f6a648973f1a04c153fa4957c165188_5, codeobj_5f6a648973f1a04c153fa4957c165188, module_ctypes$wintypes, sizeof(void *) );
    frame_5f6a648973f1a04c153fa4957c165188_5 = cache_frame_5f6a648973f1a04c153fa4957c165188_5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5f6a648973f1a04c153fa4957c165188_5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5f6a648973f1a04c153fa4957c165188_5 ) == 2 ); // Frame stack

    // Framed code:
    tmp_tuple_element_20 = const_str_plain_X;
    tmp_list_element_3 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_list_element_3, 0, tmp_tuple_element_20 );
    tmp_tuple_element_20 = PyObject_GetItem( locals__COORD_111, const_str_plain_SHORT );

    if ( tmp_tuple_element_20 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_20 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_SHORT );

        if (unlikely( tmp_tuple_element_20 == NULL ))
        {
            tmp_tuple_element_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SHORT );
        }

        if ( tmp_tuple_element_20 == NULL )
        {
            Py_DECREF( tmp_list_element_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SHORT" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 112;
            type_description_2 = "N";
            goto frame_exception_exit_5;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_20 );
    PyTuple_SET_ITEM( tmp_list_element_3, 1, tmp_tuple_element_20 );
    tmp_dictset_value = PyList_New( 2 );
    PyList_SET_ITEM( tmp_dictset_value, 0, tmp_list_element_3 );
    tmp_tuple_element_21 = const_str_plain_Y;
    tmp_list_element_3 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_21 );
    PyTuple_SET_ITEM( tmp_list_element_3, 0, tmp_tuple_element_21 );
    tmp_tuple_element_21 = PyObject_GetItem( locals__COORD_111, const_str_plain_SHORT );

    if ( tmp_tuple_element_21 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_21 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_SHORT );

        if (unlikely( tmp_tuple_element_21 == NULL ))
        {
            tmp_tuple_element_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SHORT );
        }

        if ( tmp_tuple_element_21 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SHORT" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 113;
            type_description_2 = "N";
            goto frame_exception_exit_5;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_21 );
    PyTuple_SET_ITEM( tmp_list_element_3, 1, tmp_tuple_element_21 );
    PyList_SET_ITEM( tmp_dictset_value, 1, tmp_list_element_3 );
    tmp_res = PyObject_SetItem( locals__COORD_111, const_str_plain__fields_, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        type_description_2 = "N";
        goto frame_exception_exit_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5f6a648973f1a04c153fa4957c165188_5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_4;

    frame_exception_exit_5:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5f6a648973f1a04c153fa4957c165188_5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5f6a648973f1a04c153fa4957c165188_5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5f6a648973f1a04c153fa4957c165188_5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5f6a648973f1a04c153fa4957c165188_5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5f6a648973f1a04c153fa4957c165188_5,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_5f6a648973f1a04c153fa4957c165188_5 == cache_frame_5f6a648973f1a04c153fa4957c165188_5 )
    {
        Py_DECREF( frame_5f6a648973f1a04c153fa4957c165188_5 );
    }
    cache_frame_5f6a648973f1a04c153fa4957c165188_5 = NULL;

    assertFrameObject( frame_5f6a648973f1a04c153fa4957c165188_5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_4;

    frame_no_exception_4:;

    goto skip_nested_handling_4;
    nested_frame_exit_4:;

    goto try_except_handler_19;
    skip_nested_handling_4:;
    tmp_called_name_12 = tmp_class_creation_4__metaclass;

    CHECK_OBJECT( tmp_called_name_12 );
    tmp_tuple_element_22 = const_str_plain__COORD;
    tmp_args_name_8 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_22 );
    tmp_tuple_element_22 = tmp_class_creation_4__bases;

    CHECK_OBJECT( tmp_tuple_element_22 );
    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_args_name_8, 1, tmp_tuple_element_22 );
    tmp_tuple_element_22 = locals__COORD_111;
    Py_INCREF( tmp_tuple_element_22 );
    PyTuple_SET_ITEM( tmp_args_name_8, 2, tmp_tuple_element_22 );
    tmp_kw_name_8 = tmp_class_creation_4__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_8 );
    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 111;
    tmp_assign_source_109 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_8, tmp_kw_name_8 );
    Py_DECREF( tmp_args_name_8 );
    if ( tmp_assign_source_109 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;

        goto try_except_handler_19;
    }
    assert( outline_3_var___class__ == NULL );
    outline_3_var___class__ = tmp_assign_source_109;

    tmp_outline_return_value_4 = outline_3_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_4 );
    Py_INCREF( tmp_outline_return_value_4 );
    goto try_return_handler_19;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_19:;
    Py_DECREF( locals__COORD_111 );
    locals__COORD_111 = NULL;
    goto try_return_handler_18;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals__COORD_111 );
    locals__COORD_111 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_18;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_18:;
    CHECK_OBJECT( (PyObject *)outline_3_var___class__ );
    Py_DECREF( outline_3_var___class__ );
    outline_3_var___class__ = NULL;

    goto outline_result_4;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto outline_exception_4;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_4:;
    exception_lineno = 111;
    goto try_except_handler_17;
    outline_result_4:;
    tmp_assign_source_108 = tmp_outline_return_value_4;
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain__COORD, tmp_assign_source_108 );
    goto try_end_11;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__bases );
    Py_DECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_decl_dict );
    Py_DECREF( tmp_class_creation_4__class_decl_dict );
    tmp_class_creation_4__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__prepared );
    Py_DECREF( tmp_class_creation_4__prepared );
    tmp_class_creation_4__prepared = NULL;

    // Tried code:
    tmp_source_name_42 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_42 == NULL ))
    {
        tmp_source_name_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_42 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 115;

        goto try_except_handler_20;
    }

    tmp_tuple_element_23 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_Structure );
    if ( tmp_tuple_element_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_20;
    }
    tmp_assign_source_110 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_assign_source_110, 0, tmp_tuple_element_23 );
    assert( tmp_class_creation_5__bases == NULL );
    tmp_class_creation_5__bases = tmp_assign_source_110;

    tmp_assign_source_111 = PyDict_New();
    assert( tmp_class_creation_5__class_decl_dict == NULL );
    tmp_class_creation_5__class_decl_dict = tmp_assign_source_111;

    tmp_key_name_13 = const_str_plain_metaclass;
    tmp_dict_name_13 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_13 );
    tmp_res = PyDict_Contains( tmp_dict_name_13, tmp_key_name_13 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_20;
    }
    tmp_cond_value_9 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_20;
    }
    if ( tmp_cond_truth_9 == 1 )
    {
        goto condexpr_true_9;
    }
    else
    {
        goto condexpr_false_9;
    }
    condexpr_true_9:;
    tmp_dict_name_14 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_14 );
    tmp_key_name_14 = const_str_plain_metaclass;
    tmp_metaclass_name_5 = DICT_GET_ITEM( tmp_dict_name_14, tmp_key_name_14 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_20;
    }
    goto condexpr_end_9;
    condexpr_false_9:;
    tmp_subscribed_name_5 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_subscribed_name_5 );
    tmp_subscript_name_5 = const_int_0;
    tmp_type_arg_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_type_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_20;
    }
    tmp_metaclass_name_5 = BUILTIN_TYPE1( tmp_type_arg_5 );
    Py_DECREF( tmp_type_arg_5 );
    if ( tmp_metaclass_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_20;
    }
    condexpr_end_9:;
    tmp_bases_name_5 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_bases_name_5 );
    tmp_assign_source_112 = SELECT_METACLASS( tmp_metaclass_name_5, tmp_bases_name_5 );
    Py_DECREF( tmp_metaclass_name_5 );
    if ( tmp_assign_source_112 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_20;
    }
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_112;

    tmp_key_name_15 = const_str_plain_metaclass;
    tmp_dict_name_15 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_15 );
    tmp_res = PyDict_Contains( tmp_dict_name_15, tmp_key_name_15 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_20;
    }
    tmp_cond_value_10 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_20;
    }
    if ( tmp_cond_truth_10 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_dictdel_dict = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_20;
    }
    branch_no_7:;
    tmp_hasattr_source_5 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_5 );
    tmp_hasattr_attr_5 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_5, tmp_hasattr_attr_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_20;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_10;
    }
    else
    {
        goto condexpr_false_10;
    }
    condexpr_true_10:;
    tmp_source_name_43 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_source_name_43 );
    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain___prepare__ );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_20;
    }
    tmp_tuple_element_24 = const_str_plain_POINT;
    tmp_args_name_9 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_args_name_9, 0, tmp_tuple_element_24 );
    tmp_tuple_element_24 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_tuple_element_24 );
    Py_INCREF( tmp_tuple_element_24 );
    PyTuple_SET_ITEM( tmp_args_name_9, 1, tmp_tuple_element_24 );
    tmp_kw_name_9 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_9 );
    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 115;
    tmp_assign_source_113 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_9, tmp_kw_name_9 );
    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_args_name_9 );
    if ( tmp_assign_source_113 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_20;
    }
    goto condexpr_end_10;
    condexpr_false_10:;
    tmp_assign_source_113 = PyDict_New();
    condexpr_end_10:;
    assert( tmp_class_creation_5__prepared == NULL );
    tmp_class_creation_5__prepared = tmp_assign_source_113;

    tmp_set_locals = tmp_class_creation_5__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_POINT_115 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
    tmp_res = PyObject_SetItem( locals_POINT_115, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_22;
    }
    tmp_dictset_value = const_str_plain_POINT;
    tmp_res = PyObject_SetItem( locals_POINT_115, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_22;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_2862df3176ecf90d7fe03de65fe2bbf6_6, codeobj_2862df3176ecf90d7fe03de65fe2bbf6, module_ctypes$wintypes, sizeof(void *) );
    frame_2862df3176ecf90d7fe03de65fe2bbf6_6 = cache_frame_2862df3176ecf90d7fe03de65fe2bbf6_6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_2862df3176ecf90d7fe03de65fe2bbf6_6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_2862df3176ecf90d7fe03de65fe2bbf6_6 ) == 2 ); // Frame stack

    // Framed code:
    tmp_tuple_element_25 = const_str_plain_x;
    tmp_list_element_4 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_list_element_4, 0, tmp_tuple_element_25 );
    tmp_tuple_element_25 = PyObject_GetItem( locals_POINT_115, const_str_plain_LONG );

    if ( tmp_tuple_element_25 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_25 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LONG );

        if (unlikely( tmp_tuple_element_25 == NULL ))
        {
            tmp_tuple_element_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LONG );
        }

        if ( tmp_tuple_element_25 == NULL )
        {
            Py_DECREF( tmp_list_element_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LONG" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 116;
            type_description_2 = "N";
            goto frame_exception_exit_6;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_25 );
    PyTuple_SET_ITEM( tmp_list_element_4, 1, tmp_tuple_element_25 );
    tmp_dictset_value = PyList_New( 2 );
    PyList_SET_ITEM( tmp_dictset_value, 0, tmp_list_element_4 );
    tmp_tuple_element_26 = const_str_plain_y;
    tmp_list_element_4 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_list_element_4, 0, tmp_tuple_element_26 );
    tmp_tuple_element_26 = PyObject_GetItem( locals_POINT_115, const_str_plain_LONG );

    if ( tmp_tuple_element_26 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_26 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LONG );

        if (unlikely( tmp_tuple_element_26 == NULL ))
        {
            tmp_tuple_element_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LONG );
        }

        if ( tmp_tuple_element_26 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LONG" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 117;
            type_description_2 = "N";
            goto frame_exception_exit_6;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_26 );
    PyTuple_SET_ITEM( tmp_list_element_4, 1, tmp_tuple_element_26 );
    PyList_SET_ITEM( tmp_dictset_value, 1, tmp_list_element_4 );
    tmp_res = PyObject_SetItem( locals_POINT_115, const_str_plain__fields_, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        type_description_2 = "N";
        goto frame_exception_exit_6;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2862df3176ecf90d7fe03de65fe2bbf6_6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_5;

    frame_exception_exit_6:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_2862df3176ecf90d7fe03de65fe2bbf6_6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_2862df3176ecf90d7fe03de65fe2bbf6_6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_2862df3176ecf90d7fe03de65fe2bbf6_6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_2862df3176ecf90d7fe03de65fe2bbf6_6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_2862df3176ecf90d7fe03de65fe2bbf6_6,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_2862df3176ecf90d7fe03de65fe2bbf6_6 == cache_frame_2862df3176ecf90d7fe03de65fe2bbf6_6 )
    {
        Py_DECREF( frame_2862df3176ecf90d7fe03de65fe2bbf6_6 );
    }
    cache_frame_2862df3176ecf90d7fe03de65fe2bbf6_6 = NULL;

    assertFrameObject( frame_2862df3176ecf90d7fe03de65fe2bbf6_6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_5;

    frame_no_exception_5:;

    goto skip_nested_handling_5;
    nested_frame_exit_5:;

    goto try_except_handler_22;
    skip_nested_handling_5:;
    tmp_called_name_14 = tmp_class_creation_5__metaclass;

    CHECK_OBJECT( tmp_called_name_14 );
    tmp_tuple_element_27 = const_str_plain_POINT;
    tmp_args_name_10 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_27 );
    PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_27 );
    tmp_tuple_element_27 = tmp_class_creation_5__bases;

    CHECK_OBJECT( tmp_tuple_element_27 );
    Py_INCREF( tmp_tuple_element_27 );
    PyTuple_SET_ITEM( tmp_args_name_10, 1, tmp_tuple_element_27 );
    tmp_tuple_element_27 = locals_POINT_115;
    Py_INCREF( tmp_tuple_element_27 );
    PyTuple_SET_ITEM( tmp_args_name_10, 2, tmp_tuple_element_27 );
    tmp_kw_name_10 = tmp_class_creation_5__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_10 );
    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 115;
    tmp_assign_source_115 = CALL_FUNCTION( tmp_called_name_14, tmp_args_name_10, tmp_kw_name_10 );
    Py_DECREF( tmp_args_name_10 );
    if ( tmp_assign_source_115 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;

        goto try_except_handler_22;
    }
    assert( outline_4_var___class__ == NULL );
    outline_4_var___class__ = tmp_assign_source_115;

    tmp_outline_return_value_5 = outline_4_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_5 );
    Py_INCREF( tmp_outline_return_value_5 );
    goto try_return_handler_22;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_22:;
    Py_DECREF( locals_POINT_115 );
    locals_POINT_115 = NULL;
    goto try_return_handler_21;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_POINT_115 );
    locals_POINT_115 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_21;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_21:;
    CHECK_OBJECT( (PyObject *)outline_4_var___class__ );
    Py_DECREF( outline_4_var___class__ );
    outline_4_var___class__ = NULL;

    goto outline_result_5;
    // Exception handler code:
    try_except_handler_21:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto outline_exception_5;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_5:;
    exception_lineno = 115;
    goto try_except_handler_20;
    outline_result_5:;
    tmp_assign_source_114 = tmp_outline_return_value_5;
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_POINT, tmp_assign_source_114 );
    goto try_end_12;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__bases );
    Py_DECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_decl_dict );
    Py_DECREF( tmp_class_creation_5__class_decl_dict );
    tmp_class_creation_5__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__metaclass );
    Py_DECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__prepared );
    Py_DECREF( tmp_class_creation_5__prepared );
    tmp_class_creation_5__prepared = NULL;

    // Tried code:
    tmp_assign_source_116 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_POINT );

    if (unlikely( tmp_assign_source_116 == NULL ))
    {
        tmp_assign_source_116 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_POINT );
    }

    if ( tmp_assign_source_116 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "POINT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 118;

        goto try_except_handler_23;
    }

    assert( tmp_assign_unpack_8__assign_source == NULL );
    Py_INCREF( tmp_assign_source_116 );
    tmp_assign_unpack_8__assign_source = tmp_assign_source_116;

    goto try_end_13;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    tmp_assign_source_117 = tmp_assign_unpack_8__assign_source;

    CHECK_OBJECT( tmp_assign_source_117 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_tagPOINT, tmp_assign_source_117 );
    tmp_assign_source_118 = tmp_assign_unpack_8__assign_source;

    CHECK_OBJECT( tmp_assign_source_118 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain__POINTL, tmp_assign_source_118 );
    tmp_assign_source_119 = tmp_assign_unpack_8__assign_source;

    CHECK_OBJECT( tmp_assign_source_119 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_POINTL, tmp_assign_source_119 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_8__assign_source );
    Py_DECREF( tmp_assign_unpack_8__assign_source );
    tmp_assign_unpack_8__assign_source = NULL;

    // Tried code:
    tmp_source_name_44 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_44 == NULL ))
    {
        tmp_source_name_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_44 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 120;

        goto try_except_handler_24;
    }

    tmp_tuple_element_28 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_Structure );
    if ( tmp_tuple_element_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_24;
    }
    tmp_assign_source_120 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_assign_source_120, 0, tmp_tuple_element_28 );
    assert( tmp_class_creation_6__bases == NULL );
    tmp_class_creation_6__bases = tmp_assign_source_120;

    tmp_assign_source_121 = PyDict_New();
    assert( tmp_class_creation_6__class_decl_dict == NULL );
    tmp_class_creation_6__class_decl_dict = tmp_assign_source_121;

    tmp_key_name_16 = const_str_plain_metaclass;
    tmp_dict_name_16 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_16 );
    tmp_res = PyDict_Contains( tmp_dict_name_16, tmp_key_name_16 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_24;
    }
    tmp_cond_value_11 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_11 = CHECK_IF_TRUE( tmp_cond_value_11 );
    if ( tmp_cond_truth_11 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_24;
    }
    if ( tmp_cond_truth_11 == 1 )
    {
        goto condexpr_true_11;
    }
    else
    {
        goto condexpr_false_11;
    }
    condexpr_true_11:;
    tmp_dict_name_17 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_17 );
    tmp_key_name_17 = const_str_plain_metaclass;
    tmp_metaclass_name_6 = DICT_GET_ITEM( tmp_dict_name_17, tmp_key_name_17 );
    if ( tmp_metaclass_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_24;
    }
    goto condexpr_end_11;
    condexpr_false_11:;
    tmp_subscribed_name_6 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_subscribed_name_6 );
    tmp_subscript_name_6 = const_int_0;
    tmp_type_arg_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_type_arg_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_24;
    }
    tmp_metaclass_name_6 = BUILTIN_TYPE1( tmp_type_arg_6 );
    Py_DECREF( tmp_type_arg_6 );
    if ( tmp_metaclass_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_24;
    }
    condexpr_end_11:;
    tmp_bases_name_6 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_bases_name_6 );
    tmp_assign_source_122 = SELECT_METACLASS( tmp_metaclass_name_6, tmp_bases_name_6 );
    Py_DECREF( tmp_metaclass_name_6 );
    if ( tmp_assign_source_122 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_24;
    }
    assert( tmp_class_creation_6__metaclass == NULL );
    tmp_class_creation_6__metaclass = tmp_assign_source_122;

    tmp_key_name_18 = const_str_plain_metaclass;
    tmp_dict_name_18 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_18 );
    tmp_res = PyDict_Contains( tmp_dict_name_18, tmp_key_name_18 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_24;
    }
    tmp_cond_value_12 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_12 = CHECK_IF_TRUE( tmp_cond_value_12 );
    if ( tmp_cond_truth_12 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_24;
    }
    if ( tmp_cond_truth_12 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_dictdel_dict = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_24;
    }
    branch_no_8:;
    tmp_hasattr_source_6 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_6 );
    tmp_hasattr_attr_6 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_6, tmp_hasattr_attr_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_24;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_12;
    }
    else
    {
        goto condexpr_false_12;
    }
    condexpr_true_12:;
    tmp_source_name_45 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_source_name_45 );
    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain___prepare__ );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_24;
    }
    tmp_tuple_element_29 = const_str_plain_SIZE;
    tmp_args_name_11 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_29 );
    PyTuple_SET_ITEM( tmp_args_name_11, 0, tmp_tuple_element_29 );
    tmp_tuple_element_29 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_tuple_element_29 );
    Py_INCREF( tmp_tuple_element_29 );
    PyTuple_SET_ITEM( tmp_args_name_11, 1, tmp_tuple_element_29 );
    tmp_kw_name_11 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_11 );
    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 120;
    tmp_assign_source_123 = CALL_FUNCTION( tmp_called_name_15, tmp_args_name_11, tmp_kw_name_11 );
    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_name_11 );
    if ( tmp_assign_source_123 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_24;
    }
    goto condexpr_end_12;
    condexpr_false_12:;
    tmp_assign_source_123 = PyDict_New();
    condexpr_end_12:;
    assert( tmp_class_creation_6__prepared == NULL );
    tmp_class_creation_6__prepared = tmp_assign_source_123;

    tmp_set_locals = tmp_class_creation_6__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_SIZE_120 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
    tmp_res = PyObject_SetItem( locals_SIZE_120, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_26;
    }
    tmp_dictset_value = const_str_plain_SIZE;
    tmp_res = PyObject_SetItem( locals_SIZE_120, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_26;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_de6b6dbef24bead99026302dfc13c522_7, codeobj_de6b6dbef24bead99026302dfc13c522, module_ctypes$wintypes, sizeof(void *) );
    frame_de6b6dbef24bead99026302dfc13c522_7 = cache_frame_de6b6dbef24bead99026302dfc13c522_7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_de6b6dbef24bead99026302dfc13c522_7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_de6b6dbef24bead99026302dfc13c522_7 ) == 2 ); // Frame stack

    // Framed code:
    tmp_tuple_element_30 = const_str_plain_cx;
    tmp_list_element_5 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_30 );
    PyTuple_SET_ITEM( tmp_list_element_5, 0, tmp_tuple_element_30 );
    tmp_tuple_element_30 = PyObject_GetItem( locals_SIZE_120, const_str_plain_LONG );

    if ( tmp_tuple_element_30 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_30 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LONG );

        if (unlikely( tmp_tuple_element_30 == NULL ))
        {
            tmp_tuple_element_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LONG );
        }

        if ( tmp_tuple_element_30 == NULL )
        {
            Py_DECREF( tmp_list_element_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LONG" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 121;
            type_description_2 = "N";
            goto frame_exception_exit_7;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_30 );
    PyTuple_SET_ITEM( tmp_list_element_5, 1, tmp_tuple_element_30 );
    tmp_dictset_value = PyList_New( 2 );
    PyList_SET_ITEM( tmp_dictset_value, 0, tmp_list_element_5 );
    tmp_tuple_element_31 = const_str_plain_cy;
    tmp_list_element_5 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_31 );
    PyTuple_SET_ITEM( tmp_list_element_5, 0, tmp_tuple_element_31 );
    tmp_tuple_element_31 = PyObject_GetItem( locals_SIZE_120, const_str_plain_LONG );

    if ( tmp_tuple_element_31 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_31 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LONG );

        if (unlikely( tmp_tuple_element_31 == NULL ))
        {
            tmp_tuple_element_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LONG );
        }

        if ( tmp_tuple_element_31 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LONG" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 122;
            type_description_2 = "N";
            goto frame_exception_exit_7;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_31 );
    PyTuple_SET_ITEM( tmp_list_element_5, 1, tmp_tuple_element_31 );
    PyList_SET_ITEM( tmp_dictset_value, 1, tmp_list_element_5 );
    tmp_res = PyObject_SetItem( locals_SIZE_120, const_str_plain__fields_, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        type_description_2 = "N";
        goto frame_exception_exit_7;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_de6b6dbef24bead99026302dfc13c522_7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_6;

    frame_exception_exit_7:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_de6b6dbef24bead99026302dfc13c522_7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_de6b6dbef24bead99026302dfc13c522_7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_de6b6dbef24bead99026302dfc13c522_7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_de6b6dbef24bead99026302dfc13c522_7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_de6b6dbef24bead99026302dfc13c522_7,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_de6b6dbef24bead99026302dfc13c522_7 == cache_frame_de6b6dbef24bead99026302dfc13c522_7 )
    {
        Py_DECREF( frame_de6b6dbef24bead99026302dfc13c522_7 );
    }
    cache_frame_de6b6dbef24bead99026302dfc13c522_7 = NULL;

    assertFrameObject( frame_de6b6dbef24bead99026302dfc13c522_7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_6;

    frame_no_exception_6:;

    goto skip_nested_handling_6;
    nested_frame_exit_6:;

    goto try_except_handler_26;
    skip_nested_handling_6:;
    tmp_called_name_16 = tmp_class_creation_6__metaclass;

    CHECK_OBJECT( tmp_called_name_16 );
    tmp_tuple_element_32 = const_str_plain_SIZE;
    tmp_args_name_12 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_32 );
    PyTuple_SET_ITEM( tmp_args_name_12, 0, tmp_tuple_element_32 );
    tmp_tuple_element_32 = tmp_class_creation_6__bases;

    CHECK_OBJECT( tmp_tuple_element_32 );
    Py_INCREF( tmp_tuple_element_32 );
    PyTuple_SET_ITEM( tmp_args_name_12, 1, tmp_tuple_element_32 );
    tmp_tuple_element_32 = locals_SIZE_120;
    Py_INCREF( tmp_tuple_element_32 );
    PyTuple_SET_ITEM( tmp_args_name_12, 2, tmp_tuple_element_32 );
    tmp_kw_name_12 = tmp_class_creation_6__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_12 );
    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 120;
    tmp_assign_source_125 = CALL_FUNCTION( tmp_called_name_16, tmp_args_name_12, tmp_kw_name_12 );
    Py_DECREF( tmp_args_name_12 );
    if ( tmp_assign_source_125 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;

        goto try_except_handler_26;
    }
    assert( outline_5_var___class__ == NULL );
    outline_5_var___class__ = tmp_assign_source_125;

    tmp_outline_return_value_6 = outline_5_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_6 );
    Py_INCREF( tmp_outline_return_value_6 );
    goto try_return_handler_26;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_26:;
    Py_DECREF( locals_SIZE_120 );
    locals_SIZE_120 = NULL;
    goto try_return_handler_25;
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

    Py_DECREF( locals_SIZE_120 );
    locals_SIZE_120 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_24;
    exception_value = exception_keeper_value_24;
    exception_tb = exception_keeper_tb_24;
    exception_lineno = exception_keeper_lineno_24;

    goto try_except_handler_25;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_25:;
    CHECK_OBJECT( (PyObject *)outline_5_var___class__ );
    Py_DECREF( outline_5_var___class__ );
    outline_5_var___class__ = NULL;

    goto outline_result_6;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto outline_exception_6;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_6:;
    exception_lineno = 120;
    goto try_except_handler_24;
    outline_result_6:;
    tmp_assign_source_124 = tmp_outline_return_value_6;
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_SIZE, tmp_assign_source_124 );
    goto try_end_14;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__bases );
    Py_DECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class_decl_dict );
    Py_DECREF( tmp_class_creation_6__class_decl_dict );
    tmp_class_creation_6__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__metaclass );
    Py_DECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__prepared );
    Py_DECREF( tmp_class_creation_6__prepared );
    tmp_class_creation_6__prepared = NULL;

    // Tried code:
    tmp_assign_source_126 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_SIZE );

    if (unlikely( tmp_assign_source_126 == NULL ))
    {
        tmp_assign_source_126 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SIZE );
    }

    if ( tmp_assign_source_126 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SIZE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 123;

        goto try_except_handler_27;
    }

    assert( tmp_assign_unpack_9__assign_source == NULL );
    Py_INCREF( tmp_assign_source_126 );
    tmp_assign_unpack_9__assign_source = tmp_assign_source_126;

    goto try_end_15;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_15:;
    tmp_assign_source_127 = tmp_assign_unpack_9__assign_source;

    CHECK_OBJECT( tmp_assign_source_127 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_tagSIZE, tmp_assign_source_127 );
    tmp_assign_source_128 = tmp_assign_unpack_9__assign_source;

    CHECK_OBJECT( tmp_assign_source_128 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_SIZEL, tmp_assign_source_128 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_9__assign_source );
    Py_DECREF( tmp_assign_unpack_9__assign_source );
    tmp_assign_unpack_9__assign_source = NULL;

    tmp_assign_source_129 = MAKE_FUNCTION_ctypes$wintypes$$$function_2_RGB(  );
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_RGB, tmp_assign_source_129 );
    // Tried code:
    tmp_source_name_46 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_46 == NULL ))
    {
        tmp_source_name_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_46 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 128;

        goto try_except_handler_28;
    }

    tmp_tuple_element_33 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_Structure );
    if ( tmp_tuple_element_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;

        goto try_except_handler_28;
    }
    tmp_assign_source_130 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_assign_source_130, 0, tmp_tuple_element_33 );
    assert( tmp_class_creation_7__bases == NULL );
    tmp_class_creation_7__bases = tmp_assign_source_130;

    tmp_assign_source_131 = PyDict_New();
    assert( tmp_class_creation_7__class_decl_dict == NULL );
    tmp_class_creation_7__class_decl_dict = tmp_assign_source_131;

    tmp_key_name_19 = const_str_plain_metaclass;
    tmp_dict_name_19 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_19 );
    tmp_res = PyDict_Contains( tmp_dict_name_19, tmp_key_name_19 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;

        goto try_except_handler_28;
    }
    tmp_cond_value_13 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_13 = CHECK_IF_TRUE( tmp_cond_value_13 );
    if ( tmp_cond_truth_13 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;

        goto try_except_handler_28;
    }
    if ( tmp_cond_truth_13 == 1 )
    {
        goto condexpr_true_13;
    }
    else
    {
        goto condexpr_false_13;
    }
    condexpr_true_13:;
    tmp_dict_name_20 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_20 );
    tmp_key_name_20 = const_str_plain_metaclass;
    tmp_metaclass_name_7 = DICT_GET_ITEM( tmp_dict_name_20, tmp_key_name_20 );
    if ( tmp_metaclass_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;

        goto try_except_handler_28;
    }
    goto condexpr_end_13;
    condexpr_false_13:;
    tmp_subscribed_name_7 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_subscribed_name_7 );
    tmp_subscript_name_7 = const_int_0;
    tmp_type_arg_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_type_arg_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;

        goto try_except_handler_28;
    }
    tmp_metaclass_name_7 = BUILTIN_TYPE1( tmp_type_arg_7 );
    Py_DECREF( tmp_type_arg_7 );
    if ( tmp_metaclass_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;

        goto try_except_handler_28;
    }
    condexpr_end_13:;
    tmp_bases_name_7 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_bases_name_7 );
    tmp_assign_source_132 = SELECT_METACLASS( tmp_metaclass_name_7, tmp_bases_name_7 );
    Py_DECREF( tmp_metaclass_name_7 );
    if ( tmp_assign_source_132 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;

        goto try_except_handler_28;
    }
    assert( tmp_class_creation_7__metaclass == NULL );
    tmp_class_creation_7__metaclass = tmp_assign_source_132;

    tmp_key_name_21 = const_str_plain_metaclass;
    tmp_dict_name_21 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_21 );
    tmp_res = PyDict_Contains( tmp_dict_name_21, tmp_key_name_21 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;

        goto try_except_handler_28;
    }
    tmp_cond_value_14 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_14 = CHECK_IF_TRUE( tmp_cond_value_14 );
    if ( tmp_cond_truth_14 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;

        goto try_except_handler_28;
    }
    if ( tmp_cond_truth_14 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_dictdel_dict = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;

        goto try_except_handler_28;
    }
    branch_no_9:;
    tmp_hasattr_source_7 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_7 );
    tmp_hasattr_attr_7 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_7, tmp_hasattr_attr_7 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;

        goto try_except_handler_28;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_14;
    }
    else
    {
        goto condexpr_false_14;
    }
    condexpr_true_14:;
    tmp_source_name_47 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_source_name_47 );
    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain___prepare__ );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;

        goto try_except_handler_28;
    }
    tmp_tuple_element_34 = const_str_plain_FILETIME;
    tmp_args_name_13 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_34 );
    PyTuple_SET_ITEM( tmp_args_name_13, 0, tmp_tuple_element_34 );
    tmp_tuple_element_34 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_tuple_element_34 );
    Py_INCREF( tmp_tuple_element_34 );
    PyTuple_SET_ITEM( tmp_args_name_13, 1, tmp_tuple_element_34 );
    tmp_kw_name_13 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_13 );
    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 128;
    tmp_assign_source_133 = CALL_FUNCTION( tmp_called_name_17, tmp_args_name_13, tmp_kw_name_13 );
    Py_DECREF( tmp_called_name_17 );
    Py_DECREF( tmp_args_name_13 );
    if ( tmp_assign_source_133 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;

        goto try_except_handler_28;
    }
    goto condexpr_end_14;
    condexpr_false_14:;
    tmp_assign_source_133 = PyDict_New();
    condexpr_end_14:;
    assert( tmp_class_creation_7__prepared == NULL );
    tmp_class_creation_7__prepared = tmp_assign_source_133;

    tmp_set_locals = tmp_class_creation_7__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_FILETIME_128 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
    tmp_res = PyObject_SetItem( locals_FILETIME_128, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;

        goto try_except_handler_30;
    }
    tmp_dictset_value = const_str_plain_FILETIME;
    tmp_res = PyObject_SetItem( locals_FILETIME_128, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;

        goto try_except_handler_30;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_e4e9581dbca2d971bf23a161321c4652_8, codeobj_e4e9581dbca2d971bf23a161321c4652, module_ctypes$wintypes, sizeof(void *) );
    frame_e4e9581dbca2d971bf23a161321c4652_8 = cache_frame_e4e9581dbca2d971bf23a161321c4652_8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e4e9581dbca2d971bf23a161321c4652_8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e4e9581dbca2d971bf23a161321c4652_8 ) == 2 ); // Frame stack

    // Framed code:
    tmp_tuple_element_35 = const_str_plain_dwLowDateTime;
    tmp_list_element_6 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_35 );
    PyTuple_SET_ITEM( tmp_list_element_6, 0, tmp_tuple_element_35 );
    tmp_tuple_element_35 = PyObject_GetItem( locals_FILETIME_128, const_str_plain_DWORD );

    if ( tmp_tuple_element_35 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_35 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_tuple_element_35 == NULL ))
        {
            tmp_tuple_element_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_tuple_element_35 == NULL )
        {
            Py_DECREF( tmp_list_element_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 129;
            type_description_2 = "N";
            goto frame_exception_exit_8;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_35 );
    PyTuple_SET_ITEM( tmp_list_element_6, 1, tmp_tuple_element_35 );
    tmp_dictset_value = PyList_New( 2 );
    PyList_SET_ITEM( tmp_dictset_value, 0, tmp_list_element_6 );
    tmp_tuple_element_36 = const_str_plain_dwHighDateTime;
    tmp_list_element_6 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_36 );
    PyTuple_SET_ITEM( tmp_list_element_6, 0, tmp_tuple_element_36 );
    tmp_tuple_element_36 = PyObject_GetItem( locals_FILETIME_128, const_str_plain_DWORD );

    if ( tmp_tuple_element_36 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_36 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_tuple_element_36 == NULL ))
        {
            tmp_tuple_element_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_tuple_element_36 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 130;
            type_description_2 = "N";
            goto frame_exception_exit_8;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_36 );
    PyTuple_SET_ITEM( tmp_list_element_6, 1, tmp_tuple_element_36 );
    PyList_SET_ITEM( tmp_dictset_value, 1, tmp_list_element_6 );
    tmp_res = PyObject_SetItem( locals_FILETIME_128, const_str_plain__fields_, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        type_description_2 = "N";
        goto frame_exception_exit_8;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e4e9581dbca2d971bf23a161321c4652_8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_7;

    frame_exception_exit_8:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e4e9581dbca2d971bf23a161321c4652_8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e4e9581dbca2d971bf23a161321c4652_8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e4e9581dbca2d971bf23a161321c4652_8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e4e9581dbca2d971bf23a161321c4652_8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e4e9581dbca2d971bf23a161321c4652_8,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_e4e9581dbca2d971bf23a161321c4652_8 == cache_frame_e4e9581dbca2d971bf23a161321c4652_8 )
    {
        Py_DECREF( frame_e4e9581dbca2d971bf23a161321c4652_8 );
    }
    cache_frame_e4e9581dbca2d971bf23a161321c4652_8 = NULL;

    assertFrameObject( frame_e4e9581dbca2d971bf23a161321c4652_8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_7;

    frame_no_exception_7:;

    goto skip_nested_handling_7;
    nested_frame_exit_7:;

    goto try_except_handler_30;
    skip_nested_handling_7:;
    tmp_called_name_18 = tmp_class_creation_7__metaclass;

    CHECK_OBJECT( tmp_called_name_18 );
    tmp_tuple_element_37 = const_str_plain_FILETIME;
    tmp_args_name_14 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_37 );
    PyTuple_SET_ITEM( tmp_args_name_14, 0, tmp_tuple_element_37 );
    tmp_tuple_element_37 = tmp_class_creation_7__bases;

    CHECK_OBJECT( tmp_tuple_element_37 );
    Py_INCREF( tmp_tuple_element_37 );
    PyTuple_SET_ITEM( tmp_args_name_14, 1, tmp_tuple_element_37 );
    tmp_tuple_element_37 = locals_FILETIME_128;
    Py_INCREF( tmp_tuple_element_37 );
    PyTuple_SET_ITEM( tmp_args_name_14, 2, tmp_tuple_element_37 );
    tmp_kw_name_14 = tmp_class_creation_7__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_14 );
    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 128;
    tmp_assign_source_135 = CALL_FUNCTION( tmp_called_name_18, tmp_args_name_14, tmp_kw_name_14 );
    Py_DECREF( tmp_args_name_14 );
    if ( tmp_assign_source_135 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;

        goto try_except_handler_30;
    }
    assert( outline_6_var___class__ == NULL );
    outline_6_var___class__ = tmp_assign_source_135;

    tmp_outline_return_value_7 = outline_6_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_7 );
    Py_INCREF( tmp_outline_return_value_7 );
    goto try_return_handler_30;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_30:;
    Py_DECREF( locals_FILETIME_128 );
    locals_FILETIME_128 = NULL;
    goto try_return_handler_29;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_FILETIME_128 );
    locals_FILETIME_128 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto try_except_handler_29;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_29:;
    CHECK_OBJECT( (PyObject *)outline_6_var___class__ );
    Py_DECREF( outline_6_var___class__ );
    outline_6_var___class__ = NULL;

    goto outline_result_7;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto outline_exception_7;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_7:;
    exception_lineno = 128;
    goto try_except_handler_28;
    outline_result_7:;
    tmp_assign_source_134 = tmp_outline_return_value_7;
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_FILETIME, tmp_assign_source_134 );
    goto try_end_16;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    Py_XDECREF( tmp_class_creation_7__class_decl_dict );
    tmp_class_creation_7__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_7__prepared );
    tmp_class_creation_7__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto frame_exception_exit_1;
    // End of try:
    try_end_16:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__bases );
    Py_DECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class_decl_dict );
    Py_DECREF( tmp_class_creation_7__class_decl_dict );
    tmp_class_creation_7__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__metaclass );
    Py_DECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__prepared );
    Py_DECREF( tmp_class_creation_7__prepared );
    tmp_class_creation_7__prepared = NULL;

    tmp_assign_source_136 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_FILETIME );

    if (unlikely( tmp_assign_source_136 == NULL ))
    {
        tmp_assign_source_136 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FILETIME );
    }

    if ( tmp_assign_source_136 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FILETIME" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 131;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain__FILETIME, tmp_assign_source_136 );
    // Tried code:
    tmp_source_name_48 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_48 == NULL ))
    {
        tmp_source_name_48 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_48 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 133;

        goto try_except_handler_31;
    }

    tmp_tuple_element_38 = LOOKUP_ATTRIBUTE( tmp_source_name_48, const_str_plain_Structure );
    if ( tmp_tuple_element_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_31;
    }
    tmp_assign_source_137 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_assign_source_137, 0, tmp_tuple_element_38 );
    assert( tmp_class_creation_8__bases == NULL );
    tmp_class_creation_8__bases = tmp_assign_source_137;

    tmp_assign_source_138 = PyDict_New();
    assert( tmp_class_creation_8__class_decl_dict == NULL );
    tmp_class_creation_8__class_decl_dict = tmp_assign_source_138;

    tmp_key_name_22 = const_str_plain_metaclass;
    tmp_dict_name_22 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_22 );
    tmp_res = PyDict_Contains( tmp_dict_name_22, tmp_key_name_22 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_31;
    }
    tmp_cond_value_15 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_15 = CHECK_IF_TRUE( tmp_cond_value_15 );
    if ( tmp_cond_truth_15 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_31;
    }
    if ( tmp_cond_truth_15 == 1 )
    {
        goto condexpr_true_15;
    }
    else
    {
        goto condexpr_false_15;
    }
    condexpr_true_15:;
    tmp_dict_name_23 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_23 );
    tmp_key_name_23 = const_str_plain_metaclass;
    tmp_metaclass_name_8 = DICT_GET_ITEM( tmp_dict_name_23, tmp_key_name_23 );
    if ( tmp_metaclass_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_31;
    }
    goto condexpr_end_15;
    condexpr_false_15:;
    tmp_subscribed_name_8 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_subscribed_name_8 );
    tmp_subscript_name_8 = const_int_0;
    tmp_type_arg_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
    if ( tmp_type_arg_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_31;
    }
    tmp_metaclass_name_8 = BUILTIN_TYPE1( tmp_type_arg_8 );
    Py_DECREF( tmp_type_arg_8 );
    if ( tmp_metaclass_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_31;
    }
    condexpr_end_15:;
    tmp_bases_name_8 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_bases_name_8 );
    tmp_assign_source_139 = SELECT_METACLASS( tmp_metaclass_name_8, tmp_bases_name_8 );
    Py_DECREF( tmp_metaclass_name_8 );
    if ( tmp_assign_source_139 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_31;
    }
    assert( tmp_class_creation_8__metaclass == NULL );
    tmp_class_creation_8__metaclass = tmp_assign_source_139;

    tmp_key_name_24 = const_str_plain_metaclass;
    tmp_dict_name_24 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_24 );
    tmp_res = PyDict_Contains( tmp_dict_name_24, tmp_key_name_24 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_31;
    }
    tmp_cond_value_16 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_16 = CHECK_IF_TRUE( tmp_cond_value_16 );
    if ( tmp_cond_truth_16 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_31;
    }
    if ( tmp_cond_truth_16 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_dictdel_dict = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_31;
    }
    branch_no_10:;
    tmp_hasattr_source_8 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_8 );
    tmp_hasattr_attr_8 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_8, tmp_hasattr_attr_8 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_31;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_16;
    }
    else
    {
        goto condexpr_false_16;
    }
    condexpr_true_16:;
    tmp_source_name_49 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_source_name_49 );
    tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_49, const_str_plain___prepare__ );
    if ( tmp_called_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_31;
    }
    tmp_tuple_element_39 = const_str_plain_MSG;
    tmp_args_name_15 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_39 );
    PyTuple_SET_ITEM( tmp_args_name_15, 0, tmp_tuple_element_39 );
    tmp_tuple_element_39 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_tuple_element_39 );
    Py_INCREF( tmp_tuple_element_39 );
    PyTuple_SET_ITEM( tmp_args_name_15, 1, tmp_tuple_element_39 );
    tmp_kw_name_15 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_15 );
    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 133;
    tmp_assign_source_140 = CALL_FUNCTION( tmp_called_name_19, tmp_args_name_15, tmp_kw_name_15 );
    Py_DECREF( tmp_called_name_19 );
    Py_DECREF( tmp_args_name_15 );
    if ( tmp_assign_source_140 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_31;
    }
    goto condexpr_end_16;
    condexpr_false_16:;
    tmp_assign_source_140 = PyDict_New();
    condexpr_end_16:;
    assert( tmp_class_creation_8__prepared == NULL );
    tmp_class_creation_8__prepared = tmp_assign_source_140;

    tmp_set_locals = tmp_class_creation_8__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_MSG_133 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
    tmp_res = PyObject_SetItem( locals_MSG_133, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_33;
    }
    tmp_dictset_value = const_str_plain_MSG;
    tmp_res = PyObject_SetItem( locals_MSG_133, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_33;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_d6f7ed2d7e05ae44e62673b7ff15ec5f_9, codeobj_d6f7ed2d7e05ae44e62673b7ff15ec5f, module_ctypes$wintypes, sizeof(void *) );
    frame_d6f7ed2d7e05ae44e62673b7ff15ec5f_9 = cache_frame_d6f7ed2d7e05ae44e62673b7ff15ec5f_9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d6f7ed2d7e05ae44e62673b7ff15ec5f_9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d6f7ed2d7e05ae44e62673b7ff15ec5f_9 ) == 2 ); // Frame stack

    // Framed code:
    tmp_tuple_element_40 = const_str_plain_hWnd;
    tmp_list_element_7 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_40 );
    PyTuple_SET_ITEM( tmp_list_element_7, 0, tmp_tuple_element_40 );
    tmp_tuple_element_40 = PyObject_GetItem( locals_MSG_133, const_str_plain_HWND );

    if ( tmp_tuple_element_40 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_40 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HWND );

        if (unlikely( tmp_tuple_element_40 == NULL ))
        {
            tmp_tuple_element_40 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HWND );
        }

        if ( tmp_tuple_element_40 == NULL )
        {
            Py_DECREF( tmp_list_element_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HWND" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 134;
            type_description_2 = "N";
            goto frame_exception_exit_9;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_40 );
    PyTuple_SET_ITEM( tmp_list_element_7, 1, tmp_tuple_element_40 );
    tmp_dictset_value = PyList_New( 6 );
    PyList_SET_ITEM( tmp_dictset_value, 0, tmp_list_element_7 );
    tmp_tuple_element_41 = const_str_plain_message;
    tmp_list_element_7 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_41 );
    PyTuple_SET_ITEM( tmp_list_element_7, 0, tmp_tuple_element_41 );
    tmp_tuple_element_41 = PyObject_GetItem( locals_MSG_133, const_str_plain_UINT );

    if ( tmp_tuple_element_41 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_41 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_UINT );

        if (unlikely( tmp_tuple_element_41 == NULL ))
        {
            tmp_tuple_element_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UINT );
        }

        if ( tmp_tuple_element_41 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UINT" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 135;
            type_description_2 = "N";
            goto frame_exception_exit_9;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_41 );
    PyTuple_SET_ITEM( tmp_list_element_7, 1, tmp_tuple_element_41 );
    PyList_SET_ITEM( tmp_dictset_value, 1, tmp_list_element_7 );
    tmp_tuple_element_42 = const_str_plain_wParam;
    tmp_list_element_7 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_42 );
    PyTuple_SET_ITEM( tmp_list_element_7, 0, tmp_tuple_element_42 );
    tmp_tuple_element_42 = PyObject_GetItem( locals_MSG_133, const_str_plain_WPARAM );

    if ( tmp_tuple_element_42 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_42 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_WPARAM );

        if (unlikely( tmp_tuple_element_42 == NULL ))
        {
            tmp_tuple_element_42 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WPARAM );
        }

        if ( tmp_tuple_element_42 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WPARAM" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 136;
            type_description_2 = "N";
            goto frame_exception_exit_9;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_42 );
    PyTuple_SET_ITEM( tmp_list_element_7, 1, tmp_tuple_element_42 );
    PyList_SET_ITEM( tmp_dictset_value, 2, tmp_list_element_7 );
    tmp_tuple_element_43 = const_str_plain_lParam;
    tmp_list_element_7 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_43 );
    PyTuple_SET_ITEM( tmp_list_element_7, 0, tmp_tuple_element_43 );
    tmp_tuple_element_43 = PyObject_GetItem( locals_MSG_133, const_str_plain_LPARAM );

    if ( tmp_tuple_element_43 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_43 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPARAM );

        if (unlikely( tmp_tuple_element_43 == NULL ))
        {
            tmp_tuple_element_43 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LPARAM );
        }

        if ( tmp_tuple_element_43 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LPARAM" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 137;
            type_description_2 = "N";
            goto frame_exception_exit_9;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_43 );
    PyTuple_SET_ITEM( tmp_list_element_7, 1, tmp_tuple_element_43 );
    PyList_SET_ITEM( tmp_dictset_value, 3, tmp_list_element_7 );
    tmp_tuple_element_44 = const_str_plain_time;
    tmp_list_element_7 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_44 );
    PyTuple_SET_ITEM( tmp_list_element_7, 0, tmp_tuple_element_44 );
    tmp_tuple_element_44 = PyObject_GetItem( locals_MSG_133, const_str_plain_DWORD );

    if ( tmp_tuple_element_44 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_44 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_tuple_element_44 == NULL ))
        {
            tmp_tuple_element_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_tuple_element_44 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 138;
            type_description_2 = "N";
            goto frame_exception_exit_9;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_44 );
    PyTuple_SET_ITEM( tmp_list_element_7, 1, tmp_tuple_element_44 );
    PyList_SET_ITEM( tmp_dictset_value, 4, tmp_list_element_7 );
    tmp_tuple_element_45 = const_str_plain_pt;
    tmp_list_element_7 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_45 );
    PyTuple_SET_ITEM( tmp_list_element_7, 0, tmp_tuple_element_45 );
    tmp_tuple_element_45 = PyObject_GetItem( locals_MSG_133, const_str_plain_POINT );

    if ( tmp_tuple_element_45 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_45 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_POINT );

        if (unlikely( tmp_tuple_element_45 == NULL ))
        {
            tmp_tuple_element_45 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_POINT );
        }

        if ( tmp_tuple_element_45 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_7 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "POINT" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 139;
            type_description_2 = "N";
            goto frame_exception_exit_9;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_45 );
    PyTuple_SET_ITEM( tmp_list_element_7, 1, tmp_tuple_element_45 );
    PyList_SET_ITEM( tmp_dictset_value, 5, tmp_list_element_7 );
    tmp_res = PyObject_SetItem( locals_MSG_133, const_str_plain__fields_, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        type_description_2 = "N";
        goto frame_exception_exit_9;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d6f7ed2d7e05ae44e62673b7ff15ec5f_9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_8;

    frame_exception_exit_9:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d6f7ed2d7e05ae44e62673b7ff15ec5f_9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d6f7ed2d7e05ae44e62673b7ff15ec5f_9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d6f7ed2d7e05ae44e62673b7ff15ec5f_9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d6f7ed2d7e05ae44e62673b7ff15ec5f_9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d6f7ed2d7e05ae44e62673b7ff15ec5f_9,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_d6f7ed2d7e05ae44e62673b7ff15ec5f_9 == cache_frame_d6f7ed2d7e05ae44e62673b7ff15ec5f_9 )
    {
        Py_DECREF( frame_d6f7ed2d7e05ae44e62673b7ff15ec5f_9 );
    }
    cache_frame_d6f7ed2d7e05ae44e62673b7ff15ec5f_9 = NULL;

    assertFrameObject( frame_d6f7ed2d7e05ae44e62673b7ff15ec5f_9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_8;

    frame_no_exception_8:;

    goto skip_nested_handling_8;
    nested_frame_exit_8:;

    goto try_except_handler_33;
    skip_nested_handling_8:;
    tmp_called_name_20 = tmp_class_creation_8__metaclass;

    CHECK_OBJECT( tmp_called_name_20 );
    tmp_tuple_element_46 = const_str_plain_MSG;
    tmp_args_name_16 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_46 );
    PyTuple_SET_ITEM( tmp_args_name_16, 0, tmp_tuple_element_46 );
    tmp_tuple_element_46 = tmp_class_creation_8__bases;

    CHECK_OBJECT( tmp_tuple_element_46 );
    Py_INCREF( tmp_tuple_element_46 );
    PyTuple_SET_ITEM( tmp_args_name_16, 1, tmp_tuple_element_46 );
    tmp_tuple_element_46 = locals_MSG_133;
    Py_INCREF( tmp_tuple_element_46 );
    PyTuple_SET_ITEM( tmp_args_name_16, 2, tmp_tuple_element_46 );
    tmp_kw_name_16 = tmp_class_creation_8__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_16 );
    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 133;
    tmp_assign_source_142 = CALL_FUNCTION( tmp_called_name_20, tmp_args_name_16, tmp_kw_name_16 );
    Py_DECREF( tmp_args_name_16 );
    if ( tmp_assign_source_142 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;

        goto try_except_handler_33;
    }
    assert( outline_7_var___class__ == NULL );
    outline_7_var___class__ = tmp_assign_source_142;

    tmp_outline_return_value_8 = outline_7_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_8 );
    Py_INCREF( tmp_outline_return_value_8 );
    goto try_return_handler_33;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_33:;
    Py_DECREF( locals_MSG_133 );
    locals_MSG_133 = NULL;
    goto try_return_handler_32;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_MSG_133 );
    locals_MSG_133 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto try_except_handler_32;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_32:;
    CHECK_OBJECT( (PyObject *)outline_7_var___class__ );
    Py_DECREF( outline_7_var___class__ );
    outline_7_var___class__ = NULL;

    goto outline_result_8;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto outline_exception_8;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_8:;
    exception_lineno = 133;
    goto try_except_handler_31;
    outline_result_8:;
    tmp_assign_source_141 = tmp_outline_return_value_8;
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_MSG, tmp_assign_source_141 );
    goto try_end_17;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_8__bases );
    tmp_class_creation_8__bases = NULL;

    Py_XDECREF( tmp_class_creation_8__class_decl_dict );
    tmp_class_creation_8__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_8__prepared );
    tmp_class_creation_8__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__bases );
    Py_DECREF( tmp_class_creation_8__bases );
    tmp_class_creation_8__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__class_decl_dict );
    Py_DECREF( tmp_class_creation_8__class_decl_dict );
    tmp_class_creation_8__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__metaclass );
    Py_DECREF( tmp_class_creation_8__metaclass );
    tmp_class_creation_8__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_8__prepared );
    Py_DECREF( tmp_class_creation_8__prepared );
    tmp_class_creation_8__prepared = NULL;

    tmp_assign_source_143 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_MSG );

    if (unlikely( tmp_assign_source_143 == NULL ))
    {
        tmp_assign_source_143 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG );
    }

    if ( tmp_assign_source_143 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 140;

        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_tagMSG, tmp_assign_source_143 );
    tmp_assign_source_144 = const_int_pos_260;
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_MAX_PATH, tmp_assign_source_144 );
    // Tried code:
    tmp_source_name_50 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_50 == NULL ))
    {
        tmp_source_name_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_50 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 143;

        goto try_except_handler_34;
    }

    tmp_tuple_element_47 = LOOKUP_ATTRIBUTE( tmp_source_name_50, const_str_plain_Structure );
    if ( tmp_tuple_element_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;

        goto try_except_handler_34;
    }
    tmp_assign_source_145 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_assign_source_145, 0, tmp_tuple_element_47 );
    assert( tmp_class_creation_9__bases == NULL );
    tmp_class_creation_9__bases = tmp_assign_source_145;

    tmp_assign_source_146 = PyDict_New();
    assert( tmp_class_creation_9__class_decl_dict == NULL );
    tmp_class_creation_9__class_decl_dict = tmp_assign_source_146;

    tmp_key_name_25 = const_str_plain_metaclass;
    tmp_dict_name_25 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_25 );
    tmp_res = PyDict_Contains( tmp_dict_name_25, tmp_key_name_25 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;

        goto try_except_handler_34;
    }
    tmp_cond_value_17 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_17 = CHECK_IF_TRUE( tmp_cond_value_17 );
    if ( tmp_cond_truth_17 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;

        goto try_except_handler_34;
    }
    if ( tmp_cond_truth_17 == 1 )
    {
        goto condexpr_true_17;
    }
    else
    {
        goto condexpr_false_17;
    }
    condexpr_true_17:;
    tmp_dict_name_26 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_26 );
    tmp_key_name_26 = const_str_plain_metaclass;
    tmp_metaclass_name_9 = DICT_GET_ITEM( tmp_dict_name_26, tmp_key_name_26 );
    if ( tmp_metaclass_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;

        goto try_except_handler_34;
    }
    goto condexpr_end_17;
    condexpr_false_17:;
    tmp_subscribed_name_9 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_subscribed_name_9 );
    tmp_subscript_name_9 = const_int_0;
    tmp_type_arg_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
    if ( tmp_type_arg_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;

        goto try_except_handler_34;
    }
    tmp_metaclass_name_9 = BUILTIN_TYPE1( tmp_type_arg_9 );
    Py_DECREF( tmp_type_arg_9 );
    if ( tmp_metaclass_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;

        goto try_except_handler_34;
    }
    condexpr_end_17:;
    tmp_bases_name_9 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_bases_name_9 );
    tmp_assign_source_147 = SELECT_METACLASS( tmp_metaclass_name_9, tmp_bases_name_9 );
    Py_DECREF( tmp_metaclass_name_9 );
    if ( tmp_assign_source_147 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;

        goto try_except_handler_34;
    }
    assert( tmp_class_creation_9__metaclass == NULL );
    tmp_class_creation_9__metaclass = tmp_assign_source_147;

    tmp_key_name_27 = const_str_plain_metaclass;
    tmp_dict_name_27 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_27 );
    tmp_res = PyDict_Contains( tmp_dict_name_27, tmp_key_name_27 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;

        goto try_except_handler_34;
    }
    tmp_cond_value_18 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_18 = CHECK_IF_TRUE( tmp_cond_value_18 );
    if ( tmp_cond_truth_18 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;

        goto try_except_handler_34;
    }
    if ( tmp_cond_truth_18 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_dictdel_dict = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;

        goto try_except_handler_34;
    }
    branch_no_11:;
    tmp_hasattr_source_9 = tmp_class_creation_9__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_9 );
    tmp_hasattr_attr_9 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_9, tmp_hasattr_attr_9 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;

        goto try_except_handler_34;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_18;
    }
    else
    {
        goto condexpr_false_18;
    }
    condexpr_true_18:;
    tmp_source_name_51 = tmp_class_creation_9__metaclass;

    CHECK_OBJECT( tmp_source_name_51 );
    tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_51, const_str_plain___prepare__ );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;

        goto try_except_handler_34;
    }
    tmp_tuple_element_48 = const_str_plain_WIN32_FIND_DATAA;
    tmp_args_name_17 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_48 );
    PyTuple_SET_ITEM( tmp_args_name_17, 0, tmp_tuple_element_48 );
    tmp_tuple_element_48 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_tuple_element_48 );
    Py_INCREF( tmp_tuple_element_48 );
    PyTuple_SET_ITEM( tmp_args_name_17, 1, tmp_tuple_element_48 );
    tmp_kw_name_17 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_17 );
    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 143;
    tmp_assign_source_148 = CALL_FUNCTION( tmp_called_name_21, tmp_args_name_17, tmp_kw_name_17 );
    Py_DECREF( tmp_called_name_21 );
    Py_DECREF( tmp_args_name_17 );
    if ( tmp_assign_source_148 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;

        goto try_except_handler_34;
    }
    goto condexpr_end_18;
    condexpr_false_18:;
    tmp_assign_source_148 = PyDict_New();
    condexpr_end_18:;
    assert( tmp_class_creation_9__prepared == NULL );
    tmp_class_creation_9__prepared = tmp_assign_source_148;

    tmp_set_locals = tmp_class_creation_9__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_WIN32_FIND_DATAA_143 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
    tmp_res = PyObject_SetItem( locals_WIN32_FIND_DATAA_143, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;

        goto try_except_handler_36;
    }
    tmp_dictset_value = const_str_plain_WIN32_FIND_DATAA;
    tmp_res = PyObject_SetItem( locals_WIN32_FIND_DATAA_143, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;

        goto try_except_handler_36;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_10a98a656fb78d06d337dfc6810a6e25_10, codeobj_10a98a656fb78d06d337dfc6810a6e25, module_ctypes$wintypes, sizeof(void *) );
    frame_10a98a656fb78d06d337dfc6810a6e25_10 = cache_frame_10a98a656fb78d06d337dfc6810a6e25_10;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_10a98a656fb78d06d337dfc6810a6e25_10 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_10a98a656fb78d06d337dfc6810a6e25_10 ) == 2 ); // Frame stack

    // Framed code:
    tmp_tuple_element_49 = const_str_plain_dwFileAttributes;
    tmp_list_element_8 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_49 );
    PyTuple_SET_ITEM( tmp_list_element_8, 0, tmp_tuple_element_49 );
    tmp_tuple_element_49 = PyObject_GetItem( locals_WIN32_FIND_DATAA_143, const_str_plain_DWORD );

    if ( tmp_tuple_element_49 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_49 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_tuple_element_49 == NULL ))
        {
            tmp_tuple_element_49 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_tuple_element_49 == NULL )
        {
            Py_DECREF( tmp_list_element_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 144;
            type_description_2 = "N";
            goto frame_exception_exit_10;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_49 );
    PyTuple_SET_ITEM( tmp_list_element_8, 1, tmp_tuple_element_49 );
    tmp_dictset_value = PyList_New( 10 );
    PyList_SET_ITEM( tmp_dictset_value, 0, tmp_list_element_8 );
    tmp_tuple_element_50 = const_str_plain_ftCreationTime;
    tmp_list_element_8 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_50 );
    PyTuple_SET_ITEM( tmp_list_element_8, 0, tmp_tuple_element_50 );
    tmp_tuple_element_50 = PyObject_GetItem( locals_WIN32_FIND_DATAA_143, const_str_plain_FILETIME );

    if ( tmp_tuple_element_50 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_50 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_FILETIME );

        if (unlikely( tmp_tuple_element_50 == NULL ))
        {
            tmp_tuple_element_50 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FILETIME );
        }

        if ( tmp_tuple_element_50 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FILETIME" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 145;
            type_description_2 = "N";
            goto frame_exception_exit_10;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_50 );
    PyTuple_SET_ITEM( tmp_list_element_8, 1, tmp_tuple_element_50 );
    PyList_SET_ITEM( tmp_dictset_value, 1, tmp_list_element_8 );
    tmp_tuple_element_51 = const_str_plain_ftLastAccessTime;
    tmp_list_element_8 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_51 );
    PyTuple_SET_ITEM( tmp_list_element_8, 0, tmp_tuple_element_51 );
    tmp_tuple_element_51 = PyObject_GetItem( locals_WIN32_FIND_DATAA_143, const_str_plain_FILETIME );

    if ( tmp_tuple_element_51 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_51 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_FILETIME );

        if (unlikely( tmp_tuple_element_51 == NULL ))
        {
            tmp_tuple_element_51 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FILETIME );
        }

        if ( tmp_tuple_element_51 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FILETIME" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 146;
            type_description_2 = "N";
            goto frame_exception_exit_10;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_51 );
    PyTuple_SET_ITEM( tmp_list_element_8, 1, tmp_tuple_element_51 );
    PyList_SET_ITEM( tmp_dictset_value, 2, tmp_list_element_8 );
    tmp_tuple_element_52 = const_str_plain_ftLastWriteTime;
    tmp_list_element_8 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_52 );
    PyTuple_SET_ITEM( tmp_list_element_8, 0, tmp_tuple_element_52 );
    tmp_tuple_element_52 = PyObject_GetItem( locals_WIN32_FIND_DATAA_143, const_str_plain_FILETIME );

    if ( tmp_tuple_element_52 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_52 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_FILETIME );

        if (unlikely( tmp_tuple_element_52 == NULL ))
        {
            tmp_tuple_element_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FILETIME );
        }

        if ( tmp_tuple_element_52 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FILETIME" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 147;
            type_description_2 = "N";
            goto frame_exception_exit_10;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_52 );
    PyTuple_SET_ITEM( tmp_list_element_8, 1, tmp_tuple_element_52 );
    PyList_SET_ITEM( tmp_dictset_value, 3, tmp_list_element_8 );
    tmp_tuple_element_53 = const_str_plain_nFileSizeHigh;
    tmp_list_element_8 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_53 );
    PyTuple_SET_ITEM( tmp_list_element_8, 0, tmp_tuple_element_53 );
    tmp_tuple_element_53 = PyObject_GetItem( locals_WIN32_FIND_DATAA_143, const_str_plain_DWORD );

    if ( tmp_tuple_element_53 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_53 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_tuple_element_53 == NULL ))
        {
            tmp_tuple_element_53 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_tuple_element_53 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 148;
            type_description_2 = "N";
            goto frame_exception_exit_10;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_53 );
    PyTuple_SET_ITEM( tmp_list_element_8, 1, tmp_tuple_element_53 );
    PyList_SET_ITEM( tmp_dictset_value, 4, tmp_list_element_8 );
    tmp_tuple_element_54 = const_str_plain_nFileSizeLow;
    tmp_list_element_8 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_54 );
    PyTuple_SET_ITEM( tmp_list_element_8, 0, tmp_tuple_element_54 );
    tmp_tuple_element_54 = PyObject_GetItem( locals_WIN32_FIND_DATAA_143, const_str_plain_DWORD );

    if ( tmp_tuple_element_54 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_54 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_tuple_element_54 == NULL ))
        {
            tmp_tuple_element_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_tuple_element_54 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 149;
            type_description_2 = "N";
            goto frame_exception_exit_10;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_54 );
    PyTuple_SET_ITEM( tmp_list_element_8, 1, tmp_tuple_element_54 );
    PyList_SET_ITEM( tmp_dictset_value, 5, tmp_list_element_8 );
    tmp_tuple_element_55 = const_str_plain_dwReserved0;
    tmp_list_element_8 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_55 );
    PyTuple_SET_ITEM( tmp_list_element_8, 0, tmp_tuple_element_55 );
    tmp_tuple_element_55 = PyObject_GetItem( locals_WIN32_FIND_DATAA_143, const_str_plain_DWORD );

    if ( tmp_tuple_element_55 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_55 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_tuple_element_55 == NULL ))
        {
            tmp_tuple_element_55 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_tuple_element_55 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 150;
            type_description_2 = "N";
            goto frame_exception_exit_10;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_55 );
    PyTuple_SET_ITEM( tmp_list_element_8, 1, tmp_tuple_element_55 );
    PyList_SET_ITEM( tmp_dictset_value, 6, tmp_list_element_8 );
    tmp_tuple_element_56 = const_str_plain_dwReserved1;
    tmp_list_element_8 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_56 );
    PyTuple_SET_ITEM( tmp_list_element_8, 0, tmp_tuple_element_56 );
    tmp_tuple_element_56 = PyObject_GetItem( locals_WIN32_FIND_DATAA_143, const_str_plain_DWORD );

    if ( tmp_tuple_element_56 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_56 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_tuple_element_56 == NULL ))
        {
            tmp_tuple_element_56 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_tuple_element_56 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 151;
            type_description_2 = "N";
            goto frame_exception_exit_10;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_56 );
    PyTuple_SET_ITEM( tmp_list_element_8, 1, tmp_tuple_element_56 );
    PyList_SET_ITEM( tmp_dictset_value, 7, tmp_list_element_8 );
    tmp_tuple_element_57 = const_str_plain_cFileName;
    tmp_list_element_8 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_57 );
    PyTuple_SET_ITEM( tmp_list_element_8, 0, tmp_tuple_element_57 );
    tmp_left_name_1 = PyObject_GetItem( locals_WIN32_FIND_DATAA_143, const_str_plain_CHAR );

    if ( tmp_left_name_1 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_left_name_1 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_CHAR );

        if (unlikely( tmp_left_name_1 == NULL ))
        {
            tmp_left_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CHAR );
        }

        if ( tmp_left_name_1 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CHAR" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 152;
            type_description_2 = "N";
            goto frame_exception_exit_10;
        }

        }
    }

    tmp_right_name_1 = PyObject_GetItem( locals_WIN32_FIND_DATAA_143, const_str_plain_MAX_PATH );

    if ( tmp_right_name_1 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_right_name_1 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_MAX_PATH );

        if (unlikely( tmp_right_name_1 == NULL ))
        {
            tmp_right_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MAX_PATH );
        }

        if ( tmp_right_name_1 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MAX_PATH" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 152;
            type_description_2 = "N";
            goto frame_exception_exit_10;
        }

        }
    }

    tmp_tuple_element_57 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_tuple_element_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dictset_value );
        Py_DECREF( tmp_list_element_8 );

        exception_lineno = 152;
        type_description_2 = "N";
        goto frame_exception_exit_10;
    }
    PyTuple_SET_ITEM( tmp_list_element_8, 1, tmp_tuple_element_57 );
    PyList_SET_ITEM( tmp_dictset_value, 8, tmp_list_element_8 );
    tmp_tuple_element_58 = const_str_plain_cAlternateFileName;
    tmp_list_element_8 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_58 );
    PyTuple_SET_ITEM( tmp_list_element_8, 0, tmp_tuple_element_58 );
    tmp_left_name_2 = PyObject_GetItem( locals_WIN32_FIND_DATAA_143, const_str_plain_CHAR );

    if ( tmp_left_name_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_left_name_2 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_CHAR );

        if (unlikely( tmp_left_name_2 == NULL ))
        {
            tmp_left_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CHAR );
        }

        if ( tmp_left_name_2 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_8 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CHAR" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 153;
            type_description_2 = "N";
            goto frame_exception_exit_10;
        }

        }
    }

    tmp_right_name_2 = const_int_pos_14;
    tmp_tuple_element_58 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_tuple_element_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dictset_value );
        Py_DECREF( tmp_list_element_8 );

        exception_lineno = 153;
        type_description_2 = "N";
        goto frame_exception_exit_10;
    }
    PyTuple_SET_ITEM( tmp_list_element_8, 1, tmp_tuple_element_58 );
    PyList_SET_ITEM( tmp_dictset_value, 9, tmp_list_element_8 );
    tmp_res = PyObject_SetItem( locals_WIN32_FIND_DATAA_143, const_str_plain__fields_, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        type_description_2 = "N";
        goto frame_exception_exit_10;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10a98a656fb78d06d337dfc6810a6e25_10 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_9;

    frame_exception_exit_10:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10a98a656fb78d06d337dfc6810a6e25_10 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_10a98a656fb78d06d337dfc6810a6e25_10, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_10a98a656fb78d06d337dfc6810a6e25_10->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_10a98a656fb78d06d337dfc6810a6e25_10, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_10a98a656fb78d06d337dfc6810a6e25_10,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_10a98a656fb78d06d337dfc6810a6e25_10 == cache_frame_10a98a656fb78d06d337dfc6810a6e25_10 )
    {
        Py_DECREF( frame_10a98a656fb78d06d337dfc6810a6e25_10 );
    }
    cache_frame_10a98a656fb78d06d337dfc6810a6e25_10 = NULL;

    assertFrameObject( frame_10a98a656fb78d06d337dfc6810a6e25_10 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_9;

    frame_no_exception_9:;

    goto skip_nested_handling_9;
    nested_frame_exit_9:;

    goto try_except_handler_36;
    skip_nested_handling_9:;
    tmp_called_name_22 = tmp_class_creation_9__metaclass;

    CHECK_OBJECT( tmp_called_name_22 );
    tmp_tuple_element_59 = const_str_plain_WIN32_FIND_DATAA;
    tmp_args_name_18 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_59 );
    PyTuple_SET_ITEM( tmp_args_name_18, 0, tmp_tuple_element_59 );
    tmp_tuple_element_59 = tmp_class_creation_9__bases;

    CHECK_OBJECT( tmp_tuple_element_59 );
    Py_INCREF( tmp_tuple_element_59 );
    PyTuple_SET_ITEM( tmp_args_name_18, 1, tmp_tuple_element_59 );
    tmp_tuple_element_59 = locals_WIN32_FIND_DATAA_143;
    Py_INCREF( tmp_tuple_element_59 );
    PyTuple_SET_ITEM( tmp_args_name_18, 2, tmp_tuple_element_59 );
    tmp_kw_name_18 = tmp_class_creation_9__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_18 );
    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 143;
    tmp_assign_source_150 = CALL_FUNCTION( tmp_called_name_22, tmp_args_name_18, tmp_kw_name_18 );
    Py_DECREF( tmp_args_name_18 );
    if ( tmp_assign_source_150 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;

        goto try_except_handler_36;
    }
    assert( outline_8_var___class__ == NULL );
    outline_8_var___class__ = tmp_assign_source_150;

    tmp_outline_return_value_9 = outline_8_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_9 );
    Py_INCREF( tmp_outline_return_value_9 );
    goto try_return_handler_36;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_36:;
    Py_DECREF( locals_WIN32_FIND_DATAA_143 );
    locals_WIN32_FIND_DATAA_143 = NULL;
    goto try_return_handler_35;
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_WIN32_FIND_DATAA_143 );
    locals_WIN32_FIND_DATAA_143 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_34;
    exception_value = exception_keeper_value_34;
    exception_tb = exception_keeper_tb_34;
    exception_lineno = exception_keeper_lineno_34;

    goto try_except_handler_35;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_35:;
    CHECK_OBJECT( (PyObject *)outline_8_var___class__ );
    Py_DECREF( outline_8_var___class__ );
    outline_8_var___class__ = NULL;

    goto outline_result_9;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto outline_exception_9;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_9:;
    exception_lineno = 143;
    goto try_except_handler_34;
    outline_result_9:;
    tmp_assign_source_149 = tmp_outline_return_value_9;
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_WIN32_FIND_DATAA, tmp_assign_source_149 );
    goto try_end_18;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_36 = exception_type;
    exception_keeper_value_36 = exception_value;
    exception_keeper_tb_36 = exception_tb;
    exception_keeper_lineno_36 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_9__bases );
    tmp_class_creation_9__bases = NULL;

    Py_XDECREF( tmp_class_creation_9__class_decl_dict );
    tmp_class_creation_9__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_9__prepared );
    tmp_class_creation_9__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_36;
    exception_value = exception_keeper_value_36;
    exception_tb = exception_keeper_tb_36;
    exception_lineno = exception_keeper_lineno_36;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__bases );
    Py_DECREF( tmp_class_creation_9__bases );
    tmp_class_creation_9__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__class_decl_dict );
    Py_DECREF( tmp_class_creation_9__class_decl_dict );
    tmp_class_creation_9__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__metaclass );
    Py_DECREF( tmp_class_creation_9__metaclass );
    tmp_class_creation_9__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_9__prepared );
    Py_DECREF( tmp_class_creation_9__prepared );
    tmp_class_creation_9__prepared = NULL;

    // Tried code:
    tmp_source_name_52 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_52 == NULL ))
    {
        tmp_source_name_52 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_52 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 155;

        goto try_except_handler_37;
    }

    tmp_tuple_element_60 = LOOKUP_ATTRIBUTE( tmp_source_name_52, const_str_plain_Structure );
    if ( tmp_tuple_element_60 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;

        goto try_except_handler_37;
    }
    tmp_assign_source_151 = PyTuple_New( 1 );
    PyTuple_SET_ITEM( tmp_assign_source_151, 0, tmp_tuple_element_60 );
    assert( tmp_class_creation_10__bases == NULL );
    tmp_class_creation_10__bases = tmp_assign_source_151;

    tmp_assign_source_152 = PyDict_New();
    assert( tmp_class_creation_10__class_decl_dict == NULL );
    tmp_class_creation_10__class_decl_dict = tmp_assign_source_152;

    tmp_key_name_28 = const_str_plain_metaclass;
    tmp_dict_name_28 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_28 );
    tmp_res = PyDict_Contains( tmp_dict_name_28, tmp_key_name_28 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;

        goto try_except_handler_37;
    }
    tmp_cond_value_19 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_19 = CHECK_IF_TRUE( tmp_cond_value_19 );
    if ( tmp_cond_truth_19 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;

        goto try_except_handler_37;
    }
    if ( tmp_cond_truth_19 == 1 )
    {
        goto condexpr_true_19;
    }
    else
    {
        goto condexpr_false_19;
    }
    condexpr_true_19:;
    tmp_dict_name_29 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_29 );
    tmp_key_name_29 = const_str_plain_metaclass;
    tmp_metaclass_name_10 = DICT_GET_ITEM( tmp_dict_name_29, tmp_key_name_29 );
    if ( tmp_metaclass_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;

        goto try_except_handler_37;
    }
    goto condexpr_end_19;
    condexpr_false_19:;
    tmp_subscribed_name_10 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_subscribed_name_10 );
    tmp_subscript_name_10 = const_int_0;
    tmp_type_arg_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
    if ( tmp_type_arg_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;

        goto try_except_handler_37;
    }
    tmp_metaclass_name_10 = BUILTIN_TYPE1( tmp_type_arg_10 );
    Py_DECREF( tmp_type_arg_10 );
    if ( tmp_metaclass_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;

        goto try_except_handler_37;
    }
    condexpr_end_19:;
    tmp_bases_name_10 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_bases_name_10 );
    tmp_assign_source_153 = SELECT_METACLASS( tmp_metaclass_name_10, tmp_bases_name_10 );
    Py_DECREF( tmp_metaclass_name_10 );
    if ( tmp_assign_source_153 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;

        goto try_except_handler_37;
    }
    assert( tmp_class_creation_10__metaclass == NULL );
    tmp_class_creation_10__metaclass = tmp_assign_source_153;

    tmp_key_name_30 = const_str_plain_metaclass;
    tmp_dict_name_30 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_dict_name_30 );
    tmp_res = PyDict_Contains( tmp_dict_name_30, tmp_key_name_30 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;

        goto try_except_handler_37;
    }
    tmp_cond_value_20 = BOOL_FROM( tmp_res == 1 );
    tmp_cond_truth_20 = CHECK_IF_TRUE( tmp_cond_value_20 );
    if ( tmp_cond_truth_20 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;

        goto try_except_handler_37;
    }
    if ( tmp_cond_truth_20 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_dictdel_dict = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_dictdel_dict );
    tmp_dictdel_key = const_str_plain_metaclass;
    tmp_result = DICT_REMOVE_ITEM( tmp_dictdel_dict, tmp_dictdel_key );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;

        goto try_except_handler_37;
    }
    branch_no_12:;
    tmp_hasattr_source_10 = tmp_class_creation_10__metaclass;

    CHECK_OBJECT( tmp_hasattr_source_10 );
    tmp_hasattr_attr_10 = const_str_plain___prepare__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_10, tmp_hasattr_attr_10 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;

        goto try_except_handler_37;
    }
    if ( tmp_res == 1 )
    {
        goto condexpr_true_20;
    }
    else
    {
        goto condexpr_false_20;
    }
    condexpr_true_20:;
    tmp_source_name_53 = tmp_class_creation_10__metaclass;

    CHECK_OBJECT( tmp_source_name_53 );
    tmp_called_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_53, const_str_plain___prepare__ );
    if ( tmp_called_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;

        goto try_except_handler_37;
    }
    tmp_tuple_element_61 = const_str_plain_WIN32_FIND_DATAW;
    tmp_args_name_19 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_61 );
    PyTuple_SET_ITEM( tmp_args_name_19, 0, tmp_tuple_element_61 );
    tmp_tuple_element_61 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_tuple_element_61 );
    Py_INCREF( tmp_tuple_element_61 );
    PyTuple_SET_ITEM( tmp_args_name_19, 1, tmp_tuple_element_61 );
    tmp_kw_name_19 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_19 );
    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 155;
    tmp_assign_source_154 = CALL_FUNCTION( tmp_called_name_23, tmp_args_name_19, tmp_kw_name_19 );
    Py_DECREF( tmp_called_name_23 );
    Py_DECREF( tmp_args_name_19 );
    if ( tmp_assign_source_154 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;

        goto try_except_handler_37;
    }
    goto condexpr_end_20;
    condexpr_false_20:;
    tmp_assign_source_154 = PyDict_New();
    condexpr_end_20:;
    assert( tmp_class_creation_10__prepared == NULL );
    tmp_class_creation_10__prepared = tmp_assign_source_154;

    tmp_set_locals = tmp_class_creation_10__prepared;

    CHECK_OBJECT( tmp_set_locals );
    locals_WIN32_FIND_DATAW_155 = tmp_set_locals;
    Py_INCREF( tmp_set_locals );
    // Tried code:
    // Tried code:
    tmp_dictset_value = const_str_digest_5cf36b708703fd37649115cac3d2ec3c;
    tmp_res = PyObject_SetItem( locals_WIN32_FIND_DATAW_155, const_str_plain___module__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;

        goto try_except_handler_39;
    }
    tmp_dictset_value = const_str_plain_WIN32_FIND_DATAW;
    tmp_res = PyObject_SetItem( locals_WIN32_FIND_DATAW_155, const_str_plain___qualname__, tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;

        goto try_except_handler_39;
    }
    MAKE_OR_REUSE_FRAME( cache_frame_016a64d87105893cca35a708be27affe_11, codeobj_016a64d87105893cca35a708be27affe, module_ctypes$wintypes, sizeof(void *) );
    frame_016a64d87105893cca35a708be27affe_11 = cache_frame_016a64d87105893cca35a708be27affe_11;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_016a64d87105893cca35a708be27affe_11 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_016a64d87105893cca35a708be27affe_11 ) == 2 ); // Frame stack

    // Framed code:
    tmp_tuple_element_62 = const_str_plain_dwFileAttributes;
    tmp_list_element_9 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_62 );
    PyTuple_SET_ITEM( tmp_list_element_9, 0, tmp_tuple_element_62 );
    tmp_tuple_element_62 = PyObject_GetItem( locals_WIN32_FIND_DATAW_155, const_str_plain_DWORD );

    if ( tmp_tuple_element_62 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_62 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_tuple_element_62 == NULL ))
        {
            tmp_tuple_element_62 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_tuple_element_62 == NULL )
        {
            Py_DECREF( tmp_list_element_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 156;
            type_description_2 = "N";
            goto frame_exception_exit_11;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_62 );
    PyTuple_SET_ITEM( tmp_list_element_9, 1, tmp_tuple_element_62 );
    tmp_dictset_value = PyList_New( 10 );
    PyList_SET_ITEM( tmp_dictset_value, 0, tmp_list_element_9 );
    tmp_tuple_element_63 = const_str_plain_ftCreationTime;
    tmp_list_element_9 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_63 );
    PyTuple_SET_ITEM( tmp_list_element_9, 0, tmp_tuple_element_63 );
    tmp_tuple_element_63 = PyObject_GetItem( locals_WIN32_FIND_DATAW_155, const_str_plain_FILETIME );

    if ( tmp_tuple_element_63 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_63 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_FILETIME );

        if (unlikely( tmp_tuple_element_63 == NULL ))
        {
            tmp_tuple_element_63 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FILETIME );
        }

        if ( tmp_tuple_element_63 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FILETIME" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 157;
            type_description_2 = "N";
            goto frame_exception_exit_11;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_63 );
    PyTuple_SET_ITEM( tmp_list_element_9, 1, tmp_tuple_element_63 );
    PyList_SET_ITEM( tmp_dictset_value, 1, tmp_list_element_9 );
    tmp_tuple_element_64 = const_str_plain_ftLastAccessTime;
    tmp_list_element_9 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_64 );
    PyTuple_SET_ITEM( tmp_list_element_9, 0, tmp_tuple_element_64 );
    tmp_tuple_element_64 = PyObject_GetItem( locals_WIN32_FIND_DATAW_155, const_str_plain_FILETIME );

    if ( tmp_tuple_element_64 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_64 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_FILETIME );

        if (unlikely( tmp_tuple_element_64 == NULL ))
        {
            tmp_tuple_element_64 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FILETIME );
        }

        if ( tmp_tuple_element_64 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FILETIME" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 158;
            type_description_2 = "N";
            goto frame_exception_exit_11;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_64 );
    PyTuple_SET_ITEM( tmp_list_element_9, 1, tmp_tuple_element_64 );
    PyList_SET_ITEM( tmp_dictset_value, 2, tmp_list_element_9 );
    tmp_tuple_element_65 = const_str_plain_ftLastWriteTime;
    tmp_list_element_9 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_65 );
    PyTuple_SET_ITEM( tmp_list_element_9, 0, tmp_tuple_element_65 );
    tmp_tuple_element_65 = PyObject_GetItem( locals_WIN32_FIND_DATAW_155, const_str_plain_FILETIME );

    if ( tmp_tuple_element_65 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_65 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_FILETIME );

        if (unlikely( tmp_tuple_element_65 == NULL ))
        {
            tmp_tuple_element_65 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FILETIME );
        }

        if ( tmp_tuple_element_65 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FILETIME" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 159;
            type_description_2 = "N";
            goto frame_exception_exit_11;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_65 );
    PyTuple_SET_ITEM( tmp_list_element_9, 1, tmp_tuple_element_65 );
    PyList_SET_ITEM( tmp_dictset_value, 3, tmp_list_element_9 );
    tmp_tuple_element_66 = const_str_plain_nFileSizeHigh;
    tmp_list_element_9 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_66 );
    PyTuple_SET_ITEM( tmp_list_element_9, 0, tmp_tuple_element_66 );
    tmp_tuple_element_66 = PyObject_GetItem( locals_WIN32_FIND_DATAW_155, const_str_plain_DWORD );

    if ( tmp_tuple_element_66 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_66 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_tuple_element_66 == NULL ))
        {
            tmp_tuple_element_66 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_tuple_element_66 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 160;
            type_description_2 = "N";
            goto frame_exception_exit_11;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_66 );
    PyTuple_SET_ITEM( tmp_list_element_9, 1, tmp_tuple_element_66 );
    PyList_SET_ITEM( tmp_dictset_value, 4, tmp_list_element_9 );
    tmp_tuple_element_67 = const_str_plain_nFileSizeLow;
    tmp_list_element_9 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_67 );
    PyTuple_SET_ITEM( tmp_list_element_9, 0, tmp_tuple_element_67 );
    tmp_tuple_element_67 = PyObject_GetItem( locals_WIN32_FIND_DATAW_155, const_str_plain_DWORD );

    if ( tmp_tuple_element_67 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_67 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_tuple_element_67 == NULL ))
        {
            tmp_tuple_element_67 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_tuple_element_67 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 161;
            type_description_2 = "N";
            goto frame_exception_exit_11;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_67 );
    PyTuple_SET_ITEM( tmp_list_element_9, 1, tmp_tuple_element_67 );
    PyList_SET_ITEM( tmp_dictset_value, 5, tmp_list_element_9 );
    tmp_tuple_element_68 = const_str_plain_dwReserved0;
    tmp_list_element_9 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_68 );
    PyTuple_SET_ITEM( tmp_list_element_9, 0, tmp_tuple_element_68 );
    tmp_tuple_element_68 = PyObject_GetItem( locals_WIN32_FIND_DATAW_155, const_str_plain_DWORD );

    if ( tmp_tuple_element_68 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_68 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_tuple_element_68 == NULL ))
        {
            tmp_tuple_element_68 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_tuple_element_68 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 162;
            type_description_2 = "N";
            goto frame_exception_exit_11;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_68 );
    PyTuple_SET_ITEM( tmp_list_element_9, 1, tmp_tuple_element_68 );
    PyList_SET_ITEM( tmp_dictset_value, 6, tmp_list_element_9 );
    tmp_tuple_element_69 = const_str_plain_dwReserved1;
    tmp_list_element_9 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_69 );
    PyTuple_SET_ITEM( tmp_list_element_9, 0, tmp_tuple_element_69 );
    tmp_tuple_element_69 = PyObject_GetItem( locals_WIN32_FIND_DATAW_155, const_str_plain_DWORD );

    if ( tmp_tuple_element_69 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_tuple_element_69 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_DWORD );

        if (unlikely( tmp_tuple_element_69 == NULL ))
        {
            tmp_tuple_element_69 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
        }

        if ( tmp_tuple_element_69 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 163;
            type_description_2 = "N";
            goto frame_exception_exit_11;
        }

        }
    }

    Py_INCREF( tmp_tuple_element_69 );
    PyTuple_SET_ITEM( tmp_list_element_9, 1, tmp_tuple_element_69 );
    PyList_SET_ITEM( tmp_dictset_value, 7, tmp_list_element_9 );
    tmp_tuple_element_70 = const_str_plain_cFileName;
    tmp_list_element_9 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_70 );
    PyTuple_SET_ITEM( tmp_list_element_9, 0, tmp_tuple_element_70 );
    tmp_left_name_3 = PyObject_GetItem( locals_WIN32_FIND_DATAW_155, const_str_plain_WCHAR );

    if ( tmp_left_name_3 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_left_name_3 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_WCHAR );

        if (unlikely( tmp_left_name_3 == NULL ))
        {
            tmp_left_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WCHAR );
        }

        if ( tmp_left_name_3 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WCHAR" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 164;
            type_description_2 = "N";
            goto frame_exception_exit_11;
        }

        }
    }

    tmp_right_name_3 = PyObject_GetItem( locals_WIN32_FIND_DATAW_155, const_str_plain_MAX_PATH );

    if ( tmp_right_name_3 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_right_name_3 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_MAX_PATH );

        if (unlikely( tmp_right_name_3 == NULL ))
        {
            tmp_right_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MAX_PATH );
        }

        if ( tmp_right_name_3 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MAX_PATH" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 164;
            type_description_2 = "N";
            goto frame_exception_exit_11;
        }

        }
    }

    tmp_tuple_element_70 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_tuple_element_70 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dictset_value );
        Py_DECREF( tmp_list_element_9 );

        exception_lineno = 164;
        type_description_2 = "N";
        goto frame_exception_exit_11;
    }
    PyTuple_SET_ITEM( tmp_list_element_9, 1, tmp_tuple_element_70 );
    PyList_SET_ITEM( tmp_dictset_value, 8, tmp_list_element_9 );
    tmp_tuple_element_71 = const_str_plain_cAlternateFileName;
    tmp_list_element_9 = PyTuple_New( 2 );
    Py_INCREF( tmp_tuple_element_71 );
    PyTuple_SET_ITEM( tmp_list_element_9, 0, tmp_tuple_element_71 );
    tmp_left_name_4 = PyObject_GetItem( locals_WIN32_FIND_DATAW_155, const_str_plain_WCHAR );

    if ( tmp_left_name_4 == NULL )
    {
        if ( CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
        {
        tmp_left_name_4 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_WCHAR );

        if (unlikely( tmp_left_name_4 == NULL ))
        {
            tmp_left_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WCHAR );
        }

        if ( tmp_left_name_4 == NULL )
        {
            Py_DECREF( tmp_dictset_value );
            Py_DECREF( tmp_list_element_9 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WCHAR" );
            exception_tb = NULL;
            NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            CHAIN_EXCEPTION( exception_value );

            exception_lineno = 165;
            type_description_2 = "N";
            goto frame_exception_exit_11;
        }

        }
    }

    tmp_right_name_4 = const_int_pos_14;
    tmp_tuple_element_71 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_tuple_element_71 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dictset_value );
        Py_DECREF( tmp_list_element_9 );

        exception_lineno = 165;
        type_description_2 = "N";
        goto frame_exception_exit_11;
    }
    PyTuple_SET_ITEM( tmp_list_element_9, 1, tmp_tuple_element_71 );
    PyList_SET_ITEM( tmp_dictset_value, 9, tmp_list_element_9 );
    tmp_res = PyObject_SetItem( locals_WIN32_FIND_DATAW_155, const_str_plain__fields_, tmp_dictset_value );
    Py_DECREF( tmp_dictset_value );
    if ( tmp_res != 0 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        type_description_2 = "N";
        goto frame_exception_exit_11;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_016a64d87105893cca35a708be27affe_11 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_10;

    frame_exception_exit_11:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_016a64d87105893cca35a708be27affe_11 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_016a64d87105893cca35a708be27affe_11, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_016a64d87105893cca35a708be27affe_11->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_016a64d87105893cca35a708be27affe_11, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_016a64d87105893cca35a708be27affe_11,
        type_description_2,
        NULL
    );


    // Release cached frame.
    if ( frame_016a64d87105893cca35a708be27affe_11 == cache_frame_016a64d87105893cca35a708be27affe_11 )
    {
        Py_DECREF( frame_016a64d87105893cca35a708be27affe_11 );
    }
    cache_frame_016a64d87105893cca35a708be27affe_11 = NULL;

    assertFrameObject( frame_016a64d87105893cca35a708be27affe_11 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_10;

    frame_no_exception_10:;

    goto skip_nested_handling_10;
    nested_frame_exit_10:;

    goto try_except_handler_39;
    skip_nested_handling_10:;
    tmp_called_name_24 = tmp_class_creation_10__metaclass;

    CHECK_OBJECT( tmp_called_name_24 );
    tmp_tuple_element_72 = const_str_plain_WIN32_FIND_DATAW;
    tmp_args_name_20 = PyTuple_New( 3 );
    Py_INCREF( tmp_tuple_element_72 );
    PyTuple_SET_ITEM( tmp_args_name_20, 0, tmp_tuple_element_72 );
    tmp_tuple_element_72 = tmp_class_creation_10__bases;

    CHECK_OBJECT( tmp_tuple_element_72 );
    Py_INCREF( tmp_tuple_element_72 );
    PyTuple_SET_ITEM( tmp_args_name_20, 1, tmp_tuple_element_72 );
    tmp_tuple_element_72 = locals_WIN32_FIND_DATAW_155;
    Py_INCREF( tmp_tuple_element_72 );
    PyTuple_SET_ITEM( tmp_args_name_20, 2, tmp_tuple_element_72 );
    tmp_kw_name_20 = tmp_class_creation_10__class_decl_dict;

    CHECK_OBJECT( tmp_kw_name_20 );
    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 155;
    tmp_assign_source_156 = CALL_FUNCTION( tmp_called_name_24, tmp_args_name_20, tmp_kw_name_20 );
    Py_DECREF( tmp_args_name_20 );
    if ( tmp_assign_source_156 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;

        goto try_except_handler_39;
    }
    assert( outline_9_var___class__ == NULL );
    outline_9_var___class__ = tmp_assign_source_156;

    tmp_outline_return_value_10 = outline_9_var___class__;

    CHECK_OBJECT( tmp_outline_return_value_10 );
    Py_INCREF( tmp_outline_return_value_10 );
    goto try_return_handler_39;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_39:;
    Py_DECREF( locals_WIN32_FIND_DATAW_155 );
    locals_WIN32_FIND_DATAW_155 = NULL;
    goto try_return_handler_38;
    // Exception handler code:
    try_except_handler_39:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_DECREF( locals_WIN32_FIND_DATAW_155 );
    locals_WIN32_FIND_DATAW_155 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_37;
    exception_value = exception_keeper_value_37;
    exception_tb = exception_keeper_tb_37;
    exception_lineno = exception_keeper_lineno_37;

    goto try_except_handler_38;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
    return MOD_RETURN_VALUE( NULL );
    // Return handler code:
    try_return_handler_38:;
    CHECK_OBJECT( (PyObject *)outline_9_var___class__ );
    Py_DECREF( outline_9_var___class__ );
    outline_9_var___class__ = NULL;

    goto outline_result_10;
    // Exception handler code:
    try_except_handler_38:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_keeper_lineno_38 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_38;
    exception_value = exception_keeper_value_38;
    exception_tb = exception_keeper_tb_38;
    exception_lineno = exception_keeper_lineno_38;

    goto outline_exception_10;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( ctypes$wintypes );
    return MOD_RETURN_VALUE( NULL );
    outline_exception_10:;
    exception_lineno = 155;
    goto try_except_handler_37;
    outline_result_10:;
    tmp_assign_source_155 = tmp_outline_return_value_10;
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_WIN32_FIND_DATAW, tmp_assign_source_155 );
    goto try_end_19;
    // Exception handler code:
    try_except_handler_37:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_keeper_lineno_39 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_10__bases );
    tmp_class_creation_10__bases = NULL;

    Py_XDECREF( tmp_class_creation_10__class_decl_dict );
    tmp_class_creation_10__class_decl_dict = NULL;

    Py_XDECREF( tmp_class_creation_10__metaclass );
    tmp_class_creation_10__metaclass = NULL;

    Py_XDECREF( tmp_class_creation_10__prepared );
    tmp_class_creation_10__prepared = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_39;
    exception_value = exception_keeper_value_39;
    exception_tb = exception_keeper_tb_39;
    exception_lineno = exception_keeper_lineno_39;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__bases );
    Py_DECREF( tmp_class_creation_10__bases );
    tmp_class_creation_10__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__class_decl_dict );
    Py_DECREF( tmp_class_creation_10__class_decl_dict );
    tmp_class_creation_10__class_decl_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__metaclass );
    Py_DECREF( tmp_class_creation_10__metaclass );
    tmp_class_creation_10__metaclass = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_10__prepared );
    Py_DECREF( tmp_class_creation_10__prepared );
    tmp_class_creation_10__prepared = NULL;

    // Tried code:
    tmp_source_name_54 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_54 == NULL ))
    {
        tmp_source_name_54 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_54 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 170;

        goto try_except_handler_40;
    }

    tmp_called_name_25 = LOOKUP_ATTRIBUTE( tmp_source_name_54, const_str_plain_POINTER );
    if ( tmp_called_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_40;
    }
    tmp_args_element_name_5 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_BOOL );

    if (unlikely( tmp_args_element_name_5 == NULL ))
    {
        tmp_args_element_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOL );
    }

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_25 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 170;

        goto try_except_handler_40;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 170;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_157 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_25, call_args );
    }

    Py_DECREF( tmp_called_name_25 );
    if ( tmp_assign_source_157 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;

        goto try_except_handler_40;
    }
    assert( tmp_assign_unpack_10__assign_source == NULL );
    tmp_assign_unpack_10__assign_source = tmp_assign_source_157;

    goto try_end_20;
    // Exception handler code:
    try_except_handler_40:;
    exception_keeper_type_40 = exception_type;
    exception_keeper_value_40 = exception_value;
    exception_keeper_tb_40 = exception_tb;
    exception_keeper_lineno_40 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_40;
    exception_value = exception_keeper_value_40;
    exception_tb = exception_keeper_tb_40;
    exception_lineno = exception_keeper_lineno_40;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    tmp_assign_source_158 = tmp_assign_unpack_10__assign_source;

    CHECK_OBJECT( tmp_assign_source_158 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPBOOL, tmp_assign_source_158 );
    tmp_assign_source_159 = tmp_assign_unpack_10__assign_source;

    CHECK_OBJECT( tmp_assign_source_159 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PBOOL, tmp_assign_source_159 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_10__assign_source );
    Py_DECREF( tmp_assign_unpack_10__assign_source );
    tmp_assign_unpack_10__assign_source = NULL;

    tmp_source_name_55 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_55 == NULL ))
    {
        tmp_source_name_55 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_55 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 171;

        goto frame_exception_exit_1;
    }

    tmp_called_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_55, const_str_plain_POINTER );
    if ( tmp_called_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_BOOLEAN );

    if (unlikely( tmp_args_element_name_6 == NULL ))
    {
        tmp_args_element_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BOOLEAN );
    }

    if ( tmp_args_element_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_26 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BOOLEAN" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 171;

        goto frame_exception_exit_1;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 171;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_160 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_26, call_args );
    }

    Py_DECREF( tmp_called_name_26 );
    if ( tmp_assign_source_160 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PBOOLEAN, tmp_assign_source_160 );
    // Tried code:
    tmp_source_name_56 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_56 == NULL ))
    {
        tmp_source_name_56 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_56 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 172;

        goto try_except_handler_41;
    }

    tmp_called_name_27 = LOOKUP_ATTRIBUTE( tmp_source_name_56, const_str_plain_POINTER );
    if ( tmp_called_name_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;

        goto try_except_handler_41;
    }
    tmp_args_element_name_7 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_BYTE );

    if (unlikely( tmp_args_element_name_7 == NULL ))
    {
        tmp_args_element_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BYTE );
    }

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_27 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "BYTE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 172;

        goto try_except_handler_41;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 172;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_assign_source_161 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_27, call_args );
    }

    Py_DECREF( tmp_called_name_27 );
    if ( tmp_assign_source_161 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;

        goto try_except_handler_41;
    }
    assert( tmp_assign_unpack_11__assign_source == NULL );
    tmp_assign_unpack_11__assign_source = tmp_assign_source_161;

    goto try_end_21;
    // Exception handler code:
    try_except_handler_41:;
    exception_keeper_type_41 = exception_type;
    exception_keeper_value_41 = exception_value;
    exception_keeper_tb_41 = exception_tb;
    exception_keeper_lineno_41 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_41;
    exception_value = exception_keeper_value_41;
    exception_tb = exception_keeper_tb_41;
    exception_lineno = exception_keeper_lineno_41;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    tmp_assign_source_162 = tmp_assign_unpack_11__assign_source;

    CHECK_OBJECT( tmp_assign_source_162 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPBYTE, tmp_assign_source_162 );
    tmp_assign_source_163 = tmp_assign_unpack_11__assign_source;

    CHECK_OBJECT( tmp_assign_source_163 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PBYTE, tmp_assign_source_163 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_11__assign_source );
    Py_DECREF( tmp_assign_unpack_11__assign_source );
    tmp_assign_unpack_11__assign_source = NULL;

    tmp_source_name_57 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_57 == NULL ))
    {
        tmp_source_name_57 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_57 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;

        goto frame_exception_exit_1;
    }

    tmp_called_name_28 = LOOKUP_ATTRIBUTE( tmp_source_name_57, const_str_plain_POINTER );
    if ( tmp_called_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_CHAR );

    if (unlikely( tmp_args_element_name_8 == NULL ))
    {
        tmp_args_element_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CHAR );
    }

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_28 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "CHAR" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 173;

        goto frame_exception_exit_1;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 173;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_assign_source_164 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_28, call_args );
    }

    Py_DECREF( tmp_called_name_28 );
    if ( tmp_assign_source_164 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PCHAR, tmp_assign_source_164 );
    tmp_source_name_58 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_58 == NULL ))
    {
        tmp_source_name_58 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_58 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;

        goto frame_exception_exit_1;
    }

    tmp_called_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_58, const_str_plain_POINTER );
    if ( tmp_called_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_COLORREF );

    if (unlikely( tmp_args_element_name_9 == NULL ))
    {
        tmp_args_element_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_COLORREF );
    }

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "COLORREF" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 174;

        goto frame_exception_exit_1;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 174;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_assign_source_165 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_29, call_args );
    }

    Py_DECREF( tmp_called_name_29 );
    if ( tmp_assign_source_165 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPCOLORREF, tmp_assign_source_165 );
    // Tried code:
    tmp_source_name_59 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_59 == NULL ))
    {
        tmp_source_name_59 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_59 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;

        goto try_except_handler_42;
    }

    tmp_called_name_30 = LOOKUP_ATTRIBUTE( tmp_source_name_59, const_str_plain_POINTER );
    if ( tmp_called_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;

        goto try_except_handler_42;
    }
    tmp_args_element_name_10 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_DWORD );

    if (unlikely( tmp_args_element_name_10 == NULL ))
    {
        tmp_args_element_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DWORD );
    }

    if ( tmp_args_element_name_10 == NULL )
    {
        Py_DECREF( tmp_called_name_30 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "DWORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 175;

        goto try_except_handler_42;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 175;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_assign_source_166 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_30, call_args );
    }

    Py_DECREF( tmp_called_name_30 );
    if ( tmp_assign_source_166 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;

        goto try_except_handler_42;
    }
    assert( tmp_assign_unpack_12__assign_source == NULL );
    tmp_assign_unpack_12__assign_source = tmp_assign_source_166;

    goto try_end_22;
    // Exception handler code:
    try_except_handler_42:;
    exception_keeper_type_42 = exception_type;
    exception_keeper_value_42 = exception_value;
    exception_keeper_tb_42 = exception_tb;
    exception_keeper_lineno_42 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_42;
    exception_value = exception_keeper_value_42;
    exception_tb = exception_keeper_tb_42;
    exception_lineno = exception_keeper_lineno_42;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    tmp_assign_source_167 = tmp_assign_unpack_12__assign_source;

    CHECK_OBJECT( tmp_assign_source_167 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPDWORD, tmp_assign_source_167 );
    tmp_assign_source_168 = tmp_assign_unpack_12__assign_source;

    CHECK_OBJECT( tmp_assign_source_168 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PDWORD, tmp_assign_source_168 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_12__assign_source );
    Py_DECREF( tmp_assign_unpack_12__assign_source );
    tmp_assign_unpack_12__assign_source = NULL;

    // Tried code:
    tmp_source_name_60 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_60 == NULL ))
    {
        tmp_source_name_60 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_60 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;

        goto try_except_handler_43;
    }

    tmp_called_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_60, const_str_plain_POINTER );
    if ( tmp_called_name_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto try_except_handler_43;
    }
    tmp_args_element_name_11 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_FILETIME );

    if (unlikely( tmp_args_element_name_11 == NULL ))
    {
        tmp_args_element_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FILETIME );
    }

    if ( tmp_args_element_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_31 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FILETIME" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 176;

        goto try_except_handler_43;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 176;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_assign_source_169 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_31, call_args );
    }

    Py_DECREF( tmp_called_name_31 );
    if ( tmp_assign_source_169 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;

        goto try_except_handler_43;
    }
    assert( tmp_assign_unpack_13__assign_source == NULL );
    tmp_assign_unpack_13__assign_source = tmp_assign_source_169;

    goto try_end_23;
    // Exception handler code:
    try_except_handler_43:;
    exception_keeper_type_43 = exception_type;
    exception_keeper_value_43 = exception_value;
    exception_keeper_tb_43 = exception_tb;
    exception_keeper_lineno_43 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_43;
    exception_value = exception_keeper_value_43;
    exception_tb = exception_keeper_tb_43;
    exception_lineno = exception_keeper_lineno_43;

    goto frame_exception_exit_1;
    // End of try:
    try_end_23:;
    tmp_assign_source_170 = tmp_assign_unpack_13__assign_source;

    CHECK_OBJECT( tmp_assign_source_170 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPFILETIME, tmp_assign_source_170 );
    tmp_assign_source_171 = tmp_assign_unpack_13__assign_source;

    CHECK_OBJECT( tmp_assign_source_171 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PFILETIME, tmp_assign_source_171 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_13__assign_source );
    Py_DECREF( tmp_assign_unpack_13__assign_source );
    tmp_assign_unpack_13__assign_source = NULL;

    tmp_source_name_61 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_61 == NULL ))
    {
        tmp_source_name_61 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_61 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;

        goto frame_exception_exit_1;
    }

    tmp_called_name_32 = LOOKUP_ATTRIBUTE( tmp_source_name_61, const_str_plain_POINTER );
    if ( tmp_called_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_12 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_FLOAT );

    if (unlikely( tmp_args_element_name_12 == NULL ))
    {
        tmp_args_element_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FLOAT );
    }

    if ( tmp_args_element_name_12 == NULL )
    {
        Py_DECREF( tmp_called_name_32 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "FLOAT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 177;

        goto frame_exception_exit_1;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 177;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_assign_source_172 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_32, call_args );
    }

    Py_DECREF( tmp_called_name_32 );
    if ( tmp_assign_source_172 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PFLOAT, tmp_assign_source_172 );
    // Tried code:
    tmp_source_name_62 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_62 == NULL ))
    {
        tmp_source_name_62 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_62 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;

        goto try_except_handler_44;
    }

    tmp_called_name_33 = LOOKUP_ATTRIBUTE( tmp_source_name_62, const_str_plain_POINTER );
    if ( tmp_called_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;

        goto try_except_handler_44;
    }
    tmp_args_element_name_13 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HANDLE );

    if (unlikely( tmp_args_element_name_13 == NULL ))
    {
        tmp_args_element_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HANDLE );
    }

    if ( tmp_args_element_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_33 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 178;

        goto try_except_handler_44;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 178;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_assign_source_173 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_33, call_args );
    }

    Py_DECREF( tmp_called_name_33 );
    if ( tmp_assign_source_173 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;

        goto try_except_handler_44;
    }
    assert( tmp_assign_unpack_14__assign_source == NULL );
    tmp_assign_unpack_14__assign_source = tmp_assign_source_173;

    goto try_end_24;
    // Exception handler code:
    try_except_handler_44:;
    exception_keeper_type_44 = exception_type;
    exception_keeper_value_44 = exception_value;
    exception_keeper_tb_44 = exception_tb;
    exception_keeper_lineno_44 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_44;
    exception_value = exception_keeper_value_44;
    exception_tb = exception_keeper_tb_44;
    exception_lineno = exception_keeper_lineno_44;

    goto frame_exception_exit_1;
    // End of try:
    try_end_24:;
    tmp_assign_source_174 = tmp_assign_unpack_14__assign_source;

    CHECK_OBJECT( tmp_assign_source_174 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPHANDLE, tmp_assign_source_174 );
    tmp_assign_source_175 = tmp_assign_unpack_14__assign_source;

    CHECK_OBJECT( tmp_assign_source_175 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PHANDLE, tmp_assign_source_175 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_14__assign_source );
    Py_DECREF( tmp_assign_unpack_14__assign_source );
    tmp_assign_unpack_14__assign_source = NULL;

    tmp_source_name_63 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_63 == NULL ))
    {
        tmp_source_name_63 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_63 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;

        goto frame_exception_exit_1;
    }

    tmp_called_name_34 = LOOKUP_ATTRIBUTE( tmp_source_name_63, const_str_plain_POINTER );
    if ( tmp_called_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_14 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HKEY );

    if (unlikely( tmp_args_element_name_14 == NULL ))
    {
        tmp_args_element_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HKEY );
    }

    if ( tmp_args_element_name_14 == NULL )
    {
        Py_DECREF( tmp_called_name_34 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HKEY" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 179;

        goto frame_exception_exit_1;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 179;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_assign_source_176 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_34, call_args );
    }

    Py_DECREF( tmp_called_name_34 );
    if ( tmp_assign_source_176 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PHKEY, tmp_assign_source_176 );
    tmp_source_name_64 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_64 == NULL ))
    {
        tmp_source_name_64 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_64 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;

        goto frame_exception_exit_1;
    }

    tmp_called_name_35 = LOOKUP_ATTRIBUTE( tmp_source_name_64, const_str_plain_POINTER );
    if ( tmp_called_name_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_15 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_HKL );

    if (unlikely( tmp_args_element_name_15 == NULL ))
    {
        tmp_args_element_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HKL );
    }

    if ( tmp_args_element_name_15 == NULL )
    {
        Py_DECREF( tmp_called_name_35 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "HKL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 180;

        goto frame_exception_exit_1;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 180;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_assign_source_177 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_35, call_args );
    }

    Py_DECREF( tmp_called_name_35 );
    if ( tmp_assign_source_177 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPHKL, tmp_assign_source_177 );
    // Tried code:
    tmp_source_name_65 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_65 == NULL ))
    {
        tmp_source_name_65 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_65 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 181;

        goto try_except_handler_45;
    }

    tmp_called_name_36 = LOOKUP_ATTRIBUTE( tmp_source_name_65, const_str_plain_POINTER );
    if ( tmp_called_name_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;

        goto try_except_handler_45;
    }
    tmp_args_element_name_16 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_INT );

    if (unlikely( tmp_args_element_name_16 == NULL ))
    {
        tmp_args_element_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_INT );
    }

    if ( tmp_args_element_name_16 == NULL )
    {
        Py_DECREF( tmp_called_name_36 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "INT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 181;

        goto try_except_handler_45;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 181;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_assign_source_178 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_36, call_args );
    }

    Py_DECREF( tmp_called_name_36 );
    if ( tmp_assign_source_178 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 181;

        goto try_except_handler_45;
    }
    assert( tmp_assign_unpack_15__assign_source == NULL );
    tmp_assign_unpack_15__assign_source = tmp_assign_source_178;

    goto try_end_25;
    // Exception handler code:
    try_except_handler_45:;
    exception_keeper_type_45 = exception_type;
    exception_keeper_value_45 = exception_value;
    exception_keeper_tb_45 = exception_tb;
    exception_keeper_lineno_45 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_45;
    exception_value = exception_keeper_value_45;
    exception_tb = exception_keeper_tb_45;
    exception_lineno = exception_keeper_lineno_45;

    goto frame_exception_exit_1;
    // End of try:
    try_end_25:;
    tmp_assign_source_179 = tmp_assign_unpack_15__assign_source;

    CHECK_OBJECT( tmp_assign_source_179 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPINT, tmp_assign_source_179 );
    tmp_assign_source_180 = tmp_assign_unpack_15__assign_source;

    CHECK_OBJECT( tmp_assign_source_180 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PINT, tmp_assign_source_180 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_15__assign_source );
    Py_DECREF( tmp_assign_unpack_15__assign_source );
    tmp_assign_unpack_15__assign_source = NULL;

    tmp_source_name_66 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_66 == NULL ))
    {
        tmp_source_name_66 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_66 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;

        goto frame_exception_exit_1;
    }

    tmp_called_name_37 = LOOKUP_ATTRIBUTE( tmp_source_name_66, const_str_plain_POINTER );
    if ( tmp_called_name_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_17 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LARGE_INTEGER );

    if (unlikely( tmp_args_element_name_17 == NULL ))
    {
        tmp_args_element_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LARGE_INTEGER );
    }

    if ( tmp_args_element_name_17 == NULL )
    {
        Py_DECREF( tmp_called_name_37 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LARGE_INTEGER" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 182;

        goto frame_exception_exit_1;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 182;
    {
        PyObject *call_args[] = { tmp_args_element_name_17 };
        tmp_assign_source_181 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_37, call_args );
    }

    Py_DECREF( tmp_called_name_37 );
    if ( tmp_assign_source_181 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PLARGE_INTEGER, tmp_assign_source_181 );
    tmp_source_name_67 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_67 == NULL ))
    {
        tmp_source_name_67 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_67 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;

        goto frame_exception_exit_1;
    }

    tmp_called_name_38 = LOOKUP_ATTRIBUTE( tmp_source_name_67, const_str_plain_POINTER );
    if ( tmp_called_name_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_18 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LCID );

    if (unlikely( tmp_args_element_name_18 == NULL ))
    {
        tmp_args_element_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LCID );
    }

    if ( tmp_args_element_name_18 == NULL )
    {
        Py_DECREF( tmp_called_name_38 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LCID" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 183;

        goto frame_exception_exit_1;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 183;
    {
        PyObject *call_args[] = { tmp_args_element_name_18 };
        tmp_assign_source_182 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_38, call_args );
    }

    Py_DECREF( tmp_called_name_38 );
    if ( tmp_assign_source_182 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PLCID, tmp_assign_source_182 );
    // Tried code:
    tmp_source_name_68 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_68 == NULL ))
    {
        tmp_source_name_68 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_68 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;

        goto try_except_handler_46;
    }

    tmp_called_name_39 = LOOKUP_ATTRIBUTE( tmp_source_name_68, const_str_plain_POINTER );
    if ( tmp_called_name_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;

        goto try_except_handler_46;
    }
    tmp_args_element_name_19 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LONG );

    if (unlikely( tmp_args_element_name_19 == NULL ))
    {
        tmp_args_element_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LONG );
    }

    if ( tmp_args_element_name_19 == NULL )
    {
        Py_DECREF( tmp_called_name_39 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "LONG" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 184;

        goto try_except_handler_46;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 184;
    {
        PyObject *call_args[] = { tmp_args_element_name_19 };
        tmp_assign_source_183 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_39, call_args );
    }

    Py_DECREF( tmp_called_name_39 );
    if ( tmp_assign_source_183 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;

        goto try_except_handler_46;
    }
    assert( tmp_assign_unpack_16__assign_source == NULL );
    tmp_assign_unpack_16__assign_source = tmp_assign_source_183;

    goto try_end_26;
    // Exception handler code:
    try_except_handler_46:;
    exception_keeper_type_46 = exception_type;
    exception_keeper_value_46 = exception_value;
    exception_keeper_tb_46 = exception_tb;
    exception_keeper_lineno_46 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_46;
    exception_value = exception_keeper_value_46;
    exception_tb = exception_keeper_tb_46;
    exception_lineno = exception_keeper_lineno_46;

    goto frame_exception_exit_1;
    // End of try:
    try_end_26:;
    tmp_assign_source_184 = tmp_assign_unpack_16__assign_source;

    CHECK_OBJECT( tmp_assign_source_184 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPLONG, tmp_assign_source_184 );
    tmp_assign_source_185 = tmp_assign_unpack_16__assign_source;

    CHECK_OBJECT( tmp_assign_source_185 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PLONG, tmp_assign_source_185 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_16__assign_source );
    Py_DECREF( tmp_assign_unpack_16__assign_source );
    tmp_assign_unpack_16__assign_source = NULL;

    // Tried code:
    tmp_source_name_69 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_69 == NULL ))
    {
        tmp_source_name_69 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_69 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 185;

        goto try_except_handler_47;
    }

    tmp_called_name_40 = LOOKUP_ATTRIBUTE( tmp_source_name_69, const_str_plain_POINTER );
    if ( tmp_called_name_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;

        goto try_except_handler_47;
    }
    tmp_args_element_name_20 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_MSG );

    if (unlikely( tmp_args_element_name_20 == NULL ))
    {
        tmp_args_element_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MSG );
    }

    if ( tmp_args_element_name_20 == NULL )
    {
        Py_DECREF( tmp_called_name_40 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "MSG" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 185;

        goto try_except_handler_47;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 185;
    {
        PyObject *call_args[] = { tmp_args_element_name_20 };
        tmp_assign_source_186 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_40, call_args );
    }

    Py_DECREF( tmp_called_name_40 );
    if ( tmp_assign_source_186 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;

        goto try_except_handler_47;
    }
    assert( tmp_assign_unpack_17__assign_source == NULL );
    tmp_assign_unpack_17__assign_source = tmp_assign_source_186;

    goto try_end_27;
    // Exception handler code:
    try_except_handler_47:;
    exception_keeper_type_47 = exception_type;
    exception_keeper_value_47 = exception_value;
    exception_keeper_tb_47 = exception_tb;
    exception_keeper_lineno_47 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_47;
    exception_value = exception_keeper_value_47;
    exception_tb = exception_keeper_tb_47;
    exception_lineno = exception_keeper_lineno_47;

    goto frame_exception_exit_1;
    // End of try:
    try_end_27:;
    tmp_assign_source_187 = tmp_assign_unpack_17__assign_source;

    CHECK_OBJECT( tmp_assign_source_187 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPMSG, tmp_assign_source_187 );
    tmp_assign_source_188 = tmp_assign_unpack_17__assign_source;

    CHECK_OBJECT( tmp_assign_source_188 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PMSG, tmp_assign_source_188 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_17__assign_source );
    Py_DECREF( tmp_assign_unpack_17__assign_source );
    tmp_assign_unpack_17__assign_source = NULL;

    // Tried code:
    tmp_source_name_70 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_70 == NULL ))
    {
        tmp_source_name_70 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_70 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 186;

        goto try_except_handler_48;
    }

    tmp_called_name_41 = LOOKUP_ATTRIBUTE( tmp_source_name_70, const_str_plain_POINTER );
    if ( tmp_called_name_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto try_except_handler_48;
    }
    tmp_args_element_name_21 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_POINT );

    if (unlikely( tmp_args_element_name_21 == NULL ))
    {
        tmp_args_element_name_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_POINT );
    }

    if ( tmp_args_element_name_21 == NULL )
    {
        Py_DECREF( tmp_called_name_41 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "POINT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 186;

        goto try_except_handler_48;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 186;
    {
        PyObject *call_args[] = { tmp_args_element_name_21 };
        tmp_assign_source_189 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_41, call_args );
    }

    Py_DECREF( tmp_called_name_41 );
    if ( tmp_assign_source_189 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;

        goto try_except_handler_48;
    }
    assert( tmp_assign_unpack_18__assign_source == NULL );
    tmp_assign_unpack_18__assign_source = tmp_assign_source_189;

    goto try_end_28;
    // Exception handler code:
    try_except_handler_48:;
    exception_keeper_type_48 = exception_type;
    exception_keeper_value_48 = exception_value;
    exception_keeper_tb_48 = exception_tb;
    exception_keeper_lineno_48 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_48;
    exception_value = exception_keeper_value_48;
    exception_tb = exception_keeper_tb_48;
    exception_lineno = exception_keeper_lineno_48;

    goto frame_exception_exit_1;
    // End of try:
    try_end_28:;
    tmp_assign_source_190 = tmp_assign_unpack_18__assign_source;

    CHECK_OBJECT( tmp_assign_source_190 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPPOINT, tmp_assign_source_190 );
    tmp_assign_source_191 = tmp_assign_unpack_18__assign_source;

    CHECK_OBJECT( tmp_assign_source_191 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PPOINT, tmp_assign_source_191 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_18__assign_source );
    Py_DECREF( tmp_assign_unpack_18__assign_source );
    tmp_assign_unpack_18__assign_source = NULL;

    tmp_source_name_71 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_71 == NULL ))
    {
        tmp_source_name_71 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_71 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 187;

        goto frame_exception_exit_1;
    }

    tmp_called_name_42 = LOOKUP_ATTRIBUTE( tmp_source_name_71, const_str_plain_POINTER );
    if ( tmp_called_name_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_22 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_POINTL );

    if (unlikely( tmp_args_element_name_22 == NULL ))
    {
        tmp_args_element_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_POINTL );
    }

    if ( tmp_args_element_name_22 == NULL )
    {
        Py_DECREF( tmp_called_name_42 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "POINTL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 187;

        goto frame_exception_exit_1;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 187;
    {
        PyObject *call_args[] = { tmp_args_element_name_22 };
        tmp_assign_source_192 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_42, call_args );
    }

    Py_DECREF( tmp_called_name_42 );
    if ( tmp_assign_source_192 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PPOINTL, tmp_assign_source_192 );
    // Tried code:
    tmp_source_name_72 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_72 == NULL ))
    {
        tmp_source_name_72 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_72 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;

        goto try_except_handler_49;
    }

    tmp_called_name_43 = LOOKUP_ATTRIBUTE( tmp_source_name_72, const_str_plain_POINTER );
    if ( tmp_called_name_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;

        goto try_except_handler_49;
    }
    tmp_args_element_name_23 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_RECT );

    if (unlikely( tmp_args_element_name_23 == NULL ))
    {
        tmp_args_element_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RECT );
    }

    if ( tmp_args_element_name_23 == NULL )
    {
        Py_DECREF( tmp_called_name_43 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RECT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 188;

        goto try_except_handler_49;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 188;
    {
        PyObject *call_args[] = { tmp_args_element_name_23 };
        tmp_assign_source_193 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_43, call_args );
    }

    Py_DECREF( tmp_called_name_43 );
    if ( tmp_assign_source_193 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;

        goto try_except_handler_49;
    }
    assert( tmp_assign_unpack_19__assign_source == NULL );
    tmp_assign_unpack_19__assign_source = tmp_assign_source_193;

    goto try_end_29;
    // Exception handler code:
    try_except_handler_49:;
    exception_keeper_type_49 = exception_type;
    exception_keeper_value_49 = exception_value;
    exception_keeper_tb_49 = exception_tb;
    exception_keeper_lineno_49 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_49;
    exception_value = exception_keeper_value_49;
    exception_tb = exception_keeper_tb_49;
    exception_lineno = exception_keeper_lineno_49;

    goto frame_exception_exit_1;
    // End of try:
    try_end_29:;
    tmp_assign_source_194 = tmp_assign_unpack_19__assign_source;

    CHECK_OBJECT( tmp_assign_source_194 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPRECT, tmp_assign_source_194 );
    tmp_assign_source_195 = tmp_assign_unpack_19__assign_source;

    CHECK_OBJECT( tmp_assign_source_195 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PRECT, tmp_assign_source_195 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_19__assign_source );
    Py_DECREF( tmp_assign_unpack_19__assign_source );
    tmp_assign_unpack_19__assign_source = NULL;

    // Tried code:
    tmp_source_name_73 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_73 == NULL ))
    {
        tmp_source_name_73 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_73 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 189;

        goto try_except_handler_50;
    }

    tmp_called_name_44 = LOOKUP_ATTRIBUTE( tmp_source_name_73, const_str_plain_POINTER );
    if ( tmp_called_name_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;

        goto try_except_handler_50;
    }
    tmp_args_element_name_24 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_RECTL );

    if (unlikely( tmp_args_element_name_24 == NULL ))
    {
        tmp_args_element_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RECTL );
    }

    if ( tmp_args_element_name_24 == NULL )
    {
        Py_DECREF( tmp_called_name_44 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "RECTL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 189;

        goto try_except_handler_50;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 189;
    {
        PyObject *call_args[] = { tmp_args_element_name_24 };
        tmp_assign_source_196 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_44, call_args );
    }

    Py_DECREF( tmp_called_name_44 );
    if ( tmp_assign_source_196 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;

        goto try_except_handler_50;
    }
    assert( tmp_assign_unpack_20__assign_source == NULL );
    tmp_assign_unpack_20__assign_source = tmp_assign_source_196;

    goto try_end_30;
    // Exception handler code:
    try_except_handler_50:;
    exception_keeper_type_50 = exception_type;
    exception_keeper_value_50 = exception_value;
    exception_keeper_tb_50 = exception_tb;
    exception_keeper_lineno_50 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_50;
    exception_value = exception_keeper_value_50;
    exception_tb = exception_keeper_tb_50;
    exception_lineno = exception_keeper_lineno_50;

    goto frame_exception_exit_1;
    // End of try:
    try_end_30:;
    tmp_assign_source_197 = tmp_assign_unpack_20__assign_source;

    CHECK_OBJECT( tmp_assign_source_197 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPRECTL, tmp_assign_source_197 );
    tmp_assign_source_198 = tmp_assign_unpack_20__assign_source;

    CHECK_OBJECT( tmp_assign_source_198 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PRECTL, tmp_assign_source_198 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_20__assign_source );
    Py_DECREF( tmp_assign_unpack_20__assign_source );
    tmp_assign_unpack_20__assign_source = NULL;

    tmp_source_name_74 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_74 == NULL ))
    {
        tmp_source_name_74 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_74 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 190;

        goto frame_exception_exit_1;
    }

    tmp_called_name_45 = LOOKUP_ATTRIBUTE( tmp_source_name_74, const_str_plain_POINTER );
    if ( tmp_called_name_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_25 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_SC_HANDLE );

    if (unlikely( tmp_args_element_name_25 == NULL ))
    {
        tmp_args_element_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SC_HANDLE );
    }

    if ( tmp_args_element_name_25 == NULL )
    {
        Py_DECREF( tmp_called_name_45 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SC_HANDLE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 190;

        goto frame_exception_exit_1;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 190;
    {
        PyObject *call_args[] = { tmp_args_element_name_25 };
        tmp_assign_source_199 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_45, call_args );
    }

    Py_DECREF( tmp_called_name_45 );
    if ( tmp_assign_source_199 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPSC_HANDLE, tmp_assign_source_199 );
    tmp_source_name_75 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_75 == NULL ))
    {
        tmp_source_name_75 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_75 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;

        goto frame_exception_exit_1;
    }

    tmp_called_name_46 = LOOKUP_ATTRIBUTE( tmp_source_name_75, const_str_plain_POINTER );
    if ( tmp_called_name_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_26 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_SHORT );

    if (unlikely( tmp_args_element_name_26 == NULL ))
    {
        tmp_args_element_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SHORT );
    }

    if ( tmp_args_element_name_26 == NULL )
    {
        Py_DECREF( tmp_called_name_46 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SHORT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 191;

        goto frame_exception_exit_1;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 191;
    {
        PyObject *call_args[] = { tmp_args_element_name_26 };
        tmp_assign_source_200 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_46, call_args );
    }

    Py_DECREF( tmp_called_name_46 );
    if ( tmp_assign_source_200 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PSHORT, tmp_assign_source_200 );
    // Tried code:
    tmp_source_name_76 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_76 == NULL ))
    {
        tmp_source_name_76 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_76 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 192;

        goto try_except_handler_51;
    }

    tmp_called_name_47 = LOOKUP_ATTRIBUTE( tmp_source_name_76, const_str_plain_POINTER );
    if ( tmp_called_name_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;

        goto try_except_handler_51;
    }
    tmp_args_element_name_27 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_SIZE );

    if (unlikely( tmp_args_element_name_27 == NULL ))
    {
        tmp_args_element_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SIZE );
    }

    if ( tmp_args_element_name_27 == NULL )
    {
        Py_DECREF( tmp_called_name_47 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SIZE" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 192;

        goto try_except_handler_51;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 192;
    {
        PyObject *call_args[] = { tmp_args_element_name_27 };
        tmp_assign_source_201 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_47, call_args );
    }

    Py_DECREF( tmp_called_name_47 );
    if ( tmp_assign_source_201 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;

        goto try_except_handler_51;
    }
    assert( tmp_assign_unpack_21__assign_source == NULL );
    tmp_assign_unpack_21__assign_source = tmp_assign_source_201;

    goto try_end_31;
    // Exception handler code:
    try_except_handler_51:;
    exception_keeper_type_51 = exception_type;
    exception_keeper_value_51 = exception_value;
    exception_keeper_tb_51 = exception_tb;
    exception_keeper_lineno_51 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_51;
    exception_value = exception_keeper_value_51;
    exception_tb = exception_keeper_tb_51;
    exception_lineno = exception_keeper_lineno_51;

    goto frame_exception_exit_1;
    // End of try:
    try_end_31:;
    tmp_assign_source_202 = tmp_assign_unpack_21__assign_source;

    CHECK_OBJECT( tmp_assign_source_202 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPSIZE, tmp_assign_source_202 );
    tmp_assign_source_203 = tmp_assign_unpack_21__assign_source;

    CHECK_OBJECT( tmp_assign_source_203 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PSIZE, tmp_assign_source_203 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_21__assign_source );
    Py_DECREF( tmp_assign_unpack_21__assign_source );
    tmp_assign_unpack_21__assign_source = NULL;

    // Tried code:
    tmp_source_name_77 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_77 == NULL ))
    {
        tmp_source_name_77 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_77 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 193;

        goto try_except_handler_52;
    }

    tmp_called_name_48 = LOOKUP_ATTRIBUTE( tmp_source_name_77, const_str_plain_POINTER );
    if ( tmp_called_name_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;

        goto try_except_handler_52;
    }
    tmp_args_element_name_28 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_SIZEL );

    if (unlikely( tmp_args_element_name_28 == NULL ))
    {
        tmp_args_element_name_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SIZEL );
    }

    if ( tmp_args_element_name_28 == NULL )
    {
        Py_DECREF( tmp_called_name_48 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SIZEL" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 193;

        goto try_except_handler_52;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 193;
    {
        PyObject *call_args[] = { tmp_args_element_name_28 };
        tmp_assign_source_204 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_48, call_args );
    }

    Py_DECREF( tmp_called_name_48 );
    if ( tmp_assign_source_204 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;

        goto try_except_handler_52;
    }
    assert( tmp_assign_unpack_22__assign_source == NULL );
    tmp_assign_unpack_22__assign_source = tmp_assign_source_204;

    goto try_end_32;
    // Exception handler code:
    try_except_handler_52:;
    exception_keeper_type_52 = exception_type;
    exception_keeper_value_52 = exception_value;
    exception_keeper_tb_52 = exception_tb;
    exception_keeper_lineno_52 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_52;
    exception_value = exception_keeper_value_52;
    exception_tb = exception_keeper_tb_52;
    exception_lineno = exception_keeper_lineno_52;

    goto frame_exception_exit_1;
    // End of try:
    try_end_32:;
    tmp_assign_source_205 = tmp_assign_unpack_22__assign_source;

    CHECK_OBJECT( tmp_assign_source_205 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPSIZEL, tmp_assign_source_205 );
    tmp_assign_source_206 = tmp_assign_unpack_22__assign_source;

    CHECK_OBJECT( tmp_assign_source_206 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PSIZEL, tmp_assign_source_206 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_22__assign_source );
    Py_DECREF( tmp_assign_unpack_22__assign_source );
    tmp_assign_unpack_22__assign_source = NULL;

    tmp_source_name_78 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_78 == NULL ))
    {
        tmp_source_name_78 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_78 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 194;

        goto frame_exception_exit_1;
    }

    tmp_called_name_49 = LOOKUP_ATTRIBUTE( tmp_source_name_78, const_str_plain_POINTER );
    if ( tmp_called_name_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_29 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_SMALL_RECT );

    if (unlikely( tmp_args_element_name_29 == NULL ))
    {
        tmp_args_element_name_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SMALL_RECT );
    }

    if ( tmp_args_element_name_29 == NULL )
    {
        Py_DECREF( tmp_called_name_49 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "SMALL_RECT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 194;

        goto frame_exception_exit_1;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 194;
    {
        PyObject *call_args[] = { tmp_args_element_name_29 };
        tmp_assign_source_207 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_49, call_args );
    }

    Py_DECREF( tmp_called_name_49 );
    if ( tmp_assign_source_207 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PSMALL_RECT, tmp_assign_source_207 );
    // Tried code:
    tmp_source_name_79 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_79 == NULL ))
    {
        tmp_source_name_79 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_79 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;

        goto try_except_handler_53;
    }

    tmp_called_name_50 = LOOKUP_ATTRIBUTE( tmp_source_name_79, const_str_plain_POINTER );
    if ( tmp_called_name_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;

        goto try_except_handler_53;
    }
    tmp_args_element_name_30 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_UINT );

    if (unlikely( tmp_args_element_name_30 == NULL ))
    {
        tmp_args_element_name_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UINT );
    }

    if ( tmp_args_element_name_30 == NULL )
    {
        Py_DECREF( tmp_called_name_50 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "UINT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 195;

        goto try_except_handler_53;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 195;
    {
        PyObject *call_args[] = { tmp_args_element_name_30 };
        tmp_assign_source_208 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_50, call_args );
    }

    Py_DECREF( tmp_called_name_50 );
    if ( tmp_assign_source_208 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;

        goto try_except_handler_53;
    }
    assert( tmp_assign_unpack_23__assign_source == NULL );
    tmp_assign_unpack_23__assign_source = tmp_assign_source_208;

    goto try_end_33;
    // Exception handler code:
    try_except_handler_53:;
    exception_keeper_type_53 = exception_type;
    exception_keeper_value_53 = exception_value;
    exception_keeper_tb_53 = exception_tb;
    exception_keeper_lineno_53 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_53;
    exception_value = exception_keeper_value_53;
    exception_tb = exception_keeper_tb_53;
    exception_lineno = exception_keeper_lineno_53;

    goto frame_exception_exit_1;
    // End of try:
    try_end_33:;
    tmp_assign_source_209 = tmp_assign_unpack_23__assign_source;

    CHECK_OBJECT( tmp_assign_source_209 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPUINT, tmp_assign_source_209 );
    tmp_assign_source_210 = tmp_assign_unpack_23__assign_source;

    CHECK_OBJECT( tmp_assign_source_210 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PUINT, tmp_assign_source_210 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_23__assign_source );
    Py_DECREF( tmp_assign_unpack_23__assign_source );
    tmp_assign_unpack_23__assign_source = NULL;

    tmp_source_name_80 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_80 == NULL ))
    {
        tmp_source_name_80 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_80 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 196;

        goto frame_exception_exit_1;
    }

    tmp_called_name_51 = LOOKUP_ATTRIBUTE( tmp_source_name_80, const_str_plain_POINTER );
    if ( tmp_called_name_51 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_31 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ULARGE_INTEGER );

    if (unlikely( tmp_args_element_name_31 == NULL ))
    {
        tmp_args_element_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ULARGE_INTEGER );
    }

    if ( tmp_args_element_name_31 == NULL )
    {
        Py_DECREF( tmp_called_name_51 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ULARGE_INTEGER" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 196;

        goto frame_exception_exit_1;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 196;
    {
        PyObject *call_args[] = { tmp_args_element_name_31 };
        tmp_assign_source_211 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_51, call_args );
    }

    Py_DECREF( tmp_called_name_51 );
    if ( tmp_assign_source_211 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PULARGE_INTEGER, tmp_assign_source_211 );
    tmp_source_name_81 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_81 == NULL ))
    {
        tmp_source_name_81 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_81 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 197;

        goto frame_exception_exit_1;
    }

    tmp_called_name_52 = LOOKUP_ATTRIBUTE( tmp_source_name_81, const_str_plain_POINTER );
    if ( tmp_called_name_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_32 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ULONG );

    if (unlikely( tmp_args_element_name_32 == NULL ))
    {
        tmp_args_element_name_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ULONG );
    }

    if ( tmp_args_element_name_32 == NULL )
    {
        Py_DECREF( tmp_called_name_52 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ULONG" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 197;

        goto frame_exception_exit_1;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 197;
    {
        PyObject *call_args[] = { tmp_args_element_name_32 };
        tmp_assign_source_212 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_52, call_args );
    }

    Py_DECREF( tmp_called_name_52 );
    if ( tmp_assign_source_212 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PULONG, tmp_assign_source_212 );
    tmp_source_name_82 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_82 == NULL ))
    {
        tmp_source_name_82 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_82 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 198;

        goto frame_exception_exit_1;
    }

    tmp_called_name_53 = LOOKUP_ATTRIBUTE( tmp_source_name_82, const_str_plain_POINTER );
    if ( tmp_called_name_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_33 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_USHORT );

    if (unlikely( tmp_args_element_name_33 == NULL ))
    {
        tmp_args_element_name_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_USHORT );
    }

    if ( tmp_args_element_name_33 == NULL )
    {
        Py_DECREF( tmp_called_name_53 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "USHORT" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 198;

        goto frame_exception_exit_1;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 198;
    {
        PyObject *call_args[] = { tmp_args_element_name_33 };
        tmp_assign_source_213 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_53, call_args );
    }

    Py_DECREF( tmp_called_name_53 );
    if ( tmp_assign_source_213 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PUSHORT, tmp_assign_source_213 );
    tmp_source_name_83 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_83 == NULL ))
    {
        tmp_source_name_83 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_83 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 199;

        goto frame_exception_exit_1;
    }

    tmp_called_name_54 = LOOKUP_ATTRIBUTE( tmp_source_name_83, const_str_plain_POINTER );
    if ( tmp_called_name_54 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;

        goto frame_exception_exit_1;
    }
    tmp_args_element_name_34 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_WCHAR );

    if (unlikely( tmp_args_element_name_34 == NULL ))
    {
        tmp_args_element_name_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WCHAR );
    }

    if ( tmp_args_element_name_34 == NULL )
    {
        Py_DECREF( tmp_called_name_54 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WCHAR" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 199;

        goto frame_exception_exit_1;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 199;
    {
        PyObject *call_args[] = { tmp_args_element_name_34 };
        tmp_assign_source_214 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_54, call_args );
    }

    Py_DECREF( tmp_called_name_54 );
    if ( tmp_assign_source_214 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;

        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PWCHAR, tmp_assign_source_214 );
    // Tried code:
    tmp_source_name_84 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_84 == NULL ))
    {
        tmp_source_name_84 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_84 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 200;

        goto try_except_handler_54;
    }

    tmp_called_name_55 = LOOKUP_ATTRIBUTE( tmp_source_name_84, const_str_plain_POINTER );
    if ( tmp_called_name_55 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;

        goto try_except_handler_54;
    }
    tmp_args_element_name_35 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_WIN32_FIND_DATAA );

    if (unlikely( tmp_args_element_name_35 == NULL ))
    {
        tmp_args_element_name_35 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WIN32_FIND_DATAA );
    }

    if ( tmp_args_element_name_35 == NULL )
    {
        Py_DECREF( tmp_called_name_55 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WIN32_FIND_DATAA" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 200;

        goto try_except_handler_54;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 200;
    {
        PyObject *call_args[] = { tmp_args_element_name_35 };
        tmp_assign_source_215 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_55, call_args );
    }

    Py_DECREF( tmp_called_name_55 );
    if ( tmp_assign_source_215 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 200;

        goto try_except_handler_54;
    }
    assert( tmp_assign_unpack_24__assign_source == NULL );
    tmp_assign_unpack_24__assign_source = tmp_assign_source_215;

    goto try_end_34;
    // Exception handler code:
    try_except_handler_54:;
    exception_keeper_type_54 = exception_type;
    exception_keeper_value_54 = exception_value;
    exception_keeper_tb_54 = exception_tb;
    exception_keeper_lineno_54 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_54;
    exception_value = exception_keeper_value_54;
    exception_tb = exception_keeper_tb_54;
    exception_lineno = exception_keeper_lineno_54;

    goto frame_exception_exit_1;
    // End of try:
    try_end_34:;
    tmp_assign_source_216 = tmp_assign_unpack_24__assign_source;

    CHECK_OBJECT( tmp_assign_source_216 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPWIN32_FIND_DATAA, tmp_assign_source_216 );
    tmp_assign_source_217 = tmp_assign_unpack_24__assign_source;

    CHECK_OBJECT( tmp_assign_source_217 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PWIN32_FIND_DATAA, tmp_assign_source_217 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_24__assign_source );
    Py_DECREF( tmp_assign_unpack_24__assign_source );
    tmp_assign_unpack_24__assign_source = NULL;

    // Tried code:
    tmp_source_name_85 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_85 == NULL ))
    {
        tmp_source_name_85 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_85 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 201;

        goto try_except_handler_55;
    }

    tmp_called_name_56 = LOOKUP_ATTRIBUTE( tmp_source_name_85, const_str_plain_POINTER );
    if ( tmp_called_name_56 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;

        goto try_except_handler_55;
    }
    tmp_args_element_name_36 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_WIN32_FIND_DATAW );

    if (unlikely( tmp_args_element_name_36 == NULL ))
    {
        tmp_args_element_name_36 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WIN32_FIND_DATAW );
    }

    if ( tmp_args_element_name_36 == NULL )
    {
        Py_DECREF( tmp_called_name_56 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WIN32_FIND_DATAW" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 201;

        goto try_except_handler_55;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 201;
    {
        PyObject *call_args[] = { tmp_args_element_name_36 };
        tmp_assign_source_218 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_56, call_args );
    }

    Py_DECREF( tmp_called_name_56 );
    if ( tmp_assign_source_218 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 201;

        goto try_except_handler_55;
    }
    assert( tmp_assign_unpack_25__assign_source == NULL );
    tmp_assign_unpack_25__assign_source = tmp_assign_source_218;

    goto try_end_35;
    // Exception handler code:
    try_except_handler_55:;
    exception_keeper_type_55 = exception_type;
    exception_keeper_value_55 = exception_value;
    exception_keeper_tb_55 = exception_tb;
    exception_keeper_lineno_55 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_55;
    exception_value = exception_keeper_value_55;
    exception_tb = exception_keeper_tb_55;
    exception_lineno = exception_keeper_lineno_55;

    goto frame_exception_exit_1;
    // End of try:
    try_end_35:;
    tmp_assign_source_219 = tmp_assign_unpack_25__assign_source;

    CHECK_OBJECT( tmp_assign_source_219 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPWIN32_FIND_DATAW, tmp_assign_source_219 );
    tmp_assign_source_220 = tmp_assign_unpack_25__assign_source;

    CHECK_OBJECT( tmp_assign_source_220 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PWIN32_FIND_DATAW, tmp_assign_source_220 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_25__assign_source );
    Py_DECREF( tmp_assign_unpack_25__assign_source );
    tmp_assign_unpack_25__assign_source = NULL;

    // Tried code:
    tmp_source_name_86 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_ctypes );

    if (unlikely( tmp_source_name_86 == NULL ))
    {
        tmp_source_name_86 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ctypes );
    }

    if ( tmp_source_name_86 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "ctypes" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 202;

        goto try_except_handler_56;
    }

    tmp_called_name_57 = LOOKUP_ATTRIBUTE( tmp_source_name_86, const_str_plain_POINTER );
    if ( tmp_called_name_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;

        goto try_except_handler_56;
    }
    tmp_args_element_name_37 = GET_STRING_DICT_VALUE( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_WORD );

    if (unlikely( tmp_args_element_name_37 == NULL ))
    {
        tmp_args_element_name_37 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WORD );
    }

    if ( tmp_args_element_name_37 == NULL )
    {
        Py_DECREF( tmp_called_name_57 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyUnicode_FromFormat( "name '%s' is not defined", "WORD" );
        exception_tb = NULL;
        NORMALIZE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        CHAIN_EXCEPTION( exception_value );

        exception_lineno = 202;

        goto try_except_handler_56;
    }

    frame_579ff0fb490bef2aa8f06b4861507834->m_frame.f_lineno = 202;
    {
        PyObject *call_args[] = { tmp_args_element_name_37 };
        tmp_assign_source_221 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_57, call_args );
    }

    Py_DECREF( tmp_called_name_57 );
    if ( tmp_assign_source_221 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;

        goto try_except_handler_56;
    }
    assert( tmp_assign_unpack_26__assign_source == NULL );
    tmp_assign_unpack_26__assign_source = tmp_assign_source_221;

    goto try_end_36;
    // Exception handler code:
    try_except_handler_56:;
    exception_keeper_type_56 = exception_type;
    exception_keeper_value_56 = exception_value;
    exception_keeper_tb_56 = exception_tb;
    exception_keeper_lineno_56 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Re-raise.
    exception_type = exception_keeper_type_56;
    exception_value = exception_keeper_value_56;
    exception_tb = exception_keeper_tb_56;
    exception_lineno = exception_keeper_lineno_56;

    goto frame_exception_exit_1;
    // End of try:
    try_end_36:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_579ff0fb490bef2aa8f06b4861507834 );
#endif
    popFrameStack();

    assertFrameObject( frame_579ff0fb490bef2aa8f06b4861507834 );

    goto frame_no_exception_11;
    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_579ff0fb490bef2aa8f06b4861507834 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_579ff0fb490bef2aa8f06b4861507834, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_579ff0fb490bef2aa8f06b4861507834->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_579ff0fb490bef2aa8f06b4861507834, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_11:;
    tmp_assign_source_222 = tmp_assign_unpack_26__assign_source;

    CHECK_OBJECT( tmp_assign_source_222 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_LPWORD, tmp_assign_source_222 );
    tmp_assign_source_223 = tmp_assign_unpack_26__assign_source;

    CHECK_OBJECT( tmp_assign_source_223 );
    UPDATE_STRING_DICT0( moduledict_ctypes$wintypes, (Nuitka_StringObject *)const_str_plain_PWORD, tmp_assign_source_223 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_26__assign_source );
    Py_DECREF( tmp_assign_unpack_26__assign_source );
    tmp_assign_unpack_26__assign_source = NULL;


    return MOD_RETURN_VALUE( module_ctypes$wintypes );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
