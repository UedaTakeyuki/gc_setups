/* Generated code for Python module 'requests.auth'
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

/* The "_module_requests$auth" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$auth;
PyDictObject *moduledict_requests$auth;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_copy;
static PyObject *const_str_digest_acf0af13ef75ff62ec9955ae4dcea3e9;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_get;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_HTTPBasicAuth;
extern PyObject *const_str_plain_type;
extern PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
extern PyObject *const_str_plain_query;
static PyObject *const_str_plain_last_nonce;
static PyObject *const_str_digest_91012c747d1826684889b0187ce7d184;
extern PyObject *const_str_plain_raw;
static PyObject *const_str_plain_qop;
extern PyObject *const_str_plain__r;
static PyObject *const_str_digest_fe400b7786b755fe7fa07749cdd2ff1e;
extern PyObject *const_str_plain_base64;
extern PyObject *const_str_plain_count;
static PyObject *const_tuple_str_plain_opaque_tuple;
static PyObject *const_str_plain_sha256_utf8;
extern PyObject *const_str_plain_warn;
static PyObject *const_str_digest_e1ae02aba66d45ac9d7f070694408d22;
extern PyObject *const_str_plain_MD5;
extern PyObject *const_str_plain_compat;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_chr_47;
extern PyObject *const_tuple_str_plain_latin1_tuple;
extern PyObject *const_str_plain_IGNORECASE;
static PyObject *const_str_digest_58295a7b2ee00e12bd235bdf35e32b18;
static PyObject *const_str_plain_sha512_utf8;
static PyObject *const_str_digest_4bfd8366dcc8506d555a9e4dbdeb488d;
static PyObject *const_str_plain_realm;
static PyObject *const_str_plain_hash_utf8;
static PyObject *const_str_digest_9a88cfd90fa8100a7ceaf7df47e6e9d2;
extern PyObject *const_str_plain_self;
static PyObject *const_tuple_c3df97e2335ab68157ec580c783f721d_tuple;
extern PyObject *const_str_plain_category;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_str_plain_md5;
extern PyObject *const_str_plain_is_redirect;
extern PyObject *const_str_plain_warnings;
static PyObject *const_str_plain_chal;
extern PyObject *const_str_plain_upper;
extern PyObject *const_str_plain_connection;
static PyObject *const_str_plain_opaque;
extern PyObject *const_str_plain_pat;
extern PyObject *const_str_plain_flags;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_re;
static PyObject *const_str_plain__thread_local;
extern PyObject *const_str_plain_to_native_string;
static PyObject *const_str_digest_919a2045e823b128b54cfd720f73e3bf;
extern PyObject *const_tuple_str_plain_self_str_plain_r_tuple;
extern PyObject *const_str_plain_close;
static PyObject *const_str_plain_prep;
extern PyObject *const_str_plain_urlparse;
extern PyObject *const_str_plain_sub;
static PyObject *const_str_digest_1e080f858ef601c43605cc71a556333d;
extern PyObject *const_tuple_str_plain_to_native_string_tuple;
static PyObject *const_str_digest_0a5fd62f7361e9a432a63066256a497f;
extern PyObject *const_str_plain_parse_dict_header;
static PyObject *const_str_plain_s_auth;
extern PyObject *const_str_plain_content;
static PyObject *const_str_digest_e56c710cf2c13b7ef6797f95632e4090;
static PyObject *const_str_plain_build_digest_header;
static PyObject *const_str_digest_5bf0e52ad3af9d76b6e6716841011fd0;
static PyObject *const_tuple_str_plain_urlparse_str_plain_str_str_plain_basestring_tuple;
extern PyObject *const_tuple_str_chr_44_tuple;
static PyObject *const_str_plain_init_per_thread_state;
extern PyObject *const_str_plain_split;
static PyObject *const_tuple_str_plain_username_str_plain_password_str_plain_authstr_tuple;
extern PyObject *const_str_plain_encode;
extern PyObject *const_str_plain_register_hook;
extern PyObject *const_str_plain_threading;
extern PyObject *const_str_plain_strip;
extern PyObject *const_str_plain_os;
extern PyObject *const_tuple_str_plain_x_tuple;
static PyObject *const_str_digest_7d7309ebed4abfa9aab0d6db44793741;
extern PyObject *const_str_plain_digest;
extern PyObject *const_str_plain_cookies;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_47cfb690b41349e19108856edd5f5a6d_tuple;
static PyObject *const_str_plain_HTTPProxyAuth;
extern PyObject *const_str_plain_Authorization;
static PyObject *const_tuple_str_plain_s_str_plain_d_str_plain_hash_utf8_tuple;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_a49a175904e70dd9f5dc0f52dbebbfdb;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_request;
extern PyObject *const_str_plain_tell;
extern PyObject *const_str_plain_str;
static PyObject *const_str_plain_ctime;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_fe0ad47fb591025246f4d96ff82e1a89;
extern PyObject *const_str_plain_sha256;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain_status_code;
static PyObject *const_str_digest_a82f8015cfcad4d42fa43483823a6f72;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_latin1;
static PyObject *const_str_plain_nonce_count;
extern PyObject *const_str_plain_sha1;
static PyObject *const_str_digest_69c286e01655beff40436b2cda33b552;
extern PyObject *const_str_plain___init__;
static PyObject *const_dict_d96fc9db79024853de9fbab06f7c41d9;
extern PyObject *const_str_plain_s;
extern PyObject *const_str_plain_b64encode;
extern PyObject *const_str_plain_utils;
extern PyObject *const_str_chr_44;
static PyObject *const_str_plain_sha_utf8;
static PyObject *const_str_digest_67889f3b65748dbd83938a67635b28e4;
extern PyObject *const_str_plain_pos;
extern PyObject *const_str_plain_urandom;
extern PyObject *const_str_plain_send;
extern PyObject *const_str_plain_auth;
static PyObject *const_tuple_str_plain_self_str_plain_r_str_plain_kwargs_tuple;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_time;
extern PyObject *const_str_plain_url;
static PyObject *const_str_digest_507ca0310b2f37ea4b2584d4cca02846;
static PyObject *const_str_plain_md5_utf8;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_path;
static PyObject *const_str_digest_df91c2e0090a913ed1897e8fca207ea2;
static PyObject *const_str_digest_7b8850a6b4d3502f6f32cd3625c4afca;
extern PyObject *const_int_pos_8;
extern PyObject *const_str_plain_all;
static PyObject *const_str_plain_authstr;
extern PyObject *const_str_plain_headers;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___eq__;
extern PyObject *const_str_chr_58;
static PyObject *const_tuple_int_pos_8_tuple;
static PyObject *const_tuple_str_digest_a88adb7a245cfc6a39c69917da364c05_str_empty_tuple;
extern PyObject *const_int_pos_400;
extern PyObject *const_str_plain_method;
extern PyObject *const_str_plain__basic_auth_str;
static PyObject *const_tuple_str_plain_parse_dict_header_tuple;
static PyObject *const_tuple_str_digest_58295a7b2ee00e12bd235bdf35e32b18_tuple;
extern PyObject *const_str_plain_init;
extern PyObject *const_str_plain_append;
static PyObject *const_str_plain_CONTENT_TYPE_MULTI_PART;
static PyObject *const_str_plain_HTTPDigestAuth;
extern PyObject *const_str_plain_nonce;
static PyObject *const_str_digest_2fc3f96e0216dbc7dcd34461a1c4d2ee;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_basestring;
static PyObject *const_str_digest_d69b853fcab0d61d934c8e6dc6bd2d6a;
static PyObject *const_str_digest_a664f80c1075d8cfb85f49618afc684b;
extern PyObject *const_str_plain_DeprecationWarning;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_extract_cookies_to_jar;
extern PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
extern PyObject *const_str_plain_other;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_prepare_cookies;
extern PyObject *const_tuple_str_plain_b64encode_tuple;
extern PyObject *const_str_plain_seek;
extern PyObject *const_str_plain_password;
static PyObject *const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple;
static PyObject *const_str_digest_b0f8a4a055f15da2a394551a1933d695;
extern PyObject *const_str_chr_63;
extern PyObject *const_str_plain_username;
extern PyObject *const_str_plain___ne__;
static PyObject *const_str_plain_AuthBase;
static PyObject *const_str_plain_hexdigest;
static PyObject *const_str_plain_handle_401;
static PyObject *const_tuple_str_plain_qop_tuple;
extern PyObject *const_str_plain__internal_utils;
static PyObject *const_str_plain_CONTENT_TYPE_FORM_URLENCODED;
extern PyObject *const_str_digest_f2d2f5f01d8d9360355c50eb1d09d771;
static PyObject *const_str_plain_SHA;
static PyObject *const_str_digest_01a11c701578b78bc17e57844dca83b0;
extern PyObject *const_str_plain__cookies;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_digest_a9249a74248e02fdfcaa84b4618a14ce;
extern PyObject *const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc;
extern PyObject *const_int_0;
static PyObject *const_str_plain_num_401_calls;
extern PyObject *const_tuple_str_plain_extract_cookies_to_jar_tuple;
static PyObject *const_str_digest_3ae56c31f64e988caab68621b896b25f;
extern PyObject *const_str_digest_5d735bc80d16f0fedbdde78344a2d394;
extern PyObject *const_int_pos_500;
extern PyObject *const_str_plain_hashlib;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_plain_local;
extern PyObject *const_str_plain_sha512;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_body;
static PyObject *const_str_digest_a88adb7a245cfc6a39c69917da364c05;
extern PyObject *const_str_plain___call__;
extern PyObject *const_str_plain_compile;
extern PyObject *const_str_plain_algorithm;
extern PyObject *const_str_plain_response;
static PyObject *const_str_digest_3267db0b9e319da1a85ef722557dd6fe;
static PyObject *const_str_plain_handle_redirect;
extern PyObject *const_str_plain_history;
extern PyObject *const_tuple_str_plain_algorithm_tuple;
extern PyObject *const_str_angle_lambda;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_acf0af13ef75ff62ec9955ae4dcea3e9 = UNSTREAM_STRING( &constant_bin[ 940200 ], 64, 0 );
    const_str_plain_last_nonce = UNSTREAM_STRING( &constant_bin[ 940264 ], 10, 1 );
    const_str_digest_91012c747d1826684889b0187ce7d184 = UNSTREAM_STRING( &constant_bin[ 940274 ], 7, 0 );
    const_str_plain_qop = UNSTREAM_STRING( &constant_bin[ 659359 ], 3, 1 );
    const_str_digest_fe400b7786b755fe7fa07749cdd2ff1e = UNSTREAM_STRING( &constant_bin[ 940281 ], 62, 0 );
    const_tuple_str_plain_opaque_tuple = PyTuple_New( 1 );
    const_str_plain_opaque = UNSTREAM_STRING( &constant_bin[ 8099 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_opaque_tuple, 0, const_str_plain_opaque ); Py_INCREF( const_str_plain_opaque );
    const_str_plain_sha256_utf8 = UNSTREAM_STRING( &constant_bin[ 940343 ], 11, 1 );
    const_str_digest_e1ae02aba66d45ac9d7f070694408d22 = UNSTREAM_STRING( &constant_bin[ 940354 ], 19, 0 );
    const_str_digest_58295a7b2ee00e12bd235bdf35e32b18 = UNSTREAM_STRING( &constant_bin[ 54943 ], 7, 0 );
    const_str_plain_sha512_utf8 = UNSTREAM_STRING( &constant_bin[ 940373 ], 11, 1 );
    const_str_digest_4bfd8366dcc8506d555a9e4dbdeb488d = UNSTREAM_STRING( &constant_bin[ 940384 ], 93, 0 );
    const_str_plain_realm = UNSTREAM_STRING( &constant_bin[ 940296 ], 5, 1 );
    const_str_plain_hash_utf8 = UNSTREAM_STRING( &constant_bin[ 940477 ], 9, 1 );
    const_str_digest_9a88cfd90fa8100a7ceaf7df47e6e9d2 = UNSTREAM_STRING( &constant_bin[ 940486 ], 49, 0 );
    const_tuple_c3df97e2335ab68157ec580c783f721d_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_c3df97e2335ab68157ec580c783f721d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_c3df97e2335ab68157ec580c783f721d_tuple, 1, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_c3df97e2335ab68157ec580c783f721d_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_c3df97e2335ab68157ec580c783f721d_tuple, 3, const_str_plain_pat ); Py_INCREF( const_str_plain_pat );
    PyTuple_SET_ITEM( const_tuple_c3df97e2335ab68157ec580c783f721d_tuple, 4, const_str_plain__r ); Py_INCREF( const_str_plain__r );
    const_str_plain_prep = UNSTREAM_STRING( &constant_bin[ 18357 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_c3df97e2335ab68157ec580c783f721d_tuple, 5, const_str_plain_prep ); Py_INCREF( const_str_plain_prep );
    const_str_plain_s_auth = UNSTREAM_STRING( &constant_bin[ 940535 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_c3df97e2335ab68157ec580c783f721d_tuple, 6, const_str_plain_s_auth ); Py_INCREF( const_str_plain_s_auth );
    const_str_plain_chal = UNSTREAM_STRING( &constant_bin[ 688014 ], 4, 1 );
    const_str_plain__thread_local = UNSTREAM_STRING( &constant_bin[ 940541 ], 13, 1 );
    const_str_digest_919a2045e823b128b54cfd720f73e3bf = UNSTREAM_STRING( &constant_bin[ 940554 ], 28, 0 );
    const_str_digest_1e080f858ef601c43605cc71a556333d = UNSTREAM_STRING( &constant_bin[ 159043 ], 7, 0 );
    const_str_digest_0a5fd62f7361e9a432a63066256a497f = UNSTREAM_STRING( &constant_bin[ 940582 ], 183, 0 );
    const_str_digest_e56c710cf2c13b7ef6797f95632e4090 = UNSTREAM_STRING( &constant_bin[ 940765 ], 183, 0 );
    const_str_plain_build_digest_header = UNSTREAM_STRING( &constant_bin[ 940948 ], 19, 1 );
    const_str_digest_5bf0e52ad3af9d76b6e6716841011fd0 = UNSTREAM_STRING( &constant_bin[ 940967 ], 41, 0 );
    const_tuple_str_plain_urlparse_str_plain_str_str_plain_basestring_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_urlparse_str_plain_str_str_plain_basestring_tuple, 0, const_str_plain_urlparse ); Py_INCREF( const_str_plain_urlparse );
    PyTuple_SET_ITEM( const_tuple_str_plain_urlparse_str_plain_str_str_plain_basestring_tuple, 1, const_str_plain_str ); Py_INCREF( const_str_plain_str );
    PyTuple_SET_ITEM( const_tuple_str_plain_urlparse_str_plain_str_str_plain_basestring_tuple, 2, const_str_plain_basestring ); Py_INCREF( const_str_plain_basestring );
    const_str_plain_init_per_thread_state = UNSTREAM_STRING( &constant_bin[ 941008 ], 21, 1 );
    const_tuple_str_plain_username_str_plain_password_str_plain_authstr_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_username_str_plain_password_str_plain_authstr_tuple, 0, const_str_plain_username ); Py_INCREF( const_str_plain_username );
    PyTuple_SET_ITEM( const_tuple_str_plain_username_str_plain_password_str_plain_authstr_tuple, 1, const_str_plain_password ); Py_INCREF( const_str_plain_password );
    const_str_plain_authstr = UNSTREAM_STRING( &constant_bin[ 941029 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_username_str_plain_password_str_plain_authstr_tuple, 2, const_str_plain_authstr ); Py_INCREF( const_str_plain_authstr );
    const_str_digest_7d7309ebed4abfa9aab0d6db44793741 = UNSTREAM_STRING( &constant_bin[ 941036 ], 13, 0 );
    const_tuple_47cfb690b41349e19108856edd5f5a6d_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 941049 ], 306 );
    const_str_plain_HTTPProxyAuth = UNSTREAM_STRING( &constant_bin[ 941355 ], 13, 1 );
    const_tuple_str_plain_s_str_plain_d_str_plain_hash_utf8_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_d_str_plain_hash_utf8_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_d_str_plain_hash_utf8_tuple, 1, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_d_str_plain_hash_utf8_tuple, 2, const_str_plain_hash_utf8 ); Py_INCREF( const_str_plain_hash_utf8 );
    const_str_digest_a49a175904e70dd9f5dc0f52dbebbfdb = UNSTREAM_STRING( &constant_bin[ 941368 ], 8, 0 );
    const_str_plain_ctime = UNSTREAM_STRING( &constant_bin[ 941376 ], 5, 1 );
    const_str_digest_fe0ad47fb591025246f4d96ff82e1a89 = UNSTREAM_STRING( &constant_bin[ 941381 ], 111, 0 );
    const_str_digest_a82f8015cfcad4d42fa43483823a6f72 = UNSTREAM_STRING( &constant_bin[ 941492 ], 32, 0 );
    const_str_plain_nonce_count = UNSTREAM_STRING( &constant_bin[ 941524 ], 11, 1 );
    const_str_digest_69c286e01655beff40436b2cda33b552 = UNSTREAM_STRING( &constant_bin[ 941535 ], 9, 0 );
    const_dict_d96fc9db79024853de9fbab06f7c41d9 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_d96fc9db79024853de9fbab06f7c41d9, const_str_plain_count, const_int_pos_1 );
    assert( PyDict_Size( const_dict_d96fc9db79024853de9fbab06f7c41d9 ) == 1 );
    const_str_plain_sha_utf8 = UNSTREAM_STRING( &constant_bin[ 941320 ], 8, 1 );
    const_str_digest_67889f3b65748dbd83938a67635b28e4 = UNSTREAM_STRING( &constant_bin[ 940385 ], 13, 0 );
    const_tuple_str_plain_self_str_plain_r_str_plain_kwargs_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_r_str_plain_kwargs_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_r_str_plain_kwargs_tuple, 1, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_r_str_plain_kwargs_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_str_digest_507ca0310b2f37ea4b2584d4cca02846 = UNSTREAM_STRING( &constant_bin[ 941544 ], 28, 0 );
    const_str_plain_md5_utf8 = UNSTREAM_STRING( &constant_bin[ 941277 ], 8, 1 );
    const_str_digest_df91c2e0090a913ed1897e8fca207ea2 = UNSTREAM_STRING( &constant_bin[ 930619 ], 29, 0 );
    const_str_digest_7b8850a6b4d3502f6f32cd3625c4afca = UNSTREAM_STRING( &constant_bin[ 941572 ], 8, 0 );
    const_tuple_int_pos_8_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_8_tuple, 0, const_int_pos_8 ); Py_INCREF( const_int_pos_8 );
    const_tuple_str_digest_a88adb7a245cfc6a39c69917da364c05_str_empty_tuple = PyTuple_New( 2 );
    const_str_digest_a88adb7a245cfc6a39c69917da364c05 = UNSTREAM_STRING( &constant_bin[ 941580 ], 16, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_a88adb7a245cfc6a39c69917da364c05_str_empty_tuple, 0, const_str_digest_a88adb7a245cfc6a39c69917da364c05 ); Py_INCREF( const_str_digest_a88adb7a245cfc6a39c69917da364c05 );
    PyTuple_SET_ITEM( const_tuple_str_digest_a88adb7a245cfc6a39c69917da364c05_str_empty_tuple, 1, const_str_empty ); Py_INCREF( const_str_empty );
    const_tuple_str_plain_parse_dict_header_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_parse_dict_header_tuple, 0, const_str_plain_parse_dict_header ); Py_INCREF( const_str_plain_parse_dict_header );
    const_tuple_str_digest_58295a7b2ee00e12bd235bdf35e32b18_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_58295a7b2ee00e12bd235bdf35e32b18_tuple, 0, const_str_digest_58295a7b2ee00e12bd235bdf35e32b18 ); Py_INCREF( const_str_digest_58295a7b2ee00e12bd235bdf35e32b18 );
    const_str_plain_CONTENT_TYPE_MULTI_PART = UNSTREAM_STRING( &constant_bin[ 941596 ], 23, 1 );
    const_str_plain_HTTPDigestAuth = UNSTREAM_STRING( &constant_bin[ 941619 ], 14, 1 );
    const_str_digest_2fc3f96e0216dbc7dcd34461a1c4d2ee = UNSTREAM_STRING( &constant_bin[ 941633 ], 52, 0 );
    const_str_digest_d69b853fcab0d61d934c8e6dc6bd2d6a = UNSTREAM_STRING( &constant_bin[ 941685 ], 16, 0 );
    const_str_digest_a664f80c1075d8cfb85f49618afc684b = UNSTREAM_STRING( &constant_bin[ 941701 ], 63, 0 );
    const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple, 1, const_str_plain_username ); Py_INCREF( const_str_plain_username );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple, 2, const_str_plain_password ); Py_INCREF( const_str_plain_password );
    const_str_digest_b0f8a4a055f15da2a394551a1933d695 = UNSTREAM_STRING( &constant_bin[ 941764 ], 14, 0 );
    const_str_plain_AuthBase = UNSTREAM_STRING( &constant_bin[ 941629 ], 8, 1 );
    const_str_plain_hexdigest = UNSTREAM_STRING( &constant_bin[ 941778 ], 9, 1 );
    const_str_plain_handle_401 = UNSTREAM_STRING( &constant_bin[ 941787 ], 10, 1 );
    const_tuple_str_plain_qop_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_qop_tuple, 0, const_str_plain_qop ); Py_INCREF( const_str_plain_qop );
    const_str_plain_CONTENT_TYPE_FORM_URLENCODED = UNSTREAM_STRING( &constant_bin[ 941797 ], 28, 1 );
    const_str_plain_SHA = UNSTREAM_STRING( &constant_bin[ 2365 ], 3, 1 );
    const_str_digest_01a11c701578b78bc17e57844dca83b0 = UNSTREAM_STRING( &constant_bin[ 941825 ], 4, 0 );
    const_str_plain_num_401_calls = UNSTREAM_STRING( &constant_bin[ 940973 ], 13, 1 );
    const_str_digest_3ae56c31f64e988caab68621b896b25f = UNSTREAM_STRING( &constant_bin[ 941829 ], 22, 0 );
    const_str_digest_3267db0b9e319da1a85ef722557dd6fe = UNSTREAM_STRING( &constant_bin[ 941851 ], 61, 0 );
    const_str_plain_handle_redirect = UNSTREAM_STRING( &constant_bin[ 941912 ], 15, 1 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$auth( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_fa6568b5786ae620c0838defd43a2888;
static PyCodeObject *codeobj_206e0b42994703101e37532bbd4012ab;
static PyCodeObject *codeobj_a3aa29a0e69fb5feb533572ff79087cf;
static PyCodeObject *codeobj_59a52252cb71d8ff01487ac7c94a0c0e;
static PyCodeObject *codeobj_83c9413cfc3bcf7864dcf4beb80524a8;
static PyCodeObject *codeobj_c30c42257bb36b5212e05df61a70fcbc;
static PyCodeObject *codeobj_aa57520cf9786f3ea771ed2ea5827c95;
static PyCodeObject *codeobj_514760b9cbd6417979a1fbeea0fd4184;
static PyCodeObject *codeobj_727e020e612f3c428cab63a5ce927e3c;
static PyCodeObject *codeobj_6dfcfed908795faccc329213d8fa9c2d;
static PyCodeObject *codeobj_4da5ce47ced36e3756d6058d7a053338;
static PyCodeObject *codeobj_b60b8d520f0d674bf0e1553924a16d96;
static PyCodeObject *codeobj_5a047a2baf751b831b48fddcb4c65ef3;
static PyCodeObject *codeobj_565f0e2f58d6f444cffd651f546c2e70;
static PyCodeObject *codeobj_ee4d48087b96740be9bbf5ccdf9f131e;
static PyCodeObject *codeobj_6fc8a9f30e68357fc82516bb79b6dd40;
static PyCodeObject *codeobj_434ac1d5f8c70b1305c5a979b74071f5;
static PyCodeObject *codeobj_c8cfee9b815f021e055b287101d47e4c;
static PyCodeObject *codeobj_a8596cda22ec381d2167c2c95d95037b;
static PyCodeObject *codeobj_8bd255fad282cf643d2468c03d3b8792;
static PyCodeObject *codeobj_0f7de855305b3c4ddf56a30cf8de3aaa;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_9a88cfd90fa8100a7ceaf7df47e6e9d2;
    codeobj_fa6568b5786ae620c0838defd43a2888 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 169, const_tuple_str_plain_s_str_plain_d_str_plain_hash_utf8_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS );
    codeobj_206e0b42994703101e37532bbd4012ab = MAKE_CODEOBJ( module_filename_obj, const_str_digest_3ae56c31f64e988caab68621b896b25f, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_a3aa29a0e69fb5feb533572ff79087cf = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 75, const_tuple_str_plain_self_str_plain_r_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_59a52252cb71d8ff01487ac7c94a0c0e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 95, const_tuple_str_plain_self_str_plain_r_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_83c9413cfc3bcf7864dcf4beb80524a8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 103, const_tuple_str_plain_self_str_plain_r_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c30c42257bb36b5212e05df61a70fcbc = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 278, const_tuple_str_plain_self_str_plain_r_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_aa57520cf9786f3ea771ed2ea5827c95 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___eq__, 86, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_514760b9cbd6417979a1fbeea0fd4184 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___eq__, 298, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_727e020e612f3c428cab63a5ce927e3c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 82, const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_6dfcfed908795faccc329213d8fa9c2d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 111, const_tuple_str_plain_self_str_plain_username_str_plain_password_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4da5ce47ced36e3756d6058d7a053338 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___ne__, 92, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_b60b8d520f0d674bf0e1553924a16d96 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___ne__, 304, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5a047a2baf751b831b48fddcb4c65ef3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__basic_auth_str, 28, const_tuple_str_plain_username_str_plain_password_str_plain_authstr_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_565f0e2f58d6f444cffd651f546c2e70 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_build_digest_header, 127, const_tuple_47cfb690b41349e19108856edd5f5a6d_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_ee4d48087b96740be9bbf5ccdf9f131e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_handle_401, 234, const_tuple_c3df97e2335ab68157ec580c783f721d_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_6fc8a9f30e68357fc82516bb79b6dd40 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_handle_redirect, 229, const_tuple_str_plain_self_str_plain_r_str_plain_kwargs_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_434ac1d5f8c70b1305c5a979b74071f5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_init_per_thread_state, 117, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_c8cfee9b815f021e055b287101d47e4c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_md5_utf8, 145, const_tuple_str_plain_x_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a8596cda22ec381d2167c2c95d95037b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sha256_utf8, 157, const_tuple_str_plain_x_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_8bd255fad282cf643d2468c03d3b8792 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sha512_utf8, 163, const_tuple_str_plain_x_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0f7de855305b3c4ddf56a30cf8de3aaa = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sha_utf8, 151, const_tuple_str_plain_x_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_pos_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_1_md5_utf8(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_2_sha_utf8(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_3_sha256_utf8(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_4_sha512_utf8(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_5_lambda(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_11_handle_redirect(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_12_handle_401(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_13___call__(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_14___eq__(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_15___ne__(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_1__basic_auth_str(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_2___call__(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_3___init__(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_4___eq__(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_5___ne__(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_6___call__(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_7___call__(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_8___init__(  );


static PyObject *MAKE_FUNCTION_requests$auth$$$function_9_init_per_thread_state(  );


// The module function definitions.
static PyObject *impl_requests$auth$$$function_1__basic_auth_str( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_username = python_pars[ 0 ];
    PyObject *par_password = python_pars[ 1 ];
    PyObject *var_authstr = NULL;
    struct Nuitka_FrameObject *frame_5a047a2baf751b831b48fddcb4c65ef3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_5a047a2baf751b831b48fddcb4c65ef3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5a047a2baf751b831b48fddcb4c65ef3, codeobj_5a047a2baf751b831b48fddcb4c65ef3, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_5a047a2baf751b831b48fddcb4c65ef3 = cache_frame_5a047a2baf751b831b48fddcb4c65ef3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5a047a2baf751b831b48fddcb4c65ef3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5a047a2baf751b831b48fddcb4c65ef3 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_username );
        tmp_isinstance_inst_1 = par_username;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_basestring );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_basestring );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "basestring" );
            exception_tb = NULL;

            exception_lineno = 38;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_mvar_value_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_warnings );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "warnings" );
                exception_tb = NULL;

                exception_lineno = 39;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 39;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_called_instance_1 = const_str_digest_0a5fd62f7361e9a432a63066256a497f;
            CHECK_OBJECT( par_username );
            tmp_args_element_name_1 = par_username;
            frame_5a047a2baf751b831b48fddcb4c65ef3->m_frame.f_lineno = 40;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_format, call_args );
            }

            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 40;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_1 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "DeprecationWarning" );
                exception_tb = NULL;

                exception_lineno = 44;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_dict_value_1 = tmp_mvar_value_3;
            tmp_dict_key_1 = const_str_plain_category;
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_5a047a2baf751b831b48fddcb4c65ef3->m_frame.f_lineno = 39;
            tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 39;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_str );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "str" );
                exception_tb = NULL;

                exception_lineno = 46;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_4;
            CHECK_OBJECT( par_username );
            tmp_args_element_name_2 = par_username;
            frame_5a047a2baf751b831b48fddcb4c65ef3->m_frame.f_lineno = 46;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 46;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_username;
                assert( old != NULL );
                par_username = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_operand_name_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_mvar_value_5;
        CHECK_OBJECT( par_password );
        tmp_isinstance_inst_2 = par_password;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_basestring );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_basestring );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "basestring" );
            exception_tb = NULL;

            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_2 = tmp_mvar_value_5;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
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
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_mvar_value_7;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_warnings );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "warnings" );
                exception_tb = NULL;

                exception_lineno = 49;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_6;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_warn );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_called_instance_2 = const_str_digest_e56c710cf2c13b7ef6797f95632e4090;
            CHECK_OBJECT( par_password );
            tmp_args_element_name_3 = par_password;
            frame_5a047a2baf751b831b48fddcb4c65ef3->m_frame.f_lineno = 50;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_tuple_element_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_format, call_args );
            }

            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 50;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_2 = PyTuple_New( 1 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DeprecationWarning );
            }

            if ( tmp_mvar_value_7 == NULL )
            {
                Py_DECREF( tmp_called_name_3 );
                Py_DECREF( tmp_args_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "DeprecationWarning" );
                exception_tb = NULL;

                exception_lineno = 54;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_dict_value_2 = tmp_mvar_value_7;
            tmp_dict_key_2 = const_str_plain_category;
            tmp_kw_name_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_5a047a2baf751b831b48fddcb4c65ef3->m_frame.f_lineno = 49;
            tmp_call_result_2 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 49;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_str );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
            }

            if ( tmp_mvar_value_8 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "str" );
                exception_tb = NULL;

                exception_lineno = 56;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_8;
            CHECK_OBJECT( par_password );
            tmp_args_element_name_4 = par_password;
            frame_5a047a2baf751b831b48fddcb4c65ef3->m_frame.f_lineno = 56;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 56;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_password;
                assert( old != NULL );
                par_password = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        PyObject *tmp_mvar_value_9;
        CHECK_OBJECT( par_username );
        tmp_isinstance_inst_3 = par_username;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_str );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "str" );
            exception_tb = NULL;

            exception_lineno = 59;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_3 = tmp_mvar_value_9;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_instance_3;
            CHECK_OBJECT( par_username );
            tmp_called_instance_3 = par_username;
            frame_5a047a2baf751b831b48fddcb4c65ef3->m_frame.f_lineno = 60;
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_latin1_tuple, 0 ) );

            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 60;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_username;
                assert( old != NULL );
                par_username = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_isinstance_inst_4;
        PyObject *tmp_isinstance_cls_4;
        PyObject *tmp_mvar_value_10;
        CHECK_OBJECT( par_password );
        tmp_isinstance_inst_4 = par_password;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_str );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "str" );
            exception_tb = NULL;

            exception_lineno = 62;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_4 = tmp_mvar_value_10;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_4, tmp_isinstance_cls_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_instance_4;
            CHECK_OBJECT( par_password );
            tmp_called_instance_4 = par_password;
            frame_5a047a2baf751b831b48fddcb4c65ef3->m_frame.f_lineno = 63;
            tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_latin1_tuple, 0 ) );

            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 63;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_password;
                assert( old != NULL );
                par_password = tmp_assign_source_4;
                Py_DECREF( old );
            }

        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_12;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_called_name_7;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_tuple_element_3;
        tmp_left_name_1 = const_str_digest_1cc758ff2b09f90388f1c2fc8a8fecdc;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_to_native_string );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_to_native_string );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "to_native_string" );
            exception_tb = NULL;

            exception_lineno = 65;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_11;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_b64encode );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b64encode );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "b64encode" );
            exception_tb = NULL;

            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_12;
        tmp_source_name_3 = const_str_chr_58;
        tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_join );
        assert( !(tmp_called_name_7 == NULL) );
        if ( par_username == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "username" );
            exception_tb = NULL;

            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = par_username;
        tmp_args_element_name_7 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_element_name_7, 0, tmp_tuple_element_3 );
        if ( par_password == NULL )
        {
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_7 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "password" );
            exception_tb = NULL;

            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_3 = par_password;
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_args_element_name_7, 1, tmp_tuple_element_3 );
        frame_5a047a2baf751b831b48fddcb4c65ef3->m_frame.f_lineno = 66;
        {
            PyObject *call_args[] = { tmp_args_element_name_7 };
            tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
        }

        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_7 );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_5a047a2baf751b831b48fddcb4c65ef3->m_frame.f_lineno = 66;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_called_instance_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_called_instance_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_5a047a2baf751b831b48fddcb4c65ef3->m_frame.f_lineno = 66;
        tmp_args_element_name_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_strip );
        Py_DECREF( tmp_called_instance_5 );
        if ( tmp_args_element_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_5a047a2baf751b831b48fddcb4c65ef3->m_frame.f_lineno = 65;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_args_element_name_5 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION_ADD_STR_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_authstr == NULL );
        var_authstr = tmp_assign_source_5;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a047a2baf751b831b48fddcb4c65ef3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5a047a2baf751b831b48fddcb4c65ef3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5a047a2baf751b831b48fddcb4c65ef3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5a047a2baf751b831b48fddcb4c65ef3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5a047a2baf751b831b48fddcb4c65ef3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5a047a2baf751b831b48fddcb4c65ef3,
        type_description_1,
        par_username,
        par_password,
        var_authstr
    );


    // Release cached frame.
    if ( frame_5a047a2baf751b831b48fddcb4c65ef3 == cache_frame_5a047a2baf751b831b48fddcb4c65ef3 )
    {
        Py_DECREF( frame_5a047a2baf751b831b48fddcb4c65ef3 );
    }
    cache_frame_5a047a2baf751b831b48fddcb4c65ef3 = NULL;

    assertFrameObject( frame_5a047a2baf751b831b48fddcb4c65ef3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_authstr );
    tmp_return_value = var_authstr;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_1__basic_auth_str );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_username );
    par_username = NULL;

    Py_XDECREF( par_password );
    par_password = NULL;

    CHECK_OBJECT( (PyObject *)var_authstr );
    Py_DECREF( var_authstr );
    var_authstr = NULL;

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

    Py_XDECREF( par_username );
    par_username = NULL;

    Py_XDECREF( par_password );
    par_password = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_1__basic_auth_str );
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


static PyObject *impl_requests$auth$$$function_2___call__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_r = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_a3aa29a0e69fb5feb533572ff79087cf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a3aa29a0e69fb5feb533572ff79087cf = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a3aa29a0e69fb5feb533572ff79087cf, codeobj_a3aa29a0e69fb5feb533572ff79087cf, module_requests$auth, sizeof(void *)+sizeof(void *) );
    frame_a3aa29a0e69fb5feb533572ff79087cf = cache_frame_a3aa29a0e69fb5feb533572ff79087cf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a3aa29a0e69fb5feb533572ff79087cf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a3aa29a0e69fb5feb533572ff79087cf ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = const_str_digest_507ca0310b2f37ea4b2584d4cca02846;
        frame_a3aa29a0e69fb5feb533572ff79087cf->m_frame.f_lineno = 76;
        {
            PyObject *call_args[] = { tmp_make_exception_arg_1 };
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_NotImplementedError, call_args );
        }

        assert( !(tmp_raise_type_1 == NULL) );
        exception_type = tmp_raise_type_1;
        exception_lineno = 76;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a3aa29a0e69fb5feb533572ff79087cf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a3aa29a0e69fb5feb533572ff79087cf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a3aa29a0e69fb5feb533572ff79087cf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a3aa29a0e69fb5feb533572ff79087cf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a3aa29a0e69fb5feb533572ff79087cf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a3aa29a0e69fb5feb533572ff79087cf,
        type_description_1,
        par_self,
        par_r
    );


    // Release cached frame.
    if ( frame_a3aa29a0e69fb5feb533572ff79087cf == cache_frame_a3aa29a0e69fb5feb533572ff79087cf )
    {
        Py_DECREF( frame_a3aa29a0e69fb5feb533572ff79087cf );
    }
    cache_frame_a3aa29a0e69fb5feb533572ff79087cf = NULL;

    assertFrameObject( frame_a3aa29a0e69fb5feb533572ff79087cf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_2___call__ );
    return NULL;
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

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_2___call__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_requests$auth$$$function_3___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_username = python_pars[ 1 ];
    PyObject *par_password = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_727e020e612f3c428cab63a5ce927e3c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_727e020e612f3c428cab63a5ce927e3c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_727e020e612f3c428cab63a5ce927e3c, codeobj_727e020e612f3c428cab63a5ce927e3c, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_727e020e612f3c428cab63a5ce927e3c = cache_frame_727e020e612f3c428cab63a5ce927e3c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_727e020e612f3c428cab63a5ce927e3c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_727e020e612f3c428cab63a5ce927e3c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_username );
        tmp_assattr_name_1 = par_username;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_username, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 83;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_password );
        tmp_assattr_name_2 = par_password;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_password, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_727e020e612f3c428cab63a5ce927e3c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_727e020e612f3c428cab63a5ce927e3c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_727e020e612f3c428cab63a5ce927e3c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_727e020e612f3c428cab63a5ce927e3c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_727e020e612f3c428cab63a5ce927e3c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_727e020e612f3c428cab63a5ce927e3c,
        type_description_1,
        par_self,
        par_username,
        par_password
    );


    // Release cached frame.
    if ( frame_727e020e612f3c428cab63a5ce927e3c == cache_frame_727e020e612f3c428cab63a5ce927e3c )
    {
        Py_DECREF( frame_727e020e612f3c428cab63a5ce927e3c );
    }
    cache_frame_727e020e612f3c428cab63a5ce927e3c = NULL;

    assertFrameObject( frame_727e020e612f3c428cab63a5ce927e3c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_3___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_username );
    Py_DECREF( par_username );
    par_username = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_password );
    Py_DECREF( par_password );
    par_password = NULL;

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

    CHECK_OBJECT( (PyObject *)par_username );
    Py_DECREF( par_username );
    par_username = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_password );
    Py_DECREF( par_password );
    par_password = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_3___init__ );
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


static PyObject *impl_requests$auth$$$function_4___eq__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_aa57520cf9786f3ea771ed2ea5827c95;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_aa57520cf9786f3ea771ed2ea5827c95 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_aa57520cf9786f3ea771ed2ea5827c95, codeobj_aa57520cf9786f3ea771ed2ea5827c95, module_requests$auth, sizeof(void *)+sizeof(void *) );
    frame_aa57520cf9786f3ea771ed2ea5827c95 = cache_frame_aa57520cf9786f3ea771ed2ea5827c95;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_aa57520cf9786f3ea771ed2ea5827c95 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_aa57520cf9786f3ea771ed2ea5827c95 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_all );
        assert( tmp_called_name_1 != NULL );
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_username );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_other );
        tmp_getattr_target_1 = par_other;
        tmp_getattr_attr_1 = const_str_plain_username;
        tmp_getattr_default_1 = Py_None;
        tmp_compexpr_right_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 88;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = PyList_New( 2 );
        PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_password );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_other );
        tmp_getattr_target_2 = par_other;
        tmp_getattr_attr_2 = const_str_plain_password;
        tmp_getattr_default_2 = Py_None;
        tmp_compexpr_right_2 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_1, 1, tmp_list_element_1 );
        frame_aa57520cf9786f3ea771ed2ea5827c95->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa57520cf9786f3ea771ed2ea5827c95 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa57520cf9786f3ea771ed2ea5827c95 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_aa57520cf9786f3ea771ed2ea5827c95 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_aa57520cf9786f3ea771ed2ea5827c95, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_aa57520cf9786f3ea771ed2ea5827c95->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_aa57520cf9786f3ea771ed2ea5827c95, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_aa57520cf9786f3ea771ed2ea5827c95,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_aa57520cf9786f3ea771ed2ea5827c95 == cache_frame_aa57520cf9786f3ea771ed2ea5827c95 )
    {
        Py_DECREF( frame_aa57520cf9786f3ea771ed2ea5827c95 );
    }
    cache_frame_aa57520cf9786f3ea771ed2ea5827c95 = NULL;

    assertFrameObject( frame_aa57520cf9786f3ea771ed2ea5827c95 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_4___eq__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_4___eq__ );
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


static PyObject *impl_requests$auth$$$function_5___ne__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_4da5ce47ced36e3756d6058d7a053338;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4da5ce47ced36e3756d6058d7a053338 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4da5ce47ced36e3756d6058d7a053338, codeobj_4da5ce47ced36e3756d6058d7a053338, module_requests$auth, sizeof(void *)+sizeof(void *) );
    frame_4da5ce47ced36e3756d6058d7a053338 = cache_frame_4da5ce47ced36e3756d6058d7a053338;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4da5ce47ced36e3756d6058d7a053338 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4da5ce47ced36e3756d6058d7a053338 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_self );
        tmp_compexpr_left_1 = par_self;
        CHECK_OBJECT( par_other );
        tmp_compexpr_right_1 = par_other;
        tmp_operand_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = ( tmp_res == 0 ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4da5ce47ced36e3756d6058d7a053338 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_4da5ce47ced36e3756d6058d7a053338 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4da5ce47ced36e3756d6058d7a053338 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4da5ce47ced36e3756d6058d7a053338, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4da5ce47ced36e3756d6058d7a053338->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4da5ce47ced36e3756d6058d7a053338, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4da5ce47ced36e3756d6058d7a053338,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_4da5ce47ced36e3756d6058d7a053338 == cache_frame_4da5ce47ced36e3756d6058d7a053338 )
    {
        Py_DECREF( frame_4da5ce47ced36e3756d6058d7a053338 );
    }
    cache_frame_4da5ce47ced36e3756d6058d7a053338 = NULL;

    assertFrameObject( frame_4da5ce47ced36e3756d6058d7a053338 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_5___ne__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_5___ne__ );
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


static PyObject *impl_requests$auth$$$function_6___call__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_r = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_59a52252cb71d8ff01487ac7c94a0c0e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_59a52252cb71d8ff01487ac7c94a0c0e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_59a52252cb71d8ff01487ac7c94a0c0e, codeobj_59a52252cb71d8ff01487ac7c94a0c0e, module_requests$auth, sizeof(void *)+sizeof(void *) );
    frame_59a52252cb71d8ff01487ac7c94a0c0e = cache_frame_59a52252cb71d8ff01487ac7c94a0c0e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_59a52252cb71d8ff01487ac7c94a0c0e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_59a52252cb71d8ff01487ac7c94a0c0e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_ass_subscript_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain__basic_auth_str );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__basic_auth_str );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_basic_auth_str" );
            exception_tb = NULL;

            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_username );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_password );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_59a52252cb71d8ff01487ac7c94a0c0e->m_frame.f_lineno = 96;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_r );
        tmp_source_name_3 = par_r;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_headers );
        if ( tmp_ass_subscribed_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_1 );

            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = const_str_plain_Authorization;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscribed_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_59a52252cb71d8ff01487ac7c94a0c0e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_59a52252cb71d8ff01487ac7c94a0c0e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_59a52252cb71d8ff01487ac7c94a0c0e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_59a52252cb71d8ff01487ac7c94a0c0e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_59a52252cb71d8ff01487ac7c94a0c0e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_59a52252cb71d8ff01487ac7c94a0c0e,
        type_description_1,
        par_self,
        par_r
    );


    // Release cached frame.
    if ( frame_59a52252cb71d8ff01487ac7c94a0c0e == cache_frame_59a52252cb71d8ff01487ac7c94a0c0e )
    {
        Py_DECREF( frame_59a52252cb71d8ff01487ac7c94a0c0e );
    }
    cache_frame_59a52252cb71d8ff01487ac7c94a0c0e = NULL;

    assertFrameObject( frame_59a52252cb71d8ff01487ac7c94a0c0e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_r );
    tmp_return_value = par_r;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_6___call__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

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

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_6___call__ );
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


static PyObject *impl_requests$auth$$$function_7___call__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_r = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_83c9413cfc3bcf7864dcf4beb80524a8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_83c9413cfc3bcf7864dcf4beb80524a8 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_83c9413cfc3bcf7864dcf4beb80524a8, codeobj_83c9413cfc3bcf7864dcf4beb80524a8, module_requests$auth, sizeof(void *)+sizeof(void *) );
    frame_83c9413cfc3bcf7864dcf4beb80524a8 = cache_frame_83c9413cfc3bcf7864dcf4beb80524a8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_83c9413cfc3bcf7864dcf4beb80524a8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_83c9413cfc3bcf7864dcf4beb80524a8 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_ass_subscript_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain__basic_auth_str );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__basic_auth_str );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_basic_auth_str" );
            exception_tb = NULL;

            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_username );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_password );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_83c9413cfc3bcf7864dcf4beb80524a8->m_frame.f_lineno = 104;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_ass_subvalue_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_r );
        tmp_source_name_3 = par_r;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_headers );
        if ( tmp_ass_subscribed_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_ass_subvalue_1 );

            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = const_str_digest_a9249a74248e02fdfcaa84b4618a14ce;
        tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
        Py_DECREF( tmp_ass_subscribed_1 );
        Py_DECREF( tmp_ass_subvalue_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_83c9413cfc3bcf7864dcf4beb80524a8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_83c9413cfc3bcf7864dcf4beb80524a8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_83c9413cfc3bcf7864dcf4beb80524a8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_83c9413cfc3bcf7864dcf4beb80524a8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_83c9413cfc3bcf7864dcf4beb80524a8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_83c9413cfc3bcf7864dcf4beb80524a8,
        type_description_1,
        par_self,
        par_r
    );


    // Release cached frame.
    if ( frame_83c9413cfc3bcf7864dcf4beb80524a8 == cache_frame_83c9413cfc3bcf7864dcf4beb80524a8 )
    {
        Py_DECREF( frame_83c9413cfc3bcf7864dcf4beb80524a8 );
    }
    cache_frame_83c9413cfc3bcf7864dcf4beb80524a8 = NULL;

    assertFrameObject( frame_83c9413cfc3bcf7864dcf4beb80524a8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_r );
    tmp_return_value = par_r;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_7___call__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

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

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_7___call__ );
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


static PyObject *impl_requests$auth$$$function_8___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_username = python_pars[ 1 ];
    PyObject *par_password = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_6dfcfed908795faccc329213d8fa9c2d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6dfcfed908795faccc329213d8fa9c2d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6dfcfed908795faccc329213d8fa9c2d, codeobj_6dfcfed908795faccc329213d8fa9c2d, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6dfcfed908795faccc329213d8fa9c2d = cache_frame_6dfcfed908795faccc329213d8fa9c2d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6dfcfed908795faccc329213d8fa9c2d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6dfcfed908795faccc329213d8fa9c2d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_username );
        tmp_assattr_name_1 = par_username;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_username, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_password );
        tmp_assattr_name_2 = par_password;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_password, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 113;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_assattr_target_3;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_threading );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_threading );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "threading" );
            exception_tb = NULL;

            exception_lineno = 115;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_1;
        frame_6dfcfed908795faccc329213d8fa9c2d->m_frame.f_lineno = 115;
        tmp_assattr_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_local );
        if ( tmp_assattr_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__thread_local, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 115;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6dfcfed908795faccc329213d8fa9c2d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6dfcfed908795faccc329213d8fa9c2d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6dfcfed908795faccc329213d8fa9c2d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6dfcfed908795faccc329213d8fa9c2d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6dfcfed908795faccc329213d8fa9c2d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6dfcfed908795faccc329213d8fa9c2d,
        type_description_1,
        par_self,
        par_username,
        par_password
    );


    // Release cached frame.
    if ( frame_6dfcfed908795faccc329213d8fa9c2d == cache_frame_6dfcfed908795faccc329213d8fa9c2d )
    {
        Py_DECREF( frame_6dfcfed908795faccc329213d8fa9c2d );
    }
    cache_frame_6dfcfed908795faccc329213d8fa9c2d = NULL;

    assertFrameObject( frame_6dfcfed908795faccc329213d8fa9c2d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_8___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_username );
    Py_DECREF( par_username );
    par_username = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_password );
    Py_DECREF( par_password );
    par_password = NULL;

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

    CHECK_OBJECT( (PyObject *)par_username );
    Py_DECREF( par_username );
    par_username = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_password );
    Py_DECREF( par_password );
    par_password = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_8___init__ );
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


static PyObject *impl_requests$auth$$$function_9_init_per_thread_state( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_434ac1d5f8c70b1305c5a979b74071f5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_434ac1d5f8c70b1305c5a979b74071f5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_434ac1d5f8c70b1305c5a979b74071f5, codeobj_434ac1d5f8c70b1305c5a979b74071f5, module_requests$auth, sizeof(void *) );
    frame_434ac1d5f8c70b1305c5a979b74071f5 = cache_frame_434ac1d5f8c70b1305c5a979b74071f5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_434ac1d5f8c70b1305c5a979b74071f5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_434ac1d5f8c70b1305c5a979b74071f5 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__thread_local );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_attribute_name_1 = const_str_plain_init;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_1, tmp_attribute_name_1 );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 119;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            PyObject *tmp_source_name_3;
            tmp_assattr_name_1 = Py_True;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__thread_local );
            if ( tmp_assattr_target_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_init, tmp_assattr_name_1 );
            Py_DECREF( tmp_assattr_target_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 120;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            PyObject *tmp_source_name_4;
            tmp_assattr_name_2 = const_str_empty;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_assattr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__thread_local );
            if ( tmp_assattr_target_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 121;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_last_nonce, tmp_assattr_name_2 );
            Py_DECREF( tmp_assattr_target_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 121;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_assattr_target_3;
            PyObject *tmp_source_name_5;
            tmp_assattr_name_3 = const_int_0;
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_assattr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__thread_local );
            if ( tmp_assattr_target_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 122;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_nonce_count, tmp_assattr_name_3 );
            Py_DECREF( tmp_assattr_target_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 122;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_assattr_target_4;
            PyObject *tmp_source_name_6;
            tmp_assattr_name_4 = PyDict_New();
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_assattr_target_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__thread_local );
            if ( tmp_assattr_target_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assattr_name_4 );

                exception_lineno = 123;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_chal, tmp_assattr_name_4 );
            Py_DECREF( tmp_assattr_name_4 );
            Py_DECREF( tmp_assattr_target_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 123;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_5;
            PyObject *tmp_assattr_target_5;
            PyObject *tmp_source_name_7;
            tmp_assattr_name_5 = Py_None;
            CHECK_OBJECT( par_self );
            tmp_source_name_7 = par_self;
            tmp_assattr_target_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__thread_local );
            if ( tmp_assattr_target_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 124;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_pos, tmp_assattr_name_5 );
            Py_DECREF( tmp_assattr_target_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 124;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_6;
            PyObject *tmp_assattr_target_6;
            PyObject *tmp_source_name_8;
            tmp_assattr_name_6 = Py_None;
            CHECK_OBJECT( par_self );
            tmp_source_name_8 = par_self;
            tmp_assattr_target_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__thread_local );
            if ( tmp_assattr_target_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 125;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_num_401_calls, tmp_assattr_name_6 );
            Py_DECREF( tmp_assattr_target_6 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 125;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_434ac1d5f8c70b1305c5a979b74071f5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_434ac1d5f8c70b1305c5a979b74071f5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_434ac1d5f8c70b1305c5a979b74071f5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_434ac1d5f8c70b1305c5a979b74071f5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_434ac1d5f8c70b1305c5a979b74071f5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_434ac1d5f8c70b1305c5a979b74071f5,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_434ac1d5f8c70b1305c5a979b74071f5 == cache_frame_434ac1d5f8c70b1305c5a979b74071f5 )
    {
        Py_DECREF( frame_434ac1d5f8c70b1305c5a979b74071f5 );
    }
    cache_frame_434ac1d5f8c70b1305c5a979b74071f5 = NULL;

    assertFrameObject( frame_434ac1d5f8c70b1305c5a979b74071f5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_9_init_per_thread_state );
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
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_9_init_per_thread_state );
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


static PyObject *impl_requests$auth$$$function_10_build_digest_header( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *var_qop = NULL;
    PyObject *var_cnonce = NULL;
    PyObject *var_realm = NULL;
    PyObject *var_opaque = NULL;
    PyObject *var_p_parsed = NULL;
    PyObject *var_respdig = NULL;
    PyObject *var_sha256_utf8 = NULL;
    PyObject *var_sha512_utf8 = NULL;
    PyObject *var_A1 = NULL;
    PyObject *var_A2 = NULL;
    PyObject *var_noncebit = NULL;
    struct Nuitka_CellObject *var_hash_utf8 = PyCell_EMPTY();
    PyObject *var_HA1 = NULL;
    PyObject *var_HA2 = NULL;
    PyObject *var__algorithm = NULL;
    PyObject *var_nonce = NULL;
    PyObject *var_md5_utf8 = NULL;
    PyObject *var_ncvalue = NULL;
    PyObject *var_base = NULL;
    PyObject *var_path = NULL;
    PyObject *var_sha_utf8 = NULL;
    PyObject *var_algorithm = NULL;
    PyObject *var_KD = NULL;
    PyObject *var_s = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_565f0e2f58d6f444cffd651f546c2e70;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_565f0e2f58d6f444cffd651f546c2e70 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_565f0e2f58d6f444cffd651f546c2e70, codeobj_565f0e2f58d6f444cffd651f546c2e70, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_565f0e2f58d6f444cffd651f546c2e70 = cache_frame_565f0e2f58d6f444cffd651f546c2e70;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_565f0e2f58d6f444cffd651f546c2e70 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_565f0e2f58d6f444cffd651f546c2e70 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_subscript_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__thread_local );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_chal );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_subscribed_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_1 = const_str_plain_realm;
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscribed_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_realm == NULL );
        var_realm = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_subscribed_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_subscript_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__thread_local );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_chal );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_subscribed_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_name_2 = const_str_plain_nonce;
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
        Py_DECREF( tmp_subscribed_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_nonce == NULL );
        var_nonce = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__thread_local );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_chal );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_565f0e2f58d6f444cffd651f546c2e70->m_frame.f_lineno = 134;
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_qop_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_qop == NULL );
        var_qop = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__thread_local );
        if ( tmp_source_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_chal );
        Py_DECREF( tmp_source_name_7 );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_565f0e2f58d6f444cffd651f546c2e70->m_frame.f_lineno = 135;
        tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_algorithm_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 135;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_algorithm == NULL );
        var_algorithm = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_source_name_9;
        PyObject *tmp_source_name_10;
        CHECK_OBJECT( par_self );
        tmp_source_name_10 = par_self;
        tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain__thread_local );
        if ( tmp_source_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_chal );
        Py_DECREF( tmp_source_name_9 );
        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_565f0e2f58d6f444cffd651f546c2e70->m_frame.f_lineno = 136;
        tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_opaque_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 136;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_opaque == NULL );
        var_opaque = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = Py_None;
        assert( PyCell_GET( var_hash_utf8 ) == NULL );
        Py_INCREF( tmp_assign_source_6 );
        PyCell_SET( var_hash_utf8, tmp_assign_source_6 );

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_algorithm );
        tmp_compexpr_left_1 = var_algorithm;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = const_str_plain_MD5;
            assert( var__algorithm == NULL );
            Py_INCREF( tmp_assign_source_7 );
            var__algorithm = tmp_assign_source_7;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_instance_4;
            CHECK_OBJECT( var_algorithm );
            tmp_called_instance_4 = var_algorithm;
            frame_565f0e2f58d6f444cffd651f546c2e70->m_frame.f_lineno = 142;
            tmp_assign_source_8 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_upper );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 142;
                type_description_1 = "oooooNooooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var__algorithm == NULL );
            var__algorithm = tmp_assign_source_8;
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( var__algorithm );
        tmp_compexpr_left_2 = var__algorithm;
        tmp_compexpr_right_2 = const_str_plain_MD5;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( var__algorithm );
        tmp_compexpr_left_3 = var__algorithm;
        tmp_compexpr_right_3 = const_str_digest_a49a175904e70dd9f5dc0f52dbebbfdb;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_2 = tmp_or_left_value_1;
        or_end_1:;
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
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_1_md5_utf8(  );



            assert( var_md5_utf8 == NULL );
            var_md5_utf8 = tmp_assign_source_9;
        }
        {
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT( var_md5_utf8 );
            tmp_assign_source_10 = var_md5_utf8;
            {
                PyObject *old = PyCell_GET( var_hash_utf8 );
                PyCell_SET( var_hash_utf8, tmp_assign_source_10 );
                Py_INCREF( tmp_assign_source_10 );
                Py_XDECREF( old );
            }

        }
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            CHECK_OBJECT( var__algorithm );
            tmp_compexpr_left_4 = var__algorithm;
            tmp_compexpr_right_4 = const_str_plain_SHA;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 150;
                type_description_1 = "oooooNooooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_11;
                tmp_assign_source_11 = MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_2_sha_utf8(  );



                assert( var_sha_utf8 == NULL );
                var_sha_utf8 = tmp_assign_source_11;
            }
            {
                PyObject *tmp_assign_source_12;
                CHECK_OBJECT( var_sha_utf8 );
                tmp_assign_source_12 = var_sha_utf8;
                {
                    PyObject *old = PyCell_GET( var_hash_utf8 );
                    PyCell_SET( var_hash_utf8, tmp_assign_source_12 );
                    Py_INCREF( tmp_assign_source_12 );
                    Py_XDECREF( old );
                }

            }
            goto branch_end_3;
            branch_no_3:;
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                CHECK_OBJECT( var__algorithm );
                tmp_compexpr_left_5 = var__algorithm;
                tmp_compexpr_right_5 = const_str_digest_1e080f858ef601c43605cc71a556333d;
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 156;
                    type_description_1 = "oooooNooooooooocoooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_assign_source_13;
                    tmp_assign_source_13 = MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_3_sha256_utf8(  );



                    assert( var_sha256_utf8 == NULL );
                    var_sha256_utf8 = tmp_assign_source_13;
                }
                {
                    PyObject *tmp_assign_source_14;
                    CHECK_OBJECT( var_sha256_utf8 );
                    tmp_assign_source_14 = var_sha256_utf8;
                    {
                        PyObject *old = PyCell_GET( var_hash_utf8 );
                        PyCell_SET( var_hash_utf8, tmp_assign_source_14 );
                        Py_INCREF( tmp_assign_source_14 );
                        Py_XDECREF( old );
                    }

                }
                goto branch_end_4;
                branch_no_4:;
                {
                    nuitka_bool tmp_condition_result_5;
                    PyObject *tmp_compexpr_left_6;
                    PyObject *tmp_compexpr_right_6;
                    CHECK_OBJECT( var__algorithm );
                    tmp_compexpr_left_6 = var__algorithm;
                    tmp_compexpr_right_6 = const_str_digest_91012c747d1826684889b0187ce7d184;
                    tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 162;
                        type_description_1 = "oooooNooooooooocoooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_5;
                    }
                    else
                    {
                        goto branch_no_5;
                    }
                    branch_yes_5:;
                    {
                        PyObject *tmp_assign_source_15;
                        tmp_assign_source_15 = MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_4_sha512_utf8(  );



                        assert( var_sha512_utf8 == NULL );
                        var_sha512_utf8 = tmp_assign_source_15;
                    }
                    {
                        PyObject *tmp_assign_source_16;
                        CHECK_OBJECT( var_sha512_utf8 );
                        tmp_assign_source_16 = var_sha512_utf8;
                        {
                            PyObject *old = PyCell_GET( var_hash_utf8 );
                            PyCell_SET( var_hash_utf8, tmp_assign_source_16 );
                            Py_INCREF( tmp_assign_source_16 );
                            Py_XDECREF( old );
                        }

                    }
                    branch_no_5:;
                }
                branch_end_4:;
            }
            branch_end_3:;
        }
        branch_end_2:;
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_5_lambda(  );

        ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[0] = var_hash_utf8;
        Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_assign_source_17)->m_closure[0] );


        assert( var_KD == NULL );
        var_KD = tmp_assign_source_17;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        if ( PyCell_GET( var_hash_utf8 ) == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "hash_utf8" );
            exception_tb = NULL;

            exception_lineno = 171;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_left_7 = PyCell_GET( var_hash_utf8 );
        tmp_compexpr_right_7 = Py_None;
        tmp_condition_result_6 = ( tmp_compexpr_left_7 == tmp_compexpr_right_7 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_6:;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_urlparse );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlparse );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "urlparse" );
            exception_tb = NULL;

            exception_lineno = 176;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_url );
        tmp_args_element_name_1 = par_url;
        frame_565f0e2f58d6f444cffd651f546c2e70->m_frame.f_lineno = 176;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_p_parsed == NULL );
        var_p_parsed = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_source_name_11;
        CHECK_OBJECT( var_p_parsed );
        tmp_source_name_11 = var_p_parsed;
        tmp_or_left_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_path );
        if ( tmp_or_left_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
        if ( tmp_or_left_truth_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_or_left_value_2 );

            exception_lineno = 178;
            type_description_1 = "oooooNooooooooocoooooooooooo";
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
        tmp_or_right_value_2 = const_str_chr_47;
        Py_INCREF( tmp_or_right_value_2 );
        tmp_assign_source_19 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_assign_source_19 = tmp_or_left_value_2;
        or_end_2:;
        assert( var_path == NULL );
        var_path = tmp_assign_source_19;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_source_name_12;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_p_parsed );
        tmp_source_name_12 = var_p_parsed;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_query );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 179;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 179;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_7;
        }
        else
        {
            goto branch_no_7;
        }
        branch_yes_7:;
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_left_name_2;
            PyObject *tmp_right_name_2;
            PyObject *tmp_source_name_13;
            CHECK_OBJECT( var_path );
            tmp_left_name_1 = var_path;
            tmp_left_name_2 = const_str_chr_63;
            CHECK_OBJECT( var_p_parsed );
            tmp_source_name_13 = var_p_parsed;
            tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_query );
            if ( tmp_right_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 180;
                type_description_1 = "oooooNooooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = BINARY_OPERATION_ADD_STR_OBJECT( tmp_left_name_2, tmp_right_name_2 );
            Py_DECREF( tmp_right_name_2 );
            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 180;
                type_description_1 = "oooooNooooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 180;
                type_description_1 = "oooooNooooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_20 = tmp_left_name_1;
            var_path = tmp_assign_source_20;

        }
        branch_no_7:;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_left_name_3;
        PyObject *tmp_right_name_3;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_14;
        PyObject *tmp_source_name_15;
        tmp_left_name_3 = const_str_digest_7b8850a6b4d3502f6f32cd3625c4afca;
        CHECK_OBJECT( par_self );
        tmp_source_name_14 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_username );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_3 = PyTuple_New( 3 );
        PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( var_realm );
        tmp_tuple_element_1 = var_realm;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_15 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_password );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_right_name_3 );

            exception_lineno = 182;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_right_name_3, 2, tmp_tuple_element_1 );
        tmp_assign_source_21 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
        Py_DECREF( tmp_right_name_3 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_A1 == NULL );
        var_A1 = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_left_name_4;
        PyObject *tmp_right_name_4;
        PyObject *tmp_tuple_element_2;
        tmp_left_name_4 = const_str_digest_f2d2f5f01d8d9360355c50eb1d09d771;
        CHECK_OBJECT( par_method );
        tmp_tuple_element_2 = par_method;
        tmp_right_name_4 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( var_path );
        tmp_tuple_element_2 = var_path;
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_2 );
        tmp_assign_source_22 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
        Py_DECREF( tmp_right_name_4 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_A2 == NULL );
        var_A2 = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_2;
        if ( PyCell_GET( var_hash_utf8 ) == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "hash_utf8" );
            exception_tb = NULL;

            exception_lineno = 185;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = PyCell_GET( var_hash_utf8 );
        CHECK_OBJECT( var_A1 );
        tmp_args_element_name_2 = var_A1;
        frame_565f0e2f58d6f444cffd651f546c2e70->m_frame.f_lineno = 185;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 185;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_HA1 == NULL );
        var_HA1 = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_3;
        if ( PyCell_GET( var_hash_utf8 ) == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "hash_utf8" );
            exception_tb = NULL;

            exception_lineno = 186;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = PyCell_GET( var_hash_utf8 );
        CHECK_OBJECT( var_A2 );
        tmp_args_element_name_3 = var_A2;
        frame_565f0e2f58d6f444cffd651f546c2e70->m_frame.f_lineno = 186;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 186;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_HA2 == NULL );
        var_HA2 = tmp_assign_source_24;
    }
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_8;
        PyObject *tmp_compexpr_right_8;
        PyObject *tmp_source_name_16;
        PyObject *tmp_source_name_17;
        CHECK_OBJECT( var_nonce );
        tmp_compexpr_left_8 = var_nonce;
        CHECK_OBJECT( par_self );
        tmp_source_name_17 = par_self;
        tmp_source_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain__thread_local );
        if ( tmp_source_name_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_8 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_last_nonce );
        Py_DECREF( tmp_source_name_16 );
        if ( tmp_compexpr_right_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_8, tmp_compexpr_right_8 );
        Py_DECREF( tmp_compexpr_right_8 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 188;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_8;
        }
        else
        {
            goto branch_no_8;
        }
        branch_yes_8:;
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_source_name_18;
            PyObject *tmp_source_name_19;
            CHECK_OBJECT( par_self );
            tmp_source_name_19 = par_self;
            tmp_source_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain__thread_local );
            if ( tmp_source_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 189;
                type_description_1 = "oooooNooooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_25 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_nonce_count );
            Py_DECREF( tmp_source_name_18 );
            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 189;
                type_description_1 = "oooooNooooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_inplace_assign_attr_1__start == NULL );
            tmp_inplace_assign_attr_1__start = tmp_assign_source_25;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_left_name_5;
            PyObject *tmp_right_name_5;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
            tmp_left_name_5 = tmp_inplace_assign_attr_1__start;
            tmp_right_name_5 = const_int_pos_1;
            tmp_assign_source_26 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_5, tmp_right_name_5 );
            if ( tmp_assign_source_26 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 189;
                type_description_1 = "oooooNooooooooocoooooooooooo";
                goto try_except_handler_2;
            }
            assert( tmp_inplace_assign_attr_1__end == NULL );
            tmp_inplace_assign_attr_1__end = tmp_assign_source_26;
        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            PyObject *tmp_source_name_20;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
            tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
            CHECK_OBJECT( par_self );
            tmp_source_name_20 = par_self;
            tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain__thread_local );
            if ( tmp_assattr_target_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 189;
                type_description_1 = "oooooNooooooooocoooooooooooo";
                goto try_except_handler_3;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_nonce_count, tmp_assattr_name_1 );
            Py_DECREF( tmp_assattr_target_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 189;
                type_description_1 = "oooooNooooooooocoooooooooooo";
                goto try_except_handler_3;
            }
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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

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

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        goto branch_end_8;
        branch_no_8:;
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            PyObject *tmp_source_name_21;
            tmp_assattr_name_2 = const_int_pos_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_21 = par_self;
            tmp_assattr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain__thread_local );
            if ( tmp_assattr_target_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 191;
                type_description_1 = "oooooNooooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_nonce_count, tmp_assattr_name_2 );
            Py_DECREF( tmp_assattr_target_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 191;
                type_description_1 = "oooooNooooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_end_8:;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_left_name_6;
        PyObject *tmp_right_name_6;
        PyObject *tmp_source_name_22;
        PyObject *tmp_source_name_23;
        tmp_left_name_6 = const_str_digest_01a11c701578b78bc17e57844dca83b0;
        CHECK_OBJECT( par_self );
        tmp_source_name_23 = par_self;
        tmp_source_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain__thread_local );
        if ( tmp_source_name_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_nonce_count );
        Py_DECREF( tmp_source_name_22 );
        if ( tmp_right_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_27 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
        Py_DECREF( tmp_right_name_6 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_ncvalue == NULL );
        var_ncvalue = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_24;
        PyObject *tmp_source_name_25;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_str );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "str" );
            exception_tb = NULL;

            exception_lineno = 193;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_25 = par_self;
        tmp_source_name_24 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain__thread_local );
        if ( tmp_source_name_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_nonce_count );
        Py_DECREF( tmp_source_name_24 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_565f0e2f58d6f444cffd651f546c2e70->m_frame.f_lineno = 193;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_called_instance_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_called_instance_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_565f0e2f58d6f444cffd651f546c2e70->m_frame.f_lineno = 193;
        tmp_assign_source_28 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_5 );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 193;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_s == NULL );
        var_s = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_left_name_7;
        PyObject *tmp_right_name_7;
        PyObject *tmp_called_instance_6;
        CHECK_OBJECT( var_s );
        tmp_left_name_7 = var_s;
        CHECK_OBJECT( var_nonce );
        tmp_called_instance_6 = var_nonce;
        frame_565f0e2f58d6f444cffd651f546c2e70->m_frame.f_lineno = 194;
        tmp_right_name_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

        if ( tmp_right_name_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_7, tmp_right_name_7 );
        Py_DECREF( tmp_right_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 194;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_29 = tmp_left_name_7;
        var_s = tmp_assign_source_29;

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_left_name_8;
        PyObject *tmp_right_name_8;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT( var_s );
        tmp_left_name_8 = var_s;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_time );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_time );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "time" );
            exception_tb = NULL;

            exception_lineno = 195;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_8 = tmp_mvar_value_3;
        frame_565f0e2f58d6f444cffd651f546c2e70->m_frame.f_lineno = 195;
        tmp_called_instance_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_8, const_str_plain_ctime );
        if ( tmp_called_instance_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_565f0e2f58d6f444cffd651f546c2e70->m_frame.f_lineno = 195;
        tmp_right_name_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_7 );
        if ( tmp_right_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_8, tmp_right_name_8 );
        Py_DECREF( tmp_right_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 195;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_30 = tmp_left_name_8;
        var_s = tmp_assign_source_30;

    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_left_name_9;
        PyObject *tmp_right_name_9;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_mvar_value_4;
        CHECK_OBJECT( var_s );
        tmp_left_name_9 = var_s;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
            exception_tb = NULL;

            exception_lineno = 196;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_9 = tmp_mvar_value_4;
        frame_565f0e2f58d6f444cffd651f546c2e70->m_frame.f_lineno = 196;
        tmp_right_name_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_urandom, &PyTuple_GET_ITEM( const_tuple_int_pos_8_tuple, 0 ) );

        if ( tmp_right_name_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 196;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_9, tmp_right_name_9 );
        Py_DECREF( tmp_right_name_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 196;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_31 = tmp_left_name_9;
        var_s = tmp_assign_source_31;

    }
    {
        PyObject *tmp_assign_source_32;
        Py_ssize_t tmp_sliceslicedel_index_lower_1;
        Py_ssize_t tmp_slice_index_upper_1;
        PyObject *tmp_slice_source_1;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_args_element_name_5;
        tmp_sliceslicedel_index_lower_1 = 0;
        tmp_slice_index_upper_1 = 16;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_hashlib );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashlib );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "hashlib" );
            exception_tb = NULL;

            exception_lineno = 198;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_11 = tmp_mvar_value_5;
        CHECK_OBJECT( var_s );
        tmp_args_element_name_5 = var_s;
        frame_565f0e2f58d6f444cffd651f546c2e70->m_frame.f_lineno = 198;
        {
            PyObject *call_args[] = { tmp_args_element_name_5 };
            tmp_called_instance_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_11, const_str_plain_sha1, call_args );
        }

        if ( tmp_called_instance_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_565f0e2f58d6f444cffd651f546c2e70->m_frame.f_lineno = 198;
        tmp_slice_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_10, const_str_plain_hexdigest );
        Py_DECREF( tmp_called_instance_10 );
        if ( tmp_slice_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_32 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
        Py_DECREF( tmp_slice_source_1 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_cnonce == NULL );
        var_cnonce = tmp_assign_source_32;
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_compexpr_left_9;
        PyObject *tmp_compexpr_right_9;
        CHECK_OBJECT( var__algorithm );
        tmp_compexpr_left_9 = var__algorithm;
        tmp_compexpr_right_9 = const_str_digest_a49a175904e70dd9f5dc0f52dbebbfdb;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_9, tmp_compexpr_right_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_9;
        }
        else
        {
            goto branch_no_9;
        }
        branch_yes_9:;
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_left_name_10;
            PyObject *tmp_right_name_10;
            PyObject *tmp_tuple_element_3;
            if ( PyCell_GET( var_hash_utf8 ) == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "hash_utf8" );
                exception_tb = NULL;

                exception_lineno = 200;
                type_description_1 = "oooooNooooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = PyCell_GET( var_hash_utf8 );
            tmp_left_name_10 = const_str_digest_7b8850a6b4d3502f6f32cd3625c4afca;
            CHECK_OBJECT( var_HA1 );
            tmp_tuple_element_3 = var_HA1;
            tmp_right_name_10 = PyTuple_New( 3 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_right_name_10, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( var_nonce );
            tmp_tuple_element_3 = var_nonce;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_right_name_10, 1, tmp_tuple_element_3 );
            CHECK_OBJECT( var_cnonce );
            tmp_tuple_element_3 = var_cnonce;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_right_name_10, 2, tmp_tuple_element_3 );
            tmp_args_element_name_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_10, tmp_right_name_10 );
            Py_DECREF( tmp_right_name_10 );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;
                type_description_1 = "oooooNooooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_565f0e2f58d6f444cffd651f546c2e70->m_frame.f_lineno = 200;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_assign_source_33 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 200;
                type_description_1 = "oooooNooooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_HA1;
                assert( old != NULL );
                var_HA1 = tmp_assign_source_33;
                Py_DECREF( old );
            }

        }
        branch_no_9:;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_qop );
        tmp_operand_name_1 = var_qop;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 202;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_10 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_10;
        }
        else
        {
            goto branch_no_10;
        }
        branch_yes_10:;
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_called_name_6;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_left_name_11;
            PyObject *tmp_right_name_11;
            PyObject *tmp_tuple_element_4;
            CHECK_OBJECT( var_KD );
            tmp_called_name_6 = var_KD;
            CHECK_OBJECT( var_HA1 );
            tmp_args_element_name_7 = var_HA1;
            tmp_left_name_11 = const_str_digest_f2d2f5f01d8d9360355c50eb1d09d771;
            CHECK_OBJECT( var_nonce );
            tmp_tuple_element_4 = var_nonce;
            tmp_right_name_11 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_right_name_11, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( var_HA2 );
            tmp_tuple_element_4 = var_HA2;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_right_name_11, 1, tmp_tuple_element_4 );
            tmp_args_element_name_8 = BINARY_OPERATION_REMAINDER( tmp_left_name_11, tmp_right_name_11 );
            Py_DECREF( tmp_right_name_11 );
            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 203;
                type_description_1 = "oooooNooooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            frame_565f0e2f58d6f444cffd651f546c2e70->m_frame.f_lineno = 203;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_args_element_name_8 );
            if ( tmp_assign_source_34 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 203;
                type_description_1 = "oooooNooooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_respdig == NULL );
            var_respdig = tmp_assign_source_34;
        }
        goto branch_end_10;
        branch_no_10:;
        {
            nuitka_bool tmp_condition_result_11;
            int tmp_or_left_truth_3;
            nuitka_bool tmp_or_left_value_3;
            nuitka_bool tmp_or_right_value_3;
            PyObject *tmp_compexpr_left_10;
            PyObject *tmp_compexpr_right_10;
            PyObject *tmp_compexpr_left_11;
            PyObject *tmp_compexpr_right_11;
            PyObject *tmp_called_instance_12;
            CHECK_OBJECT( var_qop );
            tmp_compexpr_left_10 = var_qop;
            tmp_compexpr_right_10 = const_str_plain_auth;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_10, tmp_compexpr_right_10 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 204;
                type_description_1 = "oooooNooooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_left_value_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_or_left_truth_3 = tmp_or_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
            if ( tmp_or_left_truth_3 == 1 )
            {
                goto or_left_3;
            }
            else
            {
                goto or_right_3;
            }
            or_right_3:;
            tmp_compexpr_left_11 = const_str_plain_auth;
            CHECK_OBJECT( var_qop );
            tmp_called_instance_12 = var_qop;
            frame_565f0e2f58d6f444cffd651f546c2e70->m_frame.f_lineno = 204;
            tmp_compexpr_right_11 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_12, const_str_plain_split, &PyTuple_GET_ITEM( const_tuple_str_chr_44_tuple, 0 ) );

            if ( tmp_compexpr_right_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 204;
                type_description_1 = "oooooNooooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = PySequence_Contains( tmp_compexpr_right_11, tmp_compexpr_left_11 );
            Py_DECREF( tmp_compexpr_right_11 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 204;
                type_description_1 = "oooooNooooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_right_value_3 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_11 = tmp_or_right_value_3;
            goto or_end_3;
            or_left_3:;
            tmp_condition_result_11 = tmp_or_left_value_3;
            or_end_3:;
            if ( tmp_condition_result_11 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_11;
            }
            else
            {
                goto branch_no_11;
            }
            branch_yes_11:;
            {
                PyObject *tmp_assign_source_35;
                PyObject *tmp_left_name_12;
                PyObject *tmp_right_name_12;
                PyObject *tmp_tuple_element_5;
                tmp_left_name_12 = const_str_digest_b0f8a4a055f15da2a394551a1933d695;
                CHECK_OBJECT( var_nonce );
                tmp_tuple_element_5 = var_nonce;
                tmp_right_name_12 = PyTuple_New( 5 );
                Py_INCREF( tmp_tuple_element_5 );
                PyTuple_SET_ITEM( tmp_right_name_12, 0, tmp_tuple_element_5 );
                CHECK_OBJECT( var_ncvalue );
                tmp_tuple_element_5 = var_ncvalue;
                Py_INCREF( tmp_tuple_element_5 );
                PyTuple_SET_ITEM( tmp_right_name_12, 1, tmp_tuple_element_5 );
                CHECK_OBJECT( var_cnonce );
                tmp_tuple_element_5 = var_cnonce;
                Py_INCREF( tmp_tuple_element_5 );
                PyTuple_SET_ITEM( tmp_right_name_12, 2, tmp_tuple_element_5 );
                tmp_tuple_element_5 = const_str_plain_auth;
                Py_INCREF( tmp_tuple_element_5 );
                PyTuple_SET_ITEM( tmp_right_name_12, 3, tmp_tuple_element_5 );
                CHECK_OBJECT( var_HA2 );
                tmp_tuple_element_5 = var_HA2;
                Py_INCREF( tmp_tuple_element_5 );
                PyTuple_SET_ITEM( tmp_right_name_12, 4, tmp_tuple_element_5 );
                tmp_assign_source_35 = BINARY_OPERATION_REMAINDER( tmp_left_name_12, tmp_right_name_12 );
                Py_DECREF( tmp_right_name_12 );
                if ( tmp_assign_source_35 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 205;
                    type_description_1 = "oooooNooooooooocoooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_noncebit == NULL );
                var_noncebit = tmp_assign_source_35;
            }
            {
                PyObject *tmp_assign_source_36;
                PyObject *tmp_called_name_7;
                PyObject *tmp_args_element_name_9;
                PyObject *tmp_args_element_name_10;
                CHECK_OBJECT( var_KD );
                tmp_called_name_7 = var_KD;
                CHECK_OBJECT( var_HA1 );
                tmp_args_element_name_9 = var_HA1;
                CHECK_OBJECT( var_noncebit );
                tmp_args_element_name_10 = var_noncebit;
                frame_565f0e2f58d6f444cffd651f546c2e70->m_frame.f_lineno = 208;
                {
                    PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10 };
                    tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
                }

                if ( tmp_assign_source_36 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 208;
                    type_description_1 = "oooooNooooooooocoooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_respdig == NULL );
                var_respdig = tmp_assign_source_36;
            }
            goto branch_end_11;
            branch_no_11:;
            tmp_return_value = Py_None;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            branch_end_11:;
        }
        branch_end_10:;
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_source_name_26;
        CHECK_OBJECT( var_nonce );
        tmp_assattr_name_3 = var_nonce;
        CHECK_OBJECT( par_self );
        tmp_source_name_26 = par_self;
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain__thread_local );
        if ( tmp_assattr_target_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_last_nonce, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_target_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_left_name_13;
        PyObject *tmp_right_name_13;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_source_name_27;
        tmp_left_name_13 = const_str_digest_fe400b7786b755fe7fa07749cdd2ff1e;
        CHECK_OBJECT( par_self );
        tmp_source_name_27 = par_self;
        tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_username );
        if ( tmp_tuple_element_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 217;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_right_name_13 = PyTuple_New( 5 );
        PyTuple_SET_ITEM( tmp_right_name_13, 0, tmp_tuple_element_6 );
        CHECK_OBJECT( var_realm );
        tmp_tuple_element_6 = var_realm;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_right_name_13, 1, tmp_tuple_element_6 );
        CHECK_OBJECT( var_nonce );
        tmp_tuple_element_6 = var_nonce;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_right_name_13, 2, tmp_tuple_element_6 );
        CHECK_OBJECT( var_path );
        tmp_tuple_element_6 = var_path;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_right_name_13, 3, tmp_tuple_element_6 );
        if ( var_respdig == NULL )
        {
            Py_DECREF( tmp_right_name_13 );
            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "respdig" );
            exception_tb = NULL;

            exception_lineno = 217;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_6 = var_respdig;
        Py_INCREF( tmp_tuple_element_6 );
        PyTuple_SET_ITEM( tmp_right_name_13, 4, tmp_tuple_element_6 );
        tmp_assign_source_37 = BINARY_OPERATION_REMAINDER( tmp_left_name_13, tmp_right_name_13 );
        Py_DECREF( tmp_right_name_13 );
        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 216;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_base == NULL );
        var_base = tmp_assign_source_37;
    }
    {
        nuitka_bool tmp_condition_result_12;
        int tmp_truth_name_2;
        CHECK_OBJECT( var_opaque );
        tmp_truth_name_2 = CHECK_IF_TRUE( var_opaque );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 218;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_12 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_12 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_12;
        }
        else
        {
            goto branch_no_12;
        }
        branch_yes_12:;
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_left_name_14;
            PyObject *tmp_right_name_14;
            PyObject *tmp_left_name_15;
            PyObject *tmp_right_name_15;
            CHECK_OBJECT( var_base );
            tmp_left_name_14 = var_base;
            tmp_left_name_15 = const_str_digest_7d7309ebed4abfa9aab0d6db44793741;
            CHECK_OBJECT( var_opaque );
            tmp_right_name_15 = var_opaque;
            tmp_right_name_14 = BINARY_OPERATION_REMAINDER( tmp_left_name_15, tmp_right_name_15 );
            if ( tmp_right_name_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 219;
                type_description_1 = "oooooNooooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_14, tmp_right_name_14 );
            Py_DECREF( tmp_right_name_14 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 219;
                type_description_1 = "oooooNooooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_38 = tmp_left_name_14;
            var_base = tmp_assign_source_38;

        }
        branch_no_12:;
    }
    {
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_3;
        CHECK_OBJECT( var_algorithm );
        tmp_truth_name_3 = CHECK_IF_TRUE( var_algorithm );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_13 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_13;
        }
        else
        {
            goto branch_no_13;
        }
        branch_yes_13:;
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_left_name_16;
            PyObject *tmp_right_name_16;
            PyObject *tmp_left_name_17;
            PyObject *tmp_right_name_17;
            CHECK_OBJECT( var_base );
            tmp_left_name_16 = var_base;
            tmp_left_name_17 = const_str_digest_d69b853fcab0d61d934c8e6dc6bd2d6a;
            CHECK_OBJECT( var_algorithm );
            tmp_right_name_17 = var_algorithm;
            tmp_right_name_16 = BINARY_OPERATION_REMAINDER( tmp_left_name_17, tmp_right_name_17 );
            if ( tmp_right_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 221;
                type_description_1 = "oooooNooooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_16, tmp_right_name_16 );
            Py_DECREF( tmp_right_name_16 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 221;
                type_description_1 = "oooooNooooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_39 = tmp_left_name_16;
            var_base = tmp_assign_source_39;

        }
        branch_no_13:;
    }
    {
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_4;
        CHECK_OBJECT( var_qop );
        tmp_truth_name_4 = CHECK_IF_TRUE( var_qop );
        if ( tmp_truth_name_4 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 224;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_14 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_14 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_14;
        }
        else
        {
            goto branch_no_14;
        }
        branch_yes_14:;
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_left_name_18;
            PyObject *tmp_right_name_18;
            PyObject *tmp_left_name_19;
            PyObject *tmp_right_name_19;
            PyObject *tmp_tuple_element_7;
            if ( var_base == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "base" );
                exception_tb = NULL;

                exception_lineno = 225;
                type_description_1 = "oooooNooooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_left_name_18 = var_base;
            tmp_left_name_19 = const_str_digest_a82f8015cfcad4d42fa43483823a6f72;
            CHECK_OBJECT( var_ncvalue );
            tmp_tuple_element_7 = var_ncvalue;
            tmp_right_name_19 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_right_name_19, 0, tmp_tuple_element_7 );
            CHECK_OBJECT( var_cnonce );
            tmp_tuple_element_7 = var_cnonce;
            Py_INCREF( tmp_tuple_element_7 );
            PyTuple_SET_ITEM( tmp_right_name_19, 1, tmp_tuple_element_7 );
            tmp_right_name_18 = BINARY_OPERATION_REMAINDER( tmp_left_name_19, tmp_right_name_19 );
            Py_DECREF( tmp_right_name_19 );
            if ( tmp_right_name_18 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 225;
                type_description_1 = "oooooNooooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_18, tmp_right_name_18 );
            Py_DECREF( tmp_right_name_18 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 225;
                type_description_1 = "oooooNooooooooocoooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_40 = tmp_left_name_18;
            var_base = tmp_assign_source_40;

        }
        branch_no_14:;
    }
    {
        PyObject *tmp_left_name_20;
        PyObject *tmp_right_name_20;
        tmp_left_name_20 = const_str_digest_69c286e01655beff40436b2cda33b552;
        if ( var_base == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "base" );
            exception_tb = NULL;

            exception_lineno = 227;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_20 = var_base;
        tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_20, tmp_right_name_20 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 227;
            type_description_1 = "oooooNooooooooocoooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_565f0e2f58d6f444cffd651f546c2e70 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_565f0e2f58d6f444cffd651f546c2e70 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_565f0e2f58d6f444cffd651f546c2e70 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_565f0e2f58d6f444cffd651f546c2e70, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_565f0e2f58d6f444cffd651f546c2e70->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_565f0e2f58d6f444cffd651f546c2e70, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_565f0e2f58d6f444cffd651f546c2e70,
        type_description_1,
        par_self,
        par_method,
        par_url,
        var_qop,
        var_cnonce,
        NULL,
        var_realm,
        var_opaque,
        var_p_parsed,
        var_respdig,
        var_sha256_utf8,
        var_sha512_utf8,
        var_A1,
        var_A2,
        var_noncebit,
        var_hash_utf8,
        var_HA1,
        var_HA2,
        var__algorithm,
        var_nonce,
        var_md5_utf8,
        var_ncvalue,
        var_base,
        var_path,
        var_sha_utf8,
        var_algorithm,
        var_KD,
        var_s
    );


    // Release cached frame.
    if ( frame_565f0e2f58d6f444cffd651f546c2e70 == cache_frame_565f0e2f58d6f444cffd651f546c2e70 )
    {
        Py_DECREF( frame_565f0e2f58d6f444cffd651f546c2e70 );
    }
    cache_frame_565f0e2f58d6f444cffd651f546c2e70 = NULL;

    assertFrameObject( frame_565f0e2f58d6f444cffd651f546c2e70 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_10_build_digest_header );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_qop );
    Py_DECREF( var_qop );
    var_qop = NULL;

    Py_XDECREF( var_cnonce );
    var_cnonce = NULL;

    CHECK_OBJECT( (PyObject *)var_realm );
    Py_DECREF( var_realm );
    var_realm = NULL;

    CHECK_OBJECT( (PyObject *)var_opaque );
    Py_DECREF( var_opaque );
    var_opaque = NULL;

    Py_XDECREF( var_p_parsed );
    var_p_parsed = NULL;

    Py_XDECREF( var_respdig );
    var_respdig = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_sha256_utf8 );
    var_sha256_utf8 = NULL;

    Py_XDECREF( var_sha512_utf8 );
    var_sha512_utf8 = NULL;

    Py_XDECREF( var_A1 );
    var_A1 = NULL;

    Py_XDECREF( var_A2 );
    var_A2 = NULL;

    Py_XDECREF( var_noncebit );
    var_noncebit = NULL;

    CHECK_OBJECT( (PyObject *)var_hash_utf8 );
    Py_DECREF( var_hash_utf8 );
    var_hash_utf8 = NULL;

    Py_XDECREF( var_HA1 );
    var_HA1 = NULL;

    Py_XDECREF( var_HA2 );
    var_HA2 = NULL;

    CHECK_OBJECT( (PyObject *)var__algorithm );
    Py_DECREF( var__algorithm );
    var__algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    CHECK_OBJECT( (PyObject *)var_nonce );
    Py_DECREF( var_nonce );
    var_nonce = NULL;

    Py_XDECREF( var_md5_utf8 );
    var_md5_utf8 = NULL;

    Py_XDECREF( var_ncvalue );
    var_ncvalue = NULL;

    Py_XDECREF( var_base );
    var_base = NULL;

    Py_XDECREF( var_path );
    var_path = NULL;

    Py_XDECREF( var_sha_utf8 );
    var_sha_utf8 = NULL;

    CHECK_OBJECT( (PyObject *)var_algorithm );
    Py_DECREF( var_algorithm );
    var_algorithm = NULL;

    CHECK_OBJECT( (PyObject *)var_KD );
    Py_DECREF( var_KD );
    var_KD = NULL;

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

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

    Py_XDECREF( var_qop );
    var_qop = NULL;

    Py_XDECREF( var_cnonce );
    var_cnonce = NULL;

    Py_XDECREF( var_realm );
    var_realm = NULL;

    Py_XDECREF( var_opaque );
    var_opaque = NULL;

    Py_XDECREF( var_p_parsed );
    var_p_parsed = NULL;

    Py_XDECREF( var_respdig );
    var_respdig = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_sha256_utf8 );
    var_sha256_utf8 = NULL;

    Py_XDECREF( var_sha512_utf8 );
    var_sha512_utf8 = NULL;

    Py_XDECREF( var_A1 );
    var_A1 = NULL;

    Py_XDECREF( var_A2 );
    var_A2 = NULL;

    Py_XDECREF( var_noncebit );
    var_noncebit = NULL;

    CHECK_OBJECT( (PyObject *)var_hash_utf8 );
    Py_DECREF( var_hash_utf8 );
    var_hash_utf8 = NULL;

    Py_XDECREF( var_HA1 );
    var_HA1 = NULL;

    Py_XDECREF( var_HA2 );
    var_HA2 = NULL;

    Py_XDECREF( var__algorithm );
    var__algorithm = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    Py_XDECREF( var_nonce );
    var_nonce = NULL;

    Py_XDECREF( var_md5_utf8 );
    var_md5_utf8 = NULL;

    Py_XDECREF( var_ncvalue );
    var_ncvalue = NULL;

    Py_XDECREF( var_base );
    var_base = NULL;

    Py_XDECREF( var_path );
    var_path = NULL;

    Py_XDECREF( var_sha_utf8 );
    var_sha_utf8 = NULL;

    Py_XDECREF( var_algorithm );
    var_algorithm = NULL;

    Py_XDECREF( var_KD );
    var_KD = NULL;

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_10_build_digest_header );
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


static PyObject *impl_requests$auth$$$function_10_build_digest_header$$$function_1_md5_utf8( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_c8cfee9b815f021e055b287101d47e4c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c8cfee9b815f021e055b287101d47e4c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c8cfee9b815f021e055b287101d47e4c, codeobj_c8cfee9b815f021e055b287101d47e4c, module_requests$auth, sizeof(void *) );
    frame_c8cfee9b815f021e055b287101d47e4c = cache_frame_c8cfee9b815f021e055b287101d47e4c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c8cfee9b815f021e055b287101d47e4c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c8cfee9b815f021e055b287101d47e4c ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_isinstance_inst_1 = par_x;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_str );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "str" );
            exception_tb = NULL;

            exception_lineno = 146;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 146;
            type_description_1 = "o";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_x );
            tmp_called_instance_1 = par_x;
            frame_c8cfee9b815f021e055b287101d47e4c->m_frame.f_lineno = 147;
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 147;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_x;
                assert( old != NULL );
                par_x = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_hashlib );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashlib );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "hashlib" );
            exception_tb = NULL;

            exception_lineno = 148;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_2;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_c8cfee9b815f021e055b287101d47e4c->m_frame.f_lineno = 148;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_called_instance_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_md5, call_args );
        }

        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c8cfee9b815f021e055b287101d47e4c->m_frame.f_lineno = 148;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_hexdigest );
        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 148;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c8cfee9b815f021e055b287101d47e4c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_c8cfee9b815f021e055b287101d47e4c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c8cfee9b815f021e055b287101d47e4c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c8cfee9b815f021e055b287101d47e4c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c8cfee9b815f021e055b287101d47e4c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c8cfee9b815f021e055b287101d47e4c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c8cfee9b815f021e055b287101d47e4c,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_c8cfee9b815f021e055b287101d47e4c == cache_frame_c8cfee9b815f021e055b287101d47e4c )
    {
        Py_DECREF( frame_c8cfee9b815f021e055b287101d47e4c );
    }
    cache_frame_c8cfee9b815f021e055b287101d47e4c = NULL;

    assertFrameObject( frame_c8cfee9b815f021e055b287101d47e4c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_10_build_digest_header$$$function_1_md5_utf8 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    Py_XDECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_10_build_digest_header$$$function_1_md5_utf8 );
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


static PyObject *impl_requests$auth$$$function_10_build_digest_header$$$function_2_sha_utf8( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_0f7de855305b3c4ddf56a30cf8de3aaa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0f7de855305b3c4ddf56a30cf8de3aaa = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0f7de855305b3c4ddf56a30cf8de3aaa, codeobj_0f7de855305b3c4ddf56a30cf8de3aaa, module_requests$auth, sizeof(void *) );
    frame_0f7de855305b3c4ddf56a30cf8de3aaa = cache_frame_0f7de855305b3c4ddf56a30cf8de3aaa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0f7de855305b3c4ddf56a30cf8de3aaa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0f7de855305b3c4ddf56a30cf8de3aaa ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_isinstance_inst_1 = par_x;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_str );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "str" );
            exception_tb = NULL;

            exception_lineno = 152;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "o";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_x );
            tmp_called_instance_1 = par_x;
            frame_0f7de855305b3c4ddf56a30cf8de3aaa->m_frame.f_lineno = 153;
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 153;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_x;
                assert( old != NULL );
                par_x = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_hashlib );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashlib );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "hashlib" );
            exception_tb = NULL;

            exception_lineno = 154;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_2;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_0f7de855305b3c4ddf56a30cf8de3aaa->m_frame.f_lineno = 154;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_called_instance_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_sha1, call_args );
        }

        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_0f7de855305b3c4ddf56a30cf8de3aaa->m_frame.f_lineno = 154;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_hexdigest );
        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f7de855305b3c4ddf56a30cf8de3aaa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f7de855305b3c4ddf56a30cf8de3aaa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0f7de855305b3c4ddf56a30cf8de3aaa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0f7de855305b3c4ddf56a30cf8de3aaa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0f7de855305b3c4ddf56a30cf8de3aaa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0f7de855305b3c4ddf56a30cf8de3aaa, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0f7de855305b3c4ddf56a30cf8de3aaa,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_0f7de855305b3c4ddf56a30cf8de3aaa == cache_frame_0f7de855305b3c4ddf56a30cf8de3aaa )
    {
        Py_DECREF( frame_0f7de855305b3c4ddf56a30cf8de3aaa );
    }
    cache_frame_0f7de855305b3c4ddf56a30cf8de3aaa = NULL;

    assertFrameObject( frame_0f7de855305b3c4ddf56a30cf8de3aaa );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_10_build_digest_header$$$function_2_sha_utf8 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    Py_XDECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_10_build_digest_header$$$function_2_sha_utf8 );
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


static PyObject *impl_requests$auth$$$function_10_build_digest_header$$$function_3_sha256_utf8( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_a8596cda22ec381d2167c2c95d95037b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a8596cda22ec381d2167c2c95d95037b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a8596cda22ec381d2167c2c95d95037b, codeobj_a8596cda22ec381d2167c2c95d95037b, module_requests$auth, sizeof(void *) );
    frame_a8596cda22ec381d2167c2c95d95037b = cache_frame_a8596cda22ec381d2167c2c95d95037b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a8596cda22ec381d2167c2c95d95037b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a8596cda22ec381d2167c2c95d95037b ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_isinstance_inst_1 = par_x;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_str );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "str" );
            exception_tb = NULL;

            exception_lineno = 158;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "o";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_x );
            tmp_called_instance_1 = par_x;
            frame_a8596cda22ec381d2167c2c95d95037b->m_frame.f_lineno = 159;
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 159;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_x;
                assert( old != NULL );
                par_x = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_hashlib );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashlib );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "hashlib" );
            exception_tb = NULL;

            exception_lineno = 160;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_2;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_a8596cda22ec381d2167c2c95d95037b->m_frame.f_lineno = 160;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_called_instance_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_sha256, call_args );
        }

        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a8596cda22ec381d2167c2c95d95037b->m_frame.f_lineno = 160;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_hexdigest );
        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8596cda22ec381d2167c2c95d95037b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8596cda22ec381d2167c2c95d95037b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a8596cda22ec381d2167c2c95d95037b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a8596cda22ec381d2167c2c95d95037b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a8596cda22ec381d2167c2c95d95037b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a8596cda22ec381d2167c2c95d95037b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a8596cda22ec381d2167c2c95d95037b,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_a8596cda22ec381d2167c2c95d95037b == cache_frame_a8596cda22ec381d2167c2c95d95037b )
    {
        Py_DECREF( frame_a8596cda22ec381d2167c2c95d95037b );
    }
    cache_frame_a8596cda22ec381d2167c2c95d95037b = NULL;

    assertFrameObject( frame_a8596cda22ec381d2167c2c95d95037b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_10_build_digest_header$$$function_3_sha256_utf8 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    Py_XDECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_10_build_digest_header$$$function_3_sha256_utf8 );
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


static PyObject *impl_requests$auth$$$function_10_build_digest_header$$$function_4_sha512_utf8( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_8bd255fad282cf643d2468c03d3b8792;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8bd255fad282cf643d2468c03d3b8792 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_8bd255fad282cf643d2468c03d3b8792, codeobj_8bd255fad282cf643d2468c03d3b8792, module_requests$auth, sizeof(void *) );
    frame_8bd255fad282cf643d2468c03d3b8792 = cache_frame_8bd255fad282cf643d2468c03d3b8792;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_8bd255fad282cf643d2468c03d3b8792 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_8bd255fad282cf643d2468c03d3b8792 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_x );
        tmp_isinstance_inst_1 = par_x;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_str );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_str );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "str" );
            exception_tb = NULL;

            exception_lineno = 164;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_cls_1 = tmp_mvar_value_1;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 164;
            type_description_1 = "o";
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_x );
            tmp_called_instance_1 = par_x;
            frame_8bd255fad282cf643d2468c03d3b8792->m_frame.f_lineno = 165;
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 165;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_x;
                assert( old != NULL );
                par_x = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_hashlib );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hashlib );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "hashlib" );
            exception_tb = NULL;

            exception_lineno = 166;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = tmp_mvar_value_2;
        CHECK_OBJECT( par_x );
        tmp_args_element_name_1 = par_x;
        frame_8bd255fad282cf643d2468c03d3b8792->m_frame.f_lineno = 166;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_called_instance_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_sha512, call_args );
        }

        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_8bd255fad282cf643d2468c03d3b8792->m_frame.f_lineno = 166;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_hexdigest );
        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 166;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8bd255fad282cf643d2468c03d3b8792 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_8bd255fad282cf643d2468c03d3b8792 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_8bd255fad282cf643d2468c03d3b8792 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_8bd255fad282cf643d2468c03d3b8792, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_8bd255fad282cf643d2468c03d3b8792->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_8bd255fad282cf643d2468c03d3b8792, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_8bd255fad282cf643d2468c03d3b8792,
        type_description_1,
        par_x
    );


    // Release cached frame.
    if ( frame_8bd255fad282cf643d2468c03d3b8792 == cache_frame_8bd255fad282cf643d2468c03d3b8792 )
    {
        Py_DECREF( frame_8bd255fad282cf643d2468c03d3b8792 );
    }
    cache_frame_8bd255fad282cf643d2468c03d3b8792 = NULL;

    assertFrameObject( frame_8bd255fad282cf643d2468c03d3b8792 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_10_build_digest_header$$$function_4_sha512_utf8 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

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

    Py_XDECREF( par_x );
    par_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_10_build_digest_header$$$function_4_sha512_utf8 );
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


static PyObject *impl_requests$auth$$$function_10_build_digest_header$$$function_5_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *par_d = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_fa6568b5786ae620c0838defd43a2888;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fa6568b5786ae620c0838defd43a2888 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fa6568b5786ae620c0838defd43a2888, codeobj_fa6568b5786ae620c0838defd43a2888, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fa6568b5786ae620c0838defd43a2888 = cache_frame_fa6568b5786ae620c0838defd43a2888;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fa6568b5786ae620c0838defd43a2888 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fa6568b5786ae620c0838defd43a2888 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_tuple_element_1;
        if ( PyCell_GET( self->m_closure[0] ) == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "hash_utf8" );
            exception_tb = NULL;

            exception_lineno = 169;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = PyCell_GET( self->m_closure[0] );
        tmp_left_name_1 = const_str_digest_f2d2f5f01d8d9360355c50eb1d09d771;
        CHECK_OBJECT( par_s );
        tmp_tuple_element_1 = par_s;
        tmp_right_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_d );
        tmp_tuple_element_1 = par_d;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
        tmp_args_element_name_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_fa6568b5786ae620c0838defd43a2888->m_frame.f_lineno = 169;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 169;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fa6568b5786ae620c0838defd43a2888 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_fa6568b5786ae620c0838defd43a2888 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fa6568b5786ae620c0838defd43a2888 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fa6568b5786ae620c0838defd43a2888, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fa6568b5786ae620c0838defd43a2888->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fa6568b5786ae620c0838defd43a2888, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fa6568b5786ae620c0838defd43a2888,
        type_description_1,
        par_s,
        par_d,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_fa6568b5786ae620c0838defd43a2888 == cache_frame_fa6568b5786ae620c0838defd43a2888 )
    {
        Py_DECREF( frame_fa6568b5786ae620c0838defd43a2888 );
    }
    cache_frame_fa6568b5786ae620c0838defd43a2888 = NULL;

    assertFrameObject( frame_fa6568b5786ae620c0838defd43a2888 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_10_build_digest_header$$$function_5_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_10_build_digest_header$$$function_5_lambda );
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


static PyObject *impl_requests$auth$$$function_11_handle_redirect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_r = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_6fc8a9f30e68357fc82516bb79b6dd40;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_6fc8a9f30e68357fc82516bb79b6dd40 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6fc8a9f30e68357fc82516bb79b6dd40, codeobj_6fc8a9f30e68357fc82516bb79b6dd40, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_6fc8a9f30e68357fc82516bb79b6dd40 = cache_frame_6fc8a9f30e68357fc82516bb79b6dd40;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6fc8a9f30e68357fc82516bb79b6dd40 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6fc8a9f30e68357fc82516bb79b6dd40 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_r );
        tmp_source_name_1 = par_r;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_redirect );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 231;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 231;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            PyObject *tmp_source_name_2;
            tmp_assattr_name_1 = const_int_pos_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__thread_local );
            if ( tmp_assattr_target_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 232;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_num_401_calls, tmp_assattr_name_1 );
            Py_DECREF( tmp_assattr_target_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 232;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6fc8a9f30e68357fc82516bb79b6dd40 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6fc8a9f30e68357fc82516bb79b6dd40 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6fc8a9f30e68357fc82516bb79b6dd40, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6fc8a9f30e68357fc82516bb79b6dd40->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6fc8a9f30e68357fc82516bb79b6dd40, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6fc8a9f30e68357fc82516bb79b6dd40,
        type_description_1,
        par_self,
        par_r,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_6fc8a9f30e68357fc82516bb79b6dd40 == cache_frame_6fc8a9f30e68357fc82516bb79b6dd40 )
    {
        Py_DECREF( frame_6fc8a9f30e68357fc82516bb79b6dd40 );
    }
    cache_frame_6fc8a9f30e68357fc82516bb79b6dd40 = NULL;

    assertFrameObject( frame_6fc8a9f30e68357fc82516bb79b6dd40 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_11_handle_redirect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_11_handle_redirect );
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


static PyObject *impl_requests$auth$$$function_12_handle_401( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_r = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *var_pat = NULL;
    PyObject *var__r = NULL;
    PyObject *var_prep = NULL;
    PyObject *var_s_auth = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_ee4d48087b96740be9bbf5ccdf9f131e;
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
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_ee4d48087b96740be9bbf5ccdf9f131e = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ee4d48087b96740be9bbf5ccdf9f131e, codeobj_ee4d48087b96740be9bbf5ccdf9f131e, module_requests$auth, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ee4d48087b96740be9bbf5ccdf9f131e = cache_frame_ee4d48087b96740be9bbf5ccdf9f131e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ee4d48087b96740be9bbf5ccdf9f131e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ee4d48087b96740be9bbf5ccdf9f131e ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( par_r );
            tmp_source_name_1 = par_r;
            tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_status_code );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 243;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            assert( tmp_comparison_chain_1__operand_2 == NULL );
            tmp_comparison_chain_1__operand_2 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            tmp_compexpr_left_1 = const_int_pos_400;
            CHECK_OBJECT( tmp_comparison_chain_1__operand_2 );
            tmp_compexpr_right_1 = tmp_comparison_chain_1__operand_2;
            tmp_assign_source_2 = RICH_COMPARE_LTE_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 243;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            assert( tmp_comparison_chain_1__comparison_result == NULL );
            tmp_comparison_chain_1__comparison_result = tmp_assign_source_2;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_2;
            CHECK_OBJECT( tmp_comparison_chain_1__comparison_result );
            tmp_operand_name_2 = tmp_comparison_chain_1__comparison_result;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 243;
                type_description_1 = "ooooooo";
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
            CHECK_OBJECT( tmp_comparison_chain_1__comparison_result );
            tmp_operand_name_1 = tmp_comparison_chain_1__comparison_result;
            Py_INCREF( tmp_operand_name_1 );
            goto try_return_handler_2;
            branch_no_2:;
        }
        {
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            CHECK_OBJECT( tmp_comparison_chain_1__operand_2 );
            tmp_compexpr_left_2 = tmp_comparison_chain_1__operand_2;
            tmp_compexpr_right_2 = const_int_pos_500;
            tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 243;
                type_description_1 = "ooooooo";
                goto try_except_handler_2;
            }
            goto try_return_handler_2;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$auth$$$function_12_handle_401 );
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
        Py_DECREF( tmp_comparison_chain_1__operand_2 );
        tmp_comparison_chain_1__operand_2 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__comparison_result );
        Py_DECREF( tmp_comparison_chain_1__comparison_result );
        tmp_comparison_chain_1__comparison_result = NULL;

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

        Py_XDECREF( tmp_comparison_chain_1__operand_2 );
        tmp_comparison_chain_1__operand_2 = NULL;

        Py_XDECREF( tmp_comparison_chain_1__comparison_result );
        tmp_comparison_chain_1__comparison_result = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$auth$$$function_12_handle_401 );
        return NULL;
        outline_result_1:;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 243;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            PyObject *tmp_source_name_2;
            tmp_assattr_name_1 = const_int_pos_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__thread_local );
            if ( tmp_assattr_target_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 244;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_num_401_calls, tmp_assattr_name_1 );
            Py_DECREF( tmp_assattr_target_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 244;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
        }
        CHECK_OBJECT( par_r );
        tmp_return_value = par_r;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__thread_local );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_pos );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_3 );
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_source_name_6;
            PyObject *tmp_source_name_7;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_8;
            PyObject *tmp_source_name_9;
            CHECK_OBJECT( par_r );
            tmp_source_name_7 = par_r;
            tmp_source_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_request );
            if ( tmp_source_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 250;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_body );
            Py_DECREF( tmp_source_name_6 );
            if ( tmp_source_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 250;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_seek );
            Py_DECREF( tmp_source_name_5 );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 250;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_9 = par_self;
            tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__thread_local );
            if ( tmp_source_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 250;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_pos );
            Py_DECREF( tmp_source_name_8 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 250;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_ee4d48087b96740be9bbf5ccdf9f131e->m_frame.f_lineno = 250;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 250;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_3:;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_10;
        CHECK_OBJECT( par_r );
        tmp_source_name_10 = par_r;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_headers );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 251;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_ee4d48087b96740be9bbf5ccdf9f131e->m_frame.f_lineno = 251;
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_digest_a88adb7a245cfc6a39c69917da364c05_str_empty_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 251;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_s_auth == NULL );
        var_s_auth = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        PyObject *tmp_source_name_11;
        PyObject *tmp_source_name_12;
        tmp_compexpr_left_4 = const_str_plain_digest;
        CHECK_OBJECT( var_s_auth );
        tmp_called_instance_2 = var_s_auth;
        frame_ee4d48087b96740be9bbf5ccdf9f131e->m_frame.f_lineno = 253;
        tmp_compexpr_right_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_lower );
        if ( tmp_compexpr_right_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_4, tmp_compexpr_left_4 );
        Py_DECREF( tmp_compexpr_right_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        CHECK_OBJECT( par_self );
        tmp_source_name_12 = par_self;
        tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain__thread_local );
        if ( tmp_source_name_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_num_401_calls );
        Py_DECREF( tmp_source_name_11 );
        if ( tmp_compexpr_left_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_5 = const_int_pos_2;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
        Py_DECREF( tmp_compexpr_left_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 253;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_4;
            PyObject *tmp_source_name_13;
            PyObject *tmp_source_name_14;
            CHECK_OBJECT( par_self );
            tmp_source_name_14 = par_self;
            tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__thread_local );
            if ( tmp_source_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 255;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_num_401_calls );
            Py_DECREF( tmp_source_name_13 );
            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 255;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_inplace_assign_attr_1__start == NULL );
            tmp_inplace_assign_attr_1__start = tmp_assign_source_4;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
            tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
            tmp_right_name_1 = const_int_pos_1;
            tmp_assign_source_5 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 255;
                type_description_1 = "ooooooo";
                goto try_except_handler_3;
            }
            assert( tmp_inplace_assign_attr_1__end == NULL );
            tmp_inplace_assign_attr_1__end = tmp_assign_source_5;
        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            PyObject *tmp_source_name_15;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
            tmp_assattr_name_2 = tmp_inplace_assign_attr_1__end;
            CHECK_OBJECT( par_self );
            tmp_source_name_15 = par_self;
            tmp_assattr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain__thread_local );
            if ( tmp_assattr_target_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 255;
                type_description_1 = "ooooooo";
                goto try_except_handler_4;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_num_401_calls, tmp_assattr_name_2 );
            Py_DECREF( tmp_assattr_target_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 255;
                type_description_1 = "ooooooo";
                goto try_except_handler_4;
            }
        }
        goto try_end_1;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        try_end_1:;
        goto try_end_2;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_1;
        // End of try:
        try_end_2:;
        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
        Py_DECREF( tmp_inplace_assign_attr_1__end );
        tmp_inplace_assign_attr_1__end = NULL;

        CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
        Py_DECREF( tmp_inplace_assign_attr_1__start );
        tmp_inplace_assign_attr_1__start = NULL;

        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_16;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_name_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_source_name_17;
            PyObject *tmp_mvar_value_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_re );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "re" );
                exception_tb = NULL;

                exception_lineno = 256;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_16 = tmp_mvar_value_1;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_compile );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 256;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_args_name_1 = const_tuple_str_digest_58295a7b2ee00e12bd235bdf35e32b18_tuple;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_re );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "re" );
                exception_tb = NULL;

                exception_lineno = 256;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_17 = tmp_mvar_value_2;
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_IGNORECASE );
            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 256;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_1 = const_str_plain_flags;
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_ee4d48087b96740be9bbf5ccdf9f131e->m_frame.f_lineno = 256;
            tmp_assign_source_6 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 256;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_pat == NULL );
            var_pat = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_18;
            PyObject *tmp_args_name_2;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_2;
            PyObject *tmp_assattr_target_3;
            PyObject *tmp_source_name_19;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_parse_dict_header );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_parse_dict_header );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "parse_dict_header" );
                exception_tb = NULL;

                exception_lineno = 257;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( var_pat );
            tmp_source_name_18 = var_pat;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_sub );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 257;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_tuple_element_1 = const_str_empty;
            tmp_args_name_2 = PyTuple_New( 2 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( var_s_auth );
            tmp_tuple_element_1 = var_s_auth;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_1 );
            tmp_kw_name_2 = PyDict_Copy( const_dict_d96fc9db79024853de9fbab06f7c41d9 );
            frame_ee4d48087b96740be9bbf5ccdf9f131e->m_frame.f_lineno = 257;
            tmp_args_element_name_2 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 257;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_ee4d48087b96740be9bbf5ccdf9f131e->m_frame.f_lineno = 257;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_assattr_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_assattr_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 257;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_19 = par_self;
            tmp_assattr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain__thread_local );
            if ( tmp_assattr_target_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_assattr_name_3 );

                exception_lineno = 257;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_chal, tmp_assattr_name_3 );
            Py_DECREF( tmp_assattr_name_3 );
            Py_DECREF( tmp_assattr_target_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 257;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_source_name_20;
            PyObject *tmp_attribute_value_1;
            CHECK_OBJECT( par_r );
            tmp_source_name_20 = par_r;
            tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_content );
            if ( tmp_attribute_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 261;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_attribute_value_1 );
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_call_result_2;
            CHECK_OBJECT( par_r );
            tmp_called_instance_3 = par_r;
            frame_ee4d48087b96740be9bbf5ccdf9f131e->m_frame.f_lineno = 262;
            tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_close );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 262;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_source_name_21;
            CHECK_OBJECT( par_r );
            tmp_source_name_21 = par_r;
            tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_request );
            if ( tmp_called_instance_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 263;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_ee4d48087b96740be9bbf5ccdf9f131e->m_frame.f_lineno = 263;
            tmp_assign_source_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_copy );
            Py_DECREF( tmp_called_instance_4 );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 263;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_prep == NULL );
            var_prep = tmp_assign_source_7;
        }
        {
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_source_name_22;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_23;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_source_name_24;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "extract_cookies_to_jar" );
                exception_tb = NULL;

                exception_lineno = 264;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_4;
            CHECK_OBJECT( var_prep );
            tmp_source_name_22 = var_prep;
            tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain__cookies );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 264;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_r );
            tmp_source_name_23 = par_r;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_request );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_3 );

                exception_lineno = 264;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_r );
            tmp_source_name_24 = par_r;
            tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_raw );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_3 );
                Py_DECREF( tmp_args_element_name_4 );

                exception_lineno = 264;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_ee4d48087b96740be9bbf5ccdf9f131e->m_frame.f_lineno = 264;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 264;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        {
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_25;
            PyObject *tmp_call_result_4;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_source_name_26;
            CHECK_OBJECT( var_prep );
            tmp_source_name_25 = var_prep;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_prepare_cookies );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 265;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_prep );
            tmp_source_name_26 = var_prep;
            tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain__cookies );
            if ( tmp_args_element_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 265;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_ee4d48087b96740be9bbf5ccdf9f131e->m_frame.f_lineno = 265;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_6 );
            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 265;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_27;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_source_name_28;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_source_name_29;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_source_name_30;
            PyObject *tmp_ass_subscript_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_27 = par_self;
            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_build_digest_header );
            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 267;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_prep );
            tmp_source_name_28 = var_prep;
            tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_method );
            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );

                exception_lineno = 268;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_prep );
            tmp_source_name_29 = var_prep;
            tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_url );
            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_args_element_name_7 );

                exception_lineno = 268;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_ee4d48087b96740be9bbf5ccdf9f131e->m_frame.f_lineno = 267;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_7 );
            Py_DECREF( tmp_args_element_name_8 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 267;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_prep );
            tmp_source_name_30 = var_prep;
            tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_headers );
            if ( tmp_ass_subscribed_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_1 );

                exception_lineno = 267;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_ass_subscript_1 = const_str_plain_Authorization;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscribed_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 267;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_dircall_arg1_1;
            PyObject *tmp_source_name_31;
            PyObject *tmp_source_name_32;
            PyObject *tmp_dircall_arg2_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_dircall_arg3_1;
            CHECK_OBJECT( par_r );
            tmp_source_name_32 = par_r;
            tmp_source_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_connection );
            if ( tmp_source_name_31 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 269;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_send );
            Py_DECREF( tmp_source_name_31 );
            if ( tmp_dircall_arg1_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 269;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_prep );
            tmp_tuple_element_2 = var_prep;
            tmp_dircall_arg2_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_2 );
            CHECK_OBJECT( par_kwargs );
            tmp_dircall_arg3_1 = par_kwargs;
            Py_INCREF( tmp_dircall_arg3_1 );

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
                tmp_assign_source_8 = impl___internal__$$$function_4_complex_call_helper_pos_star_dict( dir_call_args );
            }
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 269;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var__r == NULL );
            var__r = tmp_assign_source_8;
        }
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_source_name_33;
            PyObject *tmp_call_result_5;
            PyObject *tmp_args_element_name_9;
            CHECK_OBJECT( var__r );
            tmp_source_name_33 = var__r;
            tmp_called_instance_5 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_history );
            if ( tmp_called_instance_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 270;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_r );
            tmp_args_element_name_9 = par_r;
            frame_ee4d48087b96740be9bbf5ccdf9f131e->m_frame.f_lineno = 270;
            {
                PyObject *call_args[] = { tmp_args_element_name_9 };
                tmp_call_result_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_append, call_args );
            }

            Py_DECREF( tmp_called_instance_5 );
            if ( tmp_call_result_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 270;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_5 );
        }
        {
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_assattr_target_4;
            CHECK_OBJECT( var_prep );
            tmp_assattr_name_4 = var_prep;
            CHECK_OBJECT( var__r );
            tmp_assattr_target_4 = var__r;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_request, tmp_assattr_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 271;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
        }
        CHECK_OBJECT( var__r );
        tmp_return_value = var__r;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_4:;
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_source_name_34;
        tmp_assattr_name_5 = const_int_pos_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_34 = par_self;
        tmp_assattr_target_5 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain__thread_local );
        if ( tmp_assattr_target_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_num_401_calls, tmp_assattr_name_5 );
        Py_DECREF( tmp_assattr_target_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ee4d48087b96740be9bbf5ccdf9f131e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_ee4d48087b96740be9bbf5ccdf9f131e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ee4d48087b96740be9bbf5ccdf9f131e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ee4d48087b96740be9bbf5ccdf9f131e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ee4d48087b96740be9bbf5ccdf9f131e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ee4d48087b96740be9bbf5ccdf9f131e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ee4d48087b96740be9bbf5ccdf9f131e,
        type_description_1,
        par_self,
        par_r,
        par_kwargs,
        var_pat,
        var__r,
        var_prep,
        var_s_auth
    );


    // Release cached frame.
    if ( frame_ee4d48087b96740be9bbf5ccdf9f131e == cache_frame_ee4d48087b96740be9bbf5ccdf9f131e )
    {
        Py_DECREF( frame_ee4d48087b96740be9bbf5ccdf9f131e );
    }
    cache_frame_ee4d48087b96740be9bbf5ccdf9f131e = NULL;

    assertFrameObject( frame_ee4d48087b96740be9bbf5ccdf9f131e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_r );
    tmp_return_value = par_r;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_12_handle_401 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_pat );
    var_pat = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var__r );
    var__r = NULL;

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_prep );
    var_prep = NULL;

    Py_XDECREF( var_s_auth );
    var_s_auth = NULL;

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

    Py_XDECREF( var_pat );
    var_pat = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var__r );
    var__r = NULL;

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    Py_XDECREF( var_prep );
    var_prep = NULL;

    Py_XDECREF( var_s_auth );
    var_s_auth = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_12_handle_401 );
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


static PyObject *impl_requests$auth$$$function_13___call__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_r = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_c30c42257bb36b5212e05df61a70fcbc;
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
    static struct Nuitka_FrameObject *cache_frame_c30c42257bb36b5212e05df61a70fcbc = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c30c42257bb36b5212e05df61a70fcbc, codeobj_c30c42257bb36b5212e05df61a70fcbc, module_requests$auth, sizeof(void *)+sizeof(void *) );
    frame_c30c42257bb36b5212e05df61a70fcbc = cache_frame_c30c42257bb36b5212e05df61a70fcbc;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c30c42257bb36b5212e05df61a70fcbc );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c30c42257bb36b5212e05df61a70fcbc ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_c30c42257bb36b5212e05df61a70fcbc->m_frame.f_lineno = 280;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_init_per_thread_state );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 280;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__thread_local );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_last_nonce );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 282;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_source_name_6;
            PyObject *tmp_ass_subscript_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_build_digest_header );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 283;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_r );
            tmp_source_name_4 = par_r;
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_method );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 283;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_r );
            tmp_source_name_5 = par_r;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_url );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );

                exception_lineno = 283;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            frame_c30c42257bb36b5212e05df61a70fcbc->m_frame.f_lineno = 283;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 283;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_r );
            tmp_source_name_6 = par_r;
            tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_headers );
            if ( tmp_ass_subscribed_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_1 );

                exception_lineno = 283;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_ass_subscript_1 = const_str_plain_Authorization;
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscribed_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 283;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_7;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_source_name_8;
        CHECK_OBJECT( par_r );
        tmp_source_name_7 = par_r;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_body );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 285;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_c30c42257bb36b5212e05df61a70fcbc->m_frame.f_lineno = 285;
        tmp_assattr_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_tell );
        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 285;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__thread_local );
        if ( tmp_assattr_target_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assattr_name_1 );

            exception_lineno = 285;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_pos, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_target_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 285;
            type_description_1 = "oo";
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_c30c42257bb36b5212e05df61a70fcbc );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_c30c42257bb36b5212e05df61a70fcbc, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_c30c42257bb36b5212e05df61a70fcbc, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 286;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            PyObject *tmp_source_name_9;
            tmp_assattr_name_2 = Py_None;
            CHECK_OBJECT( par_self );
            tmp_source_name_9 = par_self;
            tmp_assattr_target_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__thread_local );
            if ( tmp_assattr_target_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 291;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_pos, tmp_assattr_name_2 );
            Py_DECREF( tmp_assattr_target_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 291;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 284;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_c30c42257bb36b5212e05df61a70fcbc->m_frame) frame_c30c42257bb36b5212e05df61a70fcbc->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
        branch_end_2:;
    }
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_13___call__ );
    return NULL;
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_10;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_11;
        CHECK_OBJECT( par_r );
        tmp_source_name_10 = par_r;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_register_hook );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_3 = const_str_plain_response;
        CHECK_OBJECT( par_self );
        tmp_source_name_11 = par_self;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_handle_401 );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_c30c42257bb36b5212e05df61a70fcbc->m_frame.f_lineno = 292;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_12;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_13;
        CHECK_OBJECT( par_r );
        tmp_source_name_12 = par_r;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_register_hook );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 293;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_5 = const_str_plain_response;
        CHECK_OBJECT( par_self );
        tmp_source_name_13 = par_self;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_handle_redirect );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 293;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_c30c42257bb36b5212e05df61a70fcbc->m_frame.f_lineno = 293;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 293;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_source_name_14;
        tmp_assattr_name_3 = const_int_pos_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_14 = par_self;
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain__thread_local );
        if ( tmp_assattr_target_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 294;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_num_401_calls, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_target_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 294;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 1
    RESTORE_FRAME_EXCEPTION( frame_c30c42257bb36b5212e05df61a70fcbc );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_c30c42257bb36b5212e05df61a70fcbc );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c30c42257bb36b5212e05df61a70fcbc, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c30c42257bb36b5212e05df61a70fcbc->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c30c42257bb36b5212e05df61a70fcbc, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c30c42257bb36b5212e05df61a70fcbc,
        type_description_1,
        par_self,
        par_r
    );


    // Release cached frame.
    if ( frame_c30c42257bb36b5212e05df61a70fcbc == cache_frame_c30c42257bb36b5212e05df61a70fcbc )
    {
        Py_DECREF( frame_c30c42257bb36b5212e05df61a70fcbc );
    }
    cache_frame_c30c42257bb36b5212e05df61a70fcbc = NULL;

    assertFrameObject( frame_c30c42257bb36b5212e05df61a70fcbc );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( par_r );
    tmp_return_value = par_r;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_13___call__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_13___call__ );
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


static PyObject *impl_requests$auth$$$function_14___eq__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_514760b9cbd6417979a1fbeea0fd4184;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_514760b9cbd6417979a1fbeea0fd4184 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_514760b9cbd6417979a1fbeea0fd4184, codeobj_514760b9cbd6417979a1fbeea0fd4184, module_requests$auth, sizeof(void *)+sizeof(void *) );
    frame_514760b9cbd6417979a1fbeea0fd4184 = cache_frame_514760b9cbd6417979a1fbeea0fd4184;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_514760b9cbd6417979a1fbeea0fd4184 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_514760b9cbd6417979a1fbeea0fd4184 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_all );
        assert( tmp_called_name_1 != NULL );
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_username );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 300;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_other );
        tmp_getattr_target_1 = par_other;
        tmp_getattr_attr_1 = const_str_plain_username;
        tmp_getattr_default_1 = Py_None;
        tmp_compexpr_right_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_1 );

            exception_lineno = 300;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 300;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = PyList_New( 2 );
        PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_password );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 301;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_other );
        tmp_getattr_target_2 = par_other;
        tmp_getattr_attr_2 = const_str_plain_password;
        tmp_getattr_default_2 = Py_None;
        tmp_compexpr_right_2 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );
            Py_DECREF( tmp_compexpr_left_2 );

            exception_lineno = 301;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_list_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_args_element_name_1 );

            exception_lineno = 301;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        PyList_SET_ITEM( tmp_args_element_name_1, 1, tmp_list_element_1 );
        frame_514760b9cbd6417979a1fbeea0fd4184->m_frame.f_lineno = 299;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 299;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_514760b9cbd6417979a1fbeea0fd4184 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_514760b9cbd6417979a1fbeea0fd4184 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_514760b9cbd6417979a1fbeea0fd4184 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_514760b9cbd6417979a1fbeea0fd4184, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_514760b9cbd6417979a1fbeea0fd4184->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_514760b9cbd6417979a1fbeea0fd4184, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_514760b9cbd6417979a1fbeea0fd4184,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_514760b9cbd6417979a1fbeea0fd4184 == cache_frame_514760b9cbd6417979a1fbeea0fd4184 )
    {
        Py_DECREF( frame_514760b9cbd6417979a1fbeea0fd4184 );
    }
    cache_frame_514760b9cbd6417979a1fbeea0fd4184 = NULL;

    assertFrameObject( frame_514760b9cbd6417979a1fbeea0fd4184 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_14___eq__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_14___eq__ );
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


static PyObject *impl_requests$auth$$$function_15___ne__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_b60b8d520f0d674bf0e1553924a16d96;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_b60b8d520f0d674bf0e1553924a16d96 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b60b8d520f0d674bf0e1553924a16d96, codeobj_b60b8d520f0d674bf0e1553924a16d96, module_requests$auth, sizeof(void *)+sizeof(void *) );
    frame_b60b8d520f0d674bf0e1553924a16d96 = cache_frame_b60b8d520f0d674bf0e1553924a16d96;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b60b8d520f0d674bf0e1553924a16d96 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b60b8d520f0d674bf0e1553924a16d96 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_self );
        tmp_compexpr_left_1 = par_self;
        CHECK_OBJECT( par_other );
        tmp_compexpr_right_1 = par_other;
        tmp_operand_name_1 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 305;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 305;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = ( tmp_res == 0 ) ? Py_True : Py_False;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b60b8d520f0d674bf0e1553924a16d96 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b60b8d520f0d674bf0e1553924a16d96 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b60b8d520f0d674bf0e1553924a16d96 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b60b8d520f0d674bf0e1553924a16d96, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b60b8d520f0d674bf0e1553924a16d96->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b60b8d520f0d674bf0e1553924a16d96, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b60b8d520f0d674bf0e1553924a16d96,
        type_description_1,
        par_self,
        par_other
    );


    // Release cached frame.
    if ( frame_b60b8d520f0d674bf0e1553924a16d96 == cache_frame_b60b8d520f0d674bf0e1553924a16d96 )
    {
        Py_DECREF( frame_b60b8d520f0d674bf0e1553924a16d96 );
    }
    cache_frame_b60b8d520f0d674bf0e1553924a16d96 = NULL;

    assertFrameObject( frame_b60b8d520f0d674bf0e1553924a16d96 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_15___ne__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$auth$$$function_15___ne__ );
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



static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_10_build_digest_header,
        const_str_plain_build_digest_header,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_565f0e2f58d6f444cffd651f546c2e70,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        const_str_digest_df91c2e0090a913ed1897e8fca207ea2,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_1_md5_utf8(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_10_build_digest_header$$$function_1_md5_utf8,
        const_str_plain_md5_utf8,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c8cfee9b815f021e055b287101d47e4c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_2_sha_utf8(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_10_build_digest_header$$$function_2_sha_utf8,
        const_str_plain_sha_utf8,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0f7de855305b3c4ddf56a30cf8de3aaa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_3_sha256_utf8(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_10_build_digest_header$$$function_3_sha256_utf8,
        const_str_plain_sha256_utf8,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a8596cda22ec381d2167c2c95d95037b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_4_sha512_utf8(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_10_build_digest_header$$$function_4_sha512_utf8,
        const_str_plain_sha512_utf8,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_8bd255fad282cf643d2468c03d3b8792,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header$$$function_5_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_10_build_digest_header$$$function_5_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fa6568b5786ae620c0838defd43a2888,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_11_handle_redirect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_11_handle_redirect,
        const_str_plain_handle_redirect,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6fc8a9f30e68357fc82516bb79b6dd40,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        const_str_digest_5bf0e52ad3af9d76b6e6716841011fd0,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_12_handle_401(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_12_handle_401,
        const_str_plain_handle_401,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ee4d48087b96740be9bbf5ccdf9f131e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        const_str_digest_fe0ad47fb591025246f4d96ff82e1a89,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_13___call__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_13___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c30c42257bb36b5212e05df61a70fcbc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_14___eq__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_14___eq__,
        const_str_plain___eq__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_514760b9cbd6417979a1fbeea0fd4184,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_15___ne__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_15___ne__,
        const_str_plain___ne__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b60b8d520f0d674bf0e1553924a16d96,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_1__basic_auth_str(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_1__basic_auth_str,
        const_str_plain__basic_auth_str,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5a047a2baf751b831b48fddcb4c65ef3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        const_str_digest_919a2045e823b128b54cfd720f73e3bf,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_2___call__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_2___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a3aa29a0e69fb5feb533572ff79087cf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_3___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_3___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_727e020e612f3c428cab63a5ce927e3c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_4___eq__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_4___eq__,
        const_str_plain___eq__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_aa57520cf9786f3ea771ed2ea5827c95,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_5___ne__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_5___ne__,
        const_str_plain___ne__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4da5ce47ced36e3756d6058d7a053338,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_6___call__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_6___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_59a52252cb71d8ff01487ac7c94a0c0e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_7___call__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_7___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_83c9413cfc3bcf7864dcf4beb80524a8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_8___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6dfcfed908795faccc329213d8fa9c2d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$auth$$$function_9_init_per_thread_state(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$auth$$$function_9_init_per_thread_state,
        const_str_plain_init_per_thread_state,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_434ac1d5f8c70b1305c5a979b74071f5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$auth,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_requests$auth =
{
    PyModuleDef_HEAD_INIT,
    "requests.auth",
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

MOD_INIT_DECL( requests$auth )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_requests$auth );
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
    puts("requests.auth: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.auth: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.auth: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrequests$auth" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests$auth = Py_InitModule4(
        "requests.auth",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_requests$auth = PyModule_Create( &mdef_requests$auth );
#endif

    moduledict_requests$auth = MODULE_DICT( module_requests$auth );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_requests$auth,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$auth,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$auth,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_requests$auth );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_67889f3b65748dbd83938a67635b28e4, module_requests$auth );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class = NULL;
    PyObject *tmp_class_creation_3__class_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class = NULL;
    PyObject *tmp_class_creation_4__class_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_locals_requests$auth_72_key___call__ = NULL;
    PyObject *tmp_select_metaclass_2__base = NULL;
    PyObject *tmp_select_metaclass_3__base = NULL;
    PyObject *tmp_select_metaclass_4__base = NULL;
    struct Nuitka_FrameObject *frame_206e0b42994703101e37532bbd4012ab;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *locals_requests$auth_79 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_requests$auth_100 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_requests$auth_108 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_4bfd8366dcc8506d555a9e4dbdeb488d;
        UPDATE_STRING_DICT0( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_9a88cfd90fa8100a7ceaf7df47e6e9d2;
        UPDATE_STRING_DICT0( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_206e0b42994703101e37532bbd4012ab = MAKE_MODULE_FRAME( codeobj_206e0b42994703101e37532bbd4012ab, module_requests$auth );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_206e0b42994703101e37532bbd4012ab );
    assert( Py_REFCNT( frame_206e0b42994703101e37532bbd4012ab ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_plain_os;
        tmp_globals_name_1 = (PyObject *)moduledict_requests$auth;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        frame_206e0b42994703101e37532bbd4012ab->m_frame.f_lineno = 10;
        tmp_assign_source_3 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        tmp_name_name_2 = const_str_plain_re;
        tmp_globals_name_2 = (PyObject *)moduledict_requests$auth;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        frame_206e0b42994703101e37532bbd4012ab->m_frame.f_lineno = 11;
        tmp_assign_source_4 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        tmp_name_name_3 = const_str_plain_time;
        tmp_globals_name_3 = (PyObject *)moduledict_requests$auth;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        frame_206e0b42994703101e37532bbd4012ab->m_frame.f_lineno = 12;
        tmp_assign_source_5 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
        assert( !(tmp_assign_source_5 == NULL) );
        UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_time, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        tmp_name_name_4 = const_str_plain_hashlib;
        tmp_globals_name_4 = (PyObject *)moduledict_requests$auth;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        frame_206e0b42994703101e37532bbd4012ab->m_frame.f_lineno = 13;
        tmp_assign_source_6 = IMPORT_MODULE4( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_hashlib, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        tmp_name_name_5 = const_str_plain_threading;
        tmp_globals_name_5 = (PyObject *)moduledict_requests$auth;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = Py_None;
        frame_206e0b42994703101e37532bbd4012ab->m_frame.f_lineno = 14;
        tmp_assign_source_7 = IMPORT_MODULE4( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_threading, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        tmp_name_name_6 = const_str_plain_warnings;
        tmp_globals_name_6 = (PyObject *)moduledict_requests$auth;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = Py_None;
        frame_206e0b42994703101e37532bbd4012ab->m_frame.f_lineno = 15;
        tmp_assign_source_8 = IMPORT_MODULE4( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        tmp_name_name_7 = const_str_plain_base64;
        tmp_globals_name_7 = (PyObject *)moduledict_requests$auth;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_b64encode_tuple;
        frame_206e0b42994703101e37532bbd4012ab->m_frame.f_lineno = 17;
        tmp_import_name_from_1 = IMPORT_MODULE4( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_b64encode );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_b64encode, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_1;
        tmp_name_name_8 = const_str_plain_compat;
        tmp_globals_name_8 = (PyObject *)moduledict_requests$auth;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain_urlparse_str_plain_str_str_plain_basestring_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_206e0b42994703101e37532bbd4012ab->m_frame.f_lineno = 19;
        tmp_assign_source_10 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_1 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_urlparse );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_urlparse, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_str );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_str, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_4 = tmp_import_from_1__module;
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_basestring );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_basestring, tmp_assign_source_13 );
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

    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_2;
        tmp_name_name_9 = const_str_plain_cookies;
        tmp_globals_name_9 = (PyObject *)moduledict_requests$auth;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_str_plain_extract_cookies_to_jar_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_206e0b42994703101e37532bbd4012ab->m_frame.f_lineno = 20;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_2 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_extract_cookies_to_jar );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_3;
        tmp_name_name_10 = const_str_plain__internal_utils;
        tmp_globals_name_10 = (PyObject *)moduledict_requests$auth;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = const_tuple_str_plain_to_native_string_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_206e0b42994703101e37532bbd4012ab->m_frame.f_lineno = 21;
        tmp_import_name_from_6 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_3 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_to_native_string );
        Py_DECREF( tmp_import_name_from_6 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_to_native_string, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_name_11;
        PyObject *tmp_locals_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_4;
        tmp_name_name_11 = const_str_plain_utils;
        tmp_globals_name_11 = (PyObject *)moduledict_requests$auth;
        tmp_locals_name_11 = Py_None;
        tmp_fromlist_name_11 = const_tuple_str_plain_parse_dict_header_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_206e0b42994703101e37532bbd4012ab->m_frame.f_lineno = 22;
        tmp_import_name_from_7 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_4 );
        if ( tmp_import_name_from_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_parse_dict_header );
        Py_DECREF( tmp_import_name_from_7 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_parse_dict_header, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        tmp_assign_source_17 = const_str_digest_5d735bc80d16f0fedbdde78344a2d394;
        UPDATE_STRING_DICT0( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_CONTENT_TYPE_FORM_URLENCODED, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = const_str_digest_e1ae02aba66d45ac9d7f070694408d22;
        UPDATE_STRING_DICT0( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_CONTENT_TYPE_MULTI_PART, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_FUNCTION_requests$auth$$$function_1__basic_auth_str(  );



        UPDATE_STRING_DICT1( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain__basic_auth_str, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        {
            PyObject *tmp_assign_source_21;
            tmp_assign_source_21 = MAKE_FUNCTION_requests$auth$$$function_2___call__(  );



            assert( tmp_locals_requests$auth_72_key___call__ == NULL );
            tmp_locals_requests$auth_72_key___call__ = tmp_assign_source_21;
        }
        // Tried code:
        {
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_dict_value_1 = const_str_digest_67889f3b65748dbd83938a67635b28e4;
            tmp_dict_key_1 = const_str_plain___module__;
            tmp_assign_source_20 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem( tmp_assign_source_20, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_value_2 = const_str_digest_2fc3f96e0216dbc7dcd34461a1c4d2ee;
            tmp_dict_key_2 = const_str_plain___doc__;
            tmp_res = PyDict_SetItem( tmp_assign_source_20, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_requests$auth_72_key___call__ );
            tmp_dict_value_3 = tmp_locals_requests$auth_72_key___call__;
            tmp_dict_key_3 = const_str_plain___call__;
            tmp_res = PyDict_SetItem( tmp_assign_source_20, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            goto try_return_handler_2;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$auth );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT( (PyObject *)tmp_locals_requests$auth_72_key___call__ );
        Py_DECREF( tmp_locals_requests$auth_72_key___call__ );
        tmp_locals_requests$auth_72_key___call__ = NULL;

        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$auth );
        return MOD_RETURN_VALUE( NULL );
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_20;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
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


            exception_lineno = 72;

            goto try_except_handler_3;
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
        tmp_assign_source_22 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_22 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_22 );
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain_AuthBase;
        tmp_args_element_name_2 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_206e0b42994703101e37532bbd4012ab->m_frame.f_lineno = 72;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 72;

            goto try_except_handler_3;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_23;
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_24 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_AuthBase, tmp_assign_source_24 );
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

    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_AuthBase );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AuthBase );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "AuthBase" );
            exception_tb = NULL;

            exception_lineno = 79;

            goto try_except_handler_4;
        }

        tmp_tuple_element_1 = tmp_mvar_value_1;
        tmp_assign_source_25 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_25, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_requests$auth_79 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_67889f3b65748dbd83938a67635b28e4;
        tmp_res = PyDict_SetItem( locals_requests$auth_79, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_a664f80c1075d8cfb85f49618afc684b;
        tmp_res = PyDict_SetItem( locals_requests$auth_79, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function_3___init__(  );



        tmp_res = PyDict_SetItem( locals_requests$auth_79, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function_4___eq__(  );



        tmp_res = PyDict_SetItem( locals_requests$auth_79, const_str_plain___eq__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function_5___ne__(  );



        tmp_res = PyDict_SetItem( locals_requests$auth_79, const_str_plain___ne__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function_6___call__(  );



        tmp_res = PyDict_SetItem( locals_requests$auth_79, const_str_plain___call__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_26 = locals_requests$auth_79;
        Py_INCREF( tmp_assign_source_26 );
        goto try_return_handler_5;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$auth );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF( locals_requests$auth_79 );
        locals_requests$auth_79 = NULL;
        goto outline_result_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$auth );
        return MOD_RETURN_VALUE( NULL );
        outline_result_2:;
        assert( tmp_class_creation_2__class_dict == NULL );
        tmp_class_creation_2__class_dict = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_key_name_3;
        PyObject *tmp_dict_name_3;
        PyObject *tmp_dict_name_4;
        PyObject *tmp_key_name_4;
        tmp_key_name_3 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_2__class_dict );
        tmp_dict_name_3 = tmp_class_creation_2__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_3, tmp_key_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;

            goto try_except_handler_4;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_2;
        }
        else
        {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT( tmp_class_creation_2__class_dict );
        tmp_dict_name_4 = tmp_class_creation_2__class_dict;
        tmp_key_name_4 = const_str_plain___metaclass__;
        tmp_assign_source_27 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_subscribed_name_1 = tmp_class_creation_2__bases;
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_28 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_assign_source_28 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 79;

                goto try_except_handler_4;
            }
            assert( tmp_select_metaclass_2__base == NULL );
            tmp_select_metaclass_2__base = tmp_assign_source_28;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( tmp_select_metaclass_2__base );
            tmp_source_name_1 = tmp_select_metaclass_2__base;
            tmp_assign_source_27 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
            if ( tmp_assign_source_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 79;

                goto try_except_handler_7;
            }
            goto try_return_handler_6;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$auth );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_1;
            Py_DECREF( exception_keeper_type_3 );
            Py_XDECREF( exception_keeper_value_3 );
            Py_XDECREF( exception_keeper_tb_3 );
            CHECK_OBJECT( tmp_select_metaclass_2__base );
            tmp_type_arg_1 = tmp_select_metaclass_2__base;
            tmp_assign_source_27 = BUILTIN_TYPE1( tmp_type_arg_1 );
            assert( !(tmp_assign_source_27 == NULL) );
            goto try_return_handler_6;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$auth );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
        Py_DECREF( tmp_select_metaclass_2__base );
        tmp_select_metaclass_2__base = NULL;

        goto outline_result_3;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
        Py_DECREF( tmp_select_metaclass_2__base );
        tmp_select_metaclass_2__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$auth );
        return MOD_RETURN_VALUE( NULL );
        outline_result_3:;
        condexpr_end_2:;
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_called_name_2 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_4 = const_str_plain_HTTPBasicAuth;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_args_element_name_5 = tmp_class_creation_2__bases;
        CHECK_OBJECT( tmp_class_creation_2__class_dict );
        tmp_args_element_name_6 = tmp_class_creation_2__class_dict;
        frame_206e0b42994703101e37532bbd4012ab->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 79;

            goto try_except_handler_4;
        }
        assert( tmp_class_creation_2__class == NULL );
        tmp_class_creation_2__class = tmp_assign_source_29;
    }
    goto try_end_3;
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

    Py_XDECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_30;
        CHECK_OBJECT( tmp_class_creation_2__class );
        tmp_assign_source_30 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_HTTPBasicAuth, tmp_assign_source_30 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class );
    Py_DECREF( tmp_class_creation_2__class );
    tmp_class_creation_2__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
    Py_DECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_HTTPBasicAuth );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPBasicAuth );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPBasicAuth" );
            exception_tb = NULL;

            exception_lineno = 100;

            goto try_except_handler_8;
        }

        tmp_tuple_element_2 = tmp_mvar_value_2;
        tmp_assign_source_31 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_assign_source_31, 0, tmp_tuple_element_2 );
        assert( tmp_class_creation_3__bases == NULL );
        tmp_class_creation_3__bases = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        {
            PyObject *tmp_set_locals_2;
            tmp_set_locals_2 = PyDict_New();
            locals_requests$auth_100 = tmp_set_locals_2;
        }
        tmp_dictset_value = const_str_digest_67889f3b65748dbd83938a67635b28e4;
        tmp_res = PyDict_SetItem( locals_requests$auth_100, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_3267db0b9e319da1a85ef722557dd6fe;
        tmp_res = PyDict_SetItem( locals_requests$auth_100, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function_7___call__(  );



        tmp_res = PyDict_SetItem( locals_requests$auth_100, const_str_plain___call__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_32 = locals_requests$auth_100;
        Py_INCREF( tmp_assign_source_32 );
        goto try_return_handler_9;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$auth );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF( locals_requests$auth_100 );
        locals_requests$auth_100 = NULL;
        goto outline_result_4;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$auth );
        return MOD_RETURN_VALUE( NULL );
        outline_result_4:;
        assert( tmp_class_creation_3__class_dict == NULL );
        tmp_class_creation_3__class_dict = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_key_name_5;
        PyObject *tmp_dict_name_5;
        PyObject *tmp_dict_name_6;
        PyObject *tmp_key_name_6;
        tmp_key_name_5 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_3__class_dict );
        tmp_dict_name_5 = tmp_class_creation_3__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_5, tmp_key_name_5 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;

            goto try_except_handler_8;
        }
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_3;
        }
        else
        {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT( tmp_class_creation_3__class_dict );
        tmp_dict_name_6 = tmp_class_creation_3__class_dict;
        tmp_key_name_6 = const_str_plain___metaclass__;
        tmp_assign_source_33 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;

            goto try_except_handler_8;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        {
            PyObject *tmp_assign_source_34;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( tmp_class_creation_3__bases );
            tmp_subscribed_name_2 = tmp_class_creation_3__bases;
            tmp_subscript_name_2 = const_int_0;
            tmp_assign_source_34 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
            if ( tmp_assign_source_34 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 100;

                goto try_except_handler_8;
            }
            assert( tmp_select_metaclass_3__base == NULL );
            tmp_select_metaclass_3__base = tmp_assign_source_34;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( tmp_select_metaclass_3__base );
            tmp_source_name_2 = tmp_select_metaclass_3__base;
            tmp_assign_source_33 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_2 );
            if ( tmp_assign_source_33 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 100;

                goto try_except_handler_11;
            }
            goto try_return_handler_10;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$auth );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_2;
            Py_DECREF( exception_keeper_type_5 );
            Py_XDECREF( exception_keeper_value_5 );
            Py_XDECREF( exception_keeper_tb_5 );
            CHECK_OBJECT( tmp_select_metaclass_3__base );
            tmp_type_arg_2 = tmp_select_metaclass_3__base;
            tmp_assign_source_33 = BUILTIN_TYPE1( tmp_type_arg_2 );
            assert( !(tmp_assign_source_33 == NULL) );
            goto try_return_handler_10;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$auth );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_3__base );
        Py_DECREF( tmp_select_metaclass_3__base );
        tmp_select_metaclass_3__base = NULL;

        goto outline_result_5;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_3__base );
        Py_DECREF( tmp_select_metaclass_3__base );
        tmp_select_metaclass_3__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$auth );
        return MOD_RETURN_VALUE( NULL );
        outline_result_5:;
        condexpr_end_3:;
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_called_name_3 = tmp_class_creation_3__metaclass;
        tmp_args_element_name_7 = const_str_plain_HTTPProxyAuth;
        CHECK_OBJECT( tmp_class_creation_3__bases );
        tmp_args_element_name_8 = tmp_class_creation_3__bases;
        CHECK_OBJECT( tmp_class_creation_3__class_dict );
        tmp_args_element_name_9 = tmp_class_creation_3__class_dict;
        frame_206e0b42994703101e37532bbd4012ab->m_frame.f_lineno = 100;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_35 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 100;

            goto try_except_handler_8;
        }
        assert( tmp_class_creation_3__class == NULL );
        tmp_class_creation_3__class = tmp_assign_source_35;
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

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT( tmp_class_creation_3__class );
        tmp_assign_source_36 = tmp_class_creation_3__class;
        UPDATE_STRING_DICT0( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_HTTPProxyAuth, tmp_assign_source_36 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class );
    Py_DECREF( tmp_class_creation_3__class );
    tmp_class_creation_3__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases );
    Py_DECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_dict );
    Py_DECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_AuthBase );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AuthBase );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "AuthBase" );
            exception_tb = NULL;

            exception_lineno = 108;

            goto try_except_handler_12;
        }

        tmp_tuple_element_3 = tmp_mvar_value_3;
        tmp_assign_source_37 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_assign_source_37, 0, tmp_tuple_element_3 );
        assert( tmp_class_creation_4__bases == NULL );
        tmp_class_creation_4__bases = tmp_assign_source_37;
    }
    {
        PyObject *tmp_assign_source_38;
        {
            PyObject *tmp_set_locals_3;
            tmp_set_locals_3 = PyDict_New();
            locals_requests$auth_108 = tmp_set_locals_3;
        }
        tmp_dictset_value = const_str_digest_67889f3b65748dbd83938a67635b28e4;
        tmp_res = PyDict_SetItem( locals_requests$auth_108, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_acf0af13ef75ff62ec9955ae4dcea3e9;
        tmp_res = PyDict_SetItem( locals_requests$auth_108, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function_8___init__(  );



        tmp_res = PyDict_SetItem( locals_requests$auth_108, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function_9_init_per_thread_state(  );



        tmp_res = PyDict_SetItem( locals_requests$auth_108, const_str_plain_init_per_thread_state, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function_10_build_digest_header(  );



        tmp_res = PyDict_SetItem( locals_requests$auth_108, const_str_plain_build_digest_header, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function_11_handle_redirect(  );



        tmp_res = PyDict_SetItem( locals_requests$auth_108, const_str_plain_handle_redirect, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function_12_handle_401(  );



        tmp_res = PyDict_SetItem( locals_requests$auth_108, const_str_plain_handle_401, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function_13___call__(  );



        tmp_res = PyDict_SetItem( locals_requests$auth_108, const_str_plain___call__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function_14___eq__(  );



        tmp_res = PyDict_SetItem( locals_requests$auth_108, const_str_plain___eq__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$auth$$$function_15___ne__(  );



        tmp_res = PyDict_SetItem( locals_requests$auth_108, const_str_plain___ne__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_38 = locals_requests$auth_108;
        Py_INCREF( tmp_assign_source_38 );
        goto try_return_handler_13;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$auth );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF( locals_requests$auth_108 );
        locals_requests$auth_108 = NULL;
        goto outline_result_6;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$auth );
        return MOD_RETURN_VALUE( NULL );
        outline_result_6:;
        assert( tmp_class_creation_4__class_dict == NULL );
        tmp_class_creation_4__class_dict = tmp_assign_source_38;
    }
    {
        PyObject *tmp_assign_source_39;
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_key_name_7;
        PyObject *tmp_dict_name_7;
        PyObject *tmp_dict_name_8;
        PyObject *tmp_key_name_8;
        tmp_key_name_7 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_4__class_dict );
        tmp_dict_name_7 = tmp_class_creation_4__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_7, tmp_key_name_7 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;

            goto try_except_handler_12;
        }
        tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_4;
        }
        else
        {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT( tmp_class_creation_4__class_dict );
        tmp_dict_name_8 = tmp_class_creation_4__class_dict;
        tmp_key_name_8 = const_str_plain___metaclass__;
        tmp_assign_source_39 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;

            goto try_except_handler_12;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        {
            PyObject *tmp_assign_source_40;
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_subscript_name_3;
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_subscribed_name_3 = tmp_class_creation_4__bases;
            tmp_subscript_name_3 = const_int_0;
            tmp_assign_source_40 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_3, tmp_subscript_name_3, 0 );
            if ( tmp_assign_source_40 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 108;

                goto try_except_handler_12;
            }
            assert( tmp_select_metaclass_4__base == NULL );
            tmp_select_metaclass_4__base = tmp_assign_source_40;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( tmp_select_metaclass_4__base );
            tmp_source_name_3 = tmp_select_metaclass_4__base;
            tmp_assign_source_39 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
            if ( tmp_assign_source_39 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 108;

                goto try_except_handler_15;
            }
            goto try_return_handler_14;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$auth );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_3;
            Py_DECREF( exception_keeper_type_7 );
            Py_XDECREF( exception_keeper_value_7 );
            Py_XDECREF( exception_keeper_tb_7 );
            CHECK_OBJECT( tmp_select_metaclass_4__base );
            tmp_type_arg_3 = tmp_select_metaclass_4__base;
            tmp_assign_source_39 = BUILTIN_TYPE1( tmp_type_arg_3 );
            assert( !(tmp_assign_source_39 == NULL) );
            goto try_return_handler_14;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$auth );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_4__base );
        Py_DECREF( tmp_select_metaclass_4__base );
        tmp_select_metaclass_4__base = NULL;

        goto outline_result_7;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_4__base );
        Py_DECREF( tmp_select_metaclass_4__base );
        tmp_select_metaclass_4__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$auth );
        return MOD_RETURN_VALUE( NULL );
        outline_result_7:;
        condexpr_end_4:;
        assert( tmp_class_creation_4__metaclass == NULL );
        tmp_class_creation_4__metaclass = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_name_4;
        PyObject *tmp_args_element_name_10;
        PyObject *tmp_args_element_name_11;
        PyObject *tmp_args_element_name_12;
        CHECK_OBJECT( tmp_class_creation_4__metaclass );
        tmp_called_name_4 = tmp_class_creation_4__metaclass;
        tmp_args_element_name_10 = const_str_plain_HTTPDigestAuth;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_args_element_name_11 = tmp_class_creation_4__bases;
        CHECK_OBJECT( tmp_class_creation_4__class_dict );
        tmp_args_element_name_12 = tmp_class_creation_4__class_dict;
        frame_206e0b42994703101e37532bbd4012ab->m_frame.f_lineno = 108;
        {
            PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
            tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
        }

        if ( tmp_assign_source_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;

            goto try_except_handler_12;
        }
        assert( tmp_class_creation_4__class == NULL );
        tmp_class_creation_4__class = tmp_assign_source_41;
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    Py_XDECREF( tmp_class_creation_4__class_dict );
    tmp_class_creation_4__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;

    // Restore frame exception if necessary.
#if 0
    RESTORE_FRAME_EXCEPTION( frame_206e0b42994703101e37532bbd4012ab );
#endif
    popFrameStack();

    assertFrameObject( frame_206e0b42994703101e37532bbd4012ab );

    goto frame_no_exception_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_206e0b42994703101e37532bbd4012ab );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_206e0b42994703101e37532bbd4012ab, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_206e0b42994703101e37532bbd4012ab->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_206e0b42994703101e37532bbd4012ab, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_42;
        CHECK_OBJECT( tmp_class_creation_4__class );
        tmp_assign_source_42 = tmp_class_creation_4__class;
        UPDATE_STRING_DICT0( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain_HTTPDigestAuth, tmp_assign_source_42 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class );
    Py_DECREF( tmp_class_creation_4__class );
    tmp_class_creation_4__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__bases );
    Py_DECREF( tmp_class_creation_4__bases );
    tmp_class_creation_4__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__class_dict );
    Py_DECREF( tmp_class_creation_4__class_dict );
    tmp_class_creation_4__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_4__metaclass );
    Py_DECREF( tmp_class_creation_4__metaclass );
    tmp_class_creation_4__metaclass = NULL;


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_requests$auth, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_requests$auth );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
