/* Generated code for Python module 'backports.functools_lru_cache'
 * created by Nuitka version 0.6.1.1
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

/* The "_module_backports$functools_lru_cache" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_backports$functools_lru_cache;
PyDictObject *moduledict_backports$functools_lru_cache;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_get;
static PyObject *const_tuple_ee4c259a2f252e710f8b4c1463a682e9_tuple;
extern PyObject *const_int_pos_100;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_wraps;
extern PyObject *const_str_plain_len;
extern PyObject *const_list_int_0_int_0_list;
static PyObject *const_tuple_01b243b29c4806bd65da5a9d551cf769_tuple;
static PyObject *const_str_plain_user_function;
static PyObject *const_str_plain_update_wrapper;
static PyObject *const_str_digest_d3fe48a85e362e50bef701c1ecf93202;
static PyObject *const_str_plain_RESULT;
extern PyObject *const_str_plain_None;
static PyObject *const_str_plain_kwd_mark;
static PyObject *const_str_plain_cache_get;
extern PyObject *const_str_plain_object;
static PyObject *const_str_plain_NEXT;
static PyObject *const_str_plain_decorating_function;
extern PyObject *const_str_plain_cache;
static PyObject *const_str_plain_PREV;
extern PyObject *const_str_plain_self;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_ccbbd0bd93bb7289b0829b583085d4c3;
static PyObject *const_str_plain_make_key;
static PyObject *const_str_digest_519ef8af176d216914429c5c4c6c8f1f;
extern PyObject *const_str_plain_maxsize;
extern PyObject *const_str_plain_int;
static PyObject *const_tuple_6d483db607778d8a635aadb202340fdd_tuple;
extern PyObject *const_str_plain_args;
static PyObject *const_set_645c5c4347dd7222f672435373d279c7;
extern PyObject *const_str_plain_lru_cache;
extern PyObject *const_str_plain___exit__;
static PyObject *const_str_plain_cache_info;
extern PyObject *const_str_plain_sorted;
static PyObject *const_tuple_1df92ab4d1867f394903ab4477fd7aa0_tuple;
static PyObject *const_tuple_aa9f5d7da95764ee94071e337e1f4743_tuple;
static PyObject *const_str_plain_hits;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_str_plain_threading;
static PyObject *const_str_plain_stats;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_e9f4851354fa87711c0fbd1becc73474;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_hashvalue;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain___slots__;
static PyObject *const_str_plain_HITS;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain__len;
static PyObject *const_str_plain__HashedSeq;
extern PyObject *const_str_plain_item;
extern PyObject *const_tuple_type_list_tuple;
extern PyObject *const_str_plain_list;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_lock;
extern PyObject *const_str_plain_assigned;
extern PyObject *const_str_plain_cache_clear;
extern PyObject *const_str_plain_items;
extern PyObject *const_str_plain_key;
static PyObject *const_tuple_int_pos_100_false_tuple;
static PyObject *const_str_digest_6ddfac4d86d61acb3be24e988e5471d9;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain_hash;
extern PyObject *const_str_angle_genexpr;
extern PyObject *const_str_plain___hash__;
extern PyObject *const_str_plain___wrapped__;
extern PyObject *const_str_plain_functools;
static PyObject *const_str_digest_b6b8172753fb6992fab7c751e8230906;
static PyObject *const_str_digest_ee3ec51ac74b28700968a243ccc29e0e;
extern PyObject *const_str_plain_attr;
extern PyObject *const_str_plain_updated;
extern PyObject *const_str_plain___enter__;
extern PyObject *const_str_plain_collections;
extern PyObject *const_str_plain_result;
static PyObject *const_tuple_int_0_int_pos_1_int_pos_2_int_pos_3_tuple;
static PyObject *const_tuple_415b0ace28bb0b1af6555ec99b2c9d65_tuple;
static PyObject *const_str_plain_KEY;
static PyObject *const_tuple_667cd22d9354b5327e562bf0072569bf_tuple;
static PyObject *const_tuple_29fa639cbcf0369ed68ec85b47911ef8_tuple;
extern PyObject *const_str_plain_k;
static PyObject *const_tuple_ee1e19f9f6a8e67c4e6cf7796c019fa4_tuple;
extern PyObject *const_str_plain_RLock;
extern PyObject *const_str_plain_v;
static PyObject *const_tuple_int_0_int_pos_1_tuple;
extern PyObject *const_tuple_str_plain_namedtuple_tuple;
extern PyObject *const_str_plain_frozenset;
extern PyObject *const_str_plain_WRAPPER_ASSIGNMENTS;
static PyObject *const_str_plain_MISSES;
static PyObject *const_str_plain__make_key;
static PyObject *const_tuple_0493fedebc143499424e585bbeb6bd12_tuple;
extern PyObject *const_str_plain_clear;
static PyObject *const_str_plain_typed;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_plain_currsize;
static PyObject *const_tuple_str_plain_self_str_plain_tup_str_plain_hash_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_int_0;
static PyObject *const_str_plain_sorted_items;
static PyObject *const_tuple_a4149db07906f0fac92c7c110245b931_tuple;
static PyObject *const_list_1f9c12d5fd3660d5ab8008c29022ae09_list;
static PyObject *const_str_plain_tup;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_tuple_str_plain_RLock_tuple;
extern PyObject *const_str_plain_namedtuple;
static PyObject *const_str_plain__CacheInfo;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_plain___debug__;
static PyObject *const_str_plain_misses;
static PyObject *const_str_plain_nonlocal_root;
extern PyObject *const_str_plain_wrapper;
extern PyObject *const_str_plain_WRAPPER_UPDATES;
static PyObject *const_str_plain_fasttypes;
static PyObject *const_str_plain_CacheInfo;
static PyObject *const_tuple_19cf4f57be324a25d5c9fd3b22757ed6_tuple;
extern PyObject *const_str_digest_6b55678e749391b91aa1c9ffe1d6774e;
extern PyObject *const_str_plain_wrapped;
extern PyObject *const_str_plain_kwds;
extern PyObject *const_str_plain_root;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_ee4c259a2f252e710f8b4c1463a682e9_tuple = PyTuple_New( 5 );
    const_str_plain_nonlocal_root = UNSTREAM_STRING( &constant_bin[ 178817 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_ee4c259a2f252e710f8b4c1463a682e9_tuple, 0, const_str_plain_nonlocal_root ); Py_INCREF( const_str_plain_nonlocal_root );
    PyTuple_SET_ITEM( const_tuple_ee4c259a2f252e710f8b4c1463a682e9_tuple, 1, const_str_plain_lock ); Py_INCREF( const_str_plain_lock );
    PyTuple_SET_ITEM( const_tuple_ee4c259a2f252e710f8b4c1463a682e9_tuple, 2, const_str_plain_cache ); Py_INCREF( const_str_plain_cache );
    PyTuple_SET_ITEM( const_tuple_ee4c259a2f252e710f8b4c1463a682e9_tuple, 3, const_str_plain_root ); Py_INCREF( const_str_plain_root );
    const_str_plain_stats = UNSTREAM_STRING( &constant_bin[ 178830 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_ee4c259a2f252e710f8b4c1463a682e9_tuple, 4, const_str_plain_stats ); Py_INCREF( const_str_plain_stats );
    const_tuple_01b243b29c4806bd65da5a9d551cf769_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_01b243b29c4806bd65da5a9d551cf769_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_01b243b29c4806bd65da5a9d551cf769_tuple, 1, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_01b243b29c4806bd65da5a9d551cf769_tuple, 2, const_str_plain_type ); Py_INCREF( const_str_plain_type );
    PyTuple_SET_ITEM( const_tuple_01b243b29c4806bd65da5a9d551cf769_tuple, 3, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    const_str_plain_user_function = UNSTREAM_STRING( &constant_bin[ 178835 ], 13, 1 );
    const_str_plain_update_wrapper = UNSTREAM_STRING( &constant_bin[ 178848 ], 14, 1 );
    const_str_digest_d3fe48a85e362e50bef701c1ecf93202 = UNSTREAM_STRING( &constant_bin[ 178862 ], 71, 0 );
    const_str_plain_RESULT = UNSTREAM_STRING( &constant_bin[ 178933 ], 6, 1 );
    const_str_plain_kwd_mark = UNSTREAM_STRING( &constant_bin[ 178939 ], 8, 1 );
    const_str_plain_cache_get = UNSTREAM_STRING( &constant_bin[ 178947 ], 9, 1 );
    const_str_plain_NEXT = UNSTREAM_STRING( &constant_bin[ 7403 ], 4, 1 );
    const_str_plain_decorating_function = UNSTREAM_STRING( &constant_bin[ 178956 ], 19, 1 );
    const_str_plain_PREV = UNSTREAM_STRING( &constant_bin[ 178975 ], 4, 1 );
    const_str_digest_ccbbd0bd93bb7289b0829b583085d4c3 = UNSTREAM_STRING( &constant_bin[ 178979 ], 38, 0 );
    const_str_plain_make_key = UNSTREAM_STRING( &constant_bin[ 179017 ], 8, 1 );
    const_str_digest_519ef8af176d216914429c5c4c6c8f1f = UNSTREAM_STRING( &constant_bin[ 179025 ], 53, 0 );
    const_tuple_6d483db607778d8a635aadb202340fdd_tuple = PyTuple_New( 19 );
    PyTuple_SET_ITEM( const_tuple_6d483db607778d8a635aadb202340fdd_tuple, 0, const_str_plain_user_function ); Py_INCREF( const_str_plain_user_function );
    const_str_plain_HITS = UNSTREAM_STRING( &constant_bin[ 179078 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_6d483db607778d8a635aadb202340fdd_tuple, 1, const_str_plain_HITS ); Py_INCREF( const_str_plain_HITS );
    const_str_plain_cache_info = UNSTREAM_STRING( &constant_bin[ 179082 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_6d483db607778d8a635aadb202340fdd_tuple, 2, const_str_plain_cache_info ); Py_INCREF( const_str_plain_cache_info );
    PyTuple_SET_ITEM( const_tuple_6d483db607778d8a635aadb202340fdd_tuple, 3, const_str_plain_stats ); Py_INCREF( const_str_plain_stats );
    const_str_plain__len = UNSTREAM_STRING( &constant_bin[ 9142 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_6d483db607778d8a635aadb202340fdd_tuple, 4, const_str_plain__len ); Py_INCREF( const_str_plain__len );
    PyTuple_SET_ITEM( const_tuple_6d483db607778d8a635aadb202340fdd_tuple, 5, const_str_plain_lock ); Py_INCREF( const_str_plain_lock );
    PyTuple_SET_ITEM( const_tuple_6d483db607778d8a635aadb202340fdd_tuple, 6, const_str_plain_cache ); Py_INCREF( const_str_plain_cache );
    PyTuple_SET_ITEM( const_tuple_6d483db607778d8a635aadb202340fdd_tuple, 7, const_str_plain_maxsize ); Py_INCREF( const_str_plain_maxsize );
    PyTuple_SET_ITEM( const_tuple_6d483db607778d8a635aadb202340fdd_tuple, 8, const_str_plain_wrapper ); Py_INCREF( const_str_plain_wrapper );
    PyTuple_SET_ITEM( const_tuple_6d483db607778d8a635aadb202340fdd_tuple, 9, const_str_plain_NEXT ); Py_INCREF( const_str_plain_NEXT );
    PyTuple_SET_ITEM( const_tuple_6d483db607778d8a635aadb202340fdd_tuple, 10, const_str_plain_nonlocal_root ); Py_INCREF( const_str_plain_nonlocal_root );
    const_str_plain_MISSES = UNSTREAM_STRING( &constant_bin[ 179092 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_6d483db607778d8a635aadb202340fdd_tuple, 11, const_str_plain_MISSES ); Py_INCREF( const_str_plain_MISSES );
    PyTuple_SET_ITEM( const_tuple_6d483db607778d8a635aadb202340fdd_tuple, 12, const_str_plain_RESULT ); Py_INCREF( const_str_plain_RESULT );
    const_str_plain_KEY = UNSTREAM_STRING( &constant_bin[ 52344 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_6d483db607778d8a635aadb202340fdd_tuple, 13, const_str_plain_KEY ); Py_INCREF( const_str_plain_KEY );
    PyTuple_SET_ITEM( const_tuple_6d483db607778d8a635aadb202340fdd_tuple, 14, const_str_plain_cache_clear ); Py_INCREF( const_str_plain_cache_clear );
    PyTuple_SET_ITEM( const_tuple_6d483db607778d8a635aadb202340fdd_tuple, 15, const_str_plain_make_key ); Py_INCREF( const_str_plain_make_key );
    PyTuple_SET_ITEM( const_tuple_6d483db607778d8a635aadb202340fdd_tuple, 16, const_str_plain_PREV ); Py_INCREF( const_str_plain_PREV );
    PyTuple_SET_ITEM( const_tuple_6d483db607778d8a635aadb202340fdd_tuple, 17, const_str_plain_root ); Py_INCREF( const_str_plain_root );
    PyTuple_SET_ITEM( const_tuple_6d483db607778d8a635aadb202340fdd_tuple, 18, const_str_plain_cache_get ); Py_INCREF( const_str_plain_cache_get );
    const_set_645c5c4347dd7222f672435373d279c7 = PySet_New( NULL );
    PySet_Add( const_set_645c5c4347dd7222f672435373d279c7, (PyObject *)&PyInt_Type );
    PySet_Add( const_set_645c5c4347dd7222f672435373d279c7, (PyObject *)Py_TYPE( Py_None ) );
    PySet_Add( const_set_645c5c4347dd7222f672435373d279c7, (PyObject *)&PyFrozenSet_Type );
    PySet_Add( const_set_645c5c4347dd7222f672435373d279c7, (PyObject *)&PyString_Type );
    assert( PySet_Size( const_set_645c5c4347dd7222f672435373d279c7 ) == 4 );
    const_tuple_1df92ab4d1867f394903ab4477fd7aa0_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_1df92ab4d1867f394903ab4477fd7aa0_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_1df92ab4d1867f394903ab4477fd7aa0_tuple, 1, const_str_plain_kwds ); Py_INCREF( const_str_plain_kwds );
    const_str_plain_typed = UNSTREAM_STRING( &constant_bin[ 178895 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_1df92ab4d1867f394903ab4477fd7aa0_tuple, 2, const_str_plain_typed ); Py_INCREF( const_str_plain_typed );
    PyTuple_SET_ITEM( const_tuple_1df92ab4d1867f394903ab4477fd7aa0_tuple, 3, const_str_plain_kwd_mark ); Py_INCREF( const_str_plain_kwd_mark );
    const_str_plain_fasttypes = UNSTREAM_STRING( &constant_bin[ 179098 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_1df92ab4d1867f394903ab4477fd7aa0_tuple, 4, const_str_plain_fasttypes ); Py_INCREF( const_str_plain_fasttypes );
    PyTuple_SET_ITEM( const_tuple_1df92ab4d1867f394903ab4477fd7aa0_tuple, 5, const_str_plain_sorted ); Py_INCREF( const_str_plain_sorted );
    PyTuple_SET_ITEM( const_tuple_1df92ab4d1867f394903ab4477fd7aa0_tuple, 6, const_str_plain_tuple ); Py_INCREF( const_str_plain_tuple );
    PyTuple_SET_ITEM( const_tuple_1df92ab4d1867f394903ab4477fd7aa0_tuple, 7, const_str_plain_type ); Py_INCREF( const_str_plain_type );
    PyTuple_SET_ITEM( const_tuple_1df92ab4d1867f394903ab4477fd7aa0_tuple, 8, const_str_plain_len ); Py_INCREF( const_str_plain_len );
    const_str_plain_sorted_items = UNSTREAM_STRING( &constant_bin[ 179107 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_1df92ab4d1867f394903ab4477fd7aa0_tuple, 9, const_str_plain_sorted_items ); Py_INCREF( const_str_plain_sorted_items );
    PyTuple_SET_ITEM( const_tuple_1df92ab4d1867f394903ab4477fd7aa0_tuple, 10, const_str_plain_item ); Py_INCREF( const_str_plain_item );
    PyTuple_SET_ITEM( const_tuple_1df92ab4d1867f394903ab4477fd7aa0_tuple, 11, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    const_tuple_aa9f5d7da95764ee94071e337e1f4743_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_aa9f5d7da95764ee94071e337e1f4743_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_aa9f5d7da95764ee94071e337e1f4743_tuple, 1, const_str_plain_type ); Py_INCREF( const_str_plain_type );
    PyTuple_SET_ITEM( const_tuple_aa9f5d7da95764ee94071e337e1f4743_tuple, 2, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    const_str_plain_hits = UNSTREAM_STRING( &constant_bin[ 179119 ], 4, 1 );
    const_str_digest_e9f4851354fa87711c0fbd1becc73474 = UNSTREAM_STRING( &constant_bin[ 179123 ], 36, 0 );
    const_str_plain_hashvalue = UNSTREAM_STRING( &constant_bin[ 179159 ], 9, 1 );
    const_str_plain__HashedSeq = UNSTREAM_STRING( &constant_bin[ 179168 ], 10, 1 );
    const_tuple_int_pos_100_false_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_100_false_tuple, 0, const_int_pos_100 ); Py_INCREF( const_int_pos_100 );
    PyTuple_SET_ITEM( const_tuple_int_pos_100_false_tuple, 1, Py_False ); Py_INCREF( Py_False );
    const_str_digest_6ddfac4d86d61acb3be24e988e5471d9 = UNSTREAM_STRING( &constant_bin[ 179178 ], 65, 0 );
    const_str_digest_b6b8172753fb6992fab7c751e8230906 = UNSTREAM_STRING( &constant_bin[ 179243 ], 23, 0 );
    const_str_digest_ee3ec51ac74b28700968a243ccc29e0e = UNSTREAM_STRING( &constant_bin[ 179266 ], 667, 0 );
    const_tuple_int_0_int_pos_1_int_pos_2_int_pos_3_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_pos_1_int_pos_2_int_pos_3_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_pos_1_int_pos_2_int_pos_3_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_pos_1_int_pos_2_int_pos_3_tuple, 2, const_int_pos_2 ); Py_INCREF( const_int_pos_2 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_pos_1_int_pos_2_int_pos_3_tuple, 3, const_int_pos_3 ); Py_INCREF( const_int_pos_3 );
    const_tuple_415b0ace28bb0b1af6555ec99b2c9d65_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_415b0ace28bb0b1af6555ec99b2c9d65_tuple, 0, const_str_digest_b9c4baf879ebd882d40843df3a4dead7 ); Py_INCREF( const_str_digest_b9c4baf879ebd882d40843df3a4dead7 );
    PyTuple_SET_ITEM( const_tuple_415b0ace28bb0b1af6555ec99b2c9d65_tuple, 1, const_str_plain_wrapped ); Py_INCREF( const_str_plain_wrapped );
    PyTuple_SET_ITEM( const_tuple_415b0ace28bb0b1af6555ec99b2c9d65_tuple, 2, const_str_plain_attr ); Py_INCREF( const_str_plain_attr );
    const_tuple_667cd22d9354b5327e562bf0072569bf_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_667cd22d9354b5327e562bf0072569bf_tuple, 0, const_str_plain_wrapper ); Py_INCREF( const_str_plain_wrapper );
    PyTuple_SET_ITEM( const_tuple_667cd22d9354b5327e562bf0072569bf_tuple, 1, const_str_plain_wrapped ); Py_INCREF( const_str_plain_wrapped );
    PyTuple_SET_ITEM( const_tuple_667cd22d9354b5327e562bf0072569bf_tuple, 2, const_str_plain_assigned ); Py_INCREF( const_str_plain_assigned );
    PyTuple_SET_ITEM( const_tuple_667cd22d9354b5327e562bf0072569bf_tuple, 3, const_str_plain_updated ); Py_INCREF( const_str_plain_updated );
    const_tuple_29fa639cbcf0369ed68ec85b47911ef8_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 179933 ], 300 );
    const_tuple_ee1e19f9f6a8e67c4e6cf7796c019fa4_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_ee1e19f9f6a8e67c4e6cf7796c019fa4_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_ee1e19f9f6a8e67c4e6cf7796c019fa4_tuple, 1, const_str_plain_kwds ); Py_INCREF( const_str_plain_kwds );
    PyTuple_SET_ITEM( const_tuple_ee1e19f9f6a8e67c4e6cf7796c019fa4_tuple, 2, const_str_plain_stats ); Py_INCREF( const_str_plain_stats );
    PyTuple_SET_ITEM( const_tuple_ee1e19f9f6a8e67c4e6cf7796c019fa4_tuple, 3, const_str_plain_MISSES ); Py_INCREF( const_str_plain_MISSES );
    PyTuple_SET_ITEM( const_tuple_ee1e19f9f6a8e67c4e6cf7796c019fa4_tuple, 4, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    PyTuple_SET_ITEM( const_tuple_ee1e19f9f6a8e67c4e6cf7796c019fa4_tuple, 5, const_str_plain_user_function ); Py_INCREF( const_str_plain_user_function );
    const_tuple_int_0_int_pos_1_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_pos_1_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_int_pos_1_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_str_plain__make_key = UNSTREAM_STRING( &constant_bin[ 180233 ], 9, 1 );
    const_tuple_0493fedebc143499424e585bbeb6bd12_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_0493fedebc143499424e585bbeb6bd12_tuple, 0, const_str_plain_HITS ); Py_INCREF( const_str_plain_HITS );
    PyTuple_SET_ITEM( const_tuple_0493fedebc143499424e585bbeb6bd12_tuple, 1, const_str_plain_stats ); Py_INCREF( const_str_plain_stats );
    PyTuple_SET_ITEM( const_tuple_0493fedebc143499424e585bbeb6bd12_tuple, 2, const_str_plain_lock ); Py_INCREF( const_str_plain_lock );
    PyTuple_SET_ITEM( const_tuple_0493fedebc143499424e585bbeb6bd12_tuple, 3, const_str_plain_cache ); Py_INCREF( const_str_plain_cache );
    PyTuple_SET_ITEM( const_tuple_0493fedebc143499424e585bbeb6bd12_tuple, 4, const_str_plain_MISSES ); Py_INCREF( const_str_plain_MISSES );
    PyTuple_SET_ITEM( const_tuple_0493fedebc143499424e585bbeb6bd12_tuple, 5, const_str_plain_maxsize ); Py_INCREF( const_str_plain_maxsize );
    const_str_plain_currsize = UNSTREAM_STRING( &constant_bin[ 179707 ], 8, 1 );
    const_tuple_str_plain_self_str_plain_tup_str_plain_hash_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_tup_str_plain_hash_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_tup = UNSTREAM_STRING( &constant_bin[ 6876 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_tup_str_plain_hash_tuple, 1, const_str_plain_tup ); Py_INCREF( const_str_plain_tup );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_tup_str_plain_hash_tuple, 2, const_str_plain_hash ); Py_INCREF( const_str_plain_hash );
    const_tuple_a4149db07906f0fac92c7c110245b931_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_a4149db07906f0fac92c7c110245b931_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_a4149db07906f0fac92c7c110245b931_tuple, 1, const_str_plain_kwds ); Py_INCREF( const_str_plain_kwds );
    PyTuple_SET_ITEM( const_tuple_a4149db07906f0fac92c7c110245b931_tuple, 2, const_str_plain_HITS ); Py_INCREF( const_str_plain_HITS );
    PyTuple_SET_ITEM( const_tuple_a4149db07906f0fac92c7c110245b931_tuple, 3, const_str_plain_cache ); Py_INCREF( const_str_plain_cache );
    PyTuple_SET_ITEM( const_tuple_a4149db07906f0fac92c7c110245b931_tuple, 4, const_str_plain_stats ); Py_INCREF( const_str_plain_stats );
    PyTuple_SET_ITEM( const_tuple_a4149db07906f0fac92c7c110245b931_tuple, 5, const_str_plain_typed ); Py_INCREF( const_str_plain_typed );
    PyTuple_SET_ITEM( const_tuple_a4149db07906f0fac92c7c110245b931_tuple, 6, const_str_plain_MISSES ); Py_INCREF( const_str_plain_MISSES );
    PyTuple_SET_ITEM( const_tuple_a4149db07906f0fac92c7c110245b931_tuple, 7, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    PyTuple_SET_ITEM( const_tuple_a4149db07906f0fac92c7c110245b931_tuple, 8, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_a4149db07906f0fac92c7c110245b931_tuple, 9, const_str_plain_user_function ); Py_INCREF( const_str_plain_user_function );
    PyTuple_SET_ITEM( const_tuple_a4149db07906f0fac92c7c110245b931_tuple, 10, const_str_plain_make_key ); Py_INCREF( const_str_plain_make_key );
    PyTuple_SET_ITEM( const_tuple_a4149db07906f0fac92c7c110245b931_tuple, 11, const_str_plain_root ); Py_INCREF( const_str_plain_root );
    PyTuple_SET_ITEM( const_tuple_a4149db07906f0fac92c7c110245b931_tuple, 12, const_str_plain_cache_get ); Py_INCREF( const_str_plain_cache_get );
    const_list_1f9c12d5fd3660d5ab8008c29022ae09_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_1f9c12d5fd3660d5ab8008c29022ae09_list, 0, const_str_plain_hits ); Py_INCREF( const_str_plain_hits );
    const_str_plain_misses = UNSTREAM_STRING( &constant_bin[ 179690 ], 6, 1 );
    PyList_SET_ITEM( const_list_1f9c12d5fd3660d5ab8008c29022ae09_list, 1, const_str_plain_misses ); Py_INCREF( const_str_plain_misses );
    PyList_SET_ITEM( const_list_1f9c12d5fd3660d5ab8008c29022ae09_list, 2, const_str_plain_maxsize ); Py_INCREF( const_str_plain_maxsize );
    PyList_SET_ITEM( const_list_1f9c12d5fd3660d5ab8008c29022ae09_list, 3, const_str_plain_currsize ); Py_INCREF( const_str_plain_currsize );
    const_str_plain__CacheInfo = UNSTREAM_STRING( &constant_bin[ 180242 ], 10, 1 );
    const_str_plain_CacheInfo = UNSTREAM_STRING( &constant_bin[ 180243 ], 9, 1 );
    const_tuple_19cf4f57be324a25d5c9fd3b22757ed6_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_19cf4f57be324a25d5c9fd3b22757ed6_tuple, 0, const_str_plain_maxsize ); Py_INCREF( const_str_plain_maxsize );
    PyTuple_SET_ITEM( const_tuple_19cf4f57be324a25d5c9fd3b22757ed6_tuple, 1, const_str_plain_typed ); Py_INCREF( const_str_plain_typed );
    PyTuple_SET_ITEM( const_tuple_19cf4f57be324a25d5c9fd3b22757ed6_tuple, 2, const_str_plain_decorating_function ); Py_INCREF( const_str_plain_decorating_function );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_backports$functools_lru_cache( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_abdd0bb9fd6ddbb2e9ec57068a579a86;
static PyCodeObject *codeobj_fdd5f3589ca5b2bc1e3079b9cdadc8c9;
static PyCodeObject *codeobj_2d1eb9827e017d5e4cb00ade459d807e;
static PyCodeObject *codeobj_0ae53b796ba32c0021182da3a4b54d0a;
static PyCodeObject *codeobj_460545fc5486ad1384e387c58b147964;
static PyCodeObject *codeobj_7edcb33a332ef0d4ceed8d7bc168ecce;
static PyCodeObject *codeobj_99ebb81b961192105e469d7e8d3b6825;
static PyCodeObject *codeobj_6892888b2d7a1bddfad8f7c1ff5ae9d6;
static PyCodeObject *codeobj_a29bc699eb58817aac6764e9d6966c58;
static PyCodeObject *codeobj_46237443246e7717eb6c03ac91fabb68;
static PyCodeObject *codeobj_1d5208294352a0d83fcb49934cd55de2;
static PyCodeObject *codeobj_d5b96900e1efa2e9368debfb622d3b8c;
static PyCodeObject *codeobj_5d643a6baf23d639162f355fc941c658;
static PyCodeObject *codeobj_b20af204244c2c692ca00ead9b7c22cb;
static PyCodeObject *codeobj_f80a96d5c901ffcd75233976861ed1b5;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_6ddfac4d86d61acb3be24e988e5471d9;
    codeobj_abdd0bb9fd6ddbb2e9ec57068a579a86 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 19, const_tuple_415b0ace28bb0b1af6555ec99b2c9d65_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_fdd5f3589ca5b2bc1e3079b9cdadc8c9 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 49, const_tuple_aa9f5d7da95764ee94071e337e1f4743_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_2d1eb9827e017d5e4cb00ade459d807e = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 51, const_tuple_01b243b29c4806bd65da5a9d551cf769_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_0ae53b796ba32c0021182da3a4b54d0a = MAKE_CODEOBJ( module_filename_obj, const_str_digest_ccbbd0bd93bb7289b0829b583085d4c3, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_460545fc5486ad1384e387c58b147964 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___hash__, 33, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_7edcb33a332ef0d4ceed8d7bc168ecce = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 29, const_tuple_str_plain_self_str_plain_tup_str_plain_hash_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_99ebb81b961192105e469d7e8d3b6825 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__make_key, 37, const_tuple_1df92ab4d1867f394903ab4477fd7aa0_tuple, 9, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_6892888b2d7a1bddfad8f7c1ff5ae9d6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cache_clear, 171, const_tuple_ee4c259a2f252e710f8b4c1463a682e9_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_a29bc699eb58817aac6764e9d6966c58 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cache_info, 166, const_tuple_0493fedebc143499424e585bbeb6bd12_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_46237443246e7717eb6c03ac91fabb68 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_decorating_function, 82, const_tuple_6d483db607778d8a635aadb202340fdd_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_1d5208294352a0d83fcb49934cd55de2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_lru_cache, 57, const_tuple_19cf4f57be324a25d5c9fd3b22757ed6_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_d5b96900e1efa2e9368debfb622d3b8c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_update_wrapper, 10, const_tuple_667cd22d9354b5327e562bf0072569bf_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_5d643a6baf23d639162f355fc941c658 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wrapper, 98, const_tuple_ee1e19f9f6a8e67c4e6cf7796c019fa4_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_b20af204244c2c692ca00ead9b7c22cb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wrapper, 106, const_tuple_a4149db07906f0fac92c7c110245b931_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_f80a96d5c901ffcd75233976861ed1b5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wrapper, 120, const_tuple_29fa639cbcf0369ed68ec85b47911ef8_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_ABSOLUTE_IMPORT );
}

// The module function declarations.
static PyObject *backports$functools_lru_cache$$$function_1_update_wrapper$$$genexpr_1_genexpr_maker( void );


static PyObject *backports$functools_lru_cache$$$function_4__make_key$$$genexpr_1_genexpr_maker( void );


static PyObject *backports$functools_lru_cache$$$function_4__make_key$$$genexpr_2_genexpr_maker( void );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_backports$functools_lru_cache$$$function_1_update_wrapper( PyObject *defaults );


static PyObject *MAKE_FUNCTION_backports$functools_lru_cache$$$function_2___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_backports$functools_lru_cache$$$function_3___hash__(  );


static PyObject *MAKE_FUNCTION_backports$functools_lru_cache$$$function_4__make_key( PyObject *defaults );


static PyObject *MAKE_FUNCTION_backports$functools_lru_cache$$$function_5_lru_cache( PyObject *defaults );


static PyObject *MAKE_FUNCTION_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function(  );


static PyObject *MAKE_FUNCTION_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_1_wrapper(  );


static PyObject *MAKE_FUNCTION_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_2_wrapper(  );


static PyObject *MAKE_FUNCTION_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_3_wrapper(  );


static PyObject *MAKE_FUNCTION_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_4_cache_info(  );


static PyObject *MAKE_FUNCTION_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_5_cache_clear(  );


// The module function definitions.
static PyObject *impl_backports$functools_lru_cache$$$function_1_update_wrapper( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_wrapper = python_pars[ 0 ];
    struct Nuitka_CellObject *par_wrapped = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *par_assigned = python_pars[ 2 ];
    PyObject *par_updated = python_pars[ 3 ];
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_d5b96900e1efa2e9368debfb622d3b8c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_d5b96900e1efa2e9368debfb622d3b8c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d5b96900e1efa2e9368debfb622d3b8c, codeobj_d5b96900e1efa2e9368debfb622d3b8c, module_backports$functools_lru_cache, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d5b96900e1efa2e9368debfb622d3b8c = cache_frame_d5b96900e1efa2e9368debfb622d3b8c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d5b96900e1efa2e9368debfb622d3b8c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d5b96900e1efa2e9368debfb622d3b8c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_arg_1;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_assigned );
            tmp_iter_arg_1 = par_assigned;
            tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 19;
                type_description_1 = "ocoo";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_2;
        }
        // Tried code:
        tmp_tuple_arg_1 = backports$functools_lru_cache$$$function_1_update_wrapper$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_tuple_arg_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );
        ((struct Nuitka_GeneratorObject *)tmp_tuple_arg_1)->m_closure[1] = par_wrapped;
        Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_tuple_arg_1)->m_closure[1] );


        goto try_return_handler_2;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_1_update_wrapper );
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
        NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_1_update_wrapper );
        return NULL;
        outline_result_1:;
        tmp_assign_source_1 = PySequence_Tuple( tmp_tuple_arg_1 );
        Py_DECREF( tmp_tuple_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;
            type_description_1 = "ocoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_assigned;
            assert( old != NULL );
            par_assigned = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain_functools );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_functools );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "functools" );
            exception_tb = NULL;

            exception_lineno = 20;
            type_description_1 = "ocoo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_wrapper );
        tmp_args_element_name_1 = par_wrapper;
        CHECK_OBJECT( PyCell_GET( par_wrapped ) );
        tmp_args_element_name_2 = PyCell_GET( par_wrapped );
        CHECK_OBJECT( par_assigned );
        tmp_args_element_name_3 = par_assigned;
        CHECK_OBJECT( par_updated );
        tmp_args_element_name_4 = par_updated;
        frame_d5b96900e1efa2e9368debfb622d3b8c->m_frame.f_lineno = 20;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS4( tmp_called_instance_1, const_str_plain_update_wrapper, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;
            type_description_1 = "ocoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_wrapper;
            assert( old != NULL );
            par_wrapper = tmp_assign_source_3;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( PyCell_GET( par_wrapped ) );
        tmp_assattr_name_1 = PyCell_GET( par_wrapped );
        CHECK_OBJECT( par_wrapper );
        tmp_assattr_target_1 = par_wrapper;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___wrapped__, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;
            type_description_1 = "ocoo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d5b96900e1efa2e9368debfb622d3b8c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d5b96900e1efa2e9368debfb622d3b8c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d5b96900e1efa2e9368debfb622d3b8c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d5b96900e1efa2e9368debfb622d3b8c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d5b96900e1efa2e9368debfb622d3b8c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d5b96900e1efa2e9368debfb622d3b8c,
        type_description_1,
        par_wrapper,
        par_wrapped,
        par_assigned,
        par_updated
    );


    // Release cached frame.
    if ( frame_d5b96900e1efa2e9368debfb622d3b8c == cache_frame_d5b96900e1efa2e9368debfb622d3b8c )
    {
        Py_DECREF( frame_d5b96900e1efa2e9368debfb622d3b8c );
    }
    cache_frame_d5b96900e1efa2e9368debfb622d3b8c = NULL;

    assertFrameObject( frame_d5b96900e1efa2e9368debfb622d3b8c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_wrapper );
    tmp_return_value = par_wrapper;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_1_update_wrapper );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_wrapped );
    Py_DECREF( par_wrapped );
    par_wrapped = NULL;

    CHECK_OBJECT( (PyObject *)par_assigned );
    Py_DECREF( par_assigned );
    par_assigned = NULL;

    CHECK_OBJECT( (PyObject *)par_updated );
    Py_DECREF( par_updated );
    par_updated = NULL;

    CHECK_OBJECT( (PyObject *)par_wrapper );
    Py_DECREF( par_wrapper );
    par_wrapper = NULL;

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

    CHECK_OBJECT( (PyObject *)par_wrapped );
    Py_DECREF( par_wrapped );
    par_wrapped = NULL;

    CHECK_OBJECT( (PyObject *)par_assigned );
    Py_DECREF( par_assigned );
    par_assigned = NULL;

    CHECK_OBJECT( (PyObject *)par_updated );
    Py_DECREF( par_updated );
    par_updated = NULL;

    CHECK_OBJECT( (PyObject *)par_wrapper );
    Py_DECREF( par_wrapper );
    par_wrapper = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_1_update_wrapper );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



struct backports$functools_lru_cache$$$function_1_update_wrapper$$$genexpr_1_genexpr_locals {
    PyObject *var_attr;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *backports$functools_lru_cache$$$function_1_update_wrapper$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct backports$functools_lru_cache$$$function_1_update_wrapper$$$genexpr_1_genexpr_locals *generator_heap = (struct backports$functools_lru_cache$$$function_1_update_wrapper$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_attr = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_abdd0bb9fd6ddbb2e9ec57068a579a86, module_backports$functools_lru_cache, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_m_frame;

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
    {
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
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( PyCell_GET( generator->m_closure[0] ) );
        tmp_next_source_1 = PyCell_GET( generator->m_closure[0] );
        tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "Nco";
                generator_heap->exception_lineno = 19;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( generator_heap->tmp_iter_value_0 );
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_attr;
            generator_heap->var_attr = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_attr );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_name_1;
        if ( PyCell_GET( generator->m_closure[1] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "wrapped" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 19;
            generator_heap->type_description_1 = "Nco";
            goto try_except_handler_2;
        }

        tmp_source_name_1 = PyCell_GET( generator->m_closure[1] );
        CHECK_OBJECT( generator_heap->var_attr );
        tmp_attribute_name_1 = generator_heap->var_attr;
        generator_heap->tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_1, tmp_attribute_name_1 );
        if ( generator_heap->tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 19;
            generator_heap->type_description_1 = "Nco";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = ( generator_heap->tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_expression_name_1;
            NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
            CHECK_OBJECT( generator_heap->var_attr );
            tmp_expression_name_1 = generator_heap->var_attr;
            Py_INCREF( tmp_expression_name_1 );
            Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_source_name_1, sizeof(PyObject *), &tmp_attribute_name_1, sizeof(PyObject *), NULL );
            generator->m_yield_return_index = 1;
            return tmp_expression_name_1;
            yield_return_1:
            Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(nuitka_bool), &tmp_source_name_1, sizeof(PyObject *), &tmp_attribute_name_1, sizeof(PyObject *), NULL );
            if ( yield_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


                generator_heap->exception_lineno = 19;
                generator_heap->type_description_1 = "Nco";
                goto try_except_handler_2;
            }
            tmp_yield_result_1 = yield_return_value;
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 19;
        generator_heap->type_description_1 = "Nco";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

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
    if ( !EXCEPTION_MATCH_GENERATOR( generator_heap->exception_type ) )
    {
        if ( generator_heap->exception_tb == NULL )
        {
            generator_heap->exception_tb = MAKE_TRACEBACK( generator->m_frame, generator_heap->exception_lineno );
        }
        else if ( generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            generator_heap->exception_tb = ADD_TRACEBACK( generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator->m_closure[1],
            generator_heap->var_attr
        );


        // Release cached frame.
        if ( generator->m_frame == cache_m_frame )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_m_frame = NULL;

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
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_attr );
    generator_heap->var_attr = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF( generator_heap->var_attr );
    generator_heap->var_attr = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *backports$functools_lru_cache$$$function_1_update_wrapper$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        backports$functools_lru_cache$$$function_1_update_wrapper$$$genexpr_1_genexpr_context,
        module_backports$functools_lru_cache,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_abdd0bb9fd6ddbb2e9ec57068a579a86,
        2,
        sizeof(struct backports$functools_lru_cache$$$function_1_update_wrapper$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_backports$functools_lru_cache$$$function_2___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_tup = python_pars[ 1 ];
    PyObject *par_hash = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_7edcb33a332ef0d4ceed8d7bc168ecce;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7edcb33a332ef0d4ceed8d7bc168ecce = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7edcb33a332ef0d4ceed8d7bc168ecce, codeobj_7edcb33a332ef0d4ceed8d7bc168ecce, module_backports$functools_lru_cache, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7edcb33a332ef0d4ceed8d7bc168ecce = cache_frame_7edcb33a332ef0d4ceed8d7bc168ecce;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7edcb33a332ef0d4ceed8d7bc168ecce );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7edcb33a332ef0d4ceed8d7bc168ecce ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_sliceass_value_1;
        PyObject *tmp_sliceass_target_1;
        Py_ssize_t tmp_sliceassslicedel_index_lower_1;
        Py_ssize_t tmp_sliceass_index_upper_1;
        CHECK_OBJECT( par_tup );
        tmp_sliceass_value_1 = par_tup;
        CHECK_OBJECT( par_self );
        tmp_sliceass_target_1 = par_self;
        tmp_sliceassslicedel_index_lower_1 = 0;
        tmp_sliceass_index_upper_1 = PY_SSIZE_T_MAX;
        tmp_result = SET_INDEX_SLICE( tmp_sliceass_target_1, tmp_sliceassslicedel_index_lower_1, tmp_sliceass_index_upper_1, tmp_sliceass_value_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_hash );
        tmp_called_name_1 = par_hash;
        CHECK_OBJECT( par_tup );
        tmp_args_element_name_1 = par_tup;
        frame_7edcb33a332ef0d4ceed8d7bc168ecce->m_frame.f_lineno = 31;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assattr_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_hashvalue, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7edcb33a332ef0d4ceed8d7bc168ecce );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7edcb33a332ef0d4ceed8d7bc168ecce );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7edcb33a332ef0d4ceed8d7bc168ecce, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7edcb33a332ef0d4ceed8d7bc168ecce->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7edcb33a332ef0d4ceed8d7bc168ecce, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7edcb33a332ef0d4ceed8d7bc168ecce,
        type_description_1,
        par_self,
        par_tup,
        par_hash
    );


    // Release cached frame.
    if ( frame_7edcb33a332ef0d4ceed8d7bc168ecce == cache_frame_7edcb33a332ef0d4ceed8d7bc168ecce )
    {
        Py_DECREF( frame_7edcb33a332ef0d4ceed8d7bc168ecce );
    }
    cache_frame_7edcb33a332ef0d4ceed8d7bc168ecce = NULL;

    assertFrameObject( frame_7edcb33a332ef0d4ceed8d7bc168ecce );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_2___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_tup );
    Py_DECREF( par_tup );
    par_tup = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_hash );
    Py_DECREF( par_hash );
    par_hash = NULL;

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

    CHECK_OBJECT( (PyObject *)par_tup );
    Py_DECREF( par_tup );
    par_tup = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_hash );
    Py_DECREF( par_hash );
    par_hash = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_2___init__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_backports$functools_lru_cache$$$function_3___hash__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_460545fc5486ad1384e387c58b147964;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_460545fc5486ad1384e387c58b147964 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_460545fc5486ad1384e387c58b147964, codeobj_460545fc5486ad1384e387c58b147964, module_backports$functools_lru_cache, sizeof(void *) );
    frame_460545fc5486ad1384e387c58b147964 = cache_frame_460545fc5486ad1384e387c58b147964;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_460545fc5486ad1384e387c58b147964 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_460545fc5486ad1384e387c58b147964 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_hashvalue );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 34;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_460545fc5486ad1384e387c58b147964 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_460545fc5486ad1384e387c58b147964 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_460545fc5486ad1384e387c58b147964 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_460545fc5486ad1384e387c58b147964, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_460545fc5486ad1384e387c58b147964->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_460545fc5486ad1384e387c58b147964, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_460545fc5486ad1384e387c58b147964,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_460545fc5486ad1384e387c58b147964 == cache_frame_460545fc5486ad1384e387c58b147964 )
    {
        Py_DECREF( frame_460545fc5486ad1384e387c58b147964 );
    }
    cache_frame_460545fc5486ad1384e387c58b147964 = NULL;

    assertFrameObject( frame_460545fc5486ad1384e387c58b147964 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_3___hash__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_3___hash__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_backports$functools_lru_cache$$$function_4__make_key( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *par_kwds = python_pars[ 1 ];
    PyObject *par_typed = python_pars[ 2 ];
    PyObject *par_kwd_mark = python_pars[ 3 ];
    PyObject *par_fasttypes = python_pars[ 4 ];
    PyObject *par_sorted = python_pars[ 5 ];
    PyObject *par_tuple = python_pars[ 6 ];
    struct Nuitka_CellObject *par_type = PyCell_NEW1( python_pars[ 7 ] );
    PyObject *par_len = python_pars[ 8 ];
    PyObject *var_sorted_items = NULL;
    PyObject *var_item = NULL;
    PyObject *var_key = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_genexpr_2__$0 = NULL;
    struct Nuitka_FrameObject *frame_99ebb81b961192105e469d7e8d3b6825;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_99ebb81b961192105e469d7e8d3b6825 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( par_args );
        tmp_assign_source_1 = par_args;
        assert( var_key == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_key = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_99ebb81b961192105e469d7e8d3b6825, codeobj_99ebb81b961192105e469d7e8d3b6825, module_backports$functools_lru_cache, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_99ebb81b961192105e469d7e8d3b6825 = cache_frame_99ebb81b961192105e469d7e8d3b6825;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_99ebb81b961192105e469d7e8d3b6825 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_99ebb81b961192105e469d7e8d3b6825 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_kwds );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_kwds );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 43;
            type_description_1 = "ooooooocoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_sorted );
            tmp_called_name_1 = par_sorted;
            CHECK_OBJECT( par_kwds );
            tmp_called_instance_1 = par_kwds;
            frame_99ebb81b961192105e469d7e8d3b6825->m_frame.f_lineno = 44;
            tmp_args_element_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 44;
                type_description_1 = "ooooooocoooo";
                goto frame_exception_exit_1;
            }
            frame_99ebb81b961192105e469d7e8d3b6825->m_frame.f_lineno = 44;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 44;
                type_description_1 = "ooooooocoooo";
                goto frame_exception_exit_1;
            }
            assert( var_sorted_items == NULL );
            var_sorted_items = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( var_key );
            tmp_left_name_1 = var_key;
            CHECK_OBJECT( par_kwd_mark );
            tmp_right_name_1 = par_kwd_mark;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 45;
                type_description_1 = "ooooooocoooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_3 = tmp_left_name_1;
            var_key = tmp_assign_source_3;

        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( var_sorted_items );
            tmp_iter_arg_1 = var_sorted_items;
            tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;
                type_description_1 = "ooooooocoooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_for_loop_1__for_iterator == NULL );
            tmp_for_loop_1__for_iterator = tmp_assign_source_4;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT( tmp_for_loop_1__for_iterator );
            tmp_next_source_1 = tmp_for_loop_1__for_iterator;
            tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_5 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooocoooo";
                    exception_lineno = 46;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_for_loop_1__iter_value;
                tmp_for_loop_1__iter_value = tmp_assign_source_5;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_6;
            CHECK_OBJECT( tmp_for_loop_1__iter_value );
            tmp_assign_source_6 = tmp_for_loop_1__iter_value;
            {
                PyObject *old = var_item;
                var_item = tmp_assign_source_6;
                Py_INCREF( var_item );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            CHECK_OBJECT( var_key );
            tmp_left_name_2 = var_key;
            CHECK_OBJECT( var_item );
            tmp_right_name_2 = var_item;
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 47;
                type_description_1 = "ooooooocoooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_7 = tmp_left_name_2;
            var_key = tmp_assign_source_7;

        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;
            type_description_1 = "ooooooocoooo";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
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

        Py_XDECREF( tmp_for_loop_1__iter_value );
        tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
        Py_DECREF( tmp_for_loop_1__for_iterator );
        tmp_for_loop_1__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        try_end_1:;
        Py_XDECREF( tmp_for_loop_1__iter_value );
        tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
        Py_DECREF( tmp_for_loop_1__for_iterator );
        tmp_for_loop_1__for_iterator = NULL;

        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_typed );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_typed );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "ooooooocoooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_left_name_3;
            PyObject *tmp_right_name_3;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_2;
            if ( var_key == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "key" );
                exception_tb = NULL;

                exception_lineno = 49;
                type_description_1 = "ooooooocoooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_3 = var_key;
            CHECK_OBJECT( par_tuple );
            tmp_called_name_2 = par_tuple;
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_iter_arg_2;
                CHECK_OBJECT( par_args );
                tmp_iter_arg_2 = par_args;
                tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_2 );
                if ( tmp_assign_source_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 49;
                    type_description_1 = "ooooooocoooo";
                    goto frame_exception_exit_1;
                }
                assert( tmp_genexpr_1__$0 == NULL );
                tmp_genexpr_1__$0 = tmp_assign_source_9;
            }
            // Tried code:
            tmp_args_element_name_2 = backports$functools_lru_cache$$$function_4__make_key$$$genexpr_1_genexpr_maker();

            ((struct Nuitka_GeneratorObject *)tmp_args_element_name_2)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );
            ((struct Nuitka_GeneratorObject *)tmp_args_element_name_2)->m_closure[1] = par_type;
            Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_args_element_name_2)->m_closure[1] );


            goto try_return_handler_3;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_4__make_key );
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
            NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_4__make_key );
            return NULL;
            outline_result_1:;
            frame_99ebb81b961192105e469d7e8d3b6825->m_frame.f_lineno = 49;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_right_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_1 = "ooooooocoooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
            Py_DECREF( tmp_right_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_1 = "ooooooocoooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_8 = tmp_left_name_3;
            var_key = tmp_assign_source_8;

        }
        {
            nuitka_bool tmp_condition_result_3;
            int tmp_truth_name_3;
            CHECK_OBJECT( par_kwds );
            tmp_truth_name_3 = CHECK_IF_TRUE( par_kwds );
            if ( tmp_truth_name_3 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 50;
                type_description_1 = "ooooooocoooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_3;
            }
            else
            {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_assign_source_10;
                PyObject *tmp_left_name_4;
                PyObject *tmp_right_name_4;
                PyObject *tmp_called_name_3;
                PyObject *tmp_args_element_name_3;
                CHECK_OBJECT( var_key );
                tmp_left_name_4 = var_key;
                CHECK_OBJECT( par_tuple );
                tmp_called_name_3 = par_tuple;
                {
                    PyObject *tmp_assign_source_11;
                    PyObject *tmp_iter_arg_3;
                    if ( var_sorted_items == NULL )
                    {

                        exception_type = PyExc_UnboundLocalError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "sorted_items" );
                        exception_tb = NULL;

                        exception_lineno = 51;
                        type_description_1 = "ooooooocoooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_iter_arg_3 = var_sorted_items;
                    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_3 );
                    if ( tmp_assign_source_11 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 51;
                        type_description_1 = "ooooooocoooo";
                        goto frame_exception_exit_1;
                    }
                    assert( tmp_genexpr_2__$0 == NULL );
                    tmp_genexpr_2__$0 = tmp_assign_source_11;
                }
                // Tried code:
                tmp_args_element_name_3 = backports$functools_lru_cache$$$function_4__make_key$$$genexpr_2_genexpr_maker();

                ((struct Nuitka_GeneratorObject *)tmp_args_element_name_3)->m_closure[0] = PyCell_NEW0( tmp_genexpr_2__$0 );
                ((struct Nuitka_GeneratorObject *)tmp_args_element_name_3)->m_closure[1] = par_type;
                Py_INCREF( ((struct Nuitka_GeneratorObject *)tmp_args_element_name_3)->m_closure[1] );


                goto try_return_handler_4;
                // tried codes exits in all cases
                NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_4__make_key );
                return NULL;
                // Return handler code:
                try_return_handler_4:;
                CHECK_OBJECT( (PyObject *)tmp_genexpr_2__$0 );
                Py_DECREF( tmp_genexpr_2__$0 );
                tmp_genexpr_2__$0 = NULL;

                goto outline_result_2;
                // End of try:
                CHECK_OBJECT( (PyObject *)tmp_genexpr_2__$0 );
                Py_DECREF( tmp_genexpr_2__$0 );
                tmp_genexpr_2__$0 = NULL;

                // Return statement must have exited already.
                NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_4__make_key );
                return NULL;
                outline_result_2:;
                frame_99ebb81b961192105e469d7e8d3b6825->m_frame.f_lineno = 51;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_args_element_name_3 );
                if ( tmp_right_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 51;
                    type_description_1 = "ooooooocoooo";
                    goto frame_exception_exit_1;
                }
                tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_4, tmp_right_name_4 );
                Py_DECREF( tmp_right_name_4 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 51;
                    type_description_1 = "ooooooocoooo";
                    goto frame_exception_exit_1;
                }
                tmp_assign_source_10 = tmp_left_name_4;
                var_key = tmp_assign_source_10;

            }
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_4;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_len );
            tmp_called_name_4 = par_len;
            if ( var_key == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "key" );
                exception_tb = NULL;

                exception_lineno = 52;
                type_description_1 = "ooooooocoooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_4 = var_key;
            frame_99ebb81b961192105e469d7e8d3b6825->m_frame.f_lineno = 52;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            if ( tmp_compexpr_left_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;
                type_description_1 = "ooooooocoooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_1 = const_int_pos_1;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            Py_DECREF( tmp_compexpr_left_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;
                type_description_1 = "ooooooocoooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
            if ( tmp_and_left_truth_1 == 1 )
            {
                goto and_right_1;
            }
            else
            {
                goto and_left_1;
            }
            and_right_1:;
            CHECK_OBJECT( PyCell_GET( par_type ) );
            tmp_called_name_5 = PyCell_GET( par_type );
            if ( var_key == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "key" );
                exception_tb = NULL;

                exception_lineno = 52;
                type_description_1 = "ooooooocoooo";
                goto frame_exception_exit_1;
            }

            tmp_subscribed_name_1 = var_key;
            tmp_subscript_name_1 = const_int_0;
            tmp_args_element_name_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;
                type_description_1 = "ooooooocoooo";
                goto frame_exception_exit_1;
            }
            frame_99ebb81b961192105e469d7e8d3b6825->m_frame.f_lineno = 52;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_compexpr_left_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;
                type_description_1 = "ooooooocoooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_fasttypes );
            tmp_compexpr_right_2 = par_fasttypes;
            tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 52;
                type_description_1 = "ooooooocoooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_4 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_condition_result_4 = tmp_and_left_value_1;
            and_end_1:;
            if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_4;
            }
            else
            {
                goto branch_no_4;
            }
            branch_yes_4:;
            {
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_subscript_name_2;
                if ( var_key == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "key" );
                    exception_tb = NULL;

                    exception_lineno = 53;
                    type_description_1 = "ooooooocoooo";
                    goto frame_exception_exit_1;
                }

                tmp_subscribed_name_2 = var_key;
                tmp_subscript_name_2 = const_int_0;
                tmp_return_value = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
                if ( tmp_return_value == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 53;
                    type_description_1 = "ooooooocoooo";
                    goto frame_exception_exit_1;
                }
                goto frame_return_exit_1;
            }
            branch_no_4:;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_6;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain__HashedSeq );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__HashedSeq );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_HashedSeq" );
            exception_tb = NULL;

            exception_lineno = 54;
            type_description_1 = "ooooooocoooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_1;
        if ( var_key == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "key" );
            exception_tb = NULL;

            exception_lineno = 54;
            type_description_1 = "ooooooocoooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_6 = var_key;
        frame_99ebb81b961192105e469d7e8d3b6825->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 54;
            type_description_1 = "ooooooocoooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_99ebb81b961192105e469d7e8d3b6825 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_99ebb81b961192105e469d7e8d3b6825 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_99ebb81b961192105e469d7e8d3b6825 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_99ebb81b961192105e469d7e8d3b6825, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_99ebb81b961192105e469d7e8d3b6825->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_99ebb81b961192105e469d7e8d3b6825, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_99ebb81b961192105e469d7e8d3b6825,
        type_description_1,
        par_args,
        par_kwds,
        par_typed,
        par_kwd_mark,
        par_fasttypes,
        par_sorted,
        par_tuple,
        par_type,
        par_len,
        var_sorted_items,
        var_item,
        var_key
    );


    // Release cached frame.
    if ( frame_99ebb81b961192105e469d7e8d3b6825 == cache_frame_99ebb81b961192105e469d7e8d3b6825 )
    {
        Py_DECREF( frame_99ebb81b961192105e469d7e8d3b6825 );
    }
    cache_frame_99ebb81b961192105e469d7e8d3b6825 = NULL;

    assertFrameObject( frame_99ebb81b961192105e469d7e8d3b6825 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_4__make_key );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fasttypes );
    Py_DECREF( par_fasttypes );
    par_fasttypes = NULL;

    CHECK_OBJECT( (PyObject *)par_kwds );
    Py_DECREF( par_kwds );
    par_kwds = NULL;

    CHECK_OBJECT( (PyObject *)par_tuple );
    Py_DECREF( par_tuple );
    par_tuple = NULL;

    CHECK_OBJECT( (PyObject *)par_typed );
    Py_DECREF( par_typed );
    par_typed = NULL;

    Py_XDECREF( var_sorted_items );
    var_sorted_items = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwd_mark );
    Py_DECREF( par_kwd_mark );
    par_kwd_mark = NULL;

    Py_XDECREF( var_item );
    var_item = NULL;

    CHECK_OBJECT( (PyObject *)par_len );
    Py_DECREF( par_len );
    par_len = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    CHECK_OBJECT( (PyObject *)par_sorted );
    Py_DECREF( par_sorted );
    par_sorted = NULL;

    CHECK_OBJECT( (PyObject *)par_type );
    Py_DECREF( par_type );
    par_type = NULL;

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

    CHECK_OBJECT( (PyObject *)par_fasttypes );
    Py_DECREF( par_fasttypes );
    par_fasttypes = NULL;

    CHECK_OBJECT( (PyObject *)par_kwds );
    Py_DECREF( par_kwds );
    par_kwds = NULL;

    CHECK_OBJECT( (PyObject *)par_tuple );
    Py_DECREF( par_tuple );
    par_tuple = NULL;

    CHECK_OBJECT( (PyObject *)par_typed );
    Py_DECREF( par_typed );
    par_typed = NULL;

    Py_XDECREF( var_sorted_items );
    var_sorted_items = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwd_mark );
    Py_DECREF( par_kwd_mark );
    par_kwd_mark = NULL;

    Py_XDECREF( var_item );
    var_item = NULL;

    CHECK_OBJECT( (PyObject *)par_len );
    Py_DECREF( par_len );
    par_len = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    CHECK_OBJECT( (PyObject *)par_sorted );
    Py_DECREF( par_sorted );
    par_sorted = NULL;

    CHECK_OBJECT( (PyObject *)par_type );
    Py_DECREF( par_type );
    par_type = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_4__make_key );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



struct backports$functools_lru_cache$$$function_4__make_key$$$genexpr_1_genexpr_locals {
    PyObject *var_v;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *backports$functools_lru_cache$$$function_4__make_key$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct backports$functools_lru_cache$$$function_4__make_key$$$genexpr_1_genexpr_locals *generator_heap = (struct backports$functools_lru_cache$$$function_4__make_key$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_v = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_fdd5f3589ca5b2bc1e3079b9cdadc8c9, module_backports$functools_lru_cache, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_m_frame;

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
    {
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
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( PyCell_GET( generator->m_closure[0] ) );
        tmp_next_source_1 = PyCell_GET( generator->m_closure[0] );
        tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "Nco";
                generator_heap->exception_lineno = 49;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( generator_heap->tmp_iter_value_0 );
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_v;
            generator_heap->var_v = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_v );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if ( PyCell_GET( generator->m_closure[1] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "type" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 49;
            generator_heap->type_description_1 = "Nco";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = PyCell_GET( generator->m_closure[1] );
        CHECK_OBJECT( generator_heap->var_v );
        tmp_args_element_name_1 = generator_heap->var_v;
        generator->m_frame->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 49;
            generator_heap->type_description_1 = "Nco";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 49;
            generator_heap->type_description_1 = "Nco";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 49;
        generator_heap->type_description_1 = "Nco";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

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
    if ( !EXCEPTION_MATCH_GENERATOR( generator_heap->exception_type ) )
    {
        if ( generator_heap->exception_tb == NULL )
        {
            generator_heap->exception_tb = MAKE_TRACEBACK( generator->m_frame, generator_heap->exception_lineno );
        }
        else if ( generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            generator_heap->exception_tb = ADD_TRACEBACK( generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator->m_closure[1],
            generator_heap->var_v
        );


        // Release cached frame.
        if ( generator->m_frame == cache_m_frame )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_m_frame = NULL;

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
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_v );
    generator_heap->var_v = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF( generator_heap->var_v );
    generator_heap->var_v = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *backports$functools_lru_cache$$$function_4__make_key$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        backports$functools_lru_cache$$$function_4__make_key$$$genexpr_1_genexpr_context,
        module_backports$functools_lru_cache,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_fdd5f3589ca5b2bc1e3079b9cdadc8c9,
        2,
        sizeof(struct backports$functools_lru_cache$$$function_4__make_key$$$genexpr_1_genexpr_locals)
    );
}



struct backports$functools_lru_cache$$$function_4__make_key$$$genexpr_2_genexpr_locals {
    PyObject *var_k;
    PyObject *var_v;
    PyObject *tmp_iter_value_0;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
};

static PyObject *backports$functools_lru_cache$$$function_4__make_key$$$genexpr_2_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct backports$functools_lru_cache$$$function_4__make_key$$$genexpr_2_genexpr_locals *generator_heap = (struct backports$functools_lru_cache$$$function_4__make_key$$$genexpr_2_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_k = NULL;
    generator_heap->var_v = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_2d1eb9827e017d5e4cb00ade459d807e, module_backports$functools_lru_cache, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    generator->m_frame = cache_m_frame;

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
    {
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
    }

#endif

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT( PyCell_GET( generator->m_closure[0] ) );
        tmp_next_source_1 = PyCell_GET( generator->m_closure[0] );
        tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
                generator_heap->type_description_1 = "Noco";
                generator_heap->exception_lineno = 51;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT( generator_heap->tmp_iter_value_0 );
        tmp_iter_arg_1 = generator_heap->tmp_iter_value_0;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 51;
            generator_heap->type_description_1 = "Noco";
            goto try_except_handler_3;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
            generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            }


            generator_heap->type_description_1 = "Noco";
            generator_heap->exception_lineno = 51;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
            generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1 );
        if ( tmp_assign_source_4 == NULL )
        {
            if ( !ERROR_OCCURRED() )
            {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF( generator_heap->exception_type );
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            }
            else
            {
                FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            }


            generator_heap->type_description_1 = "Noco";
            generator_heap->exception_lineno = 51;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__source_iter );
        tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

        generator_heap->tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

        if (likely( generator_heap->tmp_iterator_attempt == NULL ))
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
                    FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );

                    generator_heap->type_description_1 = "Noco";
                    generator_heap->exception_lineno = 51;
                    goto try_except_handler_4;
                }
            }
        }
        else
        {
            Py_DECREF( generator_heap->tmp_iterator_attempt );

            // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
            PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );

            generator_heap->type_description_1 = "Noco";
            generator_heap->exception_lineno = 51;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)generator_heap->tmp_tuple_unpack_1__source_iter );
    Py_DECREF( generator_heap->tmp_tuple_unpack_1__source_iter );
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_1 );
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_2 );
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)generator_heap->tmp_tuple_unpack_1__source_iter );
    Py_DECREF( generator_heap->tmp_tuple_unpack_1__source_iter );
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_5 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var_k;
            generator_heap->var_k = tmp_assign_source_5;
            Py_INCREF( generator_heap->var_k );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_1 );
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( generator_heap->tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var_v;
            generator_heap->var_v = tmp_assign_source_6;
            Py_INCREF( generator_heap->var_v );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( generator_heap->tmp_tuple_unpack_1__element_2 );
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if ( PyCell_GET( generator->m_closure[1] ) == NULL )
        {

            generator_heap->exception_type = PyExc_NameError;
            Py_INCREF( generator_heap->exception_type );
            generator_heap->exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "type" );
            generator_heap->exception_tb = NULL;

            generator_heap->exception_lineno = 51;
            generator_heap->type_description_1 = "Noco";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = PyCell_GET( generator->m_closure[1] );
        CHECK_OBJECT( generator_heap->var_v );
        tmp_args_element_name_1 = generator_heap->var_v;
        generator->m_frame->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_expression_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_expression_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 51;
            generator_heap->type_description_1 = "Noco";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_called_name_1, sizeof(PyObject *), &tmp_args_element_name_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 51;
            generator_heap->type_description_1 = "Noco";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 51;
        generator_heap->type_description_1 = "Noco";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

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
    if ( !EXCEPTION_MATCH_GENERATOR( generator_heap->exception_type ) )
    {
        if ( generator_heap->exception_tb == NULL )
        {
            generator_heap->exception_tb = MAKE_TRACEBACK( generator->m_frame, generator_heap->exception_lineno );
        }
        else if ( generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame )
        {
            generator_heap->exception_tb = ADD_TRACEBACK( generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno );
        }

        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_k,
            generator->m_closure[1],
            generator_heap->var_v
        );


        // Release cached frame.
        if ( generator->m_frame == cache_m_frame )
        {
            Py_DECREF( generator->m_frame );
        }
        cache_m_frame = NULL;

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
    goto try_end_4;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF( generator_heap->var_k );
    generator_heap->var_k = NULL;

    Py_XDECREF( generator_heap->var_v );
    generator_heap->var_v = NULL;

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    Py_XDECREF( generator_heap->tmp_iter_value_0 );
    generator_heap->tmp_iter_value_0 = NULL;

    Py_XDECREF( generator_heap->var_k );
    generator_heap->var_k = NULL;

    Py_XDECREF( generator_heap->var_v );
    generator_heap->var_v = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *backports$functools_lru_cache$$$function_4__make_key$$$genexpr_2_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        backports$functools_lru_cache$$$function_4__make_key$$$genexpr_2_genexpr_context,
        module_backports$functools_lru_cache,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_2d1eb9827e017d5e4cb00ade459d807e,
        2,
        sizeof(struct backports$functools_lru_cache$$$function_4__make_key$$$genexpr_2_genexpr_locals)
    );
}


static PyObject *impl_backports$functools_lru_cache$$$function_5_lru_cache( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_maxsize = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *par_typed = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *var_decorating_function = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_FUNCTION_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] = par_maxsize;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[1] = par_typed;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_1)->m_closure[1] );


        assert( var_decorating_function == NULL );
        var_decorating_function = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT( var_decorating_function );
    tmp_return_value = var_decorating_function;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_5_lru_cache );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_decorating_function );
    Py_DECREF( var_decorating_function );
    var_decorating_function = NULL;

    CHECK_OBJECT( (PyObject *)par_typed );
    Py_DECREF( par_typed );
    par_typed = NULL;

    CHECK_OBJECT( (PyObject *)par_maxsize );
    Py_DECREF( par_maxsize );
    par_maxsize = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_5_lru_cache );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_user_function = PyCell_NEW1( python_pars[ 0 ] );
    struct Nuitka_CellObject *var_HITS = PyCell_EMPTY();
    PyObject *var_cache_info = NULL;
    struct Nuitka_CellObject *var_stats = PyCell_EMPTY();
    struct Nuitka_CellObject *var__len = PyCell_EMPTY();
    struct Nuitka_CellObject *var_lock = PyCell_EMPTY();
    struct Nuitka_CellObject *var_cache = PyCell_EMPTY();
    PyObject *var_wrapper = NULL;
    struct Nuitka_CellObject *var_NEXT = PyCell_EMPTY();
    struct Nuitka_CellObject *var_nonlocal_root = PyCell_EMPTY();
    struct Nuitka_CellObject *var_MISSES = PyCell_EMPTY();
    struct Nuitka_CellObject *var_RESULT = PyCell_EMPTY();
    struct Nuitka_CellObject *var_KEY = PyCell_EMPTY();
    PyObject *var_cache_clear = NULL;
    struct Nuitka_CellObject *var_make_key = PyCell_EMPTY();
    struct Nuitka_CellObject *var_PREV = PyCell_EMPTY();
    struct Nuitka_CellObject *var_root = PyCell_EMPTY();
    struct Nuitka_CellObject *var_cache_get = PyCell_EMPTY();
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__element_4 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_46237443246e7717eb6c03ac91fabb68;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_46237443246e7717eb6c03ac91fabb68 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        assert( PyCell_GET( var_cache ) == NULL );
        PyCell_SET( var_cache, tmp_assign_source_1 );

    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = LIST_COPY( const_list_int_0_int_0_list );
        assert( PyCell_GET( var_stats ) == NULL );
        PyCell_SET( var_stats, tmp_assign_source_2 );

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = const_tuple_int_0_int_pos_1_tuple;
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
        assert( !(tmp_assign_source_3 == NULL) );
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_46237443246e7717eb6c03ac91fabb68, codeobj_46237443246e7717eb6c03ac91fabb68, module_backports$functools_lru_cache, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_46237443246e7717eb6c03ac91fabb68 = cache_frame_46237443246e7717eb6c03ac91fabb68;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_46237443246e7717eb6c03ac91fabb68 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_46237443246e7717eb6c03ac91fabb68 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0 );
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


            type_description_1 = "ccocccccocccccocccc";
            exception_lineno = 86;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


            type_description_1 = "ccocccccocccccocccc";
            exception_lineno = 86;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert( PyCell_GET( var_HITS ) == NULL );
        Py_INCREF( tmp_assign_source_6 );
        PyCell_SET( var_HITS, tmp_assign_source_6 );

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert( PyCell_GET( var_MISSES ) == NULL );
        Py_INCREF( tmp_assign_source_7 );
        PyCell_SET( var_MISSES, tmp_assign_source_7 );

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain__make_key );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__make_key );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_make_key" );
            exception_tb = NULL;

            exception_lineno = 87;
            type_description_1 = "ccocccccocccccocccc";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_8 = tmp_mvar_value_1;
        assert( PyCell_GET( var_make_key ) == NULL );
        Py_INCREF( tmp_assign_source_8 );
        PyCell_SET( var_make_key, tmp_assign_source_8 );

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( PyCell_GET( var_cache ) );
        tmp_source_name_1 = PyCell_GET( var_cache );
        tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "ccocccccocccccocccc";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_cache_get ) == NULL );
        PyCell_SET( var_cache_get, tmp_assign_source_9 );

    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = LOOKUP_BUILTIN( const_str_plain_len );
        assert( tmp_assign_source_10 != NULL );
        assert( PyCell_GET( var__len ) == NULL );
        Py_INCREF( tmp_assign_source_10 );
        PyCell_SET( var__len, tmp_assign_source_10 );

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain_RLock );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RLock );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "RLock" );
            exception_tb = NULL;

            exception_lineno = 90;
            type_description_1 = "ccocccccocccccocccc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_2;
        frame_46237443246e7717eb6c03ac91fabb68->m_frame.f_lineno = 90;
        tmp_assign_source_11 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 90;
            type_description_1 = "ccocccccocccccocccc";
            goto frame_exception_exit_1;
        }
        assert( PyCell_GET( var_lock ) == NULL );
        PyCell_SET( var_lock, tmp_assign_source_11 );

    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = PyList_New( 0 );
        assert( PyCell_GET( var_root ) == NULL );
        PyCell_SET( var_root, tmp_assign_source_12 );

    }
    {
        PyObject *tmp_sliceass_value_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_sliceass_target_1;
        Py_ssize_t tmp_sliceassslicedel_index_lower_1;
        Py_ssize_t tmp_sliceass_index_upper_1;
        CHECK_OBJECT( PyCell_GET( var_root ) );
        tmp_list_element_1 = PyCell_GET( var_root );
        tmp_sliceass_value_1 = PyList_New( 4 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_sliceass_value_1, 0, tmp_list_element_1 );
        CHECK_OBJECT( PyCell_GET( var_root ) );
        tmp_list_element_1 = PyCell_GET( var_root );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_sliceass_value_1, 1, tmp_list_element_1 );
        tmp_list_element_1 = Py_None;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_sliceass_value_1, 2, tmp_list_element_1 );
        tmp_list_element_1 = Py_None;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_sliceass_value_1, 3, tmp_list_element_1 );
        CHECK_OBJECT( PyCell_GET( var_root ) );
        tmp_sliceass_target_1 = PyCell_GET( var_root );
        tmp_sliceassslicedel_index_lower_1 = 0;
        tmp_sliceass_index_upper_1 = PY_SSIZE_T_MAX;
        tmp_result = SET_INDEX_SLICE( tmp_sliceass_target_1, tmp_sliceassslicedel_index_lower_1, tmp_sliceass_index_upper_1, tmp_sliceass_value_1 );
        Py_DECREF( tmp_sliceass_value_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;
            type_description_1 = "ccocccccocccccocccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_list_element_2;
        CHECK_OBJECT( PyCell_GET( var_root ) );
        tmp_list_element_2 = PyCell_GET( var_root );
        tmp_assign_source_13 = PyList_New( 1 );
        Py_INCREF( tmp_list_element_2 );
        PyList_SET_ITEM( tmp_assign_source_13, 0, tmp_list_element_2 );
        assert( PyCell_GET( var_nonlocal_root ) == NULL );
        PyCell_SET( var_nonlocal_root, tmp_assign_source_13 );

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_2;
        tmp_iter_arg_2 = const_tuple_int_0_int_pos_1_int_pos_2_int_pos_3_tuple;
        tmp_assign_source_14 = MAKE_ITERATOR( tmp_iter_arg_2 );
        assert( !(tmp_assign_source_14 == NULL) );
        assert( tmp_tuple_unpack_2__source_iter == NULL );
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_14;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT( tmp_unpack_3, 0 );
        if ( tmp_assign_source_15 == NULL )
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


            type_description_1 = "ccocccccocccccocccc";
            exception_lineno = 94;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_1 == NULL );
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_4, 1 );
        if ( tmp_assign_source_16 == NULL )
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


            type_description_1 = "ccocccccocccccocccc";
            exception_lineno = 94;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_2 == NULL );
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_5, 2 );
        if ( tmp_assign_source_17 == NULL )
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


            type_description_1 = "ccocccccocccccocccc";
            exception_lineno = 94;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_3 == NULL );
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT( tmp_unpack_6, 3 );
        if ( tmp_assign_source_18 == NULL )
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


            type_description_1 = "ccocccccocccccocccc";
            exception_lineno = 94;
            goto try_except_handler_5;
        }
        assert( tmp_tuple_unpack_2__element_4 == NULL );
        tmp_tuple_unpack_2__element_4 = tmp_assign_source_18;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
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

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    {
        PyObject *tmp_assign_source_19;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
        tmp_assign_source_19 = tmp_tuple_unpack_2__element_1;
        assert( PyCell_GET( var_PREV ) == NULL );
        Py_INCREF( tmp_assign_source_19 );
        PyCell_SET( var_PREV, tmp_assign_source_19 );

    }
    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
        tmp_assign_source_20 = tmp_tuple_unpack_2__element_2;
        assert( PyCell_GET( var_NEXT ) == NULL );
        Py_INCREF( tmp_assign_source_20 );
        PyCell_SET( var_NEXT, tmp_assign_source_20 );

    }
    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_3 );
        tmp_assign_source_21 = tmp_tuple_unpack_2__element_3;
        assert( PyCell_GET( var_KEY ) == NULL );
        Py_INCREF( tmp_assign_source_21 );
        PyCell_SET( var_KEY, tmp_assign_source_21 );

    }
    Py_XDECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT( tmp_tuple_unpack_2__element_4 );
        tmp_assign_source_22 = tmp_tuple_unpack_2__element_4;
        assert( PyCell_GET( var_RESULT ) == NULL );
        Py_INCREF( tmp_assign_source_22 );
        PyCell_SET( var_RESULT, tmp_assign_source_22 );

    }
    Py_XDECREF( tmp_tuple_unpack_2__element_4 );
    tmp_tuple_unpack_2__element_4 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "maxsize" );
            exception_tb = NULL;

            exception_lineno = 96;
            type_description_1 = "ccocccccocccccocccc";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_1 = PyCell_GET( self->m_closure[0] );
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;
            type_description_1 = "ccocccccocccccocccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_23;
            tmp_assign_source_23 = MAKE_FUNCTION_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_1_wrapper(  );

            ((struct Nuitka_FunctionObject *)tmp_assign_source_23)->m_closure[0] = var_MISSES;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_23)->m_closure[0] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_23)->m_closure[1] = var_stats;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_23)->m_closure[1] );
            ((struct Nuitka_FunctionObject *)tmp_assign_source_23)->m_closure[2] = par_user_function;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_23)->m_closure[2] );


            assert( var_wrapper == NULL );
            var_wrapper = tmp_assign_source_23;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            if ( PyCell_GET( self->m_closure[0] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "maxsize" );
                exception_tb = NULL;

                exception_lineno = 104;
                type_description_1 = "ccocccccocccccocccc";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_left_2 = PyCell_GET( self->m_closure[0] );
            tmp_compexpr_right_2 = Py_None;
            tmp_condition_result_2 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            {
                PyObject *tmp_assign_source_24;
                tmp_assign_source_24 = MAKE_FUNCTION_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_2_wrapper(  );

                ((struct Nuitka_FunctionObject *)tmp_assign_source_24)->m_closure[0] = var_HITS;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_24)->m_closure[0] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_24)->m_closure[1] = var_MISSES;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_24)->m_closure[1] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_24)->m_closure[2] = var_cache;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_24)->m_closure[2] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_24)->m_closure[3] = var_cache_get;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_24)->m_closure[3] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_24)->m_closure[4] = var_make_key;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_24)->m_closure[4] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_24)->m_closure[5] = var_root;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_24)->m_closure[5] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_24)->m_closure[6] = var_stats;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_24)->m_closure[6] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_24)->m_closure[7] = self->m_closure[1];
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_24)->m_closure[7] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_24)->m_closure[8] = par_user_function;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_24)->m_closure[8] );


                assert( var_wrapper == NULL );
                var_wrapper = tmp_assign_source_24;
            }
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_25;
                tmp_assign_source_25 = MAKE_FUNCTION_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_3_wrapper(  );

                ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[0] = var_HITS;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[0] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[1] = var_KEY;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[1] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[2] = var_MISSES;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[2] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[3] = var_NEXT;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[3] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[4] = var_PREV;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[4] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[5] = var_RESULT;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[5] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[6] = var__len;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[6] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[7] = var_cache;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[7] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[8] = var_cache_get;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[8] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[9] = var_lock;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[9] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[10] = var_make_key;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[10] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[11] = self->m_closure[0];
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[11] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[12] = var_nonlocal_root;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[12] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[13] = var_stats;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[13] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[14] = self->m_closure[1];
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[14] );
                ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[15] = par_user_function;
                Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_25)->m_closure[15] );


                assert( var_wrapper == NULL );
                var_wrapper = tmp_assign_source_25;
            }
            branch_end_2:;
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_FUNCTION_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_4_cache_info(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_26)->m_closure[0] = var_HITS;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_26)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_26)->m_closure[1] = var_MISSES;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_26)->m_closure[1] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_26)->m_closure[2] = var_cache;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_26)->m_closure[2] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_26)->m_closure[3] = var_lock;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_26)->m_closure[3] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_26)->m_closure[4] = self->m_closure[0];
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_26)->m_closure[4] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_26)->m_closure[5] = var_stats;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_26)->m_closure[5] );


        assert( var_cache_info == NULL );
        var_cache_info = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_FUNCTION_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_5_cache_clear(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_27)->m_closure[0] = var_cache;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_27)->m_closure[0] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_27)->m_closure[1] = var_lock;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_27)->m_closure[1] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_27)->m_closure[2] = var_nonlocal_root;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_27)->m_closure[2] );
        ((struct Nuitka_FunctionObject *)tmp_assign_source_27)->m_closure[3] = var_stats;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_27)->m_closure[3] );


        assert( var_cache_clear == NULL );
        var_cache_clear = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( PyCell_GET( par_user_function ) );
        tmp_assattr_name_1 = PyCell_GET( par_user_function );
        if ( var_wrapper == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "wrapper" );
            exception_tb = NULL;

            exception_lineno = 179;
            type_description_1 = "ccocccccocccccocccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = var_wrapper;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___wrapped__, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "ccocccccocccccocccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( var_cache_info );
        tmp_assattr_name_2 = var_cache_info;
        if ( var_wrapper == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "wrapper" );
            exception_tb = NULL;

            exception_lineno = 180;
            type_description_1 = "ccocccccocccccocccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = var_wrapper;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_cache_info, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "ccocccccocccccocccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( var_cache_clear );
        tmp_assattr_name_3 = var_cache_clear;
        if ( var_wrapper == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "wrapper" );
            exception_tb = NULL;

            exception_lineno = 181;
            type_description_1 = "ccocccccocccccocccc";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = var_wrapper;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_cache_clear, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;
            type_description_1 = "ccocccccocccccocccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain_update_wrapper );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_update_wrapper );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "update_wrapper" );
            exception_tb = NULL;

            exception_lineno = 182;
            type_description_1 = "ccocccccocccccocccc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        if ( var_wrapper == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "wrapper" );
            exception_tb = NULL;

            exception_lineno = 182;
            type_description_1 = "ccocccccocccccocccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_1 = var_wrapper;
        CHECK_OBJECT( PyCell_GET( par_user_function ) );
        tmp_args_element_name_2 = PyCell_GET( par_user_function );
        frame_46237443246e7717eb6c03ac91fabb68->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "ccocccccocccccocccc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_46237443246e7717eb6c03ac91fabb68 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_46237443246e7717eb6c03ac91fabb68 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_46237443246e7717eb6c03ac91fabb68 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_46237443246e7717eb6c03ac91fabb68, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_46237443246e7717eb6c03ac91fabb68->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_46237443246e7717eb6c03ac91fabb68, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_46237443246e7717eb6c03ac91fabb68,
        type_description_1,
        par_user_function,
        var_HITS,
        var_cache_info,
        var_stats,
        var__len,
        var_lock,
        var_cache,
        self->m_closure[0],
        var_wrapper,
        var_NEXT,
        var_nonlocal_root,
        var_MISSES,
        var_RESULT,
        var_KEY,
        var_cache_clear,
        var_make_key,
        var_PREV,
        var_root,
        var_cache_get
    );


    // Release cached frame.
    if ( frame_46237443246e7717eb6c03ac91fabb68 == cache_frame_46237443246e7717eb6c03ac91fabb68 )
    {
        Py_DECREF( frame_46237443246e7717eb6c03ac91fabb68 );
    }
    cache_frame_46237443246e7717eb6c03ac91fabb68 = NULL;

    assertFrameObject( frame_46237443246e7717eb6c03ac91fabb68 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_HITS );
    Py_DECREF( var_HITS );
    var_HITS = NULL;

    CHECK_OBJECT( (PyObject *)var_cache_info );
    Py_DECREF( var_cache_info );
    var_cache_info = NULL;

    CHECK_OBJECT( (PyObject *)var_stats );
    Py_DECREF( var_stats );
    var_stats = NULL;

    CHECK_OBJECT( (PyObject *)var__len );
    Py_DECREF( var__len );
    var__len = NULL;

    CHECK_OBJECT( (PyObject *)var_lock );
    Py_DECREF( var_lock );
    var_lock = NULL;

    CHECK_OBJECT( (PyObject *)var_cache );
    Py_DECREF( var_cache );
    var_cache = NULL;

    Py_XDECREF( var_wrapper );
    var_wrapper = NULL;

    CHECK_OBJECT( (PyObject *)var_NEXT );
    Py_DECREF( var_NEXT );
    var_NEXT = NULL;

    CHECK_OBJECT( (PyObject *)var_nonlocal_root );
    Py_DECREF( var_nonlocal_root );
    var_nonlocal_root = NULL;

    CHECK_OBJECT( (PyObject *)var_MISSES );
    Py_DECREF( var_MISSES );
    var_MISSES = NULL;

    CHECK_OBJECT( (PyObject *)var_RESULT );
    Py_DECREF( var_RESULT );
    var_RESULT = NULL;

    CHECK_OBJECT( (PyObject *)var_KEY );
    Py_DECREF( var_KEY );
    var_KEY = NULL;

    CHECK_OBJECT( (PyObject *)var_cache_clear );
    Py_DECREF( var_cache_clear );
    var_cache_clear = NULL;

    CHECK_OBJECT( (PyObject *)par_user_function );
    Py_DECREF( par_user_function );
    par_user_function = NULL;

    CHECK_OBJECT( (PyObject *)var_make_key );
    Py_DECREF( var_make_key );
    var_make_key = NULL;

    CHECK_OBJECT( (PyObject *)var_PREV );
    Py_DECREF( var_PREV );
    var_PREV = NULL;

    CHECK_OBJECT( (PyObject *)var_root );
    Py_DECREF( var_root );
    var_root = NULL;

    CHECK_OBJECT( (PyObject *)var_cache_get );
    Py_DECREF( var_cache_get );
    var_cache_get = NULL;

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

    CHECK_OBJECT( (PyObject *)var_HITS );
    Py_DECREF( var_HITS );
    var_HITS = NULL;

    Py_XDECREF( var_cache_info );
    var_cache_info = NULL;

    CHECK_OBJECT( (PyObject *)var_stats );
    Py_DECREF( var_stats );
    var_stats = NULL;

    CHECK_OBJECT( (PyObject *)var__len );
    Py_DECREF( var__len );
    var__len = NULL;

    CHECK_OBJECT( (PyObject *)var_lock );
    Py_DECREF( var_lock );
    var_lock = NULL;

    CHECK_OBJECT( (PyObject *)var_cache );
    Py_DECREF( var_cache );
    var_cache = NULL;

    Py_XDECREF( var_wrapper );
    var_wrapper = NULL;

    CHECK_OBJECT( (PyObject *)var_NEXT );
    Py_DECREF( var_NEXT );
    var_NEXT = NULL;

    CHECK_OBJECT( (PyObject *)var_nonlocal_root );
    Py_DECREF( var_nonlocal_root );
    var_nonlocal_root = NULL;

    CHECK_OBJECT( (PyObject *)var_MISSES );
    Py_DECREF( var_MISSES );
    var_MISSES = NULL;

    CHECK_OBJECT( (PyObject *)var_RESULT );
    Py_DECREF( var_RESULT );
    var_RESULT = NULL;

    CHECK_OBJECT( (PyObject *)var_KEY );
    Py_DECREF( var_KEY );
    var_KEY = NULL;

    Py_XDECREF( var_cache_clear );
    var_cache_clear = NULL;

    CHECK_OBJECT( (PyObject *)par_user_function );
    Py_DECREF( par_user_function );
    par_user_function = NULL;

    CHECK_OBJECT( (PyObject *)var_make_key );
    Py_DECREF( var_make_key );
    var_make_key = NULL;

    CHECK_OBJECT( (PyObject *)var_PREV );
    Py_DECREF( var_PREV );
    var_PREV = NULL;

    CHECK_OBJECT( (PyObject *)var_root );
    Py_DECREF( var_root );
    var_root = NULL;

    CHECK_OBJECT( (PyObject *)var_cache_get );
    Py_DECREF( var_cache_get );
    var_cache_get = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_1_wrapper( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *par_kwds = python_pars[ 1 ];
    PyObject *var_result = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    struct Nuitka_FrameObject *frame_5d643a6baf23d639162f355fc941c658;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_5d643a6baf23d639162f355fc941c658 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5d643a6baf23d639162f355fc941c658, codeobj_5d643a6baf23d639162f355fc941c658, module_backports$functools_lru_cache, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5d643a6baf23d639162f355fc941c658 = cache_frame_5d643a6baf23d639162f355fc941c658;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5d643a6baf23d639162f355fc941c658 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5d643a6baf23d639162f355fc941c658 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "user_function" );
            exception_tb = NULL;

            exception_lineno = 100;
            type_description_1 = "ooccoc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = PyCell_GET( self->m_closure[2] );
        CHECK_OBJECT( par_args );
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT( par_kwds );
        tmp_dircall_arg3_1 = par_kwds;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg2_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_1 = impl___internal__$$$function_3_complex_call_helper_star_list_star_dict( dir_call_args );
        }
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;
            type_description_1 = "ooccoc";
            goto frame_exception_exit_1;
        }
        assert( var_result == NULL );
        var_result = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "stats" );
            exception_tb = NULL;

            exception_lineno = 101;
            type_description_1 = "ooccoc";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_2 = PyCell_GET( self->m_closure[1] );
        assert( tmp_inplace_assign_subscr_1__target == NULL );
        Py_INCREF( tmp_assign_source_2 );
        tmp_inplace_assign_subscr_1__target = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "MISSES" );
            exception_tb = NULL;

            exception_lineno = 101;
            type_description_1 = "ooccoc";
            goto try_except_handler_2;
        }

        tmp_assign_source_3 = PyCell_GET( self->m_closure[0] );
        assert( tmp_inplace_assign_subscr_1__subscript == NULL );
        Py_INCREF( tmp_assign_source_3 );
        tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_3;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_subscribed_name_1 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
        tmp_subscript_name_1 = tmp_inplace_assign_subscr_1__subscript;
        tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "ooccoc";
            goto try_except_handler_2;
        }
        tmp_right_name_1 = const_int_pos_1;
        tmp_ass_subvalue_1 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "ooccoc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
        tmp_ass_subscribed_1 = tmp_inplace_assign_subscr_1__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
        tmp_ass_subscript_1 = tmp_inplace_assign_subscr_1__subscript;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;
            type_description_1 = "ooccoc";
            goto try_except_handler_2;
        }
    }
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    Py_XDECREF( tmp_inplace_assign_subscr_1__subscript );
    tmp_inplace_assign_subscr_1__subscript = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5d643a6baf23d639162f355fc941c658 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5d643a6baf23d639162f355fc941c658 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5d643a6baf23d639162f355fc941c658, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5d643a6baf23d639162f355fc941c658->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5d643a6baf23d639162f355fc941c658, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5d643a6baf23d639162f355fc941c658,
        type_description_1,
        par_args,
        par_kwds,
        self->m_closure[1],
        self->m_closure[0],
        var_result,
        self->m_closure[2]
    );


    // Release cached frame.
    if ( frame_5d643a6baf23d639162f355fc941c658 == cache_frame_5d643a6baf23d639162f355fc941c658 )
    {
        Py_DECREF( frame_5d643a6baf23d639162f355fc941c658 );
    }
    cache_frame_5d643a6baf23d639162f355fc941c658 = NULL;

    assertFrameObject( frame_5d643a6baf23d639162f355fc941c658 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
    tmp_inplace_assign_subscr_1__subscript = NULL;

    CHECK_OBJECT( var_result );
    tmp_return_value = var_result;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_1_wrapper );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_kwds );
    Py_DECREF( par_kwds );
    par_kwds = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
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

    CHECK_OBJECT( (PyObject *)par_kwds );
    Py_DECREF( par_kwds );
    par_kwds = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

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
    NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_1_wrapper );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_2_wrapper( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *par_kwds = python_pars[ 1 ];
    PyObject *var_result = NULL;
    PyObject *var_key = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_2__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_2__target = NULL;
    struct Nuitka_FrameObject *frame_b20af204244c2c692ca00ead9b7c22cb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_b20af204244c2c692ca00ead9b7c22cb = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b20af204244c2c692ca00ead9b7c22cb, codeobj_b20af204244c2c692ca00ead9b7c22cb, module_backports$functools_lru_cache, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b20af204244c2c692ca00ead9b7c22cb = cache_frame_b20af204244c2c692ca00ead9b7c22cb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b20af204244c2c692ca00ead9b7c22cb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b20af204244c2c692ca00ead9b7c22cb ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        if ( PyCell_GET( self->m_closure[4] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "make_key" );
            exception_tb = NULL;

            exception_lineno = 108;
            type_description_1 = "oocccccoocccc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = PyCell_GET( self->m_closure[4] );
        CHECK_OBJECT( par_args );
        tmp_args_element_name_1 = par_args;
        CHECK_OBJECT( par_kwds );
        tmp_args_element_name_2 = par_kwds;
        if ( PyCell_GET( self->m_closure[7] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "typed" );
            exception_tb = NULL;

            exception_lineno = 108;
            type_description_1 = "oocccccoocccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = PyCell_GET( self->m_closure[7] );
        frame_b20af204244c2c692ca00ead9b7c22cb->m_frame.f_lineno = 108;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;
            type_description_1 = "oocccccoocccc";
            goto frame_exception_exit_1;
        }
        assert( var_key == NULL );
        var_key = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        if ( PyCell_GET( self->m_closure[3] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cache_get" );
            exception_tb = NULL;

            exception_lineno = 109;
            type_description_1 = "oocccccoocccc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = PyCell_GET( self->m_closure[3] );
        CHECK_OBJECT( var_key );
        tmp_args_element_name_4 = var_key;
        if ( PyCell_GET( self->m_closure[5] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "root" );
            exception_tb = NULL;

            exception_lineno = 109;
            type_description_1 = "oocccccoocccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_5 = PyCell_GET( self->m_closure[5] );
        frame_b20af204244c2c692ca00ead9b7c22cb->m_frame.f_lineno = 109;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;
            type_description_1 = "oocccccoocccc";
            goto frame_exception_exit_1;
        }
        assert( var_result == NULL );
        var_result = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_result );
        tmp_compexpr_left_1 = var_result;
        if ( PyCell_GET( self->m_closure[5] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "root" );
            exception_tb = NULL;

            exception_lineno = 110;
            type_description_1 = "oocccccoocccc";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = PyCell_GET( self->m_closure[5] );
        tmp_condition_result_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_assign_source_3;
            if ( PyCell_GET( self->m_closure[6] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "stats" );
                exception_tb = NULL;

                exception_lineno = 111;
                type_description_1 = "oocccccoocccc";
                goto frame_exception_exit_1;
            }

            tmp_assign_source_3 = PyCell_GET( self->m_closure[6] );
            assert( tmp_inplace_assign_subscr_1__target == NULL );
            Py_INCREF( tmp_assign_source_3 );
            tmp_inplace_assign_subscr_1__target = tmp_assign_source_3;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            if ( PyCell_GET( self->m_closure[0] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "HITS" );
                exception_tb = NULL;

                exception_lineno = 111;
                type_description_1 = "oocccccoocccc";
                goto try_except_handler_2;
            }

            tmp_assign_source_4 = PyCell_GET( self->m_closure[0] );
            assert( tmp_inplace_assign_subscr_1__subscript == NULL );
            Py_INCREF( tmp_assign_source_4 );
            tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_4;
        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_left_name_1;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
            tmp_subscribed_name_1 = tmp_inplace_assign_subscr_1__target;
            CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
            tmp_subscript_name_1 = tmp_inplace_assign_subscr_1__subscript;
            tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 111;
                type_description_1 = "oocccccoocccc";
                goto try_except_handler_2;
            }
            tmp_right_name_1 = const_int_pos_1;
            tmp_ass_subvalue_1 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 111;
                type_description_1 = "oocccccoocccc";
                goto try_except_handler_2;
            }
            CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
            tmp_ass_subscribed_1 = tmp_inplace_assign_subscr_1__target;
            CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
            tmp_ass_subscript_1 = tmp_inplace_assign_subscr_1__subscript;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 111;
                type_description_1 = "oocccccoocccc";
                goto try_except_handler_2;
            }
        }
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
        Py_DECREF( tmp_inplace_assign_subscr_1__target );
        tmp_inplace_assign_subscr_1__target = NULL;

        Py_XDECREF( tmp_inplace_assign_subscr_1__subscript );
        tmp_inplace_assign_subscr_1__subscript = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        try_end_1:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
        Py_DECREF( tmp_inplace_assign_subscr_1__target );
        tmp_inplace_assign_subscr_1__target = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
        Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
        tmp_inplace_assign_subscr_1__subscript = NULL;

        CHECK_OBJECT( var_result );
        tmp_return_value = var_result;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        if ( PyCell_GET( self->m_closure[8] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "user_function" );
            exception_tb = NULL;

            exception_lineno = 113;
            type_description_1 = "oocccccoocccc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = PyCell_GET( self->m_closure[8] );
        CHECK_OBJECT( par_args );
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT( par_kwds );
        tmp_dircall_arg3_1 = par_kwds;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg2_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_5 = impl___internal__$$$function_3_complex_call_helper_star_list_star_dict( dir_call_args );
        }
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 113;
            type_description_1 = "oocccccoocccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_result;
            assert( old != NULL );
            var_result = tmp_assign_source_5;
            Py_DECREF( old );
        }

    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT( var_result );
        tmp_ass_subvalue_2 = var_result;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cache" );
            exception_tb = NULL;

            exception_lineno = 114;
            type_description_1 = "oocccccoocccc";
            goto frame_exception_exit_1;
        }

        tmp_ass_subscribed_2 = PyCell_GET( self->m_closure[2] );
        CHECK_OBJECT( var_key );
        tmp_ass_subscript_2 = var_key;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "oocccccoocccc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_6;
        if ( PyCell_GET( self->m_closure[6] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "stats" );
            exception_tb = NULL;

            exception_lineno = 115;
            type_description_1 = "oocccccoocccc";
            goto frame_exception_exit_1;
        }

        tmp_assign_source_6 = PyCell_GET( self->m_closure[6] );
        assert( tmp_inplace_assign_subscr_2__target == NULL );
        Py_INCREF( tmp_assign_source_6 );
        tmp_inplace_assign_subscr_2__target = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "MISSES" );
            exception_tb = NULL;

            exception_lineno = 115;
            type_description_1 = "oocccccoocccc";
            goto try_except_handler_3;
        }

        tmp_assign_source_7 = PyCell_GET( self->m_closure[1] );
        assert( tmp_inplace_assign_subscr_2__subscript == NULL );
        Py_INCREF( tmp_assign_source_7 );
        tmp_inplace_assign_subscr_2__subscript = tmp_assign_source_7;
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_right_name_2;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        CHECK_OBJECT( tmp_inplace_assign_subscr_2__target );
        tmp_subscribed_name_2 = tmp_inplace_assign_subscr_2__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_2__subscript );
        tmp_subscript_name_2 = tmp_inplace_assign_subscr_2__subscript;
        tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "oocccccoocccc";
            goto try_except_handler_3;
        }
        tmp_right_name_2 = const_int_pos_1;
        tmp_ass_subvalue_3 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_ass_subvalue_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "oocccccoocccc";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( tmp_inplace_assign_subscr_2__target );
        tmp_ass_subscribed_3 = tmp_inplace_assign_subscr_2__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_2__subscript );
        tmp_ass_subscript_3 = tmp_inplace_assign_subscr_2__subscript;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
        Py_DECREF( tmp_ass_subvalue_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "oocccccoocccc";
            goto try_except_handler_3;
        }
    }
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__target );
    Py_DECREF( tmp_inplace_assign_subscr_2__target );
    tmp_inplace_assign_subscr_2__target = NULL;

    Py_XDECREF( tmp_inplace_assign_subscr_2__subscript );
    tmp_inplace_assign_subscr_2__subscript = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b20af204244c2c692ca00ead9b7c22cb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b20af204244c2c692ca00ead9b7c22cb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b20af204244c2c692ca00ead9b7c22cb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b20af204244c2c692ca00ead9b7c22cb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b20af204244c2c692ca00ead9b7c22cb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b20af204244c2c692ca00ead9b7c22cb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b20af204244c2c692ca00ead9b7c22cb,
        type_description_1,
        par_args,
        par_kwds,
        self->m_closure[0],
        self->m_closure[2],
        self->m_closure[6],
        self->m_closure[7],
        self->m_closure[1],
        var_result,
        var_key,
        self->m_closure[8],
        self->m_closure[4],
        self->m_closure[5],
        self->m_closure[3]
    );


    // Release cached frame.
    if ( frame_b20af204244c2c692ca00ead9b7c22cb == cache_frame_b20af204244c2c692ca00ead9b7c22cb )
    {
        Py_DECREF( frame_b20af204244c2c692ca00ead9b7c22cb );
    }
    cache_frame_b20af204244c2c692ca00ead9b7c22cb = NULL;

    assertFrameObject( frame_b20af204244c2c692ca00ead9b7c22cb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__target );
    Py_DECREF( tmp_inplace_assign_subscr_2__target );
    tmp_inplace_assign_subscr_2__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_2__subscript );
    tmp_inplace_assign_subscr_2__subscript = NULL;

    CHECK_OBJECT( var_result );
    tmp_return_value = var_result;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_2_wrapper );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_kwds );
    Py_DECREF( par_kwds );
    par_kwds = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

    CHECK_OBJECT( (PyObject *)var_key );
    Py_DECREF( var_key );
    var_key = NULL;

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

    CHECK_OBJECT( (PyObject *)par_kwds );
    Py_DECREF( par_kwds );
    par_kwds = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_2_wrapper );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_3_wrapper( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *par_kwds = python_pars[ 1 ];
    PyObject *var_link_prev = NULL;
    PyObject *var_oldroot = NULL;
    PyObject *var_result = NULL;
    PyObject *var_oldkey = NULL;
    PyObject *var_link_next = NULL;
    PyObject *var_link = NULL;
    PyObject *var_key = NULL;
    PyObject *var_last = NULL;
    PyObject *var_root = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_assign_unpack_2__assign_source = NULL;
    PyObject *tmp_assign_unpack_4__assign_source = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_2__subscript = NULL;
    PyObject *tmp_inplace_assign_subscr_2__target = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__element_4 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_2__enter = NULL;
    PyObject *tmp_with_2__exit = NULL;
    nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_2__source = NULL;
    struct Nuitka_FrameObject *frame_f80a96d5c901ffcd75233976861ed1b5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_iterator_attempt;
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
    bool tmp_result;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    int tmp_res;
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
    static struct Nuitka_FrameObject *cache_frame_f80a96d5c901ffcd75233976861ed1b5 = NULL;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f80a96d5c901ffcd75233976861ed1b5, codeobj_f80a96d5c901ffcd75233976861ed1b5, module_backports$functools_lru_cache, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f80a96d5c901ffcd75233976861ed1b5 = cache_frame_f80a96d5c901ffcd75233976861ed1b5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f80a96d5c901ffcd75233976861ed1b5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f80a96d5c901ffcd75233976861ed1b5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        int tmp_truth_name_1;
        int tmp_truth_name_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_kwds );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_kwds );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "ooocooococccccccococcocccco";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        if ( PyCell_GET( self->m_closure[14] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "typed" );
            exception_tb = NULL;

            exception_lineno = 122;
            type_description_1 = "ooocooococccccccococcocccco";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_2 = CHECK_IF_TRUE( PyCell_GET( self->m_closure[14] ) );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "ooocooococccccccococcocccco";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        if ( PyCell_GET( self->m_closure[10] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "make_key" );
            exception_tb = NULL;

            exception_lineno = 122;
            type_description_1 = "ooocooococccccccococcocccco";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = PyCell_GET( self->m_closure[10] );
        CHECK_OBJECT( par_args );
        tmp_args_element_name_1 = par_args;
        CHECK_OBJECT( par_kwds );
        tmp_args_element_name_2 = par_kwds;
        if ( PyCell_GET( self->m_closure[14] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "typed" );
            exception_tb = NULL;

            exception_lineno = 122;
            type_description_1 = "ooocooococccccccococcocccco";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_3 = PyCell_GET( self->m_closure[14] );
        frame_f80a96d5c901ffcd75233976861ed1b5->m_frame.f_lineno = 122;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;
            type_description_1 = "ooocooococccccccococcocccco";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT( par_args );
        tmp_assign_source_1 = par_args;
        Py_INCREF( tmp_assign_source_1 );
        condexpr_end_1:;
        assert( var_key == NULL );
        var_key = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        if ( PyCell_GET( self->m_closure[9] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "lock" );
            exception_tb = NULL;

            exception_lineno = 123;
            type_description_1 = "ooocooococccccccococcocccco";
            goto try_except_handler_2;
        }

        tmp_assign_source_2 = PyCell_GET( self->m_closure[9] );
        assert( tmp_with_1__source == NULL );
        Py_INCREF( tmp_assign_source_2 );
        tmp_with_1__source = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_1 = tmp_with_1__source;
        tmp_assign_source_3 = LOOKUP_SPECIAL( tmp_source_name_1, const_str_plain___exit__ );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "ooocooococccccccococcocccco";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__exit == NULL );
        tmp_with_1__exit = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_2 = tmp_with_1__source;
        tmp_called_name_2 = LOOKUP_SPECIAL( tmp_source_name_2, const_str_plain___enter__ );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "ooocooococccccccococcocccco";
            goto try_except_handler_2;
        }
        frame_f80a96d5c901ffcd75233976861ed1b5->m_frame.f_lineno = 123;
        tmp_assign_source_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "ooocooococccccccococcocccco";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__enter == NULL );
        tmp_with_1__enter = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_5;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_4;
        if ( PyCell_GET( self->m_closure[8] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cache_get" );
            exception_tb = NULL;

            exception_lineno = 124;
            type_description_1 = "ooocooococccccccococcocccco";
            goto try_except_handler_4;
        }

        tmp_called_name_3 = PyCell_GET( self->m_closure[8] );
        CHECK_OBJECT( var_key );
        tmp_args_element_name_4 = var_key;
        frame_f80a96d5c901ffcd75233976861ed1b5->m_frame.f_lineno = 124;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;
            type_description_1 = "ooocooococccccccococcocccco";
            goto try_except_handler_4;
        }
        assert( var_link == NULL );
        var_link = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_link );
        tmp_compexpr_left_1 = var_link;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        // Tried code:
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_iter_arg_1;
            if ( PyCell_GET( self->m_closure[12] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "nonlocal_root" );
                exception_tb = NULL;

                exception_lineno = 127;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_5;
            }

            tmp_iter_arg_1 = PyCell_GET( self->m_closure[12] );
            tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 127;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_1__source_iter == NULL );
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_1, 0 );
            if ( tmp_assign_source_8 == NULL )
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


                type_description_1 = "ooocooococccccccococcocccco";
                exception_lineno = 127;
                goto try_except_handler_6;
            }
            assert( tmp_tuple_unpack_1__element_1 == NULL );
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
        }
        {
            PyObject *tmp_iterator_name_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;
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

                        type_description_1 = "ooocooococccccccococcocccco";
                        exception_lineno = 127;
                        goto try_except_handler_6;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooocooococccccccococcocccco";
                exception_lineno = 127;
                goto try_except_handler_6;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_6:;
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

        goto try_except_handler_5;
        // End of try:
        try_end_1:;
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

        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_4;
        // End of try:
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
            assert( var_root == NULL );
            Py_INCREF( tmp_assign_source_9 );
            var_root = tmp_assign_source_9;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT( var_link );
            tmp_iter_arg_2 = var_link;
            tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 128;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_7;
            }
            assert( tmp_tuple_unpack_2__source_iter == NULL );
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_10;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_2, 0 );
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


                type_description_1 = "ooocooococccccccococcocccco";
                exception_lineno = 128;
                goto try_except_handler_8;
            }
            assert( tmp_tuple_unpack_2__element_1 == NULL );
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_3, 1 );
            if ( tmp_assign_source_12 == NULL )
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


                type_description_1 = "ooocooococccccccococcocccco";
                exception_lineno = 128;
                goto try_except_handler_8;
            }
            assert( tmp_tuple_unpack_2__element_2 == NULL );
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_4, 2 );
            if ( tmp_assign_source_13 == NULL )
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


                type_description_1 = "ooocooococccccccococcocccco";
                exception_lineno = 128;
                goto try_except_handler_8;
            }
            assert( tmp_tuple_unpack_2__element_3 == NULL );
            tmp_tuple_unpack_2__element_3 = tmp_assign_source_13;
        }
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_unpack_5;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_5, 3 );
            if ( tmp_assign_source_14 == NULL )
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


                type_description_1 = "ooocooococccccccococcocccco";
                exception_lineno = 128;
                goto try_except_handler_8;
            }
            assert( tmp_tuple_unpack_2__element_4 == NULL );
            tmp_tuple_unpack_2__element_4 = tmp_assign_source_14;
        }
        {
            PyObject *tmp_iterator_name_2;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;
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

                        type_description_1 = "ooocooococccccccococcocccco";
                        exception_lineno = 128;
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
                PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 4)" );
#endif
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                type_description_1 = "ooocooococccccccococcocccco";
                exception_lineno = 128;
                goto try_except_handler_8;
            }
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

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

        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_3 );
        tmp_tuple_unpack_2__element_3 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_4 );
        tmp_tuple_unpack_2__element_4 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_4;
        // End of try:
        try_end_4:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_15 = tmp_tuple_unpack_2__element_1;
            assert( var_link_prev == NULL );
            Py_INCREF( tmp_assign_source_15 );
            var_link_prev = tmp_assign_source_15;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_16 = tmp_tuple_unpack_2__element_2;
            assert( var_link_next == NULL );
            Py_INCREF( tmp_assign_source_16 );
            var_link_next = tmp_assign_source_16;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_3 );
            tmp_assign_source_17 = tmp_tuple_unpack_2__element_3;
            {
                PyObject *old = var_key;
                assert( old != NULL );
                var_key = tmp_assign_source_17;
                Py_INCREF( var_key );
                Py_DECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_3 );
        tmp_tuple_unpack_2__element_3 = NULL;

        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_4 );
            tmp_assign_source_18 = tmp_tuple_unpack_2__element_4;
            assert( var_result == NULL );
            Py_INCREF( tmp_assign_source_18 );
            var_result = tmp_assign_source_18;
        }
        Py_XDECREF( tmp_tuple_unpack_2__element_4 );
        tmp_tuple_unpack_2__element_4 = NULL;

        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_ass_subscript_1;
            CHECK_OBJECT( var_link_next );
            tmp_ass_subvalue_1 = var_link_next;
            CHECK_OBJECT( var_link_prev );
            tmp_ass_subscribed_1 = var_link_prev;
            if ( PyCell_GET( self->m_closure[3] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "NEXT" );
                exception_tb = NULL;

                exception_lineno = 129;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_4;
            }

            tmp_ass_subscript_1 = PyCell_GET( self->m_closure[3] );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 129;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_4;
            }
        }
        {
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_ass_subscript_2;
            CHECK_OBJECT( var_link_prev );
            tmp_ass_subvalue_2 = var_link_prev;
            CHECK_OBJECT( var_link_next );
            tmp_ass_subscribed_2 = var_link_next;
            if ( PyCell_GET( self->m_closure[4] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "PREV" );
                exception_tb = NULL;

                exception_lineno = 130;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_4;
            }

            tmp_ass_subscript_2 = PyCell_GET( self->m_closure[4] );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 130;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_4;
            }
        }
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( var_root );
            tmp_subscribed_name_1 = var_root;
            if ( PyCell_GET( self->m_closure[4] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "PREV" );
                exception_tb = NULL;

                exception_lineno = 131;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_4;
            }

            tmp_subscript_name_1 = PyCell_GET( self->m_closure[4] );
            tmp_assign_source_19 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 131;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_4;
            }
            assert( var_last == NULL );
            var_last = tmp_assign_source_19;
        }
        {
            PyObject *tmp_assign_source_20;
            CHECK_OBJECT( var_link );
            tmp_assign_source_20 = var_link;
            assert( tmp_assign_unpack_1__assign_source == NULL );
            Py_INCREF( tmp_assign_source_20 );
            tmp_assign_unpack_1__assign_source = tmp_assign_source_20;
        }
        // Tried code:
        {
            PyObject *tmp_ass_subvalue_3;
            PyObject *tmp_ass_subscribed_3;
            PyObject *tmp_ass_subscript_3;
            CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
            tmp_ass_subvalue_3 = tmp_assign_unpack_1__assign_source;
            CHECK_OBJECT( var_last );
            tmp_ass_subscribed_3 = var_last;
            if ( PyCell_GET( self->m_closure[3] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "NEXT" );
                exception_tb = NULL;

                exception_lineno = 132;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_9;
            }

            tmp_ass_subscript_3 = PyCell_GET( self->m_closure[3] );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 132;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_9;
            }
        }
        {
            PyObject *tmp_ass_subvalue_4;
            PyObject *tmp_ass_subscribed_4;
            PyObject *tmp_ass_subscript_4;
            CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
            tmp_ass_subvalue_4 = tmp_assign_unpack_1__assign_source;
            CHECK_OBJECT( var_root );
            tmp_ass_subscribed_4 = var_root;
            if ( PyCell_GET( self->m_closure[4] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "PREV" );
                exception_tb = NULL;

                exception_lineno = 132;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_9;
            }

            tmp_ass_subscript_4 = PyCell_GET( self->m_closure[4] );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 132;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_9;
            }
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
        Py_DECREF( tmp_assign_unpack_1__assign_source );
        tmp_assign_unpack_1__assign_source = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_4;
        // End of try:
        try_end_5:;
        CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
        Py_DECREF( tmp_assign_unpack_1__assign_source );
        tmp_assign_unpack_1__assign_source = NULL;

        {
            PyObject *tmp_ass_subvalue_5;
            PyObject *tmp_ass_subscribed_5;
            PyObject *tmp_ass_subscript_5;
            CHECK_OBJECT( var_last );
            tmp_ass_subvalue_5 = var_last;
            CHECK_OBJECT( var_link );
            tmp_ass_subscribed_5 = var_link;
            if ( PyCell_GET( self->m_closure[4] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "PREV" );
                exception_tb = NULL;

                exception_lineno = 133;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_4;
            }

            tmp_ass_subscript_5 = PyCell_GET( self->m_closure[4] );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 133;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_4;
            }
        }
        {
            PyObject *tmp_ass_subvalue_6;
            PyObject *tmp_ass_subscribed_6;
            PyObject *tmp_ass_subscript_6;
            CHECK_OBJECT( var_root );
            tmp_ass_subvalue_6 = var_root;
            CHECK_OBJECT( var_link );
            tmp_ass_subscribed_6 = var_link;
            if ( PyCell_GET( self->m_closure[3] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "NEXT" );
                exception_tb = NULL;

                exception_lineno = 134;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_4;
            }

            tmp_ass_subscript_6 = PyCell_GET( self->m_closure[3] );
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 134;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_4;
            }
        }
        {
            PyObject *tmp_assign_source_21;
            if ( PyCell_GET( self->m_closure[13] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "stats" );
                exception_tb = NULL;

                exception_lineno = 135;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_4;
            }

            tmp_assign_source_21 = PyCell_GET( self->m_closure[13] );
            assert( tmp_inplace_assign_subscr_1__target == NULL );
            Py_INCREF( tmp_assign_source_21 );
            tmp_inplace_assign_subscr_1__target = tmp_assign_source_21;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_22;
            if ( PyCell_GET( self->m_closure[0] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "HITS" );
                exception_tb = NULL;

                exception_lineno = 135;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_10;
            }

            tmp_assign_source_22 = PyCell_GET( self->m_closure[0] );
            assert( tmp_inplace_assign_subscr_1__subscript == NULL );
            Py_INCREF( tmp_assign_source_22 );
            tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_22;
        }
        {
            PyObject *tmp_ass_subvalue_7;
            PyObject *tmp_left_name_1;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_ass_subscribed_7;
            PyObject *tmp_ass_subscript_7;
            CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
            tmp_subscribed_name_2 = tmp_inplace_assign_subscr_1__target;
            CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
            tmp_subscript_name_2 = tmp_inplace_assign_subscr_1__subscript;
            tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 135;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_10;
            }
            tmp_right_name_1 = const_int_pos_1;
            tmp_ass_subvalue_7 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_ass_subvalue_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 135;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_10;
            }
            CHECK_OBJECT( tmp_inplace_assign_subscr_1__target );
            tmp_ass_subscribed_7 = tmp_inplace_assign_subscr_1__target;
            CHECK_OBJECT( tmp_inplace_assign_subscr_1__subscript );
            tmp_ass_subscript_7 = tmp_inplace_assign_subscr_1__subscript;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7 );
            Py_DECREF( tmp_ass_subvalue_7 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 135;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_10;
            }
        }
        goto try_end_6;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
        Py_DECREF( tmp_inplace_assign_subscr_1__target );
        tmp_inplace_assign_subscr_1__target = NULL;

        Py_XDECREF( tmp_inplace_assign_subscr_1__subscript );
        tmp_inplace_assign_subscr_1__subscript = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_4;
        // End of try:
        try_end_6:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
        Py_DECREF( tmp_inplace_assign_subscr_1__target );
        tmp_inplace_assign_subscr_1__target = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
        Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
        tmp_inplace_assign_subscr_1__subscript = NULL;

        CHECK_OBJECT( var_result );
        tmp_return_value = var_result;
        Py_INCREF( tmp_return_value );
        goto try_return_handler_3;
        branch_no_1:;
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_f80a96d5c901ffcd75233976861ed1b5 );
    if ( exception_keeper_tb_7 == NULL )
    {
        exception_keeper_tb_7 = MAKE_TRACEBACK( frame_f80a96d5c901ffcd75233976861ed1b5, exception_keeper_lineno_7 );
    }
    else if ( exception_keeper_lineno_7 != 0 )
    {
        exception_keeper_tb_7 = ADD_TRACEBACK( exception_keeper_tb_7, frame_f80a96d5c901ffcd75233976861ed1b5, exception_keeper_lineno_7 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    PUBLISH_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "ooocooococccccccococcocccco";
            goto try_except_handler_3;
        }
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_2;
        }
        else
        {
            goto branch_no_2;
        }
        branch_yes_2:;
        {
            nuitka_bool tmp_assign_source_23;
            tmp_assign_source_23 = NUITKA_BOOL_FALSE;
            tmp_with_1__indicator = tmp_assign_source_23;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_4 = tmp_with_1__exit;
            tmp_args_element_name_5 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_6 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_7 = EXC_TRACEBACK(PyThreadState_GET());
            frame_f80a96d5c901ffcd75233976861ed1b5->m_frame.f_lineno = 123;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
            }

            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 123;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_3;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 123;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_3;
            }
            tmp_condition_result_4 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_3;
            }
            else
            {
                goto branch_no_3;
            }
            branch_yes_3:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 123;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_f80a96d5c901ffcd75233976861ed1b5->m_frame) frame_f80a96d5c901ffcd75233976861ed1b5->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooocooococccccccococcocccco";
            goto try_except_handler_3;
            branch_no_3:;
        }
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 123;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_f80a96d5c901ffcd75233976861ed1b5->m_frame) frame_f80a96d5c901ffcd75233976861ed1b5->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooocooococccccccococcocccco";
        goto try_except_handler_3;
        branch_end_2:;
    }
    goto try_end_7;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_3_wrapper );
    return NULL;
    // End of try:
    try_end_7:;
    goto try_end_8;
    // Return handler code:
    try_return_handler_3:;
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( tmp_with_1__exit );
        tmp_called_name_5 = tmp_with_1__exit;
        frame_f80a96d5c901ffcd75233976861ed1b5->m_frame.f_lineno = 123;
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "ooocooococccccccococcocccco";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    goto try_return_handler_2;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_condition_result_5;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_called_name_6;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_6 = tmp_with_1__exit;
            frame_f80a96d5c901ffcd75233976861ed1b5->m_frame.f_lineno = 123;
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_8 );
                Py_XDECREF( exception_keeper_value_8 );
                Py_XDECREF( exception_keeper_tb_8 );

                exception_lineno = 123;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_4:;
    }
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_2;
    // End of try:
    try_end_8:;
    {
        nuitka_bool tmp_condition_result_6;
        nuitka_bool tmp_compexpr_left_4;
        nuitka_bool tmp_compexpr_right_4;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_4 = tmp_with_1__indicator;
        tmp_compexpr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_6 = ( tmp_compexpr_left_4 == tmp_compexpr_right_4 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_5;
        }
        else
        {
            goto branch_no_5;
        }
        branch_yes_5:;
        {
            PyObject *tmp_called_name_7;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_7 = tmp_with_1__exit;
            frame_f80a96d5c901ffcd75233976861ed1b5->m_frame.f_lineno = 123;
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 123;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_5:;
    }
    goto try_end_9;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        if ( PyCell_GET( self->m_closure[15] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "user_function" );
            exception_tb = NULL;

            exception_lineno = 137;
            type_description_1 = "ooocooococccccccococcocccco";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = PyCell_GET( self->m_closure[15] );
        CHECK_OBJECT( par_args );
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT( par_kwds );
        tmp_dircall_arg3_1 = par_kwds;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg2_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_24 = impl___internal__$$$function_3_complex_call_helper_star_list_star_dict( dir_call_args );
        }
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "ooocooococccccccococcocccco";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_result;
            var_result = tmp_assign_source_24;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        if ( PyCell_GET( self->m_closure[9] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "lock" );
            exception_tb = NULL;

            exception_lineno = 138;
            type_description_1 = "ooocooococccccccococcocccco";
            goto try_except_handler_11;
        }

        tmp_assign_source_25 = PyCell_GET( self->m_closure[9] );
        assert( tmp_with_2__source == NULL );
        Py_INCREF( tmp_assign_source_25 );
        tmp_with_2__source = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_source_name_3;
        CHECK_OBJECT( tmp_with_2__source );
        tmp_source_name_3 = tmp_with_2__source;
        tmp_assign_source_26 = LOOKUP_SPECIAL( tmp_source_name_3, const_str_plain___exit__ );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "ooocooococccccccococcocccco";
            goto try_except_handler_11;
        }
        assert( tmp_with_2__exit == NULL );
        tmp_with_2__exit = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_name_8;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( tmp_with_2__source );
        tmp_source_name_4 = tmp_with_2__source;
        tmp_called_name_8 = LOOKUP_SPECIAL( tmp_source_name_4, const_str_plain___enter__ );
        if ( tmp_called_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "ooocooococccccccococcocccco";
            goto try_except_handler_11;
        }
        frame_f80a96d5c901ffcd75233976861ed1b5->m_frame.f_lineno = 138;
        tmp_assign_source_27 = CALL_FUNCTION_NO_ARGS( tmp_called_name_8 );
        Py_DECREF( tmp_called_name_8 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "ooocooococccccccococcocccco";
            goto try_except_handler_11;
        }
        assert( tmp_with_2__enter == NULL );
        tmp_with_2__enter = tmp_assign_source_27;
    }
    {
        nuitka_bool tmp_assign_source_28;
        tmp_assign_source_28 = NUITKA_BOOL_TRUE;
        tmp_with_2__indicator = tmp_assign_source_28;
    }
    // Tried code:
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_iter_arg_3;
        if ( PyCell_GET( self->m_closure[12] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "nonlocal_root" );
            exception_tb = NULL;

            exception_lineno = 139;
            type_description_1 = "ooocooococccccccococcocccco";
            goto try_except_handler_14;
        }

        tmp_iter_arg_3 = PyCell_GET( self->m_closure[12] );
        tmp_assign_source_29 = MAKE_ITERATOR( tmp_iter_arg_3 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 139;
            type_description_1 = "ooocooococccccccococcocccco";
            goto try_except_handler_14;
        }
        assert( tmp_tuple_unpack_3__source_iter == NULL );
        tmp_tuple_unpack_3__source_iter = tmp_assign_source_29;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_30 = UNPACK_NEXT( tmp_unpack_6, 0 );
        if ( tmp_assign_source_30 == NULL )
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


            type_description_1 = "ooocooococccccccococcocccco";
            exception_lineno = 139;
            goto try_except_handler_15;
        }
        assert( tmp_tuple_unpack_3__element_1 == NULL );
        tmp_tuple_unpack_3__element_1 = tmp_assign_source_30;
    }
    {
        PyObject *tmp_iterator_name_3;
        CHECK_OBJECT( tmp_tuple_unpack_3__source_iter );
        tmp_iterator_name_3 = tmp_tuple_unpack_3__source_iter;
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

                    type_description_1 = "ooocooococccccccococcocccco";
                    exception_lineno = 139;
                    goto try_except_handler_15;
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
            PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

            type_description_1 = "ooocooococccccccococcocccco";
            exception_lineno = 139;
            goto try_except_handler_15;
        }
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_15:;
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

    goto try_except_handler_14;
    // End of try:
    try_end_10:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_14:;
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

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto try_except_handler_13;
    // End of try:
    try_end_11:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    {
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT( tmp_tuple_unpack_3__element_1 );
        tmp_assign_source_31 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_root;
            var_root = tmp_assign_source_31;
            Py_INCREF( var_root );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        if ( var_key == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "key" );
            exception_tb = NULL;

            exception_lineno = 140;
            type_description_1 = "ooocooococccccccococcocccco";
            goto try_except_handler_13;
        }

        tmp_compexpr_left_5 = var_key;
        if ( PyCell_GET( self->m_closure[7] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cache" );
            exception_tb = NULL;

            exception_lineno = 140;
            type_description_1 = "ooocooococccccccococcocccco";
            goto try_except_handler_13;
        }

        tmp_compexpr_right_5 = PyCell_GET( self->m_closure[7] );
        tmp_res = PySequence_Contains( tmp_compexpr_right_5, tmp_compexpr_left_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_1 = "ooocooococccccccococcocccco";
            goto try_except_handler_13;
        }
        tmp_condition_result_7 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_compexpr_left_6;
            PyObject *tmp_compexpr_right_6;
            PyObject *tmp_called_name_9;
            PyObject *tmp_args_element_name_8;
            if ( PyCell_GET( self->m_closure[6] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "_len" );
                exception_tb = NULL;

                exception_lineno = 146;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_13;
            }

            tmp_called_name_9 = PyCell_GET( self->m_closure[6] );
            if ( PyCell_GET( self->m_closure[7] ) == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cache" );
                exception_tb = NULL;

                exception_lineno = 146;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_13;
            }

            tmp_args_element_name_8 = PyCell_GET( self->m_closure[7] );
            frame_f80a96d5c901ffcd75233976861ed1b5->m_frame.f_lineno = 146;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_compexpr_left_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
            }

            if ( tmp_compexpr_left_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 146;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_13;
            }
            if ( PyCell_GET( self->m_closure[11] ) == NULL )
            {
                Py_DECREF( tmp_compexpr_left_6 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "maxsize" );
                exception_tb = NULL;

                exception_lineno = 146;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_13;
            }

            tmp_compexpr_right_6 = PyCell_GET( self->m_closure[11] );
            tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
            Py_DECREF( tmp_compexpr_left_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 146;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_13;
            }
            tmp_condition_result_8 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_7;
            }
            else
            {
                goto branch_no_7;
            }
            branch_yes_7:;
            {
                PyObject *tmp_assign_source_32;
                CHECK_OBJECT( var_root );
                tmp_assign_source_32 = var_root;
                assert( var_oldroot == NULL );
                Py_INCREF( tmp_assign_source_32 );
                var_oldroot = tmp_assign_source_32;
            }
            {
                PyObject *tmp_ass_subvalue_8;
                PyObject *tmp_ass_subscribed_8;
                PyObject *tmp_ass_subscript_8;
                if ( var_key == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "key" );
                    exception_tb = NULL;

                    exception_lineno = 149;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_13;
                }

                tmp_ass_subvalue_8 = var_key;
                CHECK_OBJECT( var_oldroot );
                tmp_ass_subscribed_8 = var_oldroot;
                if ( PyCell_GET( self->m_closure[1] ) == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "KEY" );
                    exception_tb = NULL;

                    exception_lineno = 149;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_13;
                }

                tmp_ass_subscript_8 = PyCell_GET( self->m_closure[1] );
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 149;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_13;
                }
            }
            {
                PyObject *tmp_ass_subvalue_9;
                PyObject *tmp_ass_subscribed_9;
                PyObject *tmp_ass_subscript_9;
                CHECK_OBJECT( var_result );
                tmp_ass_subvalue_9 = var_result;
                CHECK_OBJECT( var_oldroot );
                tmp_ass_subscribed_9 = var_oldroot;
                if ( PyCell_GET( self->m_closure[5] ) == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "RESULT" );
                    exception_tb = NULL;

                    exception_lineno = 150;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_13;
                }

                tmp_ass_subscript_9 = PyCell_GET( self->m_closure[5] );
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 150;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_13;
                }
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_33;
                PyObject *tmp_subscribed_name_3;
                PyObject *tmp_subscript_name_3;
                CHECK_OBJECT( var_oldroot );
                tmp_subscribed_name_3 = var_oldroot;
                if ( PyCell_GET( self->m_closure[3] ) == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "NEXT" );
                    exception_tb = NULL;

                    exception_lineno = 152;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_16;
                }

                tmp_subscript_name_3 = PyCell_GET( self->m_closure[3] );
                tmp_assign_source_33 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
                if ( tmp_assign_source_33 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 152;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_16;
                }
                assert( tmp_assign_unpack_2__assign_source == NULL );
                tmp_assign_unpack_2__assign_source = tmp_assign_source_33;
            }
            {
                PyObject *tmp_assign_source_34;
                CHECK_OBJECT( tmp_assign_unpack_2__assign_source );
                tmp_assign_source_34 = tmp_assign_unpack_2__assign_source;
                {
                    PyObject *old = var_root;
                    assert( old != NULL );
                    var_root = tmp_assign_source_34;
                    Py_INCREF( var_root );
                    Py_DECREF( old );
                }

            }
            {
                PyObject *tmp_ass_subvalue_10;
                PyObject *tmp_ass_subscribed_10;
                PyObject *tmp_ass_subscript_10;
                int tmp_ass_subscript_res_1;
                CHECK_OBJECT( tmp_assign_unpack_2__assign_source );
                tmp_ass_subvalue_10 = tmp_assign_unpack_2__assign_source;
                if ( PyCell_GET( self->m_closure[12] ) == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "nonlocal_root" );
                    exception_tb = NULL;

                    exception_lineno = 152;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_16;
                }

                tmp_ass_subscribed_10 = PyCell_GET( self->m_closure[12] );
                tmp_ass_subscript_10 = const_int_0;
                tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_10, tmp_ass_subscript_10, 0, tmp_ass_subvalue_10 );
                if ( tmp_ass_subscript_res_1 == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 152;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_16;
                }
            }
            goto try_end_12;
            // Exception handler code:
            try_except_handler_16:;
            exception_keeper_type_12 = exception_type;
            exception_keeper_value_12 = exception_value;
            exception_keeper_tb_12 = exception_tb;
            exception_keeper_lineno_12 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( tmp_assign_unpack_2__assign_source );
            tmp_assign_unpack_2__assign_source = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_12;
            exception_value = exception_keeper_value_12;
            exception_tb = exception_keeper_tb_12;
            exception_lineno = exception_keeper_lineno_12;

            goto try_except_handler_13;
            // End of try:
            try_end_12:;
            CHECK_OBJECT( (PyObject *)tmp_assign_unpack_2__assign_source );
            Py_DECREF( tmp_assign_unpack_2__assign_source );
            tmp_assign_unpack_2__assign_source = NULL;

            {
                PyObject *tmp_assign_source_35;
                PyObject *tmp_subscribed_name_4;
                PyObject *tmp_subscript_name_4;
                CHECK_OBJECT( var_root );
                tmp_subscribed_name_4 = var_root;
                if ( PyCell_GET( self->m_closure[1] ) == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "KEY" );
                    exception_tb = NULL;

                    exception_lineno = 153;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_13;
                }

                tmp_subscript_name_4 = PyCell_GET( self->m_closure[1] );
                tmp_assign_source_35 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
                if ( tmp_assign_source_35 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 153;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_13;
                }
                assert( var_oldkey == NULL );
                var_oldkey = tmp_assign_source_35;
            }
            {
                PyObject *tmp_ass_subvalue_11;
                PyObject *tmp_ass_subscribed_11;
                PyObject *tmp_ass_subscript_11;
                tmp_ass_subvalue_11 = Py_None;
                CHECK_OBJECT( var_root );
                tmp_ass_subscribed_11 = var_root;
                if ( PyCell_GET( self->m_closure[1] ) == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "KEY" );
                    exception_tb = NULL;

                    exception_lineno = 154;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_13;
                }

                tmp_ass_subscript_11 = PyCell_GET( self->m_closure[1] );
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 154;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_13;
                }
            }
            {
                PyObject *tmp_ass_subvalue_12;
                PyObject *tmp_ass_subscribed_12;
                PyObject *tmp_ass_subscript_12;
                tmp_ass_subvalue_12 = Py_None;
                CHECK_OBJECT( var_root );
                tmp_ass_subscribed_12 = var_root;
                if ( PyCell_GET( self->m_closure[5] ) == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "RESULT" );
                    exception_tb = NULL;

                    exception_lineno = 154;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_13;
                }

                tmp_ass_subscript_12 = PyCell_GET( self->m_closure[5] );
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 154;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_13;
                }
            }
            {
                PyObject *tmp_delsubscr_target_1;
                PyObject *tmp_delsubscr_subscript_1;
                if ( PyCell_GET( self->m_closure[7] ) == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cache" );
                    exception_tb = NULL;

                    exception_lineno = 156;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_13;
                }

                tmp_delsubscr_target_1 = PyCell_GET( self->m_closure[7] );
                CHECK_OBJECT( var_oldkey );
                tmp_delsubscr_subscript_1 = var_oldkey;
                tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 156;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_13;
                }
            }
            {
                PyObject *tmp_ass_subvalue_13;
                PyObject *tmp_ass_subscribed_13;
                PyObject *tmp_ass_subscript_13;
                CHECK_OBJECT( var_oldroot );
                tmp_ass_subvalue_13 = var_oldroot;
                if ( PyCell_GET( self->m_closure[7] ) == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cache" );
                    exception_tb = NULL;

                    exception_lineno = 157;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_13;
                }

                tmp_ass_subscribed_13 = PyCell_GET( self->m_closure[7] );
                if ( var_key == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "key" );
                    exception_tb = NULL;

                    exception_lineno = 157;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_13;
                }

                tmp_ass_subscript_13 = var_key;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 157;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_13;
                }
            }
            goto branch_end_7;
            branch_no_7:;
            {
                PyObject *tmp_assign_source_36;
                PyObject *tmp_subscribed_name_5;
                PyObject *tmp_subscript_name_5;
                CHECK_OBJECT( var_root );
                tmp_subscribed_name_5 = var_root;
                if ( PyCell_GET( self->m_closure[4] ) == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "PREV" );
                    exception_tb = NULL;

                    exception_lineno = 160;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_13;
                }

                tmp_subscript_name_5 = PyCell_GET( self->m_closure[4] );
                tmp_assign_source_36 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
                if ( tmp_assign_source_36 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 160;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_13;
                }
                {
                    PyObject *old = var_last;
                    var_last = tmp_assign_source_36;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_37;
                PyObject *tmp_list_element_1;
                CHECK_OBJECT( var_last );
                tmp_list_element_1 = var_last;
                tmp_assign_source_37 = PyList_New( 4 );
                Py_INCREF( tmp_list_element_1 );
                PyList_SET_ITEM( tmp_assign_source_37, 0, tmp_list_element_1 );
                CHECK_OBJECT( var_root );
                tmp_list_element_1 = var_root;
                Py_INCREF( tmp_list_element_1 );
                PyList_SET_ITEM( tmp_assign_source_37, 1, tmp_list_element_1 );
                if ( var_key == NULL )
                {
                    Py_DECREF( tmp_assign_source_37 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "key" );
                    exception_tb = NULL;

                    exception_lineno = 161;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_13;
                }

                tmp_list_element_1 = var_key;
                Py_INCREF( tmp_list_element_1 );
                PyList_SET_ITEM( tmp_assign_source_37, 2, tmp_list_element_1 );
                CHECK_OBJECT( var_result );
                tmp_list_element_1 = var_result;
                Py_INCREF( tmp_list_element_1 );
                PyList_SET_ITEM( tmp_assign_source_37, 3, tmp_list_element_1 );
                {
                    PyObject *old = var_link;
                    var_link = tmp_assign_source_37;
                    Py_XDECREF( old );
                }

            }
            {
                PyObject *tmp_assign_source_38;
                CHECK_OBJECT( var_link );
                tmp_assign_source_38 = var_link;
                assert( tmp_assign_unpack_4__assign_source == NULL );
                Py_INCREF( tmp_assign_source_38 );
                tmp_assign_unpack_4__assign_source = tmp_assign_source_38;
            }
            // Tried code:
            {
                PyObject *tmp_ass_subvalue_14;
                PyObject *tmp_ass_subscribed_14;
                PyObject *tmp_ass_subscript_14;
                CHECK_OBJECT( tmp_assign_unpack_4__assign_source );
                tmp_ass_subvalue_14 = tmp_assign_unpack_4__assign_source;
                CHECK_OBJECT( var_last );
                tmp_ass_subscribed_14 = var_last;
                if ( PyCell_GET( self->m_closure[3] ) == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "NEXT" );
                    exception_tb = NULL;

                    exception_lineno = 162;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_17;
                }

                tmp_ass_subscript_14 = PyCell_GET( self->m_closure[3] );
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 162;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_17;
                }
            }
            {
                PyObject *tmp_ass_subvalue_15;
                PyObject *tmp_ass_subscribed_15;
                PyObject *tmp_ass_subscript_15;
                CHECK_OBJECT( tmp_assign_unpack_4__assign_source );
                tmp_ass_subvalue_15 = tmp_assign_unpack_4__assign_source;
                CHECK_OBJECT( var_root );
                tmp_ass_subscribed_15 = var_root;
                if ( PyCell_GET( self->m_closure[4] ) == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "PREV" );
                    exception_tb = NULL;

                    exception_lineno = 162;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_17;
                }

                tmp_ass_subscript_15 = PyCell_GET( self->m_closure[4] );
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 162;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_17;
                }
            }
            {
                PyObject *tmp_ass_subvalue_16;
                PyObject *tmp_ass_subscribed_16;
                PyObject *tmp_ass_subscript_16;
                CHECK_OBJECT( tmp_assign_unpack_4__assign_source );
                tmp_ass_subvalue_16 = tmp_assign_unpack_4__assign_source;
                if ( PyCell_GET( self->m_closure[7] ) == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cache" );
                    exception_tb = NULL;

                    exception_lineno = 162;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_17;
                }

                tmp_ass_subscribed_16 = PyCell_GET( self->m_closure[7] );
                if ( var_key == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "key" );
                    exception_tb = NULL;

                    exception_lineno = 162;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_17;
                }

                tmp_ass_subscript_16 = var_key;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 162;
                    type_description_1 = "ooocooococccccccococcocccco";
                    goto try_except_handler_17;
                }
            }
            goto try_end_13;
            // Exception handler code:
            try_except_handler_17:;
            exception_keeper_type_13 = exception_type;
            exception_keeper_value_13 = exception_value;
            exception_keeper_tb_13 = exception_tb;
            exception_keeper_lineno_13 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT( (PyObject *)tmp_assign_unpack_4__assign_source );
            Py_DECREF( tmp_assign_unpack_4__assign_source );
            tmp_assign_unpack_4__assign_source = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_13;
            exception_value = exception_keeper_value_13;
            exception_tb = exception_keeper_tb_13;
            exception_lineno = exception_keeper_lineno_13;

            goto try_except_handler_13;
            // End of try:
            try_end_13:;
            CHECK_OBJECT( (PyObject *)tmp_assign_unpack_4__assign_source );
            Py_DECREF( tmp_assign_unpack_4__assign_source );
            tmp_assign_unpack_4__assign_source = NULL;

            branch_end_7:;
        }
        branch_no_6:;
    }
    {
        PyObject *tmp_assign_source_39;
        if ( PyCell_GET( self->m_closure[13] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "stats" );
            exception_tb = NULL;

            exception_lineno = 163;
            type_description_1 = "ooocooococccccccococcocccco";
            goto try_except_handler_13;
        }

        tmp_assign_source_39 = PyCell_GET( self->m_closure[13] );
        assert( tmp_inplace_assign_subscr_2__target == NULL );
        Py_INCREF( tmp_assign_source_39 );
        tmp_inplace_assign_subscr_2__target = tmp_assign_source_39;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_40;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "MISSES" );
            exception_tb = NULL;

            exception_lineno = 163;
            type_description_1 = "ooocooococccccccococcocccco";
            goto try_except_handler_18;
        }

        tmp_assign_source_40 = PyCell_GET( self->m_closure[2] );
        assert( tmp_inplace_assign_subscr_2__subscript == NULL );
        Py_INCREF( tmp_assign_source_40 );
        tmp_inplace_assign_subscr_2__subscript = tmp_assign_source_40;
    }
    {
        PyObject *tmp_ass_subvalue_17;
        PyObject *tmp_left_name_2;
        PyObject *tmp_subscribed_name_6;
        PyObject *tmp_subscript_name_6;
        PyObject *tmp_right_name_2;
        PyObject *tmp_ass_subscribed_17;
        PyObject *tmp_ass_subscript_17;
        CHECK_OBJECT( tmp_inplace_assign_subscr_2__target );
        tmp_subscribed_name_6 = tmp_inplace_assign_subscr_2__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_2__subscript );
        tmp_subscript_name_6 = tmp_inplace_assign_subscr_2__subscript;
        tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
        if ( tmp_left_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "ooocooococccccccococcocccco";
            goto try_except_handler_18;
        }
        tmp_right_name_2 = const_int_pos_1;
        tmp_ass_subvalue_17 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_2, tmp_right_name_2 );
        Py_DECREF( tmp_left_name_2 );
        if ( tmp_ass_subvalue_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "ooocooococccccccococcocccco";
            goto try_except_handler_18;
        }
        CHECK_OBJECT( tmp_inplace_assign_subscr_2__target );
        tmp_ass_subscribed_17 = tmp_inplace_assign_subscr_2__target;
        CHECK_OBJECT( tmp_inplace_assign_subscr_2__subscript );
        tmp_ass_subscript_17 = tmp_inplace_assign_subscr_2__subscript;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17 );
        Py_DECREF( tmp_ass_subvalue_17 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "ooocooococccccccococcocccco";
            goto try_except_handler_18;
        }
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__target );
    Py_DECREF( tmp_inplace_assign_subscr_2__target );
    tmp_inplace_assign_subscr_2__target = NULL;

    Py_XDECREF( tmp_inplace_assign_subscr_2__subscript );
    tmp_inplace_assign_subscr_2__subscript = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_13;
    // End of try:
    try_end_14:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__target );
    Py_DECREF( tmp_inplace_assign_subscr_2__target );
    tmp_inplace_assign_subscr_2__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_2__subscript );
    tmp_inplace_assign_subscr_2__subscript = NULL;

    goto try_end_15;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_f80a96d5c901ffcd75233976861ed1b5 );
    if ( exception_keeper_tb_15 == NULL )
    {
        exception_keeper_tb_15 = MAKE_TRACEBACK( frame_f80a96d5c901ffcd75233976861ed1b5, exception_keeper_lineno_15 );
    }
    else if ( exception_keeper_lineno_15 != 0 )
    {
        exception_keeper_tb_15 = ADD_TRACEBACK( exception_keeper_tb_15, frame_f80a96d5c901ffcd75233976861ed1b5, exception_keeper_lineno_15 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_15, &exception_keeper_value_15, &exception_keeper_tb_15 );
    PUBLISH_EXCEPTION( &exception_keeper_type_15, &exception_keeper_value_15, &exception_keeper_tb_15 );
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        tmp_compexpr_left_7 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_7 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_7, tmp_compexpr_right_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "ooocooococccccccococcocccco";
            goto try_except_handler_12;
        }
        tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_8;
        }
        else
        {
            goto branch_no_8;
        }
        branch_yes_8:;
        {
            nuitka_bool tmp_assign_source_41;
            tmp_assign_source_41 = NUITKA_BOOL_FALSE;
            tmp_with_2__indicator = tmp_assign_source_41;
        }
        {
            nuitka_bool tmp_condition_result_10;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_called_name_10;
            PyObject *tmp_args_element_name_9;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            CHECK_OBJECT( tmp_with_2__exit );
            tmp_called_name_10 = tmp_with_2__exit;
            tmp_args_element_name_9 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_10 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_11 = EXC_TRACEBACK(PyThreadState_GET());
            frame_f80a96d5c901ffcd75233976861ed1b5->m_frame.f_lineno = 138;
            {
                PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
                tmp_operand_name_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, call_args );
            }

            if ( tmp_operand_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 138;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_12;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            Py_DECREF( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 138;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_12;
            }
            tmp_condition_result_10 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_9;
            }
            else
            {
                goto branch_no_9;
            }
            branch_yes_9:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 138;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_f80a96d5c901ffcd75233976861ed1b5->m_frame) frame_f80a96d5c901ffcd75233976861ed1b5->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooocooococccccccococcocccco";
            goto try_except_handler_12;
            branch_no_9:;
        }
        goto branch_end_8;
        branch_no_8:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 138;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_f80a96d5c901ffcd75233976861ed1b5->m_frame) frame_f80a96d5c901ffcd75233976861ed1b5->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooocooococccccccococcocccco";
        goto try_except_handler_12;
        branch_end_8:;
    }
    goto try_end_15;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_3_wrapper );
    return NULL;
    // End of try:
    try_end_15:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        nuitka_bool tmp_condition_result_11;
        nuitka_bool tmp_compexpr_left_8;
        nuitka_bool tmp_compexpr_right_8;
        assert( tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_8 = tmp_with_2__indicator;
        tmp_compexpr_right_8 = NUITKA_BOOL_TRUE;
        tmp_condition_result_11 = ( tmp_compexpr_left_8 == tmp_compexpr_right_8 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_10;
        }
        else
        {
            goto branch_no_10;
        }
        branch_yes_10:;
        {
            PyObject *tmp_called_name_11;
            PyObject *tmp_call_result_4;
            CHECK_OBJECT( tmp_with_2__exit );
            tmp_called_name_11 = tmp_with_2__exit;
            frame_f80a96d5c901ffcd75233976861ed1b5->m_frame.f_lineno = 138;
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_11, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_16 );
                Py_XDECREF( exception_keeper_value_16 );
                Py_XDECREF( exception_keeper_tb_16 );

                exception_lineno = 138;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_11;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        branch_no_10:;
    }
    // Re-raise.
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_11;
    // End of try:
    try_end_16:;
    {
        nuitka_bool tmp_condition_result_12;
        nuitka_bool tmp_compexpr_left_9;
        nuitka_bool tmp_compexpr_right_9;
        assert( tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_9 = tmp_with_2__indicator;
        tmp_compexpr_right_9 = NUITKA_BOOL_TRUE;
        tmp_condition_result_12 = ( tmp_compexpr_left_9 == tmp_compexpr_right_9 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_11;
        }
        else
        {
            goto branch_no_11;
        }
        branch_yes_11:;
        {
            PyObject *tmp_called_name_12;
            PyObject *tmp_call_result_5;
            CHECK_OBJECT( tmp_with_2__exit );
            tmp_called_name_12 = tmp_with_2__exit;
            frame_f80a96d5c901ffcd75233976861ed1b5->m_frame.f_lineno = 138;
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_12, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 138;
                type_description_1 = "ooocooococccccccococcocccco";
                goto try_except_handler_11;
            }
            Py_DECREF( tmp_call_result_5 );
        }
        branch_no_11:;
    }
    goto try_end_17;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_with_2__source );
    tmp_with_2__source = NULL;

    Py_XDECREF( tmp_with_2__enter );
    tmp_with_2__enter = NULL;

    Py_XDECREF( tmp_with_2__exit );
    tmp_with_2__exit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_f80a96d5c901ffcd75233976861ed1b5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_f80a96d5c901ffcd75233976861ed1b5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_f80a96d5c901ffcd75233976861ed1b5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f80a96d5c901ffcd75233976861ed1b5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f80a96d5c901ffcd75233976861ed1b5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f80a96d5c901ffcd75233976861ed1b5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f80a96d5c901ffcd75233976861ed1b5,
        type_description_1,
        par_args,
        par_kwds,
        var_link_prev,
        self->m_closure[9],
        var_oldroot,
        var_result,
        var_oldkey,
        self->m_closure[13],
        var_link_next,
        self->m_closure[7],
        self->m_closure[3],
        self->m_closure[11],
        self->m_closure[15],
        self->m_closure[12],
        self->m_closure[6],
        self->m_closure[14],
        var_link,
        self->m_closure[5],
        var_key,
        self->m_closure[8],
        self->m_closure[0],
        var_last,
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[10],
        self->m_closure[4],
        var_root
    );


    // Release cached frame.
    if ( frame_f80a96d5c901ffcd75233976861ed1b5 == cache_frame_f80a96d5c901ffcd75233976861ed1b5 )
    {
        Py_DECREF( frame_f80a96d5c901ffcd75233976861ed1b5 );
    }
    cache_frame_f80a96d5c901ffcd75233976861ed1b5 = NULL;

    assertFrameObject( frame_f80a96d5c901ffcd75233976861ed1b5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_with_2__source );
    Py_DECREF( tmp_with_2__source );
    tmp_with_2__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_2__enter );
    Py_DECREF( tmp_with_2__enter );
    tmp_with_2__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_2__exit );
    Py_DECREF( tmp_with_2__exit );
    tmp_with_2__exit = NULL;

    CHECK_OBJECT( var_result );
    tmp_return_value = var_result;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_3_wrapper );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_link_prev );
    var_link_prev = NULL;

    Py_XDECREF( var_oldroot );
    var_oldroot = NULL;

    CHECK_OBJECT( (PyObject *)var_result );
    Py_DECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_oldkey );
    var_oldkey = NULL;

    Py_XDECREF( var_link_next );
    var_link_next = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_link );
    var_link = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_last );
    var_last = NULL;

    CHECK_OBJECT( (PyObject *)par_kwds );
    Py_DECREF( par_kwds );
    par_kwds = NULL;

    Py_XDECREF( var_root );
    var_root = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_link_prev );
    var_link_prev = NULL;

    Py_XDECREF( var_oldroot );
    var_oldroot = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

    Py_XDECREF( var_oldkey );
    var_oldkey = NULL;

    Py_XDECREF( var_link_next );
    var_link_next = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_link );
    var_link = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    Py_XDECREF( var_last );
    var_last = NULL;

    CHECK_OBJECT( (PyObject *)par_kwds );
    Py_DECREF( par_kwds );
    par_kwds = NULL;

    Py_XDECREF( var_root );
    var_root = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_3_wrapper );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_4_cache_info( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_a29bc699eb58817aac6764e9d6966c58;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_a29bc699eb58817aac6764e9d6966c58 = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_a29bc699eb58817aac6764e9d6966c58, codeobj_a29bc699eb58817aac6764e9d6966c58, module_backports$functools_lru_cache, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a29bc699eb58817aac6764e9d6966c58 = cache_frame_a29bc699eb58817aac6764e9d6966c58;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a29bc699eb58817aac6764e9d6966c58 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a29bc699eb58817aac6764e9d6966c58 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        if ( PyCell_GET( self->m_closure[3] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "lock" );
            exception_tb = NULL;

            exception_lineno = 168;
            type_description_1 = "cccccc";
            goto try_except_handler_1;
        }

        tmp_assign_source_1 = PyCell_GET( self->m_closure[3] );
        assert( tmp_with_1__source == NULL );
        Py_INCREF( tmp_assign_source_1 );
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_1 = tmp_with_1__source;
        tmp_assign_source_2 = LOOKUP_SPECIAL( tmp_source_name_1, const_str_plain___exit__ );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "cccccc";
            goto try_except_handler_1;
        }
        assert( tmp_with_1__exit == NULL );
        tmp_with_1__exit = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_2 = tmp_with_1__source;
        tmp_called_name_1 = LOOKUP_SPECIAL( tmp_source_name_2, const_str_plain___enter__ );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "cccccc";
            goto try_except_handler_1;
        }
        frame_a29bc699eb58817aac6764e9d6966c58->m_frame.f_lineno = 168;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "cccccc";
            goto try_except_handler_1;
        }
        assert( tmp_with_1__enter == NULL );
        tmp_with_1__enter = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_4;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_subscript_name_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_len_arg_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain__CacheInfo );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__CacheInfo );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_CacheInfo" );
            exception_tb = NULL;

            exception_lineno = 169;
            type_description_1 = "cccccc";
            goto try_except_handler_3;
        }

        tmp_called_name_2 = tmp_mvar_value_1;
        if ( PyCell_GET( self->m_closure[5] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "stats" );
            exception_tb = NULL;

            exception_lineno = 169;
            type_description_1 = "cccccc";
            goto try_except_handler_3;
        }

        tmp_subscribed_name_1 = PyCell_GET( self->m_closure[5] );
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "HITS" );
            exception_tb = NULL;

            exception_lineno = 169;
            type_description_1 = "cccccc";
            goto try_except_handler_3;
        }

        tmp_subscript_name_1 = PyCell_GET( self->m_closure[0] );
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "cccccc";
            goto try_except_handler_3;
        }
        if ( PyCell_GET( self->m_closure[5] ) == NULL )
        {
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "stats" );
            exception_tb = NULL;

            exception_lineno = 169;
            type_description_1 = "cccccc";
            goto try_except_handler_3;
        }

        tmp_subscribed_name_2 = PyCell_GET( self->m_closure[5] );
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "MISSES" );
            exception_tb = NULL;

            exception_lineno = 169;
            type_description_1 = "cccccc";
            goto try_except_handler_3;
        }

        tmp_subscript_name_2 = PyCell_GET( self->m_closure[1] );
        tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 169;
            type_description_1 = "cccccc";
            goto try_except_handler_3;
        }
        if ( PyCell_GET( self->m_closure[4] ) == NULL )
        {
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "maxsize" );
            exception_tb = NULL;

            exception_lineno = 169;
            type_description_1 = "cccccc";
            goto try_except_handler_3;
        }

        tmp_args_element_name_3 = PyCell_GET( self->m_closure[4] );
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cache" );
            exception_tb = NULL;

            exception_lineno = 169;
            type_description_1 = "cccccc";
            goto try_except_handler_3;
        }

        tmp_len_arg_1 = PyCell_GET( self->m_closure[2] );
        tmp_args_element_name_4 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );

            exception_lineno = 169;
            type_description_1 = "cccccc";
            goto try_except_handler_3;
        }
        frame_a29bc699eb58817aac6764e9d6966c58->m_frame.f_lineno = 169;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "cccccc";
            goto try_except_handler_3;
        }
        goto try_return_handler_2;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_4_cache_info );
    return NULL;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_a29bc699eb58817aac6764e9d6966c58 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_a29bc699eb58817aac6764e9d6966c58, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_a29bc699eb58817aac6764e9d6966c58, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "cccccc";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            nuitka_bool tmp_assign_source_5;
            tmp_assign_source_5 = NUITKA_BOOL_FALSE;
            tmp_with_1__indicator = tmp_assign_source_5;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_args_element_name_7;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_3 = tmp_with_1__exit;
            tmp_args_element_name_5 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_6 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_7 = EXC_TRACEBACK(PyThreadState_GET());
            frame_a29bc699eb58817aac6764e9d6966c58->m_frame.f_lineno = 168;
            {
                PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
            }

            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 168;
                type_description_1 = "cccccc";
                goto try_except_handler_2;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 168;
                type_description_1 = "cccccc";
                goto try_except_handler_2;
            }
            tmp_condition_result_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 168;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_a29bc699eb58817aac6764e9d6966c58->m_frame) frame_a29bc699eb58817aac6764e9d6966c58->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "cccccc";
            goto try_except_handler_2;
            branch_no_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 168;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_a29bc699eb58817aac6764e9d6966c58->m_frame) frame_a29bc699eb58817aac6764e9d6966c58->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "cccccc";
        goto try_except_handler_2;
        branch_end_1:;
    }
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_4_cache_info );
    return NULL;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Return handler code:
    try_return_handler_2:;
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( tmp_with_1__exit );
        tmp_called_name_4 = tmp_with_1__exit;
        frame_a29bc699eb58817aac6764e9d6966c58->m_frame.f_lineno = 168;
        tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 168;
            type_description_1 = "cccccc";
            goto try_except_handler_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    goto try_return_handler_1;
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

    {
        nuitka_bool tmp_condition_result_3;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = tmp_with_1__indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_called_name_5;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_5 = tmp_with_1__exit;
            frame_a29bc699eb58817aac6764e9d6966c58->m_frame.f_lineno = 168;
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_2 );
                Py_XDECREF( exception_keeper_value_2 );
                Py_XDECREF( exception_keeper_tb_2 );

                exception_lineno = 168;
                type_description_1 = "cccccc";
                goto try_except_handler_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_3:;
    }
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_1;
    // End of try:
    try_end_2:;
    {
        nuitka_bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_called_name_6;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_6 = tmp_with_1__exit;
            frame_a29bc699eb58817aac6764e9d6966c58->m_frame.f_lineno = 168;
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 168;
                type_description_1 = "cccccc";
                goto try_except_handler_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_4:;
    }
    goto try_end_3;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    goto frame_return_exit_1;
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

    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_a29bc699eb58817aac6764e9d6966c58 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_a29bc699eb58817aac6764e9d6966c58 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_a29bc699eb58817aac6764e9d6966c58 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a29bc699eb58817aac6764e9d6966c58, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a29bc699eb58817aac6764e9d6966c58->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a29bc699eb58817aac6764e9d6966c58, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a29bc699eb58817aac6764e9d6966c58,
        type_description_1,
        self->m_closure[0],
        self->m_closure[5],
        self->m_closure[3],
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[4]
    );


    // Release cached frame.
    if ( frame_a29bc699eb58817aac6764e9d6966c58 == cache_frame_a29bc699eb58817aac6764e9d6966c58 )
    {
        Py_DECREF( frame_a29bc699eb58817aac6764e9d6966c58 );
    }
    cache_frame_a29bc699eb58817aac6764e9d6966c58 = NULL;

    assertFrameObject( frame_a29bc699eb58817aac6764e9d6966c58 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_4_cache_info );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_5_cache_clear( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_root = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_6892888b2d7a1bddfad8f7c1ff5ae9d6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_6892888b2d7a1bddfad8f7c1ff5ae9d6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6892888b2d7a1bddfad8f7c1ff5ae9d6, codeobj_6892888b2d7a1bddfad8f7c1ff5ae9d6, module_backports$functools_lru_cache, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6892888b2d7a1bddfad8f7c1ff5ae9d6 = cache_frame_6892888b2d7a1bddfad8f7c1ff5ae9d6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6892888b2d7a1bddfad8f7c1ff5ae9d6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6892888b2d7a1bddfad8f7c1ff5ae9d6 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        if ( PyCell_GET( self->m_closure[1] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "lock" );
            exception_tb = NULL;

            exception_lineno = 173;
            type_description_1 = "cccoc";
            goto try_except_handler_2;
        }

        tmp_assign_source_1 = PyCell_GET( self->m_closure[1] );
        assert( tmp_with_1__source == NULL );
        Py_INCREF( tmp_assign_source_1 );
        tmp_with_1__source = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_1 = tmp_with_1__source;
        tmp_assign_source_2 = LOOKUP_SPECIAL( tmp_source_name_1, const_str_plain___exit__ );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;
            type_description_1 = "cccoc";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__exit == NULL );
        tmp_with_1__exit = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( tmp_with_1__source );
        tmp_source_name_2 = tmp_with_1__source;
        tmp_called_name_1 = LOOKUP_SPECIAL( tmp_source_name_2, const_str_plain___enter__ );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;
            type_description_1 = "cccoc";
            goto try_except_handler_2;
        }
        frame_6892888b2d7a1bddfad8f7c1ff5ae9d6->m_frame.f_lineno = 173;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;
            type_description_1 = "cccoc";
            goto try_except_handler_2;
        }
        assert( tmp_with_1__enter == NULL );
        tmp_with_1__enter = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_assign_source_4;
        tmp_assign_source_4 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_4;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "cache" );
            exception_tb = NULL;

            exception_lineno = 174;
            type_description_1 = "cccoc";
            goto try_except_handler_4;
        }

        tmp_called_instance_1 = PyCell_GET( self->m_closure[0] );
        frame_6892888b2d7a1bddfad8f7c1ff5ae9d6->m_frame.f_lineno = 174;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_clear );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;
            type_description_1 = "cccoc";
            goto try_except_handler_4;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_subscript_name_1;
        if ( PyCell_GET( self->m_closure[2] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "nonlocal_root" );
            exception_tb = NULL;

            exception_lineno = 175;
            type_description_1 = "cccoc";
            goto try_except_handler_4;
        }

        tmp_subscribed_name_1 = PyCell_GET( self->m_closure[2] );
        tmp_subscript_name_1 = const_int_0;
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 175;
            type_description_1 = "cccoc";
            goto try_except_handler_4;
        }
        assert( var_root == NULL );
        var_root = tmp_assign_source_5;
    }
    {
        PyObject *tmp_sliceass_value_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_sliceass_target_1;
        Py_ssize_t tmp_sliceassslicedel_index_lower_1;
        Py_ssize_t tmp_sliceass_index_upper_1;
        CHECK_OBJECT( var_root );
        tmp_list_element_1 = var_root;
        tmp_sliceass_value_1 = PyList_New( 4 );
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_sliceass_value_1, 0, tmp_list_element_1 );
        CHECK_OBJECT( var_root );
        tmp_list_element_1 = var_root;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_sliceass_value_1, 1, tmp_list_element_1 );
        tmp_list_element_1 = Py_None;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_sliceass_value_1, 2, tmp_list_element_1 );
        tmp_list_element_1 = Py_None;
        Py_INCREF( tmp_list_element_1 );
        PyList_SET_ITEM( tmp_sliceass_value_1, 3, tmp_list_element_1 );
        CHECK_OBJECT( var_root );
        tmp_sliceass_target_1 = var_root;
        tmp_sliceassslicedel_index_lower_1 = 0;
        tmp_sliceass_index_upper_1 = PY_SSIZE_T_MAX;
        tmp_result = SET_INDEX_SLICE( tmp_sliceass_target_1, tmp_sliceassslicedel_index_lower_1, tmp_sliceass_index_upper_1, tmp_sliceass_value_1 );
        Py_DECREF( tmp_sliceass_value_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "cccoc";
            goto try_except_handler_4;
        }
    }
    {
        PyObject *tmp_sliceass_value_2;
        PyObject *tmp_sliceass_target_2;
        Py_ssize_t tmp_sliceassslicedel_index_lower_2;
        Py_ssize_t tmp_sliceass_index_upper_2;
        tmp_sliceass_value_2 = LIST_COPY( const_list_int_0_int_0_list );
        if ( PyCell_GET( self->m_closure[3] ) == NULL )
        {
            Py_DECREF( tmp_sliceass_value_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "stats" );
            exception_tb = NULL;

            exception_lineno = 177;
            type_description_1 = "cccoc";
            goto try_except_handler_4;
        }

        tmp_sliceass_target_2 = PyCell_GET( self->m_closure[3] );
        tmp_sliceassslicedel_index_lower_2 = 0;
        tmp_sliceass_index_upper_2 = PY_SSIZE_T_MAX;
        tmp_result = SET_INDEX_SLICE( tmp_sliceass_target_2, tmp_sliceassslicedel_index_lower_2, tmp_sliceass_index_upper_2, tmp_sliceass_value_2 );
        Py_DECREF( tmp_sliceass_value_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 177;
            type_description_1 = "cccoc";
            goto try_except_handler_4;
        }
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_6892888b2d7a1bddfad8f7c1ff5ae9d6 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_6892888b2d7a1bddfad8f7c1ff5ae9d6, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_6892888b2d7a1bddfad8f7c1ff5ae9d6, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;
            type_description_1 = "cccoc";
            goto try_except_handler_3;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            nuitka_bool tmp_assign_source_6;
            tmp_assign_source_6 = NUITKA_BOOL_FALSE;
            tmp_with_1__indicator = tmp_assign_source_6;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_2 = tmp_with_1__exit;
            tmp_args_element_name_1 = EXC_TYPE(PyThreadState_GET());
            tmp_args_element_name_2 = EXC_VALUE(PyThreadState_GET());
            tmp_args_element_name_3 = EXC_TRACEBACK(PyThreadState_GET());
            frame_6892888b2d7a1bddfad8f7c1ff5ae9d6->m_frame.f_lineno = 173;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
            }

            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 173;
                type_description_1 = "cccoc";
                goto try_except_handler_3;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 173;
                type_description_1 = "cccoc";
                goto try_except_handler_3;
            }
            tmp_condition_result_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 173;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_6892888b2d7a1bddfad8f7c1ff5ae9d6->m_frame) frame_6892888b2d7a1bddfad8f7c1ff5ae9d6->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "cccoc";
            goto try_except_handler_3;
            branch_no_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 173;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_6892888b2d7a1bddfad8f7c1ff5ae9d6->m_frame) frame_6892888b2d7a1bddfad8f7c1ff5ae9d6->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "cccoc";
        goto try_except_handler_3;
        branch_end_1:;
    }
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_5_cache_clear );
    return NULL;
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

    {
        nuitka_bool tmp_condition_result_3;
        nuitka_bool tmp_compexpr_left_2;
        nuitka_bool tmp_compexpr_right_2;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_2 = tmp_with_1__indicator;
        tmp_compexpr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_3 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_3 = tmp_with_1__exit;
            frame_6892888b2d7a1bddfad8f7c1ff5ae9d6->m_frame.f_lineno = 173;
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                Py_DECREF( exception_keeper_type_2 );
                Py_XDECREF( exception_keeper_value_2 );
                Py_XDECREF( exception_keeper_tb_2 );

                exception_lineno = 173;
                type_description_1 = "cccoc";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_3:;
    }
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    {
        nuitka_bool tmp_condition_result_4;
        nuitka_bool tmp_compexpr_left_3;
        nuitka_bool tmp_compexpr_right_3;
        assert( tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_compexpr_left_3 = tmp_with_1__indicator;
        tmp_compexpr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_4;
        }
        else
        {
            goto branch_no_4;
        }
        branch_yes_4:;
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT( tmp_with_1__exit );
            tmp_called_name_4 = tmp_with_1__exit;
            frame_6892888b2d7a1bddfad8f7c1ff5ae9d6->m_frame.f_lineno = 173;
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 173;
                type_description_1 = "cccoc";
                goto try_except_handler_2;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_4:;
    }
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

    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_6892888b2d7a1bddfad8f7c1ff5ae9d6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_6892888b2d7a1bddfad8f7c1ff5ae9d6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6892888b2d7a1bddfad8f7c1ff5ae9d6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6892888b2d7a1bddfad8f7c1ff5ae9d6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6892888b2d7a1bddfad8f7c1ff5ae9d6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6892888b2d7a1bddfad8f7c1ff5ae9d6,
        type_description_1,
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[0],
        var_root,
        self->m_closure[3]
    );


    // Release cached frame.
    if ( frame_6892888b2d7a1bddfad8f7c1ff5ae9d6 == cache_frame_6892888b2d7a1bddfad8f7c1ff5ae9d6 )
    {
        Py_DECREF( frame_6892888b2d7a1bddfad8f7c1ff5ae9d6 );
    }
    cache_frame_6892888b2d7a1bddfad8f7c1ff5ae9d6 = NULL;

    assertFrameObject( frame_6892888b2d7a1bddfad8f7c1ff5ae9d6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_5_cache_clear );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_root );
    var_root = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_root );
    var_root = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_5_cache_clear );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_backports$functools_lru_cache$$$function_1_update_wrapper( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_backports$functools_lru_cache$$$function_1_update_wrapper,
        const_str_plain_update_wrapper,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d5b96900e1efa2e9368debfb622d3b8c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_backports$functools_lru_cache,
        const_str_digest_519ef8af176d216914429c5c4c6c8f1f,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_backports$functools_lru_cache$$$function_2___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_backports$functools_lru_cache$$$function_2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7edcb33a332ef0d4ceed8d7bc168ecce,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_backports$functools_lru_cache,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_backports$functools_lru_cache$$$function_3___hash__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_backports$functools_lru_cache$$$function_3___hash__,
        const_str_plain___hash__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_460545fc5486ad1384e387c58b147964,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_backports$functools_lru_cache,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_backports$functools_lru_cache$$$function_4__make_key( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_backports$functools_lru_cache$$$function_4__make_key,
        const_str_plain__make_key,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_99ebb81b961192105e469d7e8d3b6825,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_backports$functools_lru_cache,
        const_str_digest_d3fe48a85e362e50bef701c1ecf93202,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_backports$functools_lru_cache$$$function_5_lru_cache( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_backports$functools_lru_cache$$$function_5_lru_cache,
        const_str_plain_lru_cache,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1d5208294352a0d83fcb49934cd55de2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_backports$functools_lru_cache,
        const_str_digest_ee3ec51ac74b28700968a243ccc29e0e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function,
        const_str_plain_decorating_function,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_46237443246e7717eb6c03ac91fabb68,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_backports$functools_lru_cache,
        NULL,
        2
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_1_wrapper(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_1_wrapper,
        const_str_plain_wrapper,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5d643a6baf23d639162f355fc941c658,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_backports$functools_lru_cache,
        NULL,
        3
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_2_wrapper(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_2_wrapper,
        const_str_plain_wrapper,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b20af204244c2c692ca00ead9b7c22cb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_backports$functools_lru_cache,
        NULL,
        9
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_3_wrapper(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_3_wrapper,
        const_str_plain_wrapper,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f80a96d5c901ffcd75233976861ed1b5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_backports$functools_lru_cache,
        NULL,
        16
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_4_cache_info(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_4_cache_info,
        const_str_plain_cache_info,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a29bc699eb58817aac6764e9d6966c58,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_backports$functools_lru_cache,
        const_str_digest_b6b8172753fb6992fab7c751e8230906,
        6
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_5_cache_clear(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_backports$functools_lru_cache$$$function_5_lru_cache$$$function_1_decorating_function$$$function_5_cache_clear,
        const_str_plain_cache_clear,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6892888b2d7a1bddfad8f7c1ff5ae9d6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_backports$functools_lru_cache,
        const_str_digest_e9f4851354fa87711c0fbd1becc73474,
        4
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_backports$functools_lru_cache =
{
    PyModuleDef_HEAD_INIT,
    "backports.functools_lru_cache",
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

extern PyObject *const_str_plain___loader__;
#endif

#if PYTHON_VERSION >= 340
extern PyObject *const_str_plain___spec__;
extern PyObject *const_str_plain__initializing;
extern PyObject *const_str_plain_submodule_search_locations;
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

extern PyTypeObject Nuitka_Loader_Type;

// The exported interface to CPython. On import of the module, this function
// gets called. It has to have an exact function name, in cases it's a shared
// library export. This is hidden behind the MOD_INIT_DECL.

MOD_INIT_DECL( backports$functools_lru_cache )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_backports$functools_lru_cache );
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
    puts("backports.functools_lru_cache: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("backports.functools_lru_cache: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("backports.functools_lru_cache: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initbackports$functools_lru_cache" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_backports$functools_lru_cache = Py_InitModule4(
        "backports.functools_lru_cache",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_backports$functools_lru_cache = PyModule_Create( &mdef_backports$functools_lru_cache );
#endif

    moduledict_backports$functools_lru_cache = MODULE_DICT( module_backports$functools_lru_cache );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_backports$functools_lru_cache,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_backports$functools_lru_cache,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_backports$functools_lru_cache,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_backports$functools_lru_cache );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_6b55678e749391b91aa1c9ffe1d6774e, module_backports$functools_lru_cache );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain___name__ ),
            (PyObject *)&Nuitka_Loader_Type
        };

        PyObject *spec_value = CALL_FUNCTION_WITH_ARGS2(
            module_spec_class,
            args
        );
        Py_DECREF( module_spec_class );

        // We can assume this to never fail, or else we are in trouble anyway.
        CHECK_OBJECT( spec_value );

// For packages set the submodule search locations as well, even if to empty
// list, so investigating code will consider it a package.
#if 0
        SET_ATTRIBUTE( spec_value, const_str_plain_submodule_search_locations, PyList_New(0) );
#endif

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE( spec_value, const_str_plain__initializing, Py_True );

        UPDATE_STRING_DICT1( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_locals_backports$functools_lru_cache_26_key___hash__ = NULL;
    PyObject *tmp_locals_backports$functools_lru_cache_26_key___init__ = NULL;
    struct Nuitka_FrameObject *frame_0ae53b796ba32c0021182da3a4b54d0a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_6ddfac4d86d61acb3be24e988e5471d9;
        UPDATE_STRING_DICT0( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_0ae53b796ba32c0021182da3a4b54d0a = MAKE_MODULE_FRAME( codeobj_0ae53b796ba32c0021182da3a4b54d0a, module_backports$functools_lru_cache );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_0ae53b796ba32c0021182da3a4b54d0a );
    assert( Py_REFCNT( frame_0ae53b796ba32c0021182da3a4b54d0a ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        frame_0ae53b796ba32c0021182da3a4b54d0a->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert( !(tmp_import_name_from_1 == NULL) );
        tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_functools;
        tmp_globals_name_1 = (PyObject *)moduledict_backports$functools_lru_cache;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_0ae53b796ba32c0021182da3a4b54d0a->m_frame.f_lineno = 3;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain_functools, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_collections;
        tmp_globals_name_2 = (PyObject *)moduledict_backports$functools_lru_cache;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_namedtuple_tuple;
        tmp_level_name_2 = const_int_0;
        frame_0ae53b796ba32c0021182da3a4b54d0a->m_frame.f_lineno = 4;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_namedtuple );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain_namedtuple, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_threading;
        tmp_globals_name_3 = (PyObject *)moduledict_backports$functools_lru_cache;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_RLock_tuple;
        tmp_level_name_3 = const_int_0;
        frame_0ae53b796ba32c0021182da3a4b54d0a->m_frame.f_lineno = 5;
        tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_RLock );
        Py_DECREF( tmp_import_name_from_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain_RLock, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain_namedtuple );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_namedtuple );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "namedtuple" );
            exception_tb = NULL;

            exception_lineno = 7;

            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        tmp_call_arg_element_1 = const_str_plain_CacheInfo;
        tmp_call_arg_element_2 = LIST_COPY( const_list_1f9c12d5fd3660d5ab8008c29022ae09_list );
        frame_0ae53b796ba32c0021182da3a4b54d0a->m_frame.f_lineno = 7;
        {
            PyObject *call_args[] = { tmp_call_arg_element_1, tmp_call_arg_element_2 };
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_call_arg_element_2 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain__CacheInfo, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_name_2;
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_defaults_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain_functools );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_functools );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "functools" );
            exception_tb = NULL;

            exception_lineno = 10;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_wraps );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain_functools );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_functools );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "functools" );
            exception_tb = NULL;

            exception_lineno = 10;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_3;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_update_wrapper );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        frame_0ae53b796ba32c0021182da3a4b54d0a->m_frame.f_lineno = 10;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_called_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain_functools );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_functools );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "functools" );
            exception_tb = NULL;

            exception_lineno = 13;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_4;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_WRAPPER_ASSIGNMENTS );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        tmp_defaults_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain_functools );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_functools );
        }

        if ( tmp_mvar_value_5 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_defaults_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "functools" );
            exception_tb = NULL;

            exception_lineno = 14;

            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_5;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_WRAPPER_UPDATES );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_defaults_1 );

            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
        tmp_args_element_name_2 = MAKE_FUNCTION_backports$functools_lru_cache$$$function_1_update_wrapper( tmp_defaults_1 );



        frame_0ae53b796ba32c0021182da3a4b54d0a->m_frame.f_lineno = 10;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain_update_wrapper, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_defaults_2;
            PyObject *tmp_tuple_element_2;
            tmp_tuple_element_2 = LOOKUP_BUILTIN( const_str_plain_hash );
            assert( tmp_tuple_element_2 != NULL );
            tmp_defaults_2 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_2 );
            tmp_assign_source_10 = MAKE_FUNCTION_backports$functools_lru_cache$$$function_2___init__( tmp_defaults_2 );



            assert( tmp_locals_backports$functools_lru_cache_26_key___init__ == NULL );
            tmp_locals_backports$functools_lru_cache_26_key___init__ = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            tmp_assign_source_11 = MAKE_FUNCTION_backports$functools_lru_cache$$$function_3___hash__(  );



            assert( tmp_locals_backports$functools_lru_cache_26_key___hash__ == NULL );
            tmp_locals_backports$functools_lru_cache_26_key___hash__ = tmp_assign_source_11;
        }
        // Tried code:
        {
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_dict_value_1 = const_str_digest_6b55678e749391b91aa1c9ffe1d6774e;
            tmp_dict_key_1 = const_str_plain___module__;
            tmp_assign_source_9 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem( tmp_assign_source_9, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_value_2 = const_str_plain_hashvalue;
            tmp_dict_key_2 = const_str_plain___slots__;
            tmp_res = PyDict_SetItem( tmp_assign_source_9, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_backports$functools_lru_cache_26_key___init__ );
            tmp_dict_value_3 = tmp_locals_backports$functools_lru_cache_26_key___init__;
            tmp_dict_key_3 = const_str_plain___init__;
            tmp_res = PyDict_SetItem( tmp_assign_source_9, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_backports$functools_lru_cache_26_key___hash__ );
            tmp_dict_value_4 = tmp_locals_backports$functools_lru_cache_26_key___hash__;
            tmp_dict_key_4 = const_str_plain___hash__;
            tmp_res = PyDict_SetItem( tmp_assign_source_9, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            goto try_return_handler_1;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT( (PyObject *)tmp_locals_backports$functools_lru_cache_26_key___init__ );
        Py_DECREF( tmp_locals_backports$functools_lru_cache_26_key___init__ );
        tmp_locals_backports$functools_lru_cache_26_key___init__ = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_backports$functools_lru_cache_26_key___hash__ );
        Py_DECREF( tmp_locals_backports$functools_lru_cache_26_key___hash__ );
        tmp_locals_backports$functools_lru_cache_26_key___hash__ = NULL;

        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( backports$functools_lru_cache );
        return MOD_RETURN_VALUE( NULL );
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_key_name_1;
        PyObject *tmp_dict_name_1;
        PyObject *tmp_dict_name_2;
        PyObject *tmp_key_name_2;
        tmp_key_name_1 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_dict_name_1 = tmp_class_creation_1__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_1, tmp_key_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto try_except_handler_2;
        }
        tmp_condition_result_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_dict_name_2 = tmp_class_creation_1__class_dict;
        tmp_key_name_2 = const_str_plain___metaclass__;
        tmp_assign_source_12 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_12 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_12 );
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_4 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_3 = const_str_plain__HashedSeq;
        tmp_args_element_name_4 = const_tuple_type_list_tuple;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_5 = tmp_class_creation_1__class_dict;
        frame_0ae53b796ba32c0021182da3a4b54d0a->m_frame.f_lineno = 26;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto try_except_handler_2;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_13;
    }
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_14 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain__HashedSeq, tmp_assign_source_14 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_defaults_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_called_name_5;
        tmp_called_name_5 = (PyObject *)&PyBaseObject_Type;
        frame_0ae53b796ba32c0021182da3a4b54d0a->m_frame.f_lineno = 38;
        tmp_tuple_element_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_5 );
        if ( tmp_tuple_element_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_tuple_element_3, 0, tmp_tuple_element_4 );
        tmp_defaults_3 = PyTuple_New( 6 );
        PyTuple_SET_ITEM( tmp_defaults_3, 0, tmp_tuple_element_3 );
        tmp_tuple_element_3 = PySet_New( const_set_645c5c4347dd7222f672435373d279c7 );
        PyTuple_SET_ITEM( tmp_defaults_3, 1, tmp_tuple_element_3 );
        tmp_tuple_element_3 = LOOKUP_BUILTIN( const_str_plain_sorted );
        assert( tmp_tuple_element_3 != NULL );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_defaults_3, 2, tmp_tuple_element_3 );
        tmp_tuple_element_3 = (PyObject *)&PyTuple_Type;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_defaults_3, 3, tmp_tuple_element_3 );
        tmp_tuple_element_3 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_defaults_3, 4, tmp_tuple_element_3 );
        tmp_tuple_element_3 = LOOKUP_BUILTIN( const_str_plain_len );
        assert( tmp_tuple_element_3 != NULL );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_defaults_3, 5, tmp_tuple_element_3 );
        tmp_assign_source_15 = MAKE_FUNCTION_backports$functools_lru_cache$$$function_4__make_key( tmp_defaults_3 );



        UPDATE_STRING_DICT1( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain__make_key, tmp_assign_source_15 );
    }

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ae53b796ba32c0021182da3a4b54d0a );
#endif
    popFrameStack();

    assertFrameObject( frame_0ae53b796ba32c0021182da3a4b54d0a );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0ae53b796ba32c0021182da3a4b54d0a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0ae53b796ba32c0021182da3a4b54d0a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0ae53b796ba32c0021182da3a4b54d0a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0ae53b796ba32c0021182da3a4b54d0a, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = const_tuple_int_pos_100_false_tuple;
        Py_INCREF( tmp_defaults_4 );
        tmp_assign_source_16 = MAKE_FUNCTION_backports$functools_lru_cache$$$function_5_lru_cache( tmp_defaults_4 );



        UPDATE_STRING_DICT1( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain_lru_cache, tmp_assign_source_16 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_backports$functools_lru_cache, (Nuitka_StringObject *)const_str_plain___path__ );

        if (path_value && PyList_CheckExact(path_value) && PyList_Size(path_value) > 0)
        {
            PyObject *path_element = PyList_GetItem( path_value, 0 );

            PyObject *path_importer_cache = PySys_GetObject((char *)"path_importer_cache");
            CHECK_OBJECT( path_importer_cache );

            int res = PyDict_SetItem( path_importer_cache, path_element, (PyObject *)&Nuitka_Loader_Type );
            assert( res == 0 );
        }
    }
#endif
#endif

    return MOD_RETURN_VALUE( module_backports$functools_lru_cache );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
