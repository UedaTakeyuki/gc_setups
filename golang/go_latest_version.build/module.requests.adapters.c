/* Generated code for Python module 'requests.adapters'
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

/* The "_module_requests$adapters" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_requests$adapters;
PyDictObject *moduledict_requests$adapters;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_socks;
extern PyObject *const_str_plain_preload_content;
extern PyObject *const_str_plain_putheader;
static PyObject *const_str_digest_8c58dbeb2a2c13a119eaf790ea7782dd;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_LocationValueError;
extern PyObject *const_str_plain_ConnectTimeoutError;
extern PyObject *const_str_plain_Retry;
static PyObject *const_str_plain_max_retries;
static PyObject *const_str_plain_build_response;
static PyObject *const_tuple_str_plain_ConnectTimeoutError_tuple;
extern PyObject *const_str_plain_ProxyError;
extern PyObject *const_str_plain_proxy;
extern PyObject *const_str_plain_poolmanager;
static PyObject *const_tuple_str_plain_self_str_plain_request_str_plain_kwargs_tuple;
extern PyObject *const_str_plain_decode;
extern PyObject *const_tuple_13e73ffbff2b6baddf93809493dc996c_tuple;
extern PyObject *const_str_plain_cert_reqs;
extern PyObject *const_str_plain_raw;
extern PyObject *const_str_plain_block;
static PyObject *const_tuple_str_plain_ReadTimeoutError_tuple;
extern PyObject *const_str_plain_startswith;
static PyObject *const_str_plain__pool_connections;
extern PyObject *const_str_plain_ConnectionError;
static PyObject *const_list_b210aeadbd087eaaf628d5f4d13acd25_list;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_connection_from_url;
static PyObject *const_str_plain_proxy_manager_for;
extern PyObject *const_str_plain_retries;
extern PyObject *const_tuple_str_plain_parse_url_tuple;
extern PyObject *const_str_plain_CaseInsensitiveDict;
extern PyObject *const_str_digest_867cf107290997ea3f46e9cff397e1db;
extern PyObject *const_str_plain_stream;
extern PyObject *const_str_plain_read;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_select_proxy;
static PyObject *const_str_plain_DEFAULT_POOL_TIMEOUT;
extern PyObject *const_str_plain_args;
extern PyObject *const_dict_f965c4886458f8f721a7913cea1cd007;
extern PyObject *const_str_plain_resp;
static PyObject *const_str_digest_689f43089124f06b15e9987dc8e6f0cd;
extern PyObject *const_str_plain_Response;
static PyObject *const_str_digest_0e90a733b836dccf8b7d0124401998c8;
extern PyObject *const_str_plain_ResponseError;
extern PyObject *const_str_plain_proxy_headers;
extern PyObject *const_str_plain_self;
static PyObject *const_tuple_str_plain_MaxRetryError_tuple;
extern PyObject *const_str_plain_prepend_scheme_if_needed;
extern PyObject *const_str_plain_scheme;
extern PyObject *const_tuple_str_plain_HTTPResponse_tuple;
static PyObject *const_tuple_str_plain_socks_tuple;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_DEFAULT_RETRIES;
extern PyObject *const_str_plain_skip_accept_encoding;
static PyObject *const_tuple_str_plain_urlparse_str_plain_basestring_tuple;
static PyObject *const_tuple_str_digest_381fd3348aa52a96bff9cd9e1ea4f162_tuple;
extern PyObject *const_str_plain_maxsize;
static PyObject *const_str_digest_92d7a028a7de3fecbe9df9c1fa24ee6e;
extern PyObject *const_str_plain_NewConnectionError;
static PyObject *const_str_plain_manager;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_reason;
extern PyObject *const_str_plain_connection;
static PyObject *const_str_digest_4dd75d7a0434de0e965e971794e16108;
static PyObject *const_dict_96e45a30326f2854cb930a7737e3b26d;
extern PyObject *const_str_digest_58d55cc0c39ccfcef76de1f9740cddf4;
extern PyObject *const_str_plain_basestring;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain_socket;
extern PyObject *const_str_plain_http;
extern PyObject *const_str_plain_decode_content;
extern PyObject *const_str_plain_parse_url;
extern PyObject *const_str_plain_attr;
extern PyObject *const_str_plain_endheaders;
extern PyObject *const_str_plain_https;
extern PyObject *const_str_plain_from_int;
extern PyObject *const_tuple_str_plain_args_str_plain_kwargs_tuple;
extern PyObject *const_str_plain___attrs__;
extern PyObject *const_str_plain_conn;
extern PyObject *const_str_plain_ClosedPoolError;
extern PyObject *const_str_plain_urlparse;
extern PyObject *const_str_plain_parsed;
extern PyObject *const_str_plain_method;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_digest_d0cac7c67d1189a986b25b7cf105347d;
extern PyObject *const_str_plain_models;
extern PyObject *const_str_plain___getstate__;
extern PyObject *const_str_plain_get_auth_from_url;
extern PyObject *const_str_plain_ReadTimeout;
extern PyObject *const_str_plain_req;
extern PyObject *const_str_plain_RetryError;
static PyObject *const_tuple_str_plain_self_str_plain_proxy_tuple;
static PyObject *const_tuple_402e5278992b88e3d2e7fcf25552ac4f_tuple;
extern PyObject *const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_int_pos_10;
extern PyObject *const_str_plain_InvalidURL;
static PyObject *const_str_digest_3753a9b47e94d50e84fafceba56d25b3;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_strict;
extern PyObject *const_str_plain_buffering;
static PyObject *const_tuple_str_plain_SOCKSProxyManager_tuple;
extern PyObject *const_str_plain_encode;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain_os;
static PyObject *const_tuple_c5e34394161f1e5ba63047dd07ef05cf_tuple;
static PyObject *const_str_plain_pool_connections;
extern PyObject *const_str_plain_geturl;
static PyObject *const_tuple_8b8c88817a00aca8d34df83b961c014e_tuple;
extern PyObject *const_str_plain_extract_zipped_paths;
extern PyObject *const_str_plain_cookies;
static PyObject *const_str_plain_proxy_manager;
static PyObject *const_str_digest_a3b4e21c527f3872bb2a3cad05caced3;
static PyObject *const_dict_d57bfa9a8ed7a88f3af4f0a6e5cfc141;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_HTTPError;
extern PyObject *const_str_plain_ca_cert_dir;
extern PyObject *const_str_plain___setstate__;
extern PyObject *const_str_plain_MaxRetryError;
extern PyObject *const_str_plain_encoding;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_verify;
extern PyObject *const_str_plain_request_url;
extern PyObject *const_str_plain_PoolManager;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_request;
extern PyObject *const_str_plain_str;
static PyObject *const_tuple_str_plain_ClosedPoolError_tuple;
extern PyObject *const_str_plain_state;
static PyObject *const_str_plain_cert_verify;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain_status_code;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain__ProxyError;
extern PyObject *const_str_digest_c8562bbff9d721153deb2fdd066393d0;
extern PyObject *const_str_plain_cert;
extern PyObject *const_str_plain_DEFAULT_CA_BUNDLE_PATH;
extern PyObject *const_str_plain_exists;
extern PyObject *const_str_plain_CERT_NONE;
static PyObject *const_str_digest_64ad7ce704a2035b2f3a90397c090ca7;
static PyObject *const_tuple_44dc5ab755b5655bde0dfbf028f901fd_tuple;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain_HTTPResponse;
static PyObject *const_str_plain_TimeoutSauce;
static PyObject *const_str_plain__pool_maxsize;
static PyObject *const_str_plain__HTTPError;
static PyObject *const_tuple_str_plain_https_tuple;
static PyObject *const_str_plain_proxy_pool;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_plain_utils;
extern PyObject *const_str_plain_items;
static PyObject *const_tuple_str_plain_ProxyError_tuple;
static PyObject *const_str_plain_pool_block;
extern PyObject *const_tuple_str_plain_Timeout_tuple;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_from_httplib;
static PyObject *const_str_plain_DEFAULT_POOLSIZE;
static PyObject *const_str_digest_a72d819fa9b462ca35152a67acf9f95b;
static PyObject *const_str_digest_cf164d66984f410735aac772ffcc2043;
extern PyObject *const_str_plain_auth;
static PyObject *const_str_digest_d166bac2cd9f995554d196b16ef3feee;
static PyObject *const_str_plain_DEFAULT_POOLBLOCK;
static PyObject *const_tuple_bd356f6cf3258844d460b87e1636571d_tuple;
static PyObject *const_str_plain_using_socks_proxy;
static PyObject *const_str_plain_is_proxied_http_request;
static PyObject *const_str_plain__SSLError;
extern PyObject *const_str_plain_url;
extern PyObject *const_tuple_str_plain_HTTPError_tuple;
extern PyObject *const_str_plain_values;
static PyObject *const_str_digest_05727e9ade8b3b6ad320af9e2609e1dd;
static PyObject *const_str_digest_ab462680d0487f574012e6a7b3ea2cfd;
static PyObject *const_str_digest_381fd3348aa52a96bff9cd9e1ea4f162;
static PyObject *const_str_digest_583f837ef2184e324997463a2ea927a1;
extern PyObject *const_str_plain_path;
extern PyObject *const_str_plain_connect;
static PyObject *const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple;
extern PyObject *const_str_plain_num_pools;
static PyObject *const_str_plain_config;
static PyObject *const_tuple_4ab3f0848ac5699bff78a10e2078200f_tuple;
extern PyObject *const_str_plain_send;
extern PyObject *const_str_plain_redirect;
extern PyObject *const_str_plain_InvalidSchema;
extern PyObject *const_str_plain_pool;
extern PyObject *const_str_plain_getresponse;
extern PyObject *const_str_plain__get_conn;
extern PyObject *const_str_plain_value;
extern PyObject *const_tuple_str_plain_Retry_tuple;
static PyObject *const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple;
static PyObject *const_str_digest_bfa093c614acefeadc8693bd26119f2c;
extern PyObject *const_str_plain_urldefragauth;
extern PyObject *const_str_plain_None;
static PyObject *const_tuple_str_plain_ResponseError_tuple;
extern PyObject *const_str_plain_putrequest;
extern PyObject *const_str_plain__basic_auth_str;
extern PyObject *const_str_plain_cert_file;
static PyObject *const_tuple_false_none_true_none_none_tuple;
extern PyObject *const_str_plain_ConnectTimeout;
extern PyObject *const_str_plain_pool_kwargs;
extern PyObject *const_str_plain_urlopen;
static PyObject *const_str_digest_dbc92a2b5167052219bbed5a2180ad0b;
extern PyObject *const_str_plain_compat;
static PyObject *const_tuple_600e4d6ebfcc19edee23c64328c1fbac_tuple;
extern PyObject *const_str_plain_headers;
extern PyObject *const_str_plain_status;
static PyObject *const_str_digest_3e65357a65a5cf0df20a8efd5394db63;
extern PyObject *const_str_plain_ReadTimeoutError;
extern PyObject *const_str_plain_extract_cookies_to_jar;
extern PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
static PyObject *const_tuple_496d188b13e797bd570163cd8ba5ef8d_tuple;
extern PyObject *const_str_plain_CERT_REQUIRED;
extern PyObject *const_str_plain_InvalidProxyURL;
static PyObject *const_str_digest_a634c3a07d79eddfe1581301d16e55a1;
static PyObject *const_str_digest_f564af29e8441da03b9e6bf26a88cc81;
extern PyObject *const_str_digest_3c9527fc53ea2272c2080ca035d6631c;
static PyObject *const_tuple_str_plain_PoolManager_str_plain_proxy_from_url_tuple;
static PyObject *const_str_plain_get_connection;
extern PyObject *const_str_plain_Timeout;
extern PyObject *const_str_plain_password;
static PyObject *const_str_digest_fff293e3e7fde90d706cca79c91fa423;
extern PyObject *const_str_plain_assert_same_host;
static PyObject *const_tuple_str_digest_d166bac2cd9f995554d196b16ef3feee_tuple;
extern PyObject *const_tuple_str_digest_7ca129d2d421fe965ad48cbb290b579b_tuple;
extern PyObject *const_str_plain_isdir;
extern PyObject *const_str_digest_0910c0c2f1750b2fe8203b1da8f91dfb;
extern PyObject *const_str_plain_username;
extern PyObject *const_str_plain_get_encoding_from_headers;
extern PyObject *const_tuple_str_plain_CaseInsensitiveDict_tuple;
static PyObject *const_tuple_str_plain_NewConnectionError_tuple;
extern PyObject *const_str_plain_HTTPAdapter;
static PyObject *const_tuple_str_plain_ProtocolError_tuple;
static PyObject *const_str_plain__pool_block;
extern PyObject *const_str_plain_clear;
extern PyObject *const_str_plain_key_file;
extern PyObject *const_str_plain_proxies;
extern PyObject *const_str_digest_901e90eee70586f15ff5cd8bfbf848b6;
extern PyObject *const_str_plain_proxy_url;
static PyObject *const_tuple_967d0e1bf472103ccf01327c6843c57a_tuple;
extern PyObject *const_str_digest_7ca129d2d421fe965ad48cbb290b579b;
static PyObject *const_str_plain_pool_maxsize;
static PyObject *const_tuple_str_plain_Response_tuple;
static PyObject *const_str_plain_init_poolmanager;
extern PyObject *const_str_plain_path_url;
static PyObject *const_str_digest_19fdcf2df08a408493d23f0c1c422714;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_digest_a9249a74248e02fdfcaa84b4618a14ce;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_ProtocolError;
static PyObject *const_str_plain_add_headers;
static PyObject *const_str_digest_e399ba4554180f37de594a6743234f17;
extern PyObject *const_str_plain_SOCKSProxyManager;
extern PyObject *const_tuple_str_plain_extract_cookies_to_jar_tuple;
extern PyObject *const_str_plain_host;
extern PyObject *const_tuple_str_plain__basic_auth_str_tuple;
extern PyObject *const_str_plain_structures;
static PyObject *const_str_digest_92450e54ff68c1856b3f5b6ca477f571;
static PyObject *const_str_plain_proxy_scheme;
extern PyObject *const_str_plain_proxy_from_url;
extern PyObject *const_str_plain_SSLError;
static PyObject *const_str_plain_connections;
extern PyObject *const_str_plain_body;
extern PyObject *const_tuple_str_digest_0910c0c2f1750b2fe8203b1da8f91dfb_tuple;
static PyObject *const_str_plain_BaseAdapter;
static PyObject *const_tuple_265647a910194e5532c1422bcdee2d5d_tuple;
extern PyObject *const_str_plain_response;
static PyObject *const_tuple_str_plain_SSLError_tuple;
static PyObject *const_str_plain_proxy_kwargs;
extern PyObject *const_str_plain_ca_certs;
static PyObject *const_tuple_str_plain_LocationValueError_tuple;
static PyObject *const_str_plain_cert_loc;
static PyObject *const_str_digest_f0960f14478e5a2fef4fc81736af77be;
extern PyObject *const_tuple_none_tuple;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_digest_8c58dbeb2a2c13a119eaf790ea7782dd = UNSTREAM_STRING( &constant_bin[ 926823 ], 534, 0 );
    const_str_plain_max_retries = UNSTREAM_STRING( &constant_bin[ 927357 ], 11, 1 );
    const_str_plain_build_response = UNSTREAM_STRING( &constant_bin[ 927368 ], 14, 1 );
    const_tuple_str_plain_ConnectTimeoutError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ConnectTimeoutError_tuple, 0, const_str_plain_ConnectTimeoutError ); Py_INCREF( const_str_plain_ConnectTimeoutError );
    const_tuple_str_plain_self_str_plain_request_str_plain_kwargs_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_request_str_plain_kwargs_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_request_str_plain_kwargs_tuple, 1, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_request_str_plain_kwargs_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    const_tuple_str_plain_ReadTimeoutError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ReadTimeoutError_tuple, 0, const_str_plain_ReadTimeoutError ); Py_INCREF( const_str_plain_ReadTimeoutError );
    const_str_plain__pool_connections = UNSTREAM_STRING( &constant_bin[ 927382 ], 17, 1 );
    const_list_b210aeadbd087eaaf628d5f4d13acd25_list = PyList_New( 5 );
    PyList_SET_ITEM( const_list_b210aeadbd087eaaf628d5f4d13acd25_list, 0, const_str_plain_max_retries ); Py_INCREF( const_str_plain_max_retries );
    const_str_plain_config = UNSTREAM_STRING( &constant_bin[ 33119 ], 6, 1 );
    PyList_SET_ITEM( const_list_b210aeadbd087eaaf628d5f4d13acd25_list, 1, const_str_plain_config ); Py_INCREF( const_str_plain_config );
    PyList_SET_ITEM( const_list_b210aeadbd087eaaf628d5f4d13acd25_list, 2, const_str_plain__pool_connections ); Py_INCREF( const_str_plain__pool_connections );
    const_str_plain__pool_maxsize = UNSTREAM_STRING( &constant_bin[ 927399 ], 13, 1 );
    PyList_SET_ITEM( const_list_b210aeadbd087eaaf628d5f4d13acd25_list, 3, const_str_plain__pool_maxsize ); Py_INCREF( const_str_plain__pool_maxsize );
    const_str_plain__pool_block = UNSTREAM_STRING( &constant_bin[ 927412 ], 11, 1 );
    PyList_SET_ITEM( const_list_b210aeadbd087eaaf628d5f4d13acd25_list, 4, const_str_plain__pool_block ); Py_INCREF( const_str_plain__pool_block );
    const_str_plain_proxy_manager_for = UNSTREAM_STRING( &constant_bin[ 927423 ], 17, 1 );
    const_str_plain_DEFAULT_POOL_TIMEOUT = UNSTREAM_STRING( &constant_bin[ 927440 ], 20, 1 );
    const_str_digest_689f43089124f06b15e9987dc8e6f0cd = UNSTREAM_STRING( &constant_bin[ 927460 ], 33, 0 );
    const_str_digest_0e90a733b836dccf8b7d0124401998c8 = UNSTREAM_STRING( &constant_bin[ 927493 ], 546, 0 );
    const_tuple_str_plain_MaxRetryError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_MaxRetryError_tuple, 0, const_str_plain_MaxRetryError ); Py_INCREF( const_str_plain_MaxRetryError );
    const_tuple_str_plain_socks_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_socks_tuple, 0, const_str_plain_socks ); Py_INCREF( const_str_plain_socks );
    const_str_plain_DEFAULT_RETRIES = UNSTREAM_STRING( &constant_bin[ 928039 ], 15, 1 );
    const_tuple_str_plain_urlparse_str_plain_basestring_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_urlparse_str_plain_basestring_tuple, 0, const_str_plain_urlparse ); Py_INCREF( const_str_plain_urlparse );
    PyTuple_SET_ITEM( const_tuple_str_plain_urlparse_str_plain_basestring_tuple, 1, const_str_plain_basestring ); Py_INCREF( const_str_plain_basestring );
    const_tuple_str_digest_381fd3348aa52a96bff9cd9e1ea4f162_tuple = PyTuple_New( 1 );
    const_str_digest_381fd3348aa52a96bff9cd9e1ea4f162 = UNSTREAM_STRING( &constant_bin[ 928054 ], 39, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_381fd3348aa52a96bff9cd9e1ea4f162_tuple, 0, const_str_digest_381fd3348aa52a96bff9cd9e1ea4f162 ); Py_INCREF( const_str_digest_381fd3348aa52a96bff9cd9e1ea4f162 );
    const_str_digest_92d7a028a7de3fecbe9df9c1fa24ee6e = UNSTREAM_STRING( &constant_bin[ 928093 ], 835, 0 );
    const_str_plain_manager = UNSTREAM_STRING( &constant_bin[ 927429 ], 7, 1 );
    const_str_digest_4dd75d7a0434de0e965e971794e16108 = UNSTREAM_STRING( &constant_bin[ 928928 ], 49, 0 );
    const_dict_96e45a30326f2854cb930a7737e3b26d = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_96e45a30326f2854cb930a7737e3b26d, const_str_plain_read, Py_False );
    assert( PyDict_Size( const_dict_96e45a30326f2854cb930a7737e3b26d ) == 1 );
    const_tuple_str_plain_self_str_plain_proxy_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_proxy_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_proxy_tuple, 1, const_str_plain_proxy ); Py_INCREF( const_str_plain_proxy );
    const_tuple_402e5278992b88e3d2e7fcf25552ac4f_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_402e5278992b88e3d2e7fcf25552ac4f_tuple, 0, const_str_plain_ConnectionError ); Py_INCREF( const_str_plain_ConnectionError );
    PyTuple_SET_ITEM( const_tuple_402e5278992b88e3d2e7fcf25552ac4f_tuple, 1, const_str_plain_ConnectTimeout ); Py_INCREF( const_str_plain_ConnectTimeout );
    PyTuple_SET_ITEM( const_tuple_402e5278992b88e3d2e7fcf25552ac4f_tuple, 2, const_str_plain_ReadTimeout ); Py_INCREF( const_str_plain_ReadTimeout );
    PyTuple_SET_ITEM( const_tuple_402e5278992b88e3d2e7fcf25552ac4f_tuple, 3, const_str_plain_SSLError ); Py_INCREF( const_str_plain_SSLError );
    PyTuple_SET_ITEM( const_tuple_402e5278992b88e3d2e7fcf25552ac4f_tuple, 4, const_str_plain_ProxyError ); Py_INCREF( const_str_plain_ProxyError );
    PyTuple_SET_ITEM( const_tuple_402e5278992b88e3d2e7fcf25552ac4f_tuple, 5, const_str_plain_RetryError ); Py_INCREF( const_str_plain_RetryError );
    PyTuple_SET_ITEM( const_tuple_402e5278992b88e3d2e7fcf25552ac4f_tuple, 6, const_str_plain_InvalidSchema ); Py_INCREF( const_str_plain_InvalidSchema );
    PyTuple_SET_ITEM( const_tuple_402e5278992b88e3d2e7fcf25552ac4f_tuple, 7, const_str_plain_InvalidProxyURL ); Py_INCREF( const_str_plain_InvalidProxyURL );
    PyTuple_SET_ITEM( const_tuple_402e5278992b88e3d2e7fcf25552ac4f_tuple, 8, const_str_plain_InvalidURL ); Py_INCREF( const_str_plain_InvalidURL );
    const_str_digest_3753a9b47e94d50e84fafceba56d25b3 = UNSTREAM_STRING( &constant_bin[ 928977 ], 114, 0 );
    const_tuple_str_plain_SOCKSProxyManager_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SOCKSProxyManager_tuple, 0, const_str_plain_SOCKSProxyManager ); Py_INCREF( const_str_plain_SOCKSProxyManager );
    const_tuple_c5e34394161f1e5ba63047dd07ef05cf_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_c5e34394161f1e5ba63047dd07ef05cf_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_connections = UNSTREAM_STRING( &constant_bin[ 6660 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_c5e34394161f1e5ba63047dd07ef05cf_tuple, 1, const_str_plain_connections ); Py_INCREF( const_str_plain_connections );
    PyTuple_SET_ITEM( const_tuple_c5e34394161f1e5ba63047dd07ef05cf_tuple, 2, const_str_plain_maxsize ); Py_INCREF( const_str_plain_maxsize );
    PyTuple_SET_ITEM( const_tuple_c5e34394161f1e5ba63047dd07ef05cf_tuple, 3, const_str_plain_block ); Py_INCREF( const_str_plain_block );
    PyTuple_SET_ITEM( const_tuple_c5e34394161f1e5ba63047dd07ef05cf_tuple, 4, const_str_plain_pool_kwargs ); Py_INCREF( const_str_plain_pool_kwargs );
    const_str_plain_pool_connections = UNSTREAM_STRING( &constant_bin[ 927383 ], 16, 1 );
    const_tuple_8b8c88817a00aca8d34df83b961c014e_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_8b8c88817a00aca8d34df83b961c014e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_8b8c88817a00aca8d34df83b961c014e_tuple, 1, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    PyTuple_SET_ITEM( const_tuple_8b8c88817a00aca8d34df83b961c014e_tuple, 2, const_str_plain_proxies ); Py_INCREF( const_str_plain_proxies );
    PyTuple_SET_ITEM( const_tuple_8b8c88817a00aca8d34df83b961c014e_tuple, 3, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    const_str_plain_is_proxied_http_request = UNSTREAM_STRING( &constant_bin[ 929091 ], 23, 1 );
    PyTuple_SET_ITEM( const_tuple_8b8c88817a00aca8d34df83b961c014e_tuple, 4, const_str_plain_is_proxied_http_request ); Py_INCREF( const_str_plain_is_proxied_http_request );
    const_str_plain_proxy_scheme = UNSTREAM_STRING( &constant_bin[ 929114 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_8b8c88817a00aca8d34df83b961c014e_tuple, 5, const_str_plain_proxy_scheme ); Py_INCREF( const_str_plain_proxy_scheme );
    PyTuple_SET_ITEM( const_tuple_8b8c88817a00aca8d34df83b961c014e_tuple, 6, const_str_plain_proxy ); Py_INCREF( const_str_plain_proxy );
    PyTuple_SET_ITEM( const_tuple_8b8c88817a00aca8d34df83b961c014e_tuple, 7, const_str_plain_scheme ); Py_INCREF( const_str_plain_scheme );
    const_str_plain_using_socks_proxy = UNSTREAM_STRING( &constant_bin[ 929126 ], 17, 1 );
    PyTuple_SET_ITEM( const_tuple_8b8c88817a00aca8d34df83b961c014e_tuple, 8, const_str_plain_using_socks_proxy ); Py_INCREF( const_str_plain_using_socks_proxy );
    const_str_plain_proxy_manager = UNSTREAM_STRING( &constant_bin[ 927423 ], 13, 1 );
    const_str_digest_a3b4e21c527f3872bb2a3cad05caced3 = UNSTREAM_STRING( &constant_bin[ 929143 ], 396, 0 );
    const_dict_d57bfa9a8ed7a88f3af4f0a6e5cfc141 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_d57bfa9a8ed7a88f3af4f0a6e5cfc141, const_str_plain_skip_accept_encoding, Py_True );
    assert( PyDict_Size( const_dict_d57bfa9a8ed7a88f3af4f0a6e5cfc141 ) == 1 );
    const_tuple_str_plain_ClosedPoolError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ClosedPoolError_tuple, 0, const_str_plain_ClosedPoolError ); Py_INCREF( const_str_plain_ClosedPoolError );
    const_str_plain_cert_verify = UNSTREAM_STRING( &constant_bin[ 929539 ], 11, 1 );
    const_str_plain__ProxyError = UNSTREAM_STRING( &constant_bin[ 929550 ], 11, 1 );
    const_str_digest_64ad7ce704a2035b2f3a90397c090ca7 = UNSTREAM_STRING( &constant_bin[ 929561 ], 438, 0 );
    const_tuple_44dc5ab755b5655bde0dfbf028f901fd_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_44dc5ab755b5655bde0dfbf028f901fd_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_44dc5ab755b5655bde0dfbf028f901fd_tuple, 1, const_str_plain_pool_connections ); Py_INCREF( const_str_plain_pool_connections );
    const_str_plain_pool_maxsize = UNSTREAM_STRING( &constant_bin[ 927400 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_44dc5ab755b5655bde0dfbf028f901fd_tuple, 2, const_str_plain_pool_maxsize ); Py_INCREF( const_str_plain_pool_maxsize );
    PyTuple_SET_ITEM( const_tuple_44dc5ab755b5655bde0dfbf028f901fd_tuple, 3, const_str_plain_max_retries ); Py_INCREF( const_str_plain_max_retries );
    const_str_plain_pool_block = UNSTREAM_STRING( &constant_bin[ 927413 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_44dc5ab755b5655bde0dfbf028f901fd_tuple, 4, const_str_plain_pool_block ); Py_INCREF( const_str_plain_pool_block );
    const_str_plain_TimeoutSauce = UNSTREAM_STRING( &constant_bin[ 929999 ], 12, 1 );
    const_str_plain__HTTPError = UNSTREAM_STRING( &constant_bin[ 930011 ], 10, 1 );
    const_tuple_str_plain_https_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_https_tuple, 0, const_str_plain_https ); Py_INCREF( const_str_plain_https );
    const_str_plain_proxy_pool = UNSTREAM_STRING( &constant_bin[ 930021 ], 10, 1 );
    const_tuple_str_plain_ProxyError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ProxyError_tuple, 0, const_str_plain_ProxyError ); Py_INCREF( const_str_plain_ProxyError );
    const_str_plain_DEFAULT_POOLSIZE = UNSTREAM_STRING( &constant_bin[ 930031 ], 16, 1 );
    const_str_digest_a72d819fa9b462ca35152a67acf9f95b = UNSTREAM_STRING( &constant_bin[ 930047 ], 26, 0 );
    const_str_digest_cf164d66984f410735aac772ffcc2043 = UNSTREAM_STRING( &constant_bin[ 930073 ], 575, 0 );
    const_str_digest_d166bac2cd9f995554d196b16ef3feee = UNSTREAM_STRING( &constant_bin[ 930648 ], 70, 0 );
    const_str_plain_DEFAULT_POOLBLOCK = UNSTREAM_STRING( &constant_bin[ 930718 ], 17, 1 );
    const_tuple_bd356f6cf3258844d460b87e1636571d_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_bd356f6cf3258844d460b87e1636571d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_bd356f6cf3258844d460b87e1636571d_tuple, 1, const_str_plain_request ); Py_INCREF( const_str_plain_request );
    PyTuple_SET_ITEM( const_tuple_bd356f6cf3258844d460b87e1636571d_tuple, 2, const_str_plain_stream ); Py_INCREF( const_str_plain_stream );
    PyTuple_SET_ITEM( const_tuple_bd356f6cf3258844d460b87e1636571d_tuple, 3, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );
    PyTuple_SET_ITEM( const_tuple_bd356f6cf3258844d460b87e1636571d_tuple, 4, const_str_plain_verify ); Py_INCREF( const_str_plain_verify );
    PyTuple_SET_ITEM( const_tuple_bd356f6cf3258844d460b87e1636571d_tuple, 5, const_str_plain_cert ); Py_INCREF( const_str_plain_cert );
    PyTuple_SET_ITEM( const_tuple_bd356f6cf3258844d460b87e1636571d_tuple, 6, const_str_plain_proxies ); Py_INCREF( const_str_plain_proxies );
    const_str_plain__SSLError = UNSTREAM_STRING( &constant_bin[ 930735 ], 9, 1 );
    const_str_digest_05727e9ade8b3b6ad320af9e2609e1dd = UNSTREAM_STRING( &constant_bin[ 930744 ], 53, 0 );
    const_str_digest_ab462680d0487f574012e6a7b3ea2cfd = UNSTREAM_STRING( &constant_bin[ 930797 ], 162, 0 );
    const_str_digest_583f837ef2184e324997463a2ea927a1 = UNSTREAM_STRING( &constant_bin[ 930959 ], 137, 0 );
    const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple, 0, const_str_plain_DEFAULT_CA_BUNDLE_PATH ); Py_INCREF( const_str_plain_DEFAULT_CA_BUNDLE_PATH );
    PyTuple_SET_ITEM( const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple, 1, const_str_plain_extract_zipped_paths ); Py_INCREF( const_str_plain_extract_zipped_paths );
    PyTuple_SET_ITEM( const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple, 2, const_str_plain_get_encoding_from_headers ); Py_INCREF( const_str_plain_get_encoding_from_headers );
    PyTuple_SET_ITEM( const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple, 3, const_str_plain_prepend_scheme_if_needed ); Py_INCREF( const_str_plain_prepend_scheme_if_needed );
    PyTuple_SET_ITEM( const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple, 4, const_str_plain_get_auth_from_url ); Py_INCREF( const_str_plain_get_auth_from_url );
    PyTuple_SET_ITEM( const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple, 5, const_str_plain_urldefragauth ); Py_INCREF( const_str_plain_urldefragauth );
    PyTuple_SET_ITEM( const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple, 6, const_str_plain_select_proxy ); Py_INCREF( const_str_plain_select_proxy );
    const_tuple_4ab3f0848ac5699bff78a10e2078200f_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_4ab3f0848ac5699bff78a10e2078200f_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_4ab3f0848ac5699bff78a10e2078200f_tuple, 1, const_str_plain_req ); Py_INCREF( const_str_plain_req );
    PyTuple_SET_ITEM( const_tuple_4ab3f0848ac5699bff78a10e2078200f_tuple, 2, const_str_plain_resp ); Py_INCREF( const_str_plain_resp );
    PyTuple_SET_ITEM( const_tuple_4ab3f0848ac5699bff78a10e2078200f_tuple, 3, const_str_plain_response ); Py_INCREF( const_str_plain_response );
    const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple, 1, const_str_plain_conn ); Py_INCREF( const_str_plain_conn );
    PyTuple_SET_ITEM( const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple, 2, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple, 3, const_str_plain_verify ); Py_INCREF( const_str_plain_verify );
    PyTuple_SET_ITEM( const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple, 4, const_str_plain_cert ); Py_INCREF( const_str_plain_cert );
    const_str_plain_cert_loc = UNSTREAM_STRING( &constant_bin[ 931096 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple, 5, const_str_plain_cert_loc ); Py_INCREF( const_str_plain_cert_loc );
    const_str_digest_bfa093c614acefeadc8693bd26119f2c = UNSTREAM_STRING( &constant_bin[ 931104 ], 463, 0 );
    const_tuple_str_plain_ResponseError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ResponseError_tuple, 0, const_str_plain_ResponseError ); Py_INCREF( const_str_plain_ResponseError );
    const_tuple_false_none_true_none_none_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_false_none_true_none_none_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_none_true_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_none_true_none_none_tuple, 2, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_false_none_true_none_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_false_none_true_none_none_tuple, 4, Py_None ); Py_INCREF( Py_None );
    const_str_digest_dbc92a2b5167052219bbed5a2180ad0b = UNSTREAM_STRING( &constant_bin[ 931567 ], 520, 0 );
    const_tuple_600e4d6ebfcc19edee23c64328c1fbac_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 932087 ], 200 );
    const_str_digest_3e65357a65a5cf0df20a8efd5394db63 = UNSTREAM_STRING( &constant_bin[ 932287 ], 57, 0 );
    const_tuple_496d188b13e797bd570163cd8ba5ef8d_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_496d188b13e797bd570163cd8ba5ef8d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_496d188b13e797bd570163cd8ba5ef8d_tuple, 1, const_str_plain_proxy ); Py_INCREF( const_str_plain_proxy );
    PyTuple_SET_ITEM( const_tuple_496d188b13e797bd570163cd8ba5ef8d_tuple, 2, const_str_plain_username ); Py_INCREF( const_str_plain_username );
    PyTuple_SET_ITEM( const_tuple_496d188b13e797bd570163cd8ba5ef8d_tuple, 3, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_496d188b13e797bd570163cd8ba5ef8d_tuple, 4, const_str_plain_password ); Py_INCREF( const_str_plain_password );
    const_str_digest_a634c3a07d79eddfe1581301d16e55a1 = UNSTREAM_STRING( &constant_bin[ 932344 ], 26, 0 );
    const_str_digest_f564af29e8441da03b9e6bf26a88cc81 = UNSTREAM_STRING( &constant_bin[ 927002 ], 17, 0 );
    const_tuple_str_plain_PoolManager_str_plain_proxy_from_url_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PoolManager_str_plain_proxy_from_url_tuple, 0, const_str_plain_PoolManager ); Py_INCREF( const_str_plain_PoolManager );
    PyTuple_SET_ITEM( const_tuple_str_plain_PoolManager_str_plain_proxy_from_url_tuple, 1, const_str_plain_proxy_from_url ); Py_INCREF( const_str_plain_proxy_from_url );
    const_str_plain_get_connection = UNSTREAM_STRING( &constant_bin[ 932370 ], 14, 1 );
    const_str_digest_fff293e3e7fde90d706cca79c91fa423 = UNSTREAM_STRING( &constant_bin[ 932384 ], 895, 0 );
    const_tuple_str_digest_d166bac2cd9f995554d196b16ef3feee_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_d166bac2cd9f995554d196b16ef3feee_tuple, 0, const_str_digest_d166bac2cd9f995554d196b16ef3feee ); Py_INCREF( const_str_digest_d166bac2cd9f995554d196b16ef3feee );
    const_tuple_str_plain_NewConnectionError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_NewConnectionError_tuple, 0, const_str_plain_NewConnectionError ); Py_INCREF( const_str_plain_NewConnectionError );
    const_tuple_str_plain_ProtocolError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ProtocolError_tuple, 0, const_str_plain_ProtocolError ); Py_INCREF( const_str_plain_ProtocolError );
    const_tuple_967d0e1bf472103ccf01327c6843c57a_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_967d0e1bf472103ccf01327c6843c57a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_967d0e1bf472103ccf01327c6843c57a_tuple, 1, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_967d0e1bf472103ccf01327c6843c57a_tuple, 2, const_str_plain_proxies ); Py_INCREF( const_str_plain_proxies );
    PyTuple_SET_ITEM( const_tuple_967d0e1bf472103ccf01327c6843c57a_tuple, 3, const_str_plain_proxy_url ); Py_INCREF( const_str_plain_proxy_url );
    PyTuple_SET_ITEM( const_tuple_967d0e1bf472103ccf01327c6843c57a_tuple, 4, const_str_plain_proxy_manager ); Py_INCREF( const_str_plain_proxy_manager );
    PyTuple_SET_ITEM( const_tuple_967d0e1bf472103ccf01327c6843c57a_tuple, 5, const_str_plain_proxy ); Py_INCREF( const_str_plain_proxy );
    PyTuple_SET_ITEM( const_tuple_967d0e1bf472103ccf01327c6843c57a_tuple, 6, const_str_plain_parsed ); Py_INCREF( const_str_plain_parsed );
    PyTuple_SET_ITEM( const_tuple_967d0e1bf472103ccf01327c6843c57a_tuple, 7, const_str_plain_conn ); Py_INCREF( const_str_plain_conn );
    const_tuple_str_plain_Response_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Response_tuple, 0, const_str_plain_Response ); Py_INCREF( const_str_plain_Response );
    const_str_plain_init_poolmanager = UNSTREAM_STRING( &constant_bin[ 933279 ], 16, 1 );
    const_str_digest_19fdcf2df08a408493d23f0c1c422714 = UNSTREAM_STRING( &constant_bin[ 933295 ], 1167, 0 );
    const_str_plain_add_headers = UNSTREAM_STRING( &constant_bin[ 934462 ], 11, 1 );
    const_str_digest_e399ba4554180f37de594a6743234f17 = UNSTREAM_STRING( &constant_bin[ 934473 ], 7, 0 );
    const_str_digest_92450e54ff68c1856b3f5b6ca477f571 = UNSTREAM_STRING( &constant_bin[ 934480 ], 69, 0 );
    const_str_plain_BaseAdapter = UNSTREAM_STRING( &constant_bin[ 934549 ], 11, 1 );
    const_tuple_265647a910194e5532c1422bcdee2d5d_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_265647a910194e5532c1422bcdee2d5d_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_265647a910194e5532c1422bcdee2d5d_tuple, 1, const_str_plain_proxy ); Py_INCREF( const_str_plain_proxy );
    const_str_plain_proxy_kwargs = UNSTREAM_STRING( &constant_bin[ 931416 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_265647a910194e5532c1422bcdee2d5d_tuple, 2, const_str_plain_proxy_kwargs ); Py_INCREF( const_str_plain_proxy_kwargs );
    PyTuple_SET_ITEM( const_tuple_265647a910194e5532c1422bcdee2d5d_tuple, 3, const_str_plain_username ); Py_INCREF( const_str_plain_username );
    PyTuple_SET_ITEM( const_tuple_265647a910194e5532c1422bcdee2d5d_tuple, 4, const_str_plain_manager ); Py_INCREF( const_str_plain_manager );
    PyTuple_SET_ITEM( const_tuple_265647a910194e5532c1422bcdee2d5d_tuple, 5, const_str_plain_proxy_headers ); Py_INCREF( const_str_plain_proxy_headers );
    PyTuple_SET_ITEM( const_tuple_265647a910194e5532c1422bcdee2d5d_tuple, 6, const_str_plain_password ); Py_INCREF( const_str_plain_password );
    const_tuple_str_plain_SSLError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_SSLError_tuple, 0, const_str_plain_SSLError ); Py_INCREF( const_str_plain_SSLError );
    const_tuple_str_plain_LocationValueError_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_LocationValueError_tuple, 0, const_str_plain_LocationValueError ); Py_INCREF( const_str_plain_LocationValueError );
    const_str_digest_f0960f14478e5a2fef4fc81736af77be = UNSTREAM_STRING( &constant_bin[ 934560 ], 577, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_requests$adapters( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_0f5936b6d9186a8d7dd5e4958b9f915a;
static PyCodeObject *codeobj_bf16283824e926836c279e3b218e2c3b;
static PyCodeObject *codeobj_6662f22ce1fdc46fbc308e5eb37dfcdf;
static PyCodeObject *codeobj_222c56e2fc0a2c527367c690386a7dab;
static PyCodeObject *codeobj_80dc5fe54155e7c593da847c99105e7e;
static PyCodeObject *codeobj_fa8c37c88554ceebc9c3d78867c25e51;
static PyCodeObject *codeobj_a9872ebb0235d54b7bf180ceb9007c5c;
static PyCodeObject *codeobj_e807b21ea83f4dec8f5eafa75a621cfd;
static PyCodeObject *codeobj_56ee817bbd0817003c33718cffef5ea2;
static PyCodeObject *codeobj_cfdc13c9969d2a6ff3031ef7df276681;
static PyCodeObject *codeobj_5123ea2cdb7d0abd0e94f1bca68da0c3;
static PyCodeObject *codeobj_4a69072ef5b69b159eb8422c322b4d72;
static PyCodeObject *codeobj_fe322788ddf6dabc5662a500e3d9c52c;
static PyCodeObject *codeobj_0e3ece2c60f7b51e550ca34d75278be9;
static PyCodeObject *codeobj_4713c83be7b14451adcb0e8c051d51b4;
static PyCodeObject *codeobj_e60d2f119d46585f929b0027e234b08e;
static PyCodeObject *codeobj_edd4fdcf3b237a4c62726c8a1fda43cf;
static PyCodeObject *codeobj_36419fd9c845eb4048b911532a6e222d;
static PyCodeObject *codeobj_cf4370e57fceaf0438a9f1bafe8a8bb6;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_05727e9ade8b3b6ad320af9e2609e1dd;
    codeobj_0f5936b6d9186a8d7dd5e4958b9f915a = MAKE_CODEOBJ( module_filename_obj, const_str_digest_a72d819fa9b462ca35152a67acf9f95b, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_bf16283824e926836c279e3b218e2c3b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_HTTPAdapter, 84, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE );
    codeobj_6662f22ce1fdc46fbc308e5eb37dfcdf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_SOCKSProxyManager, 46, const_tuple_str_plain_args_str_plain_kwargs_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_222c56e2fc0a2c527367c690386a7dab = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getstate__, 131, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_80dc5fe54155e7c593da847c99105e7e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 58, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fa8c37c88554ceebc9c3d78867c25e51 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 113, const_tuple_44dc5ab755b5655bde0dfbf028f901fd_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_a9872ebb0235d54b7bf180ceb9007c5c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___setstate__, 134, const_tuple_13e73ffbff2b6baddf93809493dc996c_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e807b21ea83f4dec8f5eafa75a621cfd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_add_headers, 358, const_tuple_str_plain_self_str_plain_request_str_plain_kwargs_tuple, 2, CO_VARKEYWORDS | CO_NOFREE );
    codeobj_56ee817bbd0817003c33718cffef5ea2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_build_response, 255, const_tuple_4ab3f0848ac5699bff78a10e2078200f_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cfdc13c9969d2a6ff3031ef7df276681 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cert_verify, 203, const_tuple_d47a9a4058e7796878c57a32396b5ad9_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_5123ea2cdb7d0abd0e94f1bca68da0c3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 79, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4a69072ef5b69b159eb8422c322b4d72 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 319, const_tuple_str_plain_self_str_plain_proxy_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_fe322788ddf6dabc5662a500e3d9c52c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_connection, 292, const_tuple_967d0e1bf472103ccf01327c6843c57a_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_0e3ece2c60f7b51e550ca34d75278be9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_init_poolmanager, 146, const_tuple_c5e34394161f1e5ba63047dd07ef05cf_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_4713c83be7b14451adcb0e8c051d51b4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_proxy_headers, 372, const_tuple_496d188b13e797bd570163cd8ba5ef8d_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_e60d2f119d46585f929b0027e234b08e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_proxy_manager_for, 166, const_tuple_265647a910194e5532c1422bcdee2d5d_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE );
    codeobj_edd4fdcf3b237a4c62726c8a1fda43cf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_request_url, 329, const_tuple_8b8c88817a00aca8d34df83b961c014e_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_36419fd9c845eb4048b911532a6e222d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_send, 61, const_tuple_bd356f6cf3258844d460b87e1636571d_tuple, 7, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_cf4370e57fceaf0438a9f1bafe8a8bb6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_send, 394, const_tuple_600e4d6ebfcc19edee23c64328c1fbac_tuple, 7, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_8_complex_call_helper_keywords_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_7_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_10_cert_verify(  );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_11_build_response(  );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_12_get_connection( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_13_close(  );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_14_request_url(  );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_15_add_headers(  );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_16_proxy_headers(  );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_17_send( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_1_SOCKSProxyManager(  );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_2___init__(  );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_3_send( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_4_close(  );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_5___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_6___getstate__(  );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_7___setstate__(  );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_8_init_poolmanager( PyObject *defaults );


static PyObject *MAKE_FUNCTION_requests$adapters$$$function_9_proxy_manager_for(  );


// The module function definitions.
static PyObject *impl_requests$adapters$$$function_1_SOCKSProxyManager( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *par_kwargs = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_6662f22ce1fdc46fbc308e5eb37dfcdf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6662f22ce1fdc46fbc308e5eb37dfcdf = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_6662f22ce1fdc46fbc308e5eb37dfcdf, codeobj_6662f22ce1fdc46fbc308e5eb37dfcdf, module_requests$adapters, sizeof(void *)+sizeof(void *) );
    frame_6662f22ce1fdc46fbc308e5eb37dfcdf = cache_frame_6662f22ce1fdc46fbc308e5eb37dfcdf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_6662f22ce1fdc46fbc308e5eb37dfcdf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_6662f22ce1fdc46fbc308e5eb37dfcdf ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_InvalidSchema );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InvalidSchema );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "InvalidSchema" );
            exception_tb = NULL;

            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_6662f22ce1fdc46fbc308e5eb37dfcdf->m_frame.f_lineno = 47;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_381fd3348aa52a96bff9cd9e1ea4f162_tuple, 0 ) );

        if ( tmp_raise_type_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 47;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6662f22ce1fdc46fbc308e5eb37dfcdf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_6662f22ce1fdc46fbc308e5eb37dfcdf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_6662f22ce1fdc46fbc308e5eb37dfcdf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_6662f22ce1fdc46fbc308e5eb37dfcdf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_6662f22ce1fdc46fbc308e5eb37dfcdf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_6662f22ce1fdc46fbc308e5eb37dfcdf,
        type_description_1,
        par_args,
        par_kwargs
    );


    // Release cached frame.
    if ( frame_6662f22ce1fdc46fbc308e5eb37dfcdf == cache_frame_6662f22ce1fdc46fbc308e5eb37dfcdf )
    {
        Py_DECREF( frame_6662f22ce1fdc46fbc308e5eb37dfcdf );
    }
    cache_frame_6662f22ce1fdc46fbc308e5eb37dfcdf = NULL;

    assertFrameObject( frame_6662f22ce1fdc46fbc308e5eb37dfcdf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_1_SOCKSProxyManager );
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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

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
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_1_SOCKSProxyManager );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_requests$adapters$$$function_2___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_80dc5fe54155e7c593da847c99105e7e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_80dc5fe54155e7c593da847c99105e7e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_80dc5fe54155e7c593da847c99105e7e, codeobj_80dc5fe54155e7c593da847c99105e7e, module_requests$adapters, sizeof(void *) );
    frame_80dc5fe54155e7c593da847c99105e7e = cache_frame_80dc5fe54155e7c593da847c99105e7e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_80dc5fe54155e7c593da847c99105e7e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_80dc5fe54155e7c593da847c99105e7e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_BaseAdapter );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseAdapter );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "BaseAdapter" );
            exception_tb = NULL;

            exception_lineno = 59;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_80dc5fe54155e7c593da847c99105e7e->m_frame.f_lineno = 59;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain___init__ );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 59;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_80dc5fe54155e7c593da847c99105e7e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_80dc5fe54155e7c593da847c99105e7e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_80dc5fe54155e7c593da847c99105e7e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_80dc5fe54155e7c593da847c99105e7e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_80dc5fe54155e7c593da847c99105e7e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_80dc5fe54155e7c593da847c99105e7e,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_80dc5fe54155e7c593da847c99105e7e == cache_frame_80dc5fe54155e7c593da847c99105e7e )
    {
        Py_DECREF( frame_80dc5fe54155e7c593da847c99105e7e );
    }
    cache_frame_80dc5fe54155e7c593da847c99105e7e = NULL;

    assertFrameObject( frame_80dc5fe54155e7c593da847c99105e7e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_2___init__ );
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
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_2___init__ );
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


static PyObject *impl_requests$adapters$$$function_3_send( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_request = python_pars[ 1 ];
    PyObject *par_stream = python_pars[ 2 ];
    PyObject *par_timeout = python_pars[ 3 ];
    PyObject *par_verify = python_pars[ 4 ];
    PyObject *par_cert = python_pars[ 5 ];
    PyObject *par_proxies = python_pars[ 6 ];
    struct Nuitka_FrameObject *frame_36419fd9c845eb4048b911532a6e222d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_36419fd9c845eb4048b911532a6e222d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_36419fd9c845eb4048b911532a6e222d, codeobj_36419fd9c845eb4048b911532a6e222d, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_36419fd9c845eb4048b911532a6e222d = cache_frame_36419fd9c845eb4048b911532a6e222d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_36419fd9c845eb4048b911532a6e222d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_36419fd9c845eb4048b911532a6e222d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF( tmp_raise_type_1 );
        exception_lineno = 77;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_36419fd9c845eb4048b911532a6e222d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_36419fd9c845eb4048b911532a6e222d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_36419fd9c845eb4048b911532a6e222d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_36419fd9c845eb4048b911532a6e222d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_36419fd9c845eb4048b911532a6e222d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_36419fd9c845eb4048b911532a6e222d,
        type_description_1,
        par_self,
        par_request,
        par_stream,
        par_timeout,
        par_verify,
        par_cert,
        par_proxies
    );


    // Release cached frame.
    if ( frame_36419fd9c845eb4048b911532a6e222d == cache_frame_36419fd9c845eb4048b911532a6e222d )
    {
        Py_DECREF( frame_36419fd9c845eb4048b911532a6e222d );
    }
    cache_frame_36419fd9c845eb4048b911532a6e222d = NULL;

    assertFrameObject( frame_36419fd9c845eb4048b911532a6e222d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_3_send );
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

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    CHECK_OBJECT( (PyObject *)par_verify );
    Py_DECREF( par_verify );
    par_verify = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)par_proxies );
    Py_DECREF( par_proxies );
    par_proxies = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_3_send );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_requests$adapters$$$function_4_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_5123ea2cdb7d0abd0e94f1bca68da0c3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_5123ea2cdb7d0abd0e94f1bca68da0c3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_5123ea2cdb7d0abd0e94f1bca68da0c3, codeobj_5123ea2cdb7d0abd0e94f1bca68da0c3, module_requests$adapters, sizeof(void *) );
    frame_5123ea2cdb7d0abd0e94f1bca68da0c3 = cache_frame_5123ea2cdb7d0abd0e94f1bca68da0c3;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_5123ea2cdb7d0abd0e94f1bca68da0c3 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_5123ea2cdb7d0abd0e94f1bca68da0c3 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_NotImplementedError;
        exception_type = tmp_raise_type_1;
        Py_INCREF( tmp_raise_type_1 );
        exception_lineno = 81;
        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5123ea2cdb7d0abd0e94f1bca68da0c3 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_5123ea2cdb7d0abd0e94f1bca68da0c3 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_5123ea2cdb7d0abd0e94f1bca68da0c3, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_5123ea2cdb7d0abd0e94f1bca68da0c3->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_5123ea2cdb7d0abd0e94f1bca68da0c3, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_5123ea2cdb7d0abd0e94f1bca68da0c3,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_5123ea2cdb7d0abd0e94f1bca68da0c3 == cache_frame_5123ea2cdb7d0abd0e94f1bca68da0c3 )
    {
        Py_DECREF( frame_5123ea2cdb7d0abd0e94f1bca68da0c3 );
    }
    cache_frame_5123ea2cdb7d0abd0e94f1bca68da0c3 = NULL;

    assertFrameObject( frame_5123ea2cdb7d0abd0e94f1bca68da0c3 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_4_close );
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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_4_close );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_requests$adapters$$$function_5___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_pool_connections = python_pars[ 1 ];
    PyObject *par_pool_maxsize = python_pars[ 2 ];
    PyObject *par_max_retries = python_pars[ 3 ];
    PyObject *par_pool_block = python_pars[ 4 ];
    struct Nuitka_FrameObject *frame_fa8c37c88554ceebc9c3d78867c25e51;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_fa8c37c88554ceebc9c3d78867c25e51 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fa8c37c88554ceebc9c3d78867c25e51, codeobj_fa8c37c88554ceebc9c3d78867c25e51, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fa8c37c88554ceebc9c3d78867c25e51 = cache_frame_fa8c37c88554ceebc9c3d78867c25e51;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fa8c37c88554ceebc9c3d78867c25e51 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fa8c37c88554ceebc9c3d78867c25e51 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_max_retries );
        tmp_compexpr_left_1 = par_max_retries;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_RETRIES );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_RETRIES );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "DEFAULT_RETRIES" );
            exception_tb = NULL;

            exception_lineno = 116;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 116;
            type_description_1 = "ooooo";
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
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_assattr_target_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_Retry );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Retry );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "Retry" );
                exception_tb = NULL;

                exception_lineno = 117;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_2;
            tmp_args_name_1 = const_tuple_int_0_tuple;
            tmp_kw_name_1 = PyDict_Copy( const_dict_96e45a30326f2854cb930a7737e3b26d );
            frame_fa8c37c88554ceebc9c3d78867c25e51->m_frame.f_lineno = 117;
            tmp_assattr_name_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assattr_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 117;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_max_retries, tmp_assattr_name_1 );
            Py_DECREF( tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 117;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_assattr_target_2;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_Retry );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Retry );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "Retry" );
                exception_tb = NULL;

                exception_lineno = 119;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_3;
            CHECK_OBJECT( par_max_retries );
            tmp_args_element_name_1 = par_max_retries;
            frame_fa8c37c88554ceebc9c3d78867c25e51->m_frame.f_lineno = 119;
            {
                PyObject *call_args[] = { tmp_args_element_name_1 };
                tmp_assattr_name_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_from_int, call_args );
            }

            if ( tmp_assattr_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 119;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_max_retries, tmp_assattr_name_2 );
            Py_DECREF( tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 119;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = PyDict_New();
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_config, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = PyDict_New();
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_proxy_manager, tmp_assattr_name_4 );
        Py_DECREF( tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 121;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_type_name_1;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_object_name_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_HTTPAdapter );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPAdapter );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "HTTPAdapter" );
            exception_tb = NULL;

            exception_lineno = 123;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_type_name_1 = tmp_mvar_value_4;
        CHECK_OBJECT( par_self );
        tmp_object_name_1 = par_self;
        tmp_called_instance_2 = BUILTIN_SUPER( tmp_type_name_1, tmp_object_name_1 );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_fa8c37c88554ceebc9c3d78867c25e51->m_frame.f_lineno = 123;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain___init__ );
        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT( par_pool_connections );
        tmp_assattr_name_5 = par_pool_connections;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain__pool_connections, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 125;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT( par_pool_maxsize );
        tmp_assattr_name_6 = par_pool_maxsize;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain__pool_maxsize, tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 126;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT( par_pool_block );
        tmp_assattr_name_7 = par_pool_block;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain__pool_block, tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 127;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_init_poolmanager );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_pool_connections );
        tmp_tuple_element_1 = par_pool_connections;
        tmp_args_name_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_pool_maxsize );
        tmp_tuple_element_1 = par_pool_maxsize;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_pool_block );
        tmp_dict_value_1 = par_pool_block;
        tmp_dict_key_1 = const_str_plain_block;
        tmp_kw_name_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_fa8c37c88554ceebc9c3d78867c25e51->m_frame.f_lineno = 129;
        tmp_call_result_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 129;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fa8c37c88554ceebc9c3d78867c25e51 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fa8c37c88554ceebc9c3d78867c25e51 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fa8c37c88554ceebc9c3d78867c25e51, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fa8c37c88554ceebc9c3d78867c25e51->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fa8c37c88554ceebc9c3d78867c25e51, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fa8c37c88554ceebc9c3d78867c25e51,
        type_description_1,
        par_self,
        par_pool_connections,
        par_pool_maxsize,
        par_max_retries,
        par_pool_block
    );


    // Release cached frame.
    if ( frame_fa8c37c88554ceebc9c3d78867c25e51 == cache_frame_fa8c37c88554ceebc9c3d78867c25e51 )
    {
        Py_DECREF( frame_fa8c37c88554ceebc9c3d78867c25e51 );
    }
    cache_frame_fa8c37c88554ceebc9c3d78867c25e51 = NULL;

    assertFrameObject( frame_fa8c37c88554ceebc9c3d78867c25e51 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_5___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_pool_connections );
    Py_DECREF( par_pool_connections );
    par_pool_connections = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_max_retries );
    Py_DECREF( par_max_retries );
    par_max_retries = NULL;

    CHECK_OBJECT( (PyObject *)par_pool_maxsize );
    Py_DECREF( par_pool_maxsize );
    par_pool_maxsize = NULL;

    CHECK_OBJECT( (PyObject *)par_pool_block );
    Py_DECREF( par_pool_block );
    par_pool_block = NULL;

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

    CHECK_OBJECT( (PyObject *)par_pool_connections );
    Py_DECREF( par_pool_connections );
    par_pool_connections = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_max_retries );
    Py_DECREF( par_max_retries );
    par_max_retries = NULL;

    CHECK_OBJECT( (PyObject *)par_pool_maxsize );
    Py_DECREF( par_pool_maxsize );
    par_pool_maxsize = NULL;

    CHECK_OBJECT( (PyObject *)par_pool_block );
    Py_DECREF( par_pool_block );
    par_pool_block = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_5___init__ );
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


static PyObject *impl_requests$adapters$$$function_6___getstate__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *outline_0_var_attr = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_222c56e2fc0a2c527367c690386a7dab;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_222c56e2fc0a2c527367c690386a7dab = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_222c56e2fc0a2c527367c690386a7dab, codeobj_222c56e2fc0a2c527367c690386a7dab, module_requests$adapters, sizeof(void *) );
    frame_222c56e2fc0a2c527367c690386a7dab = cache_frame_222c56e2fc0a2c527367c690386a7dab;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_222c56e2fc0a2c527367c690386a7dab );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_222c56e2fc0a2c527367c690386a7dab ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___attrs__ );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        assert( tmp_dictcontraction_1__$0 == NULL );
        tmp_dictcontraction_1__$0 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = PyDict_New();
        assert( tmp_dictcontraction_1__contraction == NULL );
        tmp_dictcontraction_1__contraction = tmp_assign_source_2;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_dictcontraction_1__$0 );
        tmp_next_source_1 = tmp_dictcontraction_1__$0;
        tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "o";
                exception_lineno = 132;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_dictcontraction_1__iter_value_0;
            tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_dictcontraction_1__iter_value_0 );
        tmp_assign_source_4 = tmp_dictcontraction_1__iter_value_0;
        {
            PyObject *old = outline_0_var_attr;
            outline_0_var_attr = tmp_assign_source_4;
            Py_INCREF( outline_0_var_attr );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT( par_self );
        tmp_getattr_target_1 = par_self;
        CHECK_OBJECT( outline_0_var_attr );
        tmp_getattr_attr_1 = outline_0_var_attr;
        tmp_getattr_default_1 = Py_None;
        tmp_dictset_value = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
        if ( tmp_dictset_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
        CHECK_OBJECT( tmp_dictcontraction_1__contraction );
        tmp_dictset_dict = tmp_dictcontraction_1__contraction;
        CHECK_OBJECT( outline_0_var_attr );
        tmp_dictset_key = outline_0_var_attr;
        tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;
            type_description_1 = "o";
            goto try_except_handler_3;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        type_description_1 = "o";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT( tmp_dictcontraction_1__contraction );
    tmp_return_value = tmp_dictcontraction_1__contraction;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_6___getstate__ );
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)tmp_dictcontraction_1__$0 );
    Py_DECREF( tmp_dictcontraction_1__$0 );
    tmp_dictcontraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_dictcontraction_1__contraction );
    Py_DECREF( tmp_dictcontraction_1__contraction );
    tmp_dictcontraction_1__contraction = NULL;

    Py_XDECREF( tmp_dictcontraction_1__iter_value_0 );
    tmp_dictcontraction_1__iter_value_0 = NULL;

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

    CHECK_OBJECT( (PyObject *)tmp_dictcontraction_1__$0 );
    Py_DECREF( tmp_dictcontraction_1__$0 );
    tmp_dictcontraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_dictcontraction_1__contraction );
    Py_DECREF( tmp_dictcontraction_1__contraction );
    tmp_dictcontraction_1__contraction = NULL;

    Py_XDECREF( tmp_dictcontraction_1__iter_value_0 );
    tmp_dictcontraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_6___getstate__ );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    Py_XDECREF( outline_0_var_attr );
    outline_0_var_attr = NULL;

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

    Py_XDECREF( outline_0_var_attr );
    outline_0_var_attr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto outline_exception_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_6___getstate__ );
    return NULL;
    outline_exception_1:;
    exception_lineno = 132;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_222c56e2fc0a2c527367c690386a7dab );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_222c56e2fc0a2c527367c690386a7dab );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_222c56e2fc0a2c527367c690386a7dab );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_222c56e2fc0a2c527367c690386a7dab, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_222c56e2fc0a2c527367c690386a7dab->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_222c56e2fc0a2c527367c690386a7dab, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_222c56e2fc0a2c527367c690386a7dab,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_222c56e2fc0a2c527367c690386a7dab == cache_frame_222c56e2fc0a2c527367c690386a7dab )
    {
        Py_DECREF( frame_222c56e2fc0a2c527367c690386a7dab );
    }
    cache_frame_222c56e2fc0a2c527367c690386a7dab = NULL;

    assertFrameObject( frame_222c56e2fc0a2c527367c690386a7dab );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_6___getstate__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_6___getstate__ );
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


static PyObject *impl_requests$adapters$$$function_7___setstate__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_state = python_pars[ 1 ];
    PyObject *var_value = NULL;
    PyObject *var_attr = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_a9872ebb0235d54b7bf180ceb9007c5c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
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
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_a9872ebb0235d54b7bf180ceb9007c5c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a9872ebb0235d54b7bf180ceb9007c5c, codeobj_a9872ebb0235d54b7bf180ceb9007c5c, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a9872ebb0235d54b7bf180ceb9007c5c = cache_frame_a9872ebb0235d54b7bf180ceb9007c5c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a9872ebb0235d54b7bf180ceb9007c5c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a9872ebb0235d54b7bf180ceb9007c5c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_name_1 = PyDict_New();
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_proxy_manager, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 137;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_name_2 = PyDict_New();
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_config, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 138;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_state );
        tmp_called_instance_1 = par_state;
        frame_a9872ebb0235d54b7bf180ceb9007c5c->m_frame.f_lineno = 140;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooo";
                exception_lineno = 140;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 140;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
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


            type_description_1 = "oooo";
            exception_lineno = 140;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
            Py_XDECREF( old );
        }

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


            type_description_1 = "oooo";
            exception_lineno = 140;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
            Py_XDECREF( old );
        }

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

                    type_description_1 = "oooo";
                    exception_lineno = 140;
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

            type_description_1 = "oooo";
            exception_lineno = 140;
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
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_attr;
            var_attr = tmp_assign_source_6;
            Py_INCREF( var_attr );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_value;
            var_value = tmp_assign_source_7;
            Py_INCREF( var_value );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_setattr_target_1;
        PyObject *tmp_setattr_attr_1;
        PyObject *tmp_setattr_value_1;
        PyObject *tmp_capi_result_1;
        CHECK_OBJECT( par_self );
        tmp_setattr_target_1 = par_self;
        CHECK_OBJECT( var_attr );
        tmp_setattr_attr_1 = var_attr;
        CHECK_OBJECT( var_value );
        tmp_setattr_value_1 = var_value;
        tmp_capi_result_1 = BUILTIN_SETATTR( tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1 );
        if ( tmp_capi_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 141;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        type_description_1 = "oooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_init_poolmanager );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__pool_connections );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 143;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_name_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__pool_maxsize );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 143;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__pool_block );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_name_1 );

            exception_lineno = 144;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = const_str_plain_block;
        tmp_kw_name_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        frame_a9872ebb0235d54b7bf180ceb9007c5c->m_frame.f_lineno = 143;
        tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a9872ebb0235d54b7bf180ceb9007c5c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a9872ebb0235d54b7bf180ceb9007c5c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a9872ebb0235d54b7bf180ceb9007c5c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a9872ebb0235d54b7bf180ceb9007c5c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a9872ebb0235d54b7bf180ceb9007c5c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a9872ebb0235d54b7bf180ceb9007c5c,
        type_description_1,
        par_self,
        par_state,
        var_value,
        var_attr
    );


    // Release cached frame.
    if ( frame_a9872ebb0235d54b7bf180ceb9007c5c == cache_frame_a9872ebb0235d54b7bf180ceb9007c5c )
    {
        Py_DECREF( frame_a9872ebb0235d54b7bf180ceb9007c5c );
    }
    cache_frame_a9872ebb0235d54b7bf180ceb9007c5c = NULL;

    assertFrameObject( frame_a9872ebb0235d54b7bf180ceb9007c5c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_7___setstate__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_state );
    Py_DECREF( par_state );
    par_state = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_attr );
    var_attr = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_state );
    Py_DECREF( par_state );
    par_state = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_attr );
    var_attr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_7___setstate__ );
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


static PyObject *impl_requests$adapters$$$function_8_init_poolmanager( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_connections = python_pars[ 1 ];
    PyObject *par_maxsize = python_pars[ 2 ];
    PyObject *par_block = python_pars[ 3 ];
    PyObject *par_pool_kwargs = python_pars[ 4 ];
    struct Nuitka_FrameObject *frame_0e3ece2c60f7b51e550ca34d75278be9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_0e3ece2c60f7b51e550ca34d75278be9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_0e3ece2c60f7b51e550ca34d75278be9, codeobj_0e3ece2c60f7b51e550ca34d75278be9, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_0e3ece2c60f7b51e550ca34d75278be9 = cache_frame_0e3ece2c60f7b51e550ca34d75278be9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_0e3ece2c60f7b51e550ca34d75278be9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_0e3ece2c60f7b51e550ca34d75278be9 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_connections );
        tmp_assattr_name_1 = par_connections;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__pool_connections, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 159;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_maxsize );
        tmp_assattr_name_2 = par_maxsize;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__pool_maxsize, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 160;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_block );
        tmp_assattr_name_3 = par_block;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__pool_block, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_assattr_target_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_PoolManager );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PoolManager );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PoolManager" );
            exception_tb = NULL;

            exception_lineno = 163;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_connections );
        tmp_dict_value_1 = par_connections;
        tmp_dict_key_1 = const_str_plain_num_pools;
        tmp_dircall_arg2_1 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_maxsize );
        tmp_dict_value_2 = par_maxsize;
        tmp_dict_key_2 = const_str_plain_maxsize;
        tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_block );
        tmp_dict_value_3 = par_block;
        tmp_dict_key_3 = const_str_plain_block;
        tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        tmp_dict_value_4 = Py_True;
        tmp_dict_key_4 = const_str_plain_strict;
        tmp_res = PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_pool_kwargs );
        tmp_dircall_arg3_1 = par_pool_kwargs;
        Py_INCREF( tmp_dircall_arg1_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assattr_name_4 = impl___internal__$$$function_8_complex_call_helper_keywords_star_dict( dir_call_args );
        }
        if ( tmp_assattr_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_poolmanager, tmp_assattr_name_4 );
        Py_DECREF( tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 163;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0e3ece2c60f7b51e550ca34d75278be9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_0e3ece2c60f7b51e550ca34d75278be9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0e3ece2c60f7b51e550ca34d75278be9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0e3ece2c60f7b51e550ca34d75278be9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0e3ece2c60f7b51e550ca34d75278be9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_0e3ece2c60f7b51e550ca34d75278be9,
        type_description_1,
        par_self,
        par_connections,
        par_maxsize,
        par_block,
        par_pool_kwargs
    );


    // Release cached frame.
    if ( frame_0e3ece2c60f7b51e550ca34d75278be9 == cache_frame_0e3ece2c60f7b51e550ca34d75278be9 )
    {
        Py_DECREF( frame_0e3ece2c60f7b51e550ca34d75278be9 );
    }
    cache_frame_0e3ece2c60f7b51e550ca34d75278be9 = NULL;

    assertFrameObject( frame_0e3ece2c60f7b51e550ca34d75278be9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_8_init_poolmanager );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_connections );
    Py_DECREF( par_connections );
    par_connections = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_maxsize );
    Py_DECREF( par_maxsize );
    par_maxsize = NULL;

    CHECK_OBJECT( (PyObject *)par_block );
    Py_DECREF( par_block );
    par_block = NULL;

    CHECK_OBJECT( (PyObject *)par_pool_kwargs );
    Py_DECREF( par_pool_kwargs );
    par_pool_kwargs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_connections );
    Py_DECREF( par_connections );
    par_connections = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_maxsize );
    Py_DECREF( par_maxsize );
    par_maxsize = NULL;

    CHECK_OBJECT( (PyObject *)par_block );
    Py_DECREF( par_block );
    par_block = NULL;

    CHECK_OBJECT( (PyObject *)par_pool_kwargs );
    Py_DECREF( par_pool_kwargs );
    par_pool_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_8_init_poolmanager );
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


static PyObject *impl_requests$adapters$$$function_9_proxy_manager_for( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_proxy = python_pars[ 1 ];
    PyObject *par_proxy_kwargs = python_pars[ 2 ];
    PyObject *var_username = NULL;
    PyObject *var_manager = NULL;
    PyObject *var_proxy_headers = NULL;
    PyObject *var_password = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_assign_unpack_2__assign_source = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_e60d2f119d46585f929b0027e234b08e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e60d2f119d46585f929b0027e234b08e = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e60d2f119d46585f929b0027e234b08e, codeobj_e60d2f119d46585f929b0027e234b08e, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_e60d2f119d46585f929b0027e234b08e = cache_frame_e60d2f119d46585f929b0027e234b08e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e60d2f119d46585f929b0027e234b08e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e60d2f119d46585f929b0027e234b08e ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_proxy );
        tmp_compexpr_left_1 = par_proxy;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_proxy_manager );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_1, tmp_compexpr_left_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 178;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_proxy_manager );
            if ( tmp_subscribed_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 179;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_proxy );
            tmp_subscript_name_1 = par_proxy;
            tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            Py_DECREF( tmp_subscribed_name_1 );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 179;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_manager == NULL );
            var_manager = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_call_result_1;
            int tmp_truth_name_1;
            CHECK_OBJECT( par_proxy );
            tmp_called_instance_2 = par_proxy;
            frame_e60d2f119d46585f929b0027e234b08e->m_frame.f_lineno = 180;
            tmp_called_instance_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_lower );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 180;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_e60d2f119d46585f929b0027e234b08e->m_frame.f_lineno = 180;
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_socks_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 180;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_call_result_1 );

                exception_lineno = 180;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_call_result_1 );
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            // Tried code:
            {
                PyObject *tmp_assign_source_2;
                PyObject *tmp_iter_arg_1;
                PyObject *tmp_called_name_1;
                PyObject *tmp_mvar_value_1;
                PyObject *tmp_args_element_name_1;
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_get_auth_from_url );

                if (unlikely( tmp_mvar_value_1 == NULL ))
                {
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_auth_from_url );
                }

                if ( tmp_mvar_value_1 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "get_auth_from_url" );
                    exception_tb = NULL;

                    exception_lineno = 181;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_2;
                }

                tmp_called_name_1 = tmp_mvar_value_1;
                CHECK_OBJECT( par_proxy );
                tmp_args_element_name_1 = par_proxy;
                frame_e60d2f119d46585f929b0027e234b08e->m_frame.f_lineno = 181;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                }

                if ( tmp_iter_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 181;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_2;
                }
                tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
                Py_DECREF( tmp_iter_arg_1 );
                if ( tmp_assign_source_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 181;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_2;
                }
                assert( tmp_tuple_unpack_1__source_iter == NULL );
                tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_3;
                PyObject *tmp_unpack_1;
                CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
                tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
                tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0 );
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


                    type_description_1 = "ooooooo";
                    exception_lineno = 181;
                    goto try_except_handler_3;
                }
                assert( tmp_tuple_unpack_1__element_1 == NULL );
                tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
            }
            {
                PyObject *tmp_assign_source_4;
                PyObject *tmp_unpack_2;
                CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
                tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
                tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


                    type_description_1 = "ooooooo";
                    exception_lineno = 181;
                    goto try_except_handler_3;
                }
                assert( tmp_tuple_unpack_1__element_2 == NULL );
                tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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

                            type_description_1 = "ooooooo";
                            exception_lineno = 181;
                            goto try_except_handler_3;
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

                    type_description_1 = "ooooooo";
                    exception_lineno = 181;
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

            Py_XDECREF( tmp_tuple_unpack_1__element_2 );
            tmp_tuple_unpack_1__element_2 = NULL;

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
                PyObject *tmp_assign_source_5;
                CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
                tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
                assert( var_username == NULL );
                Py_INCREF( tmp_assign_source_5 );
                var_username = tmp_assign_source_5;
            }
            Py_XDECREF( tmp_tuple_unpack_1__element_1 );
            tmp_tuple_unpack_1__element_1 = NULL;

            {
                PyObject *tmp_assign_source_6;
                CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
                tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
                assert( var_password == NULL );
                Py_INCREF( tmp_assign_source_6 );
                var_password = tmp_assign_source_6;
            }
            Py_XDECREF( tmp_tuple_unpack_1__element_2 );
            tmp_tuple_unpack_1__element_2 = NULL;

            // Tried code:
            {
                PyObject *tmp_assign_source_7;
                PyObject *tmp_dircall_arg1_1;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_dircall_arg2_1;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_dircall_arg3_1;
                PyObject *tmp_dict_key_1;
                PyObject *tmp_dict_value_1;
                PyObject *tmp_dict_key_2;
                PyObject *tmp_dict_value_2;
                PyObject *tmp_dict_key_3;
                PyObject *tmp_dict_value_3;
                PyObject *tmp_source_name_3;
                PyObject *tmp_dict_key_4;
                PyObject *tmp_dict_value_4;
                PyObject *tmp_source_name_4;
                PyObject *tmp_dict_key_5;
                PyObject *tmp_dict_value_5;
                PyObject *tmp_source_name_5;
                PyObject *tmp_dircall_arg4_1;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_SOCKSProxyManager );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SOCKSProxyManager );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "SOCKSProxyManager" );
                    exception_tb = NULL;

                    exception_lineno = 182;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }

                tmp_dircall_arg1_1 = tmp_mvar_value_2;
                CHECK_OBJECT( par_proxy );
                tmp_tuple_element_1 = par_proxy;
                tmp_dircall_arg2_1 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_1 );
                PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
                CHECK_OBJECT( var_username );
                tmp_dict_value_1 = var_username;
                tmp_dict_key_1 = const_str_plain_username;
                tmp_dircall_arg3_1 = _PyDict_NewPresized( 5 );
                tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
                assert( !(tmp_res != 0) );
                CHECK_OBJECT( var_password );
                tmp_dict_value_2 = var_password;
                tmp_dict_key_2 = const_str_plain_password;
                tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
                assert( !(tmp_res != 0) );
                CHECK_OBJECT( par_self );
                tmp_source_name_3 = par_self;
                tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__pool_connections );
                if ( tmp_dict_value_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_dircall_arg2_1 );
                    Py_DECREF( tmp_dircall_arg3_1 );

                    exception_lineno = 186;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
                tmp_dict_key_3 = const_str_plain_num_pools;
                tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_3, tmp_dict_value_3 );
                Py_DECREF( tmp_dict_value_3 );
                assert( !(tmp_res != 0) );
                CHECK_OBJECT( par_self );
                tmp_source_name_4 = par_self;
                tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__pool_maxsize );
                if ( tmp_dict_value_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_dircall_arg2_1 );
                    Py_DECREF( tmp_dircall_arg3_1 );

                    exception_lineno = 187;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
                tmp_dict_key_4 = const_str_plain_maxsize;
                tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_4, tmp_dict_value_4 );
                Py_DECREF( tmp_dict_value_4 );
                assert( !(tmp_res != 0) );
                CHECK_OBJECT( par_self );
                tmp_source_name_5 = par_self;
                tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__pool_block );
                if ( tmp_dict_value_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_dircall_arg2_1 );
                    Py_DECREF( tmp_dircall_arg3_1 );

                    exception_lineno = 188;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
                tmp_dict_key_5 = const_str_plain_block;
                tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_5, tmp_dict_value_5 );
                Py_DECREF( tmp_dict_value_5 );
                assert( !(tmp_res != 0) );
                CHECK_OBJECT( par_proxy_kwargs );
                tmp_dircall_arg4_1 = par_proxy_kwargs;
                Py_INCREF( tmp_dircall_arg1_1 );
                Py_INCREF( tmp_dircall_arg4_1 );

                {
                    PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
                    tmp_assign_source_7 = impl___internal__$$$function_7_complex_call_helper_pos_keywords_star_dict( dir_call_args );
                }
                if ( tmp_assign_source_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 182;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
                assert( tmp_assign_unpack_1__assign_source == NULL );
                tmp_assign_unpack_1__assign_source = tmp_assign_source_7;
            }
            {
                PyObject *tmp_assign_source_8;
                CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
                tmp_assign_source_8 = tmp_assign_unpack_1__assign_source;
                assert( var_manager == NULL );
                Py_INCREF( tmp_assign_source_8 );
                var_manager = tmp_assign_source_8;
            }
            {
                PyObject *tmp_ass_subvalue_1;
                PyObject *tmp_ass_subscribed_1;
                PyObject *tmp_source_name_6;
                PyObject *tmp_ass_subscript_1;
                CHECK_OBJECT( tmp_assign_unpack_1__assign_source );
                tmp_ass_subvalue_1 = tmp_assign_unpack_1__assign_source;
                CHECK_OBJECT( par_self );
                tmp_source_name_6 = par_self;
                tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_proxy_manager );
                if ( tmp_ass_subscribed_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 182;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
                CHECK_OBJECT( par_proxy );
                tmp_ass_subscript_1 = par_proxy;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
                Py_DECREF( tmp_ass_subscribed_1 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 182;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_4;
                }
            }
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

            Py_XDECREF( tmp_assign_unpack_1__assign_source );
            tmp_assign_unpack_1__assign_source = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_3;
            exception_value = exception_keeper_value_3;
            exception_tb = exception_keeper_tb_3;
            exception_lineno = exception_keeper_lineno_3;

            goto frame_exception_exit_1;
            // End of try:
            try_end_3:;
            CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
            Py_DECREF( tmp_assign_unpack_1__assign_source );
            tmp_assign_unpack_1__assign_source = NULL;

            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_assign_source_9;
                PyObject *tmp_called_instance_3;
                PyObject *tmp_args_element_name_2;
                CHECK_OBJECT( par_self );
                tmp_called_instance_3 = par_self;
                CHECK_OBJECT( par_proxy );
                tmp_args_element_name_2 = par_proxy;
                frame_e60d2f119d46585f929b0027e234b08e->m_frame.f_lineno = 192;
                {
                    PyObject *call_args[] = { tmp_args_element_name_2 };
                    tmp_assign_source_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_proxy_headers, call_args );
                }

                if ( tmp_assign_source_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 192;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_proxy_headers == NULL );
                var_proxy_headers = tmp_assign_source_9;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_10;
                PyObject *tmp_dircall_arg1_2;
                PyObject *tmp_mvar_value_3;
                PyObject *tmp_dircall_arg2_2;
                PyObject *tmp_tuple_element_2;
                PyObject *tmp_dircall_arg3_2;
                PyObject *tmp_dict_key_6;
                PyObject *tmp_dict_value_6;
                PyObject *tmp_dict_key_7;
                PyObject *tmp_dict_value_7;
                PyObject *tmp_source_name_7;
                PyObject *tmp_dict_key_8;
                PyObject *tmp_dict_value_8;
                PyObject *tmp_source_name_8;
                PyObject *tmp_dict_key_9;
                PyObject *tmp_dict_value_9;
                PyObject *tmp_source_name_9;
                PyObject *tmp_dircall_arg4_2;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_proxy_from_url );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_proxy_from_url );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "proxy_from_url" );
                    exception_tb = NULL;

                    exception_lineno = 193;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }

                tmp_dircall_arg1_2 = tmp_mvar_value_3;
                CHECK_OBJECT( par_proxy );
                tmp_tuple_element_2 = par_proxy;
                tmp_dircall_arg2_2 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_dircall_arg2_2, 0, tmp_tuple_element_2 );
                CHECK_OBJECT( var_proxy_headers );
                tmp_dict_value_6 = var_proxy_headers;
                tmp_dict_key_6 = const_str_plain_proxy_headers;
                tmp_dircall_arg3_2 = _PyDict_NewPresized( 4 );
                tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_6, tmp_dict_value_6 );
                assert( !(tmp_res != 0) );
                CHECK_OBJECT( par_self );
                tmp_source_name_7 = par_self;
                tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__pool_connections );
                if ( tmp_dict_value_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_dircall_arg2_2 );
                    Py_DECREF( tmp_dircall_arg3_2 );

                    exception_lineno = 196;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }
                tmp_dict_key_7 = const_str_plain_num_pools;
                tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_7, tmp_dict_value_7 );
                Py_DECREF( tmp_dict_value_7 );
                assert( !(tmp_res != 0) );
                CHECK_OBJECT( par_self );
                tmp_source_name_8 = par_self;
                tmp_dict_value_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain__pool_maxsize );
                if ( tmp_dict_value_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_dircall_arg2_2 );
                    Py_DECREF( tmp_dircall_arg3_2 );

                    exception_lineno = 197;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }
                tmp_dict_key_8 = const_str_plain_maxsize;
                tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_8, tmp_dict_value_8 );
                Py_DECREF( tmp_dict_value_8 );
                assert( !(tmp_res != 0) );
                CHECK_OBJECT( par_self );
                tmp_source_name_9 = par_self;
                tmp_dict_value_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain__pool_block );
                if ( tmp_dict_value_9 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_dircall_arg2_2 );
                    Py_DECREF( tmp_dircall_arg3_2 );

                    exception_lineno = 198;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }
                tmp_dict_key_9 = const_str_plain_block;
                tmp_res = PyDict_SetItem( tmp_dircall_arg3_2, tmp_dict_key_9, tmp_dict_value_9 );
                Py_DECREF( tmp_dict_value_9 );
                assert( !(tmp_res != 0) );
                CHECK_OBJECT( par_proxy_kwargs );
                tmp_dircall_arg4_2 = par_proxy_kwargs;
                Py_INCREF( tmp_dircall_arg1_2 );
                Py_INCREF( tmp_dircall_arg4_2 );

                {
                    PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2, tmp_dircall_arg4_2};
                    tmp_assign_source_10 = impl___internal__$$$function_7_complex_call_helper_pos_keywords_star_dict( dir_call_args );
                }
                if ( tmp_assign_source_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 193;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }
                assert( tmp_assign_unpack_2__assign_source == NULL );
                tmp_assign_unpack_2__assign_source = tmp_assign_source_10;
            }
            {
                PyObject *tmp_assign_source_11;
                CHECK_OBJECT( tmp_assign_unpack_2__assign_source );
                tmp_assign_source_11 = tmp_assign_unpack_2__assign_source;
                assert( var_manager == NULL );
                Py_INCREF( tmp_assign_source_11 );
                var_manager = tmp_assign_source_11;
            }
            {
                PyObject *tmp_ass_subvalue_2;
                PyObject *tmp_ass_subscribed_2;
                PyObject *tmp_source_name_10;
                PyObject *tmp_ass_subscript_2;
                CHECK_OBJECT( tmp_assign_unpack_2__assign_source );
                tmp_ass_subvalue_2 = tmp_assign_unpack_2__assign_source;
                CHECK_OBJECT( par_self );
                tmp_source_name_10 = par_self;
                tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_proxy_manager );
                if ( tmp_ass_subscribed_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 193;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }
                CHECK_OBJECT( par_proxy );
                tmp_ass_subscript_2 = par_proxy;
                tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
                Py_DECREF( tmp_ass_subscribed_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 193;
                    type_description_1 = "ooooooo";
                    goto try_except_handler_5;
                }
            }
            goto try_end_4;
            // Exception handler code:
            try_except_handler_5:;
            exception_keeper_type_4 = exception_type;
            exception_keeper_value_4 = exception_value;
            exception_keeper_tb_4 = exception_tb;
            exception_keeper_lineno_4 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF( tmp_assign_unpack_2__assign_source );
            tmp_assign_unpack_2__assign_source = NULL;

            // Re-raise.
            exception_type = exception_keeper_type_4;
            exception_value = exception_keeper_value_4;
            exception_tb = exception_keeper_tb_4;
            exception_lineno = exception_keeper_lineno_4;

            goto frame_exception_exit_1;
            // End of try:
            try_end_4:;
            CHECK_OBJECT( (PyObject *)tmp_assign_unpack_2__assign_source );
            Py_DECREF( tmp_assign_unpack_2__assign_source );
            tmp_assign_unpack_2__assign_source = NULL;

            branch_end_2:;
        }
        branch_end_1:;
    }
    if ( var_manager == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "manager" );
        exception_tb = NULL;

        exception_lineno = 201;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_manager;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e60d2f119d46585f929b0027e234b08e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e60d2f119d46585f929b0027e234b08e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e60d2f119d46585f929b0027e234b08e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e60d2f119d46585f929b0027e234b08e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e60d2f119d46585f929b0027e234b08e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e60d2f119d46585f929b0027e234b08e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e60d2f119d46585f929b0027e234b08e,
        type_description_1,
        par_self,
        par_proxy,
        par_proxy_kwargs,
        var_username,
        var_manager,
        var_proxy_headers,
        var_password
    );


    // Release cached frame.
    if ( frame_e60d2f119d46585f929b0027e234b08e == cache_frame_e60d2f119d46585f929b0027e234b08e )
    {
        Py_DECREF( frame_e60d2f119d46585f929b0027e234b08e );
    }
    cache_frame_e60d2f119d46585f929b0027e234b08e = NULL;

    assertFrameObject( frame_e60d2f119d46585f929b0027e234b08e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_9_proxy_manager_for );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_username );
    var_username = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_manager );
    var_manager = NULL;

    CHECK_OBJECT( (PyObject *)par_proxy_kwargs );
    Py_DECREF( par_proxy_kwargs );
    par_proxy_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)par_proxy );
    Py_DECREF( par_proxy );
    par_proxy = NULL;

    Py_XDECREF( var_proxy_headers );
    var_proxy_headers = NULL;

    Py_XDECREF( var_password );
    var_password = NULL;

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

    Py_XDECREF( var_username );
    var_username = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_manager );
    var_manager = NULL;

    CHECK_OBJECT( (PyObject *)par_proxy_kwargs );
    Py_DECREF( par_proxy_kwargs );
    par_proxy_kwargs = NULL;

    CHECK_OBJECT( (PyObject *)par_proxy );
    Py_DECREF( par_proxy );
    par_proxy = NULL;

    Py_XDECREF( var_proxy_headers );
    var_proxy_headers = NULL;

    Py_XDECREF( var_password );
    var_password = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_9_proxy_manager_for );
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


static PyObject *impl_requests$adapters$$$function_10_cert_verify( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_conn = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_verify = python_pars[ 3 ];
    PyObject *par_cert = python_pars[ 4 ];
    PyObject *var_cert_loc = NULL;
    struct Nuitka_FrameObject *frame_cfdc13c9969d2a6ff3031ef7df276681;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_cfdc13c9969d2a6ff3031ef7df276681 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cfdc13c9969d2a6ff3031ef7df276681, codeobj_cfdc13c9969d2a6ff3031ef7df276681, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cfdc13c9969d2a6ff3031ef7df276681 = cache_frame_cfdc13c9969d2a6ff3031ef7df276681;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cfdc13c9969d2a6ff3031ef7df276681 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cfdc13c9969d2a6ff3031ef7df276681 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_url );
        tmp_called_instance_2 = par_url;
        frame_cfdc13c9969d2a6ff3031ef7df276681->m_frame.f_lineno = 215;
        tmp_called_instance_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_lower );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_cfdc13c9969d2a6ff3031ef7df276681->m_frame.f_lineno = 215;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_https_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 215;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
        CHECK_OBJECT( par_verify );
        tmp_truth_name_2 = CHECK_IF_TRUE( par_verify );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 215;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
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
            tmp_assign_source_1 = Py_None;
            assert( var_cert_loc == NULL );
            Py_INCREF( tmp_assign_source_1 );
            var_cert_loc = tmp_assign_source_1;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_1;
            PyObject *tmp_compexpr_right_1;
            CHECK_OBJECT( par_verify );
            tmp_compexpr_left_1 = par_verify;
            tmp_compexpr_right_1 = Py_True;
            tmp_condition_result_2 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_2;
                CHECK_OBJECT( par_verify );
                tmp_assign_source_2 = par_verify;
                {
                    PyObject *old = var_cert_loc;
                    assert( old != NULL );
                    var_cert_loc = tmp_assign_source_2;
                    Py_INCREF( var_cert_loc );
                    Py_DECREF( old );
                }

            }
            branch_no_2:;
        }
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_operand_name_1;
            CHECK_OBJECT( var_cert_loc );
            tmp_operand_name_1 = var_cert_loc;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 223;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_3 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_name_1;
                PyObject *tmp_mvar_value_1;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_mvar_value_2;
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_extract_zipped_paths );

                if (unlikely( tmp_mvar_value_1 == NULL ))
                {
                    tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_extract_zipped_paths );
                }

                if ( tmp_mvar_value_1 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "extract_zipped_paths" );
                    exception_tb = NULL;

                    exception_lineno = 224;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_1 = tmp_mvar_value_1;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_CA_BUNDLE_PATH );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_CA_BUNDLE_PATH );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "DEFAULT_CA_BUNDLE_PATH" );
                    exception_tb = NULL;

                    exception_lineno = 224;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_1 = tmp_mvar_value_2;
                frame_cfdc13c9969d2a6ff3031ef7df276681->m_frame.f_lineno = 224;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                }

                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 224;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = var_cert_loc;
                    assert( old != NULL );
                    var_cert_loc = tmp_assign_source_3;
                    Py_DECREF( old );
                }

            }
            branch_no_3:;
        }
        {
            nuitka_bool tmp_condition_result_4;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_operand_name_3;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_2;
            if ( var_cert_loc == NULL )
            {

                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "cert_loc" );
                exception_tb = NULL;

                exception_lineno = 226;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_operand_name_2 = var_cert_loc;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 226;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_left_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_os );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
                exception_tb = NULL;

                exception_lineno = 226;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_3;
            tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_path );
            if ( tmp_source_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 226;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_exists );
            Py_DECREF( tmp_source_name_1 );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 226;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            if ( var_cert_loc == NULL )
            {
                Py_DECREF( tmp_called_name_2 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "cert_loc" );
                exception_tb = NULL;

                exception_lineno = 226;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_2 = var_cert_loc;
            frame_cfdc13c9969d2a6ff3031ef7df276681->m_frame.f_lineno = 226;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_operand_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            if ( tmp_operand_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 226;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
            Py_DECREF( tmp_operand_name_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 226;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_right_value_1 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_4 = tmp_or_right_value_1;
            goto or_end_1;
            or_left_1:;
            tmp_condition_result_4 = tmp_or_left_value_1;
            or_end_1:;
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_make_exception_arg_1;
                PyObject *tmp_called_name_3;
                PyObject *tmp_source_name_3;
                PyObject *tmp_args_element_name_3;
                tmp_source_name_3 = const_str_digest_92450e54ff68c1856b3f5b6ca477f571;
                tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_format );
                assert( !(tmp_called_name_3 == NULL) );
                if ( var_cert_loc == NULL )
                {
                    Py_DECREF( tmp_called_name_3 );
                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "cert_loc" );
                    exception_tb = NULL;

                    exception_lineno = 228;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_args_element_name_3 = var_cert_loc;
                frame_cfdc13c9969d2a6ff3031ef7df276681->m_frame.f_lineno = 227;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3 };
                    tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_called_name_3 );
                if ( tmp_make_exception_arg_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 227;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                frame_cfdc13c9969d2a6ff3031ef7df276681->m_frame.f_lineno = 227;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_IOError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_1 );
                assert( !(tmp_raise_type_1 == NULL) );
                exception_type = tmp_raise_type_1;
                exception_lineno = 227;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            branch_no_4:;
        }
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            tmp_assattr_name_1 = const_str_plain_CERT_REQUIRED;
            CHECK_OBJECT( par_conn );
            tmp_assattr_target_1 = par_conn;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_cert_reqs, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 230;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_4;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_os );

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

                exception_lineno = 232;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_4;
            tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_path );
            if ( tmp_source_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 232;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_isdir );
            Py_DECREF( tmp_source_name_4 );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 232;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            if ( var_cert_loc == NULL )
            {
                Py_DECREF( tmp_called_name_4 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "cert_loc" );
                exception_tb = NULL;

                exception_lineno = 232;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_4 = var_cert_loc;
            frame_cfdc13c9969d2a6ff3031ef7df276681->m_frame.f_lineno = 232;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_operand_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            if ( tmp_operand_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 232;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
            Py_DECREF( tmp_operand_name_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 232;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_5 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assattr_name_2;
                PyObject *tmp_assattr_target_2;
                if ( var_cert_loc == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "cert_loc" );
                    exception_tb = NULL;

                    exception_lineno = 233;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_assattr_name_2 = var_cert_loc;
                CHECK_OBJECT( par_conn );
                tmp_assattr_target_2 = par_conn;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_ca_certs, tmp_assattr_name_2 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 233;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_5;
            branch_no_5:;
            {
                PyObject *tmp_assattr_name_3;
                PyObject *tmp_assattr_target_3;
                if ( var_cert_loc == NULL )
                {

                    exception_type = PyExc_UnboundLocalError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "cert_loc" );
                    exception_tb = NULL;

                    exception_lineno = 235;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_assattr_name_3 = var_cert_loc;
                CHECK_OBJECT( par_conn );
                tmp_assattr_target_3 = par_conn;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_ca_cert_dir, tmp_assattr_name_3 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 235;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
            }
            branch_end_5:;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assattr_name_4;
            PyObject *tmp_assattr_target_4;
            tmp_assattr_name_4 = const_str_plain_CERT_NONE;
            CHECK_OBJECT( par_conn );
            tmp_assattr_target_4 = par_conn;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_cert_reqs, tmp_assattr_name_4 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 237;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_5;
            PyObject *tmp_assattr_target_5;
            tmp_assattr_name_5 = Py_None;
            CHECK_OBJECT( par_conn );
            tmp_assattr_target_5 = par_conn;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_ca_certs, tmp_assattr_name_5 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 238;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assattr_name_6;
            PyObject *tmp_assattr_target_6;
            tmp_assattr_name_6 = Py_None;
            CHECK_OBJECT( par_conn );
            tmp_assattr_target_6 = par_conn;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_ca_cert_dir, tmp_assattr_name_6 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 239;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_end_1:;
    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_3;
        CHECK_OBJECT( par_cert );
        tmp_truth_name_3 = CHECK_IF_TRUE( par_cert );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 241;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_operand_name_5;
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            PyObject *tmp_mvar_value_5;
            CHECK_OBJECT( par_cert );
            tmp_isinstance_inst_1 = par_cert;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_basestring );

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

                exception_lineno = 242;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_isinstance_cls_1 = tmp_mvar_value_5;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 242;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_5 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 242;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_7 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assattr_name_7;
                PyObject *tmp_subscribed_name_1;
                PyObject *tmp_subscript_name_1;
                PyObject *tmp_assattr_target_7;
                CHECK_OBJECT( par_cert );
                tmp_subscribed_name_1 = par_cert;
                tmp_subscript_name_1 = const_int_0;
                tmp_assattr_name_7 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
                if ( tmp_assattr_name_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 243;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_conn );
                tmp_assattr_target_7 = par_conn;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_cert_file, tmp_assattr_name_7 );
                Py_DECREF( tmp_assattr_name_7 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 243;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assattr_name_8;
                PyObject *tmp_subscribed_name_2;
                PyObject *tmp_subscript_name_2;
                PyObject *tmp_assattr_target_8;
                CHECK_OBJECT( par_cert );
                tmp_subscribed_name_2 = par_cert;
                tmp_subscript_name_2 = const_int_pos_1;
                tmp_assattr_name_8 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 1 );
                if ( tmp_assattr_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 244;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                CHECK_OBJECT( par_conn );
                tmp_assattr_target_8 = par_conn;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_key_file, tmp_assattr_name_8 );
                Py_DECREF( tmp_assattr_name_8 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 244;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
            }
            goto branch_end_7;
            branch_no_7:;
            {
                PyObject *tmp_assattr_name_9;
                PyObject *tmp_assattr_target_9;
                CHECK_OBJECT( par_cert );
                tmp_assattr_name_9 = par_cert;
                CHECK_OBJECT( par_conn );
                tmp_assattr_target_9 = par_conn;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_cert_file, tmp_assattr_name_9 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 246;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
            }
            {
                PyObject *tmp_assattr_name_10;
                PyObject *tmp_assattr_target_10;
                tmp_assattr_name_10 = Py_None;
                CHECK_OBJECT( par_conn );
                tmp_assattr_target_10 = par_conn;
                tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_key_file, tmp_assattr_name_10 );
                if ( tmp_result == false )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 247;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
            }
            branch_end_7:;
        }
        {
            nuitka_bool tmp_condition_result_8;
            int tmp_and_left_truth_2;
            nuitka_bool tmp_and_left_value_2;
            nuitka_bool tmp_and_right_value_2;
            PyObject *tmp_source_name_6;
            PyObject *tmp_attribute_value_1;
            int tmp_truth_name_4;
            PyObject *tmp_operand_name_6;
            PyObject *tmp_called_name_5;
            PyObject *tmp_source_name_7;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_source_name_9;
            CHECK_OBJECT( par_conn );
            tmp_source_name_6 = par_conn;
            tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_cert_file );
            if ( tmp_attribute_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 248;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_4 = CHECK_IF_TRUE( tmp_attribute_value_1 );
            if ( tmp_truth_name_4 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_1 );

                exception_lineno = 248;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_2 = tmp_truth_name_4 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_attribute_value_1 );
            tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
            if ( tmp_and_left_truth_2 == 1 )
            {
                goto and_right_2;
            }
            else
            {
                goto and_left_2;
            }
            and_right_2:;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_os );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
                exception_tb = NULL;

                exception_lineno = 248;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_6;
            tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_path );
            if ( tmp_source_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 248;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_exists );
            Py_DECREF( tmp_source_name_7 );
            if ( tmp_called_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 248;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_conn );
            tmp_source_name_9 = par_conn;
            tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_cert_file );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_5 );

                exception_lineno = 248;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_cfdc13c9969d2a6ff3031ef7df276681->m_frame.f_lineno = 248;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_operand_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_called_name_5 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_operand_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 248;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_6 );
            Py_DECREF( tmp_operand_name_6 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 248;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_8 = tmp_and_right_value_2;
            goto and_end_2;
            and_left_2:;
            tmp_condition_result_8 = tmp_and_left_value_2;
            and_end_2:;
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
                PyObject *tmp_raise_type_2;
                PyObject *tmp_make_exception_arg_2;
                PyObject *tmp_called_name_6;
                PyObject *tmp_source_name_10;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_source_name_11;
                tmp_source_name_10 = const_str_digest_3e65357a65a5cf0df20a8efd5394db63;
                tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_format );
                assert( !(tmp_called_name_6 == NULL) );
                CHECK_OBJECT( par_conn );
                tmp_source_name_11 = par_conn;
                tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_cert_file );
                if ( tmp_args_element_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_6 );

                    exception_lineno = 250;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                frame_cfdc13c9969d2a6ff3031ef7df276681->m_frame.f_lineno = 249;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6 };
                    tmp_make_exception_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
                }

                Py_DECREF( tmp_called_name_6 );
                Py_DECREF( tmp_args_element_name_6 );
                if ( tmp_make_exception_arg_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 249;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                frame_cfdc13c9969d2a6ff3031ef7df276681->m_frame.f_lineno = 249;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_2 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_IOError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_2 );
                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 249;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            branch_no_8:;
        }
        {
            nuitka_bool tmp_condition_result_9;
            int tmp_and_left_truth_3;
            nuitka_bool tmp_and_left_value_3;
            nuitka_bool tmp_and_right_value_3;
            PyObject *tmp_source_name_12;
            PyObject *tmp_attribute_value_2;
            int tmp_truth_name_5;
            PyObject *tmp_operand_name_7;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_13;
            PyObject *tmp_source_name_14;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_source_name_15;
            CHECK_OBJECT( par_conn );
            tmp_source_name_12 = par_conn;
            tmp_attribute_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_key_file );
            if ( tmp_attribute_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 251;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_5 = CHECK_IF_TRUE( tmp_attribute_value_2 );
            if ( tmp_truth_name_5 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_2 );

                exception_lineno = 251;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_3 = tmp_truth_name_5 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_attribute_value_2 );
            tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
            if ( tmp_and_left_truth_3 == 1 )
            {
                goto and_right_3;
            }
            else
            {
                goto and_left_3;
            }
            and_right_3:;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_os );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
                exception_tb = NULL;

                exception_lineno = 251;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_14 = tmp_mvar_value_7;
            tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_path );
            if ( tmp_source_name_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 251;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_exists );
            Py_DECREF( tmp_source_name_13 );
            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 251;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_conn );
            tmp_source_name_15 = par_conn;
            tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_key_file );
            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );

                exception_lineno = 251;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_cfdc13c9969d2a6ff3031ef7df276681->m_frame.f_lineno = 251;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_operand_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
            }

            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_operand_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 251;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_7 );
            Py_DECREF( tmp_operand_name_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 251;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_3 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_9 = tmp_and_right_value_3;
            goto and_end_3;
            and_left_3:;
            tmp_condition_result_9 = tmp_and_left_value_3;
            and_end_3:;
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
                PyObject *tmp_raise_type_3;
                PyObject *tmp_make_exception_arg_3;
                PyObject *tmp_called_name_8;
                PyObject *tmp_source_name_16;
                PyObject *tmp_args_element_name_8;
                PyObject *tmp_source_name_17;
                tmp_source_name_16 = const_str_digest_4dd75d7a0434de0e965e971794e16108;
                tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_format );
                assert( !(tmp_called_name_8 == NULL) );
                CHECK_OBJECT( par_conn );
                tmp_source_name_17 = par_conn;
                tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_key_file );
                if ( tmp_args_element_name_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_8 );

                    exception_lineno = 253;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                frame_cfdc13c9969d2a6ff3031ef7df276681->m_frame.f_lineno = 252;
                {
                    PyObject *call_args[] = { tmp_args_element_name_8 };
                    tmp_make_exception_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
                }

                Py_DECREF( tmp_called_name_8 );
                Py_DECREF( tmp_args_element_name_8 );
                if ( tmp_make_exception_arg_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 252;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                frame_cfdc13c9969d2a6ff3031ef7df276681->m_frame.f_lineno = 252;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_3 };
                    tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_IOError, call_args );
                }

                Py_DECREF( tmp_make_exception_arg_3 );
                assert( !(tmp_raise_type_3 == NULL) );
                exception_type = tmp_raise_type_3;
                exception_lineno = 252;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            branch_no_9:;
        }
        branch_no_6:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cfdc13c9969d2a6ff3031ef7df276681 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cfdc13c9969d2a6ff3031ef7df276681 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cfdc13c9969d2a6ff3031ef7df276681, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cfdc13c9969d2a6ff3031ef7df276681->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cfdc13c9969d2a6ff3031ef7df276681, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cfdc13c9969d2a6ff3031ef7df276681,
        type_description_1,
        par_self,
        par_conn,
        par_url,
        par_verify,
        par_cert,
        var_cert_loc
    );


    // Release cached frame.
    if ( frame_cfdc13c9969d2a6ff3031ef7df276681 == cache_frame_cfdc13c9969d2a6ff3031ef7df276681 )
    {
        Py_DECREF( frame_cfdc13c9969d2a6ff3031ef7df276681 );
    }
    cache_frame_cfdc13c9969d2a6ff3031ef7df276681 = NULL;

    assertFrameObject( frame_cfdc13c9969d2a6ff3031ef7df276681 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_10_cert_verify );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_verify );
    Py_DECREF( par_verify );
    par_verify = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_cert_loc );
    var_cert_loc = NULL;

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    CHECK_OBJECT( (PyObject *)par_conn );
    Py_DECREF( par_conn );
    par_conn = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_verify );
    Py_DECREF( par_verify );
    par_verify = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_cert_loc );
    var_cert_loc = NULL;

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    CHECK_OBJECT( (PyObject *)par_conn );
    Py_DECREF( par_conn );
    par_conn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_10_cert_verify );
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


static PyObject *impl_requests$adapters$$$function_11_build_response( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_req = python_pars[ 1 ];
    PyObject *par_resp = python_pars[ 2 ];
    PyObject *var_response = NULL;
    struct Nuitka_FrameObject *frame_56ee817bbd0817003c33718cffef5ea2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_56ee817bbd0817003c33718cffef5ea2 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_56ee817bbd0817003c33718cffef5ea2, codeobj_56ee817bbd0817003c33718cffef5ea2, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_56ee817bbd0817003c33718cffef5ea2 = cache_frame_56ee817bbd0817003c33718cffef5ea2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_56ee817bbd0817003c33718cffef5ea2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_56ee817bbd0817003c33718cffef5ea2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_Response );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Response );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "Response" );
            exception_tb = NULL;

            exception_lineno = 265;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_56ee817bbd0817003c33718cffef5ea2->m_frame.f_lineno = 265;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 265;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert( var_response == NULL );
        var_response = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_resp );
        tmp_getattr_target_1 = par_resp;
        tmp_getattr_attr_1 = const_str_plain_status;
        tmp_getattr_default_1 = Py_None;
        tmp_assattr_name_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 268;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_response );
        tmp_assattr_target_1 = var_response;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_status_code, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 268;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        PyObject *tmp_assattr_target_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_CaseInsensitiveDict );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CaseInsensitiveDict );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "CaseInsensitiveDict" );
            exception_tb = NULL;

            exception_lineno = 271;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_resp );
        tmp_getattr_target_2 = par_resp;
        tmp_getattr_attr_2 = const_str_plain_headers;
        tmp_getattr_default_2 = PyDict_New();
        tmp_args_element_name_1 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
        Py_DECREF( tmp_getattr_default_2 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 271;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_56ee817bbd0817003c33718cffef5ea2->m_frame.f_lineno = 271;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assattr_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 271;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_response );
        tmp_assattr_target_2 = var_response;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_headers, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 271;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_called_name_3;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_assattr_target_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_get_encoding_from_headers );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_encoding_from_headers );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "get_encoding_from_headers" );
            exception_tb = NULL;

            exception_lineno = 274;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_3 = tmp_mvar_value_3;
        CHECK_OBJECT( var_response );
        tmp_source_name_1 = var_response;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_headers );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_56ee817bbd0817003c33718cffef5ea2->m_frame.f_lineno = 274;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_assattr_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assattr_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_response );
        tmp_assattr_target_3 = var_response;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_encoding, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( par_resp );
        tmp_assattr_name_4 = par_resp;
        CHECK_OBJECT( var_response );
        tmp_assattr_target_4 = var_response;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_raw, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 275;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT( var_response );
        tmp_source_name_3 = var_response;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_raw );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_reason );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_assattr_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_response );
        tmp_assattr_target_5 = var_response;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_reason, tmp_assattr_name_5 );
        Py_DECREF( tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 276;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_req );
        tmp_source_name_4 = par_req;
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_url );
        if ( tmp_isinstance_inst_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 278;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = (PyObject *)&PyString_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_inst_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 278;
            type_description_1 = "oooo";
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
            PyObject *tmp_assattr_name_6;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_assattr_target_6;
            CHECK_OBJECT( par_req );
            tmp_source_name_5 = par_req;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_url );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 279;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_56ee817bbd0817003c33718cffef5ea2->m_frame.f_lineno = 279;
            tmp_assattr_name_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_assattr_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 279;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_response );
            tmp_assattr_target_6 = var_response;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_url, tmp_assattr_name_6 );
            Py_DECREF( tmp_assattr_name_6 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 279;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assattr_name_7;
            PyObject *tmp_source_name_6;
            PyObject *tmp_assattr_target_7;
            CHECK_OBJECT( par_req );
            tmp_source_name_6 = par_req;
            tmp_assattr_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_url );
            if ( tmp_assattr_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 281;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_response );
            tmp_assattr_target_7 = var_response;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_url, tmp_assattr_name_7 );
            Py_DECREF( tmp_assattr_name_7 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 281;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
        }
        branch_end_1:;
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_7;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar );

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

            exception_lineno = 284;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( var_response );
        tmp_source_name_7 = var_response;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_cookies );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 284;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_req );
        tmp_args_element_name_4 = par_req;
        CHECK_OBJECT( par_resp );
        tmp_args_element_name_5 = par_resp;
        frame_56ee817bbd0817003c33718cffef5ea2->m_frame.f_lineno = 284;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 284;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT( par_req );
        tmp_assattr_name_8 = par_req;
        CHECK_OBJECT( var_response );
        tmp_assattr_target_8 = var_response;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_request, tmp_assattr_name_8 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 287;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT( par_self );
        tmp_assattr_name_9 = par_self;
        CHECK_OBJECT( var_response );
        tmp_assattr_target_9 = var_response;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_connection, tmp_assattr_name_9 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 288;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_56ee817bbd0817003c33718cffef5ea2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_56ee817bbd0817003c33718cffef5ea2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_56ee817bbd0817003c33718cffef5ea2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_56ee817bbd0817003c33718cffef5ea2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_56ee817bbd0817003c33718cffef5ea2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_56ee817bbd0817003c33718cffef5ea2,
        type_description_1,
        par_self,
        par_req,
        par_resp,
        var_response
    );


    // Release cached frame.
    if ( frame_56ee817bbd0817003c33718cffef5ea2 == cache_frame_56ee817bbd0817003c33718cffef5ea2 )
    {
        Py_DECREF( frame_56ee817bbd0817003c33718cffef5ea2 );
    }
    cache_frame_56ee817bbd0817003c33718cffef5ea2 = NULL;

    assertFrameObject( frame_56ee817bbd0817003c33718cffef5ea2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_response );
    tmp_return_value = var_response;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_11_build_response );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_req );
    Py_DECREF( par_req );
    par_req = NULL;

    CHECK_OBJECT( (PyObject *)par_resp );
    Py_DECREF( par_resp );
    par_resp = NULL;

    CHECK_OBJECT( (PyObject *)var_response );
    Py_DECREF( var_response );
    var_response = NULL;

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

    CHECK_OBJECT( (PyObject *)par_req );
    Py_DECREF( par_req );
    par_req = NULL;

    CHECK_OBJECT( (PyObject *)par_resp );
    Py_DECREF( par_resp );
    par_resp = NULL;

    Py_XDECREF( var_response );
    var_response = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_11_build_response );
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


static PyObject *impl_requests$adapters$$$function_12_get_connection( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_url = python_pars[ 1 ];
    PyObject *par_proxies = python_pars[ 2 ];
    PyObject *var_proxy_url = NULL;
    PyObject *var_proxy_manager = NULL;
    PyObject *var_proxy = NULL;
    PyObject *var_parsed = NULL;
    PyObject *var_conn = NULL;
    struct Nuitka_FrameObject *frame_fe322788ddf6dabc5662a500e3d9c52c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_fe322788ddf6dabc5662a500e3d9c52c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fe322788ddf6dabc5662a500e3d9c52c, codeobj_fe322788ddf6dabc5662a500e3d9c52c, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_fe322788ddf6dabc5662a500e3d9c52c = cache_frame_fe322788ddf6dabc5662a500e3d9c52c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fe322788ddf6dabc5662a500e3d9c52c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fe322788ddf6dabc5662a500e3d9c52c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_select_proxy );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_select_proxy );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "select_proxy" );
            exception_tb = NULL;

            exception_lineno = 301;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_url );
        tmp_args_element_name_1 = par_url;
        CHECK_OBJECT( par_proxies );
        tmp_args_element_name_2 = par_proxies;
        frame_fe322788ddf6dabc5662a500e3d9c52c->m_frame.f_lineno = 301;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 301;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_proxy == NULL );
        var_proxy = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_proxy );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_proxy );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 303;
            type_description_1 = "oooooooo";
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_prepend_scheme_if_needed );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_prepend_scheme_if_needed );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "prepend_scheme_if_needed" );
                exception_tb = NULL;

                exception_lineno = 304;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( var_proxy );
            tmp_args_element_name_3 = var_proxy;
            tmp_args_element_name_4 = const_str_plain_http;
            frame_fe322788ddf6dabc5662a500e3d9c52c->m_frame.f_lineno = 304;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 304;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_proxy;
                assert( old != NULL );
                var_proxy = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_parse_url );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_parse_url );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "parse_url" );
                exception_tb = NULL;

                exception_lineno = 305;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( var_proxy );
            tmp_args_element_name_5 = var_proxy;
            frame_fe322788ddf6dabc5662a500e3d9c52c->m_frame.f_lineno = 305;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 305;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_proxy_url == NULL );
            var_proxy_url = tmp_assign_source_3;
        }
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( var_proxy_url );
            tmp_source_name_1 = var_proxy_url;
            tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_host );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 306;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 306;
                type_description_1 = "oooooooo";
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_called_name_4;
                PyObject *tmp_mvar_value_4;
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_InvalidProxyURL );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InvalidProxyURL );
                }

                if ( tmp_mvar_value_4 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "InvalidProxyURL" );
                    exception_tb = NULL;

                    exception_lineno = 307;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_4 = tmp_mvar_value_4;
                frame_fe322788ddf6dabc5662a500e3d9c52c->m_frame.f_lineno = 307;
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_str_digest_d166bac2cd9f995554d196b16ef3feee_tuple, 0 ) );

                if ( tmp_raise_type_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 307;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_1;
                exception_lineno = 307;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_2:;
        }
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_name_6;
            CHECK_OBJECT( par_self );
            tmp_called_instance_1 = par_self;
            CHECK_OBJECT( var_proxy );
            tmp_args_element_name_6 = var_proxy;
            frame_fe322788ddf6dabc5662a500e3d9c52c->m_frame.f_lineno = 309;
            {
                PyObject *call_args[] = { tmp_args_element_name_6 };
                tmp_assign_source_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_proxy_manager_for, call_args );
            }

            if ( tmp_assign_source_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 309;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_proxy_manager == NULL );
            var_proxy_manager = tmp_assign_source_4;
        }
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_name_7;
            CHECK_OBJECT( var_proxy_manager );
            tmp_called_instance_2 = var_proxy_manager;
            CHECK_OBJECT( par_url );
            tmp_args_element_name_7 = par_url;
            frame_fe322788ddf6dabc5662a500e3d9c52c->m_frame.f_lineno = 310;
            {
                PyObject *call_args[] = { tmp_args_element_name_7 };
                tmp_assign_source_5 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_connection_from_url, call_args );
            }

            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 310;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_conn == NULL );
            var_conn = tmp_assign_source_5;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_args_element_name_8;
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_urlparse );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlparse );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "urlparse" );
                exception_tb = NULL;

                exception_lineno = 313;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_5;
            CHECK_OBJECT( par_url );
            tmp_args_element_name_8 = par_url;
            frame_fe322788ddf6dabc5662a500e3d9c52c->m_frame.f_lineno = 313;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 313;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_parsed == NULL );
            var_parsed = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_called_instance_3;
            CHECK_OBJECT( var_parsed );
            tmp_called_instance_3 = var_parsed;
            frame_fe322788ddf6dabc5662a500e3d9c52c->m_frame.f_lineno = 314;
            tmp_assign_source_7 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_geturl );
            if ( tmp_assign_source_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 314;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_url;
                assert( old != NULL );
                par_url = tmp_assign_source_7;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_source_name_2;
            PyObject *tmp_args_element_name_9;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_poolmanager );
            if ( tmp_called_instance_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 315;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_url );
            tmp_args_element_name_9 = par_url;
            frame_fe322788ddf6dabc5662a500e3d9c52c->m_frame.f_lineno = 315;
            {
                PyObject *call_args[] = { tmp_args_element_name_9 };
                tmp_assign_source_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_connection_from_url, call_args );
            }

            Py_DECREF( tmp_called_instance_4 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 315;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_conn == NULL );
            var_conn = tmp_assign_source_8;
        }
        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fe322788ddf6dabc5662a500e3d9c52c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fe322788ddf6dabc5662a500e3d9c52c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fe322788ddf6dabc5662a500e3d9c52c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fe322788ddf6dabc5662a500e3d9c52c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fe322788ddf6dabc5662a500e3d9c52c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fe322788ddf6dabc5662a500e3d9c52c,
        type_description_1,
        par_self,
        par_url,
        par_proxies,
        var_proxy_url,
        var_proxy_manager,
        var_proxy,
        var_parsed,
        var_conn
    );


    // Release cached frame.
    if ( frame_fe322788ddf6dabc5662a500e3d9c52c == cache_frame_fe322788ddf6dabc5662a500e3d9c52c )
    {
        Py_DECREF( frame_fe322788ddf6dabc5662a500e3d9c52c );
    }
    cache_frame_fe322788ddf6dabc5662a500e3d9c52c = NULL;

    assertFrameObject( frame_fe322788ddf6dabc5662a500e3d9c52c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_conn );
    tmp_return_value = var_conn;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_12_get_connection );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_proxy_url );
    var_proxy_url = NULL;

    Py_XDECREF( var_proxy_manager );
    var_proxy_manager = NULL;

    CHECK_OBJECT( (PyObject *)var_proxy );
    Py_DECREF( var_proxy );
    var_proxy = NULL;

    CHECK_OBJECT( (PyObject *)par_proxies );
    Py_DECREF( par_proxies );
    par_proxies = NULL;

    Py_XDECREF( var_parsed );
    var_parsed = NULL;

    CHECK_OBJECT( (PyObject *)var_conn );
    Py_DECREF( var_conn );
    var_conn = NULL;

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

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_proxy_url );
    var_proxy_url = NULL;

    Py_XDECREF( var_proxy_manager );
    var_proxy_manager = NULL;

    Py_XDECREF( var_proxy );
    var_proxy = NULL;

    CHECK_OBJECT( (PyObject *)par_proxies );
    Py_DECREF( par_proxies );
    par_proxies = NULL;

    Py_XDECREF( var_parsed );
    var_parsed = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_12_get_connection );
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


static PyObject *impl_requests$adapters$$$function_13_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_proxy = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_4a69072ef5b69b159eb8422c322b4d72;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_4a69072ef5b69b159eb8422c322b4d72 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4a69072ef5b69b159eb8422c322b4d72, codeobj_4a69072ef5b69b159eb8422c322b4d72, module_requests$adapters, sizeof(void *)+sizeof(void *) );
    frame_4a69072ef5b69b159eb8422c322b4d72 = cache_frame_4a69072ef5b69b159eb8422c322b4d72;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4a69072ef5b69b159eb8422c322b4d72 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4a69072ef5b69b159eb8422c322b4d72 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_poolmanager );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 325;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_4a69072ef5b69b159eb8422c322b4d72->m_frame.f_lineno = 325;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_clear );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 325;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_proxy_manager );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 326;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_4a69072ef5b69b159eb8422c322b4d72->m_frame.f_lineno = 326;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_values );
        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 326;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 326;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
            {

                goto loop_end_1;
            }
            else
            {

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oo";
                exception_lineno = 326;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_3 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_proxy;
            var_proxy = tmp_assign_source_3;
            Py_INCREF( var_proxy );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT( var_proxy );
        tmp_called_instance_3 = var_proxy;
        frame_4a69072ef5b69b159eb8422c322b4d72->m_frame.f_lineno = 327;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_clear );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        type_description_1 = "oo";
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4a69072ef5b69b159eb8422c322b4d72 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4a69072ef5b69b159eb8422c322b4d72 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4a69072ef5b69b159eb8422c322b4d72, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4a69072ef5b69b159eb8422c322b4d72->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4a69072ef5b69b159eb8422c322b4d72, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4a69072ef5b69b159eb8422c322b4d72,
        type_description_1,
        par_self,
        var_proxy
    );


    // Release cached frame.
    if ( frame_4a69072ef5b69b159eb8422c322b4d72 == cache_frame_4a69072ef5b69b159eb8422c322b4d72 )
    {
        Py_DECREF( frame_4a69072ef5b69b159eb8422c322b4d72 );
    }
    cache_frame_4a69072ef5b69b159eb8422c322b4d72 = NULL;

    assertFrameObject( frame_4a69072ef5b69b159eb8422c322b4d72 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_13_close );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_proxy );
    var_proxy = NULL;

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

    Py_XDECREF( var_proxy );
    var_proxy = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_13_close );
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


static PyObject *impl_requests$adapters$$$function_14_request_url( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_request = python_pars[ 1 ];
    PyObject *par_proxies = python_pars[ 2 ];
    PyObject *var_url = NULL;
    PyObject *var_is_proxied_http_request = NULL;
    PyObject *var_proxy_scheme = NULL;
    PyObject *var_proxy = NULL;
    PyObject *var_scheme = NULL;
    PyObject *var_using_socks_proxy = NULL;
    struct Nuitka_FrameObject *frame_edd4fdcf3b237a4c62726c8a1fda43cf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_edd4fdcf3b237a4c62726c8a1fda43cf = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_edd4fdcf3b237a4c62726c8a1fda43cf, codeobj_edd4fdcf3b237a4c62726c8a1fda43cf, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_edd4fdcf3b237a4c62726c8a1fda43cf = cache_frame_edd4fdcf3b237a4c62726c8a1fda43cf;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_edd4fdcf3b237a4c62726c8a1fda43cf );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_edd4fdcf3b237a4c62726c8a1fda43cf ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_select_proxy );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_select_proxy );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "select_proxy" );
            exception_tb = NULL;

            exception_lineno = 343;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_request );
        tmp_source_name_1 = par_request;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_url );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 343;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_proxies );
        tmp_args_element_name_2 = par_proxies;
        frame_edd4fdcf3b237a4c62726c8a1fda43cf->m_frame.f_lineno = 343;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 343;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_proxy == NULL );
        var_proxy = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_urlparse );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlparse );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "urlparse" );
            exception_tb = NULL;

            exception_lineno = 344;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_2;
        CHECK_OBJECT( par_request );
        tmp_source_name_3 = par_request;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_url );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_edd4fdcf3b237a4c62726c8a1fda43cf->m_frame.f_lineno = 344;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_scheme );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 344;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_scheme == NULL );
        var_scheme = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( var_proxy );
        tmp_and_left_value_1 = var_proxy;
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "ooooooooo";
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
        CHECK_OBJECT( var_scheme );
        tmp_compexpr_left_1 = var_scheme;
        tmp_compexpr_right_1 = const_str_plain_https;
        tmp_and_right_value_1 = RICH_COMPARE_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_and_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF( tmp_and_left_value_1 );
        tmp_assign_source_3 = tmp_and_left_value_1;
        and_end_1:;
        assert( var_is_proxied_http_request == NULL );
        var_is_proxied_http_request = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_False;
        assert( var_using_socks_proxy == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_using_socks_proxy = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_proxy );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_proxy );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 348;
            type_description_1 = "ooooooooo";
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
            PyObject *tmp_assign_source_5;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_4;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_urlparse );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urlparse );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "urlparse" );
                exception_tb = NULL;

                exception_lineno = 349;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            CHECK_OBJECT( var_proxy );
            tmp_args_element_name_4 = var_proxy;
            frame_edd4fdcf3b237a4c62726c8a1fda43cf->m_frame.f_lineno = 349;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_source_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            if ( tmp_source_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 349;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_scheme );
            Py_DECREF( tmp_source_name_4 );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 349;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_edd4fdcf3b237a4c62726c8a1fda43cf->m_frame.f_lineno = 349;
            tmp_assign_source_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_lower );
            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 349;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            assert( var_proxy_scheme == NULL );
            var_proxy_scheme = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_called_instance_2;
            CHECK_OBJECT( var_proxy_scheme );
            tmp_called_instance_2 = var_proxy_scheme;
            frame_edd4fdcf3b237a4c62726c8a1fda43cf->m_frame.f_lineno = 350;
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_startswith, &PyTuple_GET_ITEM( const_tuple_str_plain_socks_tuple, 0 ) );

            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 350;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_using_socks_proxy;
                assert( old != NULL );
                var_using_socks_proxy = tmp_assign_source_6;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_source_name_5;
        CHECK_OBJECT( par_request );
        tmp_source_name_5 = par_request;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_path_url );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 352;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_url == NULL );
        var_url = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        int tmp_truth_name_2;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_is_proxied_http_request );
        tmp_truth_name_2 = CHECK_IF_TRUE( var_is_proxied_http_request );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 353;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if ( tmp_and_left_truth_2 == 1 )
        {
            goto and_right_2;
        }
        else
        {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT( var_using_socks_proxy );
        tmp_operand_name_1 = var_using_socks_proxy;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 353;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_2 = tmp_and_left_value_2;
        and_end_2:;
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
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_source_name_6;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_urldefragauth );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_urldefragauth );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "urldefragauth" );
                exception_tb = NULL;

                exception_lineno = 354;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_4;
            CHECK_OBJECT( par_request );
            tmp_source_name_6 = par_request;
            tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_url );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 354;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            frame_edd4fdcf3b237a4c62726c8a1fda43cf->m_frame.f_lineno = 354;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_assign_source_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 354;
                type_description_1 = "ooooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_url;
                assert( old != NULL );
                var_url = tmp_assign_source_8;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_edd4fdcf3b237a4c62726c8a1fda43cf );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_edd4fdcf3b237a4c62726c8a1fda43cf );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_edd4fdcf3b237a4c62726c8a1fda43cf, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_edd4fdcf3b237a4c62726c8a1fda43cf->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_edd4fdcf3b237a4c62726c8a1fda43cf, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_edd4fdcf3b237a4c62726c8a1fda43cf,
        type_description_1,
        par_self,
        par_request,
        par_proxies,
        var_url,
        var_is_proxied_http_request,
        var_proxy_scheme,
        var_proxy,
        var_scheme,
        var_using_socks_proxy
    );


    // Release cached frame.
    if ( frame_edd4fdcf3b237a4c62726c8a1fda43cf == cache_frame_edd4fdcf3b237a4c62726c8a1fda43cf )
    {
        Py_DECREF( frame_edd4fdcf3b237a4c62726c8a1fda43cf );
    }
    cache_frame_edd4fdcf3b237a4c62726c8a1fda43cf = NULL;

    assertFrameObject( frame_edd4fdcf3b237a4c62726c8a1fda43cf );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_url );
    tmp_return_value = var_url;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_14_request_url );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_proxies );
    Py_DECREF( par_proxies );
    par_proxies = NULL;

    CHECK_OBJECT( (PyObject *)var_url );
    Py_DECREF( var_url );
    var_url = NULL;

    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_is_proxied_http_request );
    Py_DECREF( var_is_proxied_http_request );
    var_is_proxied_http_request = NULL;

    Py_XDECREF( var_proxy_scheme );
    var_proxy_scheme = NULL;

    CHECK_OBJECT( (PyObject *)var_proxy );
    Py_DECREF( var_proxy );
    var_proxy = NULL;

    CHECK_OBJECT( (PyObject *)var_scheme );
    Py_DECREF( var_scheme );
    var_scheme = NULL;

    CHECK_OBJECT( (PyObject *)var_using_socks_proxy );
    Py_DECREF( var_using_socks_proxy );
    var_using_socks_proxy = NULL;

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

    CHECK_OBJECT( (PyObject *)par_proxies );
    Py_DECREF( par_proxies );
    par_proxies = NULL;

    Py_XDECREF( var_url );
    var_url = NULL;

    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_is_proxied_http_request );
    var_is_proxied_http_request = NULL;

    Py_XDECREF( var_proxy_scheme );
    var_proxy_scheme = NULL;

    Py_XDECREF( var_proxy );
    var_proxy = NULL;

    Py_XDECREF( var_scheme );
    var_scheme = NULL;

    Py_XDECREF( var_using_socks_proxy );
    var_using_socks_proxy = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_14_request_url );
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


static PyObject *impl_requests$adapters$$$function_15_add_headers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_request = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    // Tried code:
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_15_add_headers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_15_add_headers );
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT( tmp_return_value );
   assert( had_error || !ERROR_OCCURRED() );
   return tmp_return_value;
}


static PyObject *impl_requests$adapters$$$function_16_proxy_headers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_proxy = python_pars[ 1 ];
    PyObject *var_username = NULL;
    PyObject *var_headers = NULL;
    PyObject *var_password = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_4713c83be7b14451adcb0e8c051d51b4;
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
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_4713c83be7b14451adcb0e8c051d51b4 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        assert( var_headers == NULL );
        var_headers = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4713c83be7b14451adcb0e8c051d51b4, codeobj_4713c83be7b14451adcb0e8c051d51b4, module_requests$adapters, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_4713c83be7b14451adcb0e8c051d51b4 = cache_frame_4713c83be7b14451adcb0e8c051d51b4;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4713c83be7b14451adcb0e8c051d51b4 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4713c83be7b14451adcb0e8c051d51b4 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_get_auth_from_url );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_auth_from_url );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "get_auth_from_url" );
            exception_tb = NULL;

            exception_lineno = 386;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_proxy );
        tmp_args_element_name_1 = par_proxy;
        frame_4713c83be7b14451adcb0e8c051d51b4->m_frame.f_lineno = 386;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert( tmp_tuple_unpack_1__source_iter == NULL );
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_1, 0 );
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
            exception_lineno = 386;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_1 == NULL );
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


            type_description_1 = "ooooo";
            exception_lineno = 386;
            goto try_except_handler_3;
        }
        assert( tmp_tuple_unpack_1__element_2 == NULL );
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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

                    type_description_1 = "ooooo";
                    exception_lineno = 386;
                    goto try_except_handler_3;
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
            exception_lineno = 386;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

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
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert( var_username == NULL );
        Py_INCREF( tmp_assign_source_5 );
        var_username = tmp_assign_source_5;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert( var_password == NULL );
        Py_INCREF( tmp_assign_source_6 );
        var_password = tmp_assign_source_6;
    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( var_username );
        tmp_truth_name_1 = CHECK_IF_TRUE( var_username );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 388;
            type_description_1 = "ooooo";
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
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__basic_auth_str );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__basic_auth_str );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_basic_auth_str" );
                exception_tb = NULL;

                exception_lineno = 389;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( var_username );
            tmp_args_element_name_2 = var_username;
            CHECK_OBJECT( var_password );
            tmp_args_element_name_3 = var_password;
            frame_4713c83be7b14451adcb0e8c051d51b4->m_frame.f_lineno = 389;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 389;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_headers );
            tmp_dictset_dict = var_headers;
            tmp_dictset_key = const_str_digest_a9249a74248e02fdfcaa84b4618a14ce;
            tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4713c83be7b14451adcb0e8c051d51b4 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4713c83be7b14451adcb0e8c051d51b4 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4713c83be7b14451adcb0e8c051d51b4, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4713c83be7b14451adcb0e8c051d51b4->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4713c83be7b14451adcb0e8c051d51b4, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4713c83be7b14451adcb0e8c051d51b4,
        type_description_1,
        par_self,
        par_proxy,
        var_username,
        var_headers,
        var_password
    );


    // Release cached frame.
    if ( frame_4713c83be7b14451adcb0e8c051d51b4 == cache_frame_4713c83be7b14451adcb0e8c051d51b4 )
    {
        Py_DECREF( frame_4713c83be7b14451adcb0e8c051d51b4 );
    }
    cache_frame_4713c83be7b14451adcb0e8c051d51b4 = NULL;

    assertFrameObject( frame_4713c83be7b14451adcb0e8c051d51b4 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_headers );
    tmp_return_value = var_headers;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_16_proxy_headers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_username );
    Py_DECREF( var_username );
    var_username = NULL;

    CHECK_OBJECT( (PyObject *)var_headers );
    Py_DECREF( var_headers );
    var_headers = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_password );
    Py_DECREF( var_password );
    var_password = NULL;

    CHECK_OBJECT( (PyObject *)par_proxy );
    Py_DECREF( par_proxy );
    par_proxy = NULL;

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

    Py_XDECREF( var_username );
    var_username = NULL;

    CHECK_OBJECT( (PyObject *)var_headers );
    Py_DECREF( var_headers );
    var_headers = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_password );
    var_password = NULL;

    CHECK_OBJECT( (PyObject *)par_proxy );
    Py_DECREF( par_proxy );
    par_proxy = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_16_proxy_headers );
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


static PyObject *impl_requests$adapters$$$function_17_send( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_request = python_pars[ 1 ];
    PyObject *par_stream = python_pars[ 2 ];
    PyObject *par_timeout = python_pars[ 3 ];
    PyObject *par_verify = python_pars[ 4 ];
    PyObject *par_cert = python_pars[ 5 ];
    PyObject *par_proxies = python_pars[ 6 ];
    PyObject *var_r = NULL;
    nuitka_bool var_chunked = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_e = NULL;
    PyObject *var_err = NULL;
    PyObject *var_header = NULL;
    PyObject *var_url = NULL;
    PyObject *var_value = NULL;
    PyObject *var_read = NULL;
    PyObject *var_low_conn = NULL;
    PyObject *var_connect = NULL;
    PyObject *var_i = NULL;
    PyObject *var_resp = NULL;
    PyObject *var_conn = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_cf4370e57fceaf0438a9f1bafe8a8bb6;
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
    bool tmp_result;
    PyObject *tmp_iterator_attempt;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_cf4370e57fceaf0438a9f1bafe8a8bb6 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cf4370e57fceaf0438a9f1bafe8a8bb6, codeobj_cf4370e57fceaf0438a9f1bafe8a8bb6, module_requests$adapters, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_cf4370e57fceaf0438a9f1bafe8a8bb6 = cache_frame_cf4370e57fceaf0438a9f1bafe8a8bb6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cf4370e57fceaf0438a9f1bafe8a8bb6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cf4370e57fceaf0438a9f1bafe8a8bb6 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get_connection );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 412;
            type_description_1 = "oooooooobooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_request );
        tmp_source_name_2 = par_request;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_url );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 412;
            type_description_1 = "oooooooobooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_proxies );
        tmp_args_element_name_2 = par_proxies;
        frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 412;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 412;
            type_description_1 = "oooooooobooooooooooo";
            goto try_except_handler_2;
        }
        assert( var_conn == NULL );
        var_conn = tmp_assign_source_1;
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
    PRESERVE_FRAME_EXCEPTION( frame_cf4370e57fceaf0438a9f1bafe8a8bb6 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_cf4370e57fceaf0438a9f1bafe8a8bb6, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_cf4370e57fceaf0438a9f1bafe8a8bb6, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_LocationValueError );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_LocationValueError );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "LocationValueError" );
            exception_tb = NULL;

            exception_lineno = 413;
            type_description_1 = "oooooooobooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_1;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 413;
            type_description_1 = "oooooooobooooooooooo";
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
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = EXC_VALUE(PyThreadState_GET());
            assert( var_e == NULL );
            Py_INCREF( tmp_assign_source_2 );
            var_e = tmp_assign_source_2;
        }
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_name_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_InvalidURL );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_InvalidURL );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "InvalidURL" );
                exception_tb = NULL;

                exception_lineno = 414;
                type_description_1 = "oooooooobooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            CHECK_OBJECT( var_e );
            tmp_tuple_element_1 = var_e;
            tmp_args_name_1 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
            CHECK_OBJECT( par_request );
            tmp_dict_value_1 = par_request;
            tmp_dict_key_1 = const_str_plain_request;
            tmp_kw_name_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 414;
            tmp_raise_type_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_args_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 414;
                type_description_1 = "oooooooobooooooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 414;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooobooooooooooo";
            goto frame_exception_exit_1;
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 411;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame) frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooobooooooooooo";
        goto frame_exception_exit_1;
        branch_end_1:;
    }
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_called_name_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_source_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_cert_verify );
        if ( tmp_called_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "oooooooobooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_conn );
        tmp_args_element_name_3 = var_conn;
        CHECK_OBJECT( par_request );
        tmp_source_name_4 = par_request;
        tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_url );
        if ( tmp_args_element_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_3 );

            exception_lineno = 416;
            type_description_1 = "oooooooobooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_verify );
        tmp_args_element_name_5 = par_verify;
        CHECK_OBJECT( par_cert );
        tmp_args_element_name_6 = par_cert;
        frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 416;
        {
            PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_3, call_args );
        }

        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "oooooooobooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT( par_request );
        tmp_args_element_name_7 = par_request;
        CHECK_OBJECT( par_proxies );
        tmp_args_element_name_8 = par_proxies;
        frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 417;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_request_url, call_args );
        }

        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 417;
            type_description_1 = "oooooooobooooooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_url == NULL );
        var_url = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_name_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_add_headers );
        if ( tmp_called_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;
            type_description_1 = "oooooooobooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_request );
        tmp_tuple_element_2 = par_request;
        tmp_args_name_2 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_2 );
        PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_stream );
        tmp_dict_value_2 = par_stream;
        tmp_dict_key_2 = const_str_plain_stream;
        tmp_kw_name_2 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_timeout );
        tmp_dict_value_3 = par_timeout;
        tmp_dict_key_3 = const_str_plain_timeout;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_verify );
        tmp_dict_value_4 = par_verify;
        tmp_dict_key_4 = const_str_plain_verify;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_cert );
        tmp_dict_value_5 = par_cert;
        tmp_dict_key_5 = const_str_plain_cert;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_proxies );
        tmp_dict_value_6 = par_proxies;
        tmp_dict_key_6 = const_str_plain_proxies;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 418;
        tmp_call_result_2 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 418;
            type_description_1 = "oooooooobooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    {
        nuitka_bool tmp_assign_source_4;
        PyObject *tmp_operand_name_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_6;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_7;
        CHECK_OBJECT( par_request );
        tmp_source_name_6 = par_request;
        tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_body );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 420;
            type_description_1 = "oooooooobooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = Py_None;
        tmp_or_left_value_1 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? Py_True : Py_False;
        Py_DECREF( tmp_compexpr_left_2 );
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == 1 )
        {
            goto or_left_1;
        }
        else
        {
            goto or_right_1;
        }
        or_right_1:;
        tmp_compexpr_left_3 = const_str_digest_3c9527fc53ea2272c2080ca035d6631c;
        CHECK_OBJECT( par_request );
        tmp_source_name_7 = par_request;
        tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_headers );
        if ( tmp_compexpr_right_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 420;
            type_description_1 = "oooooooobooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains( tmp_compexpr_right_3, tmp_compexpr_left_3 );
        Py_DECREF( tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 420;
            type_description_1 = "oooooooobooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = ( tmp_res == 1 ) ? Py_True : Py_False;
        tmp_operand_name_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_operand_name_1 = tmp_or_left_value_1;
        or_end_1:;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        assert( !(tmp_res == -1) );
        tmp_assign_source_4 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        var_chunked = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT( par_timeout );
        tmp_isinstance_inst_1 = par_timeout;
        tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 422;
            type_description_1 = "oooooooobooooooooooo";
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
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT( par_timeout );
            tmp_iter_arg_1 = par_timeout;
            tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 424;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_4;
            }
            assert( tmp_tuple_unpack_1__source_iter == NULL );
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_1, 0 );
            if ( tmp_assign_source_6 == NULL )
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


                type_description_1 = "oooooooobooooooooooo";
                exception_lineno = 424;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_1__element_1 == NULL );
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
            tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
            tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


                type_description_1 = "oooooooobooooooooooo";
                exception_lineno = 424;
                goto try_except_handler_5;
            }
            assert( tmp_tuple_unpack_1__element_2 == NULL );
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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

                        type_description_1 = "oooooooobooooooooooo";
                        exception_lineno = 424;
                        goto try_except_handler_5;
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

                type_description_1 = "oooooooobooooooooooo";
                exception_lineno = 424;
                goto try_except_handler_5;
            }
        }
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

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_4;
        // End of try:
        try_end_2:;
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

        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_3;
        // End of try:
        try_end_3:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
        Py_DECREF( tmp_tuple_unpack_1__source_iter );
        tmp_tuple_unpack_1__source_iter = NULL;

        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
            tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
            assert( var_connect == NULL );
            Py_INCREF( tmp_assign_source_8 );
            var_connect = tmp_assign_source_8;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_1 );
        tmp_tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
            tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
            assert( var_read == NULL );
            Py_INCREF( tmp_assign_source_9 );
            var_read = tmp_assign_source_9;
        }
        Py_XDECREF( tmp_tuple_unpack_1__element_2 );
        tmp_tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_kw_name_3;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_TimeoutSauce );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeoutSauce );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "TimeoutSauce" );
                exception_tb = NULL;

                exception_lineno = 425;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_3;
            }

            tmp_called_name_5 = tmp_mvar_value_3;
            CHECK_OBJECT( var_connect );
            tmp_dict_value_7 = var_connect;
            tmp_dict_key_7 = const_str_plain_connect;
            tmp_kw_name_3 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_7, tmp_dict_value_7 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( var_read );
            tmp_dict_value_8 = var_read;
            tmp_dict_key_8 = const_str_plain_read;
            tmp_res = PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_8, tmp_dict_value_8 );
            assert( !(tmp_res != 0) );
            frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 425;
            tmp_assign_source_10 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_5, tmp_kw_name_3 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 425;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = par_timeout;
                assert( old != NULL );
                par_timeout = tmp_assign_source_10;
                Py_DECREF( old );
            }

        }
        goto try_end_4;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_4 = exception_type;
        exception_keeper_value_4 = exception_value;
        exception_keeper_tb_4 = exception_tb;
        exception_keeper_lineno_4 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Preserve existing published exception.
        PRESERVE_FRAME_EXCEPTION( frame_cf4370e57fceaf0438a9f1bafe8a8bb6 );
        if ( exception_keeper_tb_4 == NULL )
        {
            exception_keeper_tb_4 = MAKE_TRACEBACK( frame_cf4370e57fceaf0438a9f1bafe8a8bb6, exception_keeper_lineno_4 );
        }
        else if ( exception_keeper_lineno_4 != 0 )
        {
            exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_cf4370e57fceaf0438a9f1bafe8a8bb6, exception_keeper_lineno_4 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
        PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            tmp_compexpr_left_4 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_4 = PyExc_ValueError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 426;
                type_description_1 = "oooooooobooooooooooo";
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
                tmp_assign_source_11 = EXC_VALUE(PyThreadState_GET());
                assert( var_e == NULL );
                Py_INCREF( tmp_assign_source_11 );
                var_e = tmp_assign_source_11;
            }
            {
                PyObject *tmp_assign_source_12;
                PyObject *tmp_called_instance_2;
                PyObject *tmp_args_element_name_9;
                tmp_called_instance_2 = const_str_digest_3753a9b47e94d50e84fafceba56d25b3;
                CHECK_OBJECT( par_timeout );
                tmp_args_element_name_9 = par_timeout;
                frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 428;
                {
                    PyObject *call_args[] = { tmp_args_element_name_9 };
                    tmp_assign_source_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_format, call_args );
                }

                if ( tmp_assign_source_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 428;
                    type_description_1 = "oooooooobooooooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_err == NULL );
                var_err = tmp_assign_source_12;
            }
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_make_exception_arg_1;
                CHECK_OBJECT( var_err );
                tmp_make_exception_arg_1 = var_err;
                frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 431;
                {
                    PyObject *call_args[] = { tmp_make_exception_arg_1 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
                }

                assert( !(tmp_raise_type_2 == NULL) );
                exception_type = tmp_raise_type_2;
                exception_lineno = 431;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooobooooooooooo";
                goto frame_exception_exit_1;
            }
            goto branch_end_3;
            branch_no_3:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 423;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame) frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooooooobooooooooooo";
            goto frame_exception_exit_1;
            branch_end_3:;
        }
        // End of try:
        try_end_4:;
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_isinstance_inst_2;
            PyObject *tmp_isinstance_cls_2;
            PyObject *tmp_mvar_value_4;
            CHECK_OBJECT( par_timeout );
            tmp_isinstance_inst_2 = par_timeout;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_TimeoutSauce );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeoutSauce );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "TimeoutSauce" );
                exception_tb = NULL;

                exception_lineno = 432;
                type_description_1 = "oooooooobooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_isinstance_cls_2 = tmp_mvar_value_4;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 432;
                type_description_1 = "oooooooobooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 432;
                type_description_1 = "oooooooobooooooooooo";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_4 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_called_name_6;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_kw_name_4;
                PyObject *tmp_dict_key_9;
                PyObject *tmp_dict_value_9;
                PyObject *tmp_dict_key_10;
                PyObject *tmp_dict_value_10;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_TimeoutSauce );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_TimeoutSauce );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "TimeoutSauce" );
                    exception_tb = NULL;

                    exception_lineno = 435;
                    type_description_1 = "oooooooobooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_6 = tmp_mvar_value_5;
                CHECK_OBJECT( par_timeout );
                tmp_dict_value_9 = par_timeout;
                tmp_dict_key_9 = const_str_plain_connect;
                tmp_kw_name_4 = _PyDict_NewPresized( 2 );
                tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_9, tmp_dict_value_9 );
                assert( !(tmp_res != 0) );
                CHECK_OBJECT( par_timeout );
                tmp_dict_value_10 = par_timeout;
                tmp_dict_key_10 = const_str_plain_read;
                tmp_res = PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_10, tmp_dict_value_10 );
                assert( !(tmp_res != 0) );
                frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 435;
                tmp_assign_source_13 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_6, tmp_kw_name_4 );
                Py_DECREF( tmp_kw_name_4 );
                if ( tmp_assign_source_13 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 435;
                    type_description_1 = "oooooooobooooooooooo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_timeout;
                    assert( old != NULL );
                    par_timeout = tmp_assign_source_13;
                    Py_DECREF( old );
                }

            }
            branch_no_4:;
        }
        branch_end_2:;
    }
    // Tried code:
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_operand_name_3;
        assert( var_chunked != NUITKA_BOOL_UNASSIGNED);
        tmp_operand_name_3 = ( var_chunked == NUITKA_BOOL_TRUE ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 438;
            type_description_1 = "oooooooobooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_5 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_14;
            PyObject *tmp_called_name_7;
            PyObject *tmp_source_name_8;
            PyObject *tmp_kw_name_5;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_source_name_9;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_source_name_10;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            PyObject *tmp_source_name_11;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            PyObject *tmp_dict_key_17;
            PyObject *tmp_dict_value_17;
            PyObject *tmp_dict_key_18;
            PyObject *tmp_dict_value_18;
            PyObject *tmp_dict_key_19;
            PyObject *tmp_dict_value_19;
            PyObject *tmp_source_name_12;
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            CHECK_OBJECT( var_conn );
            tmp_source_name_8 = var_conn;
            tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_urlopen );
            if ( tmp_called_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 439;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_6;
            }
            CHECK_OBJECT( par_request );
            tmp_source_name_9 = par_request;
            tmp_dict_value_11 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_method );
            if ( tmp_dict_value_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );

                exception_lineno = 440;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_6;
            }
            tmp_dict_key_11 = const_str_plain_method;
            tmp_kw_name_5 = _PyDict_NewPresized( 10 );
            tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_11, tmp_dict_value_11 );
            Py_DECREF( tmp_dict_value_11 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( var_url );
            tmp_dict_value_12 = var_url;
            tmp_dict_key_12 = const_str_plain_url;
            tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_12, tmp_dict_value_12 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( par_request );
            tmp_source_name_10 = par_request;
            tmp_dict_value_13 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_body );
            if ( tmp_dict_value_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_kw_name_5 );

                exception_lineno = 442;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_6;
            }
            tmp_dict_key_13 = const_str_plain_body;
            tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_13, tmp_dict_value_13 );
            Py_DECREF( tmp_dict_value_13 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( par_request );
            tmp_source_name_11 = par_request;
            tmp_dict_value_14 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_headers );
            if ( tmp_dict_value_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_kw_name_5 );

                exception_lineno = 443;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_6;
            }
            tmp_dict_key_14 = const_str_plain_headers;
            tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_14, tmp_dict_value_14 );
            Py_DECREF( tmp_dict_value_14 );
            assert( !(tmp_res != 0) );
            tmp_dict_value_15 = Py_False;
            tmp_dict_key_15 = const_str_plain_redirect;
            tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_15, tmp_dict_value_15 );
            assert( !(tmp_res != 0) );
            tmp_dict_value_16 = Py_False;
            tmp_dict_key_16 = const_str_plain_assert_same_host;
            tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_16, tmp_dict_value_16 );
            assert( !(tmp_res != 0) );
            tmp_dict_value_17 = Py_False;
            tmp_dict_key_17 = const_str_plain_preload_content;
            tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_17, tmp_dict_value_17 );
            assert( !(tmp_res != 0) );
            tmp_dict_value_18 = Py_False;
            tmp_dict_key_18 = const_str_plain_decode_content;
            tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_18, tmp_dict_value_18 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( par_self );
            tmp_source_name_12 = par_self;
            tmp_dict_value_19 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_max_retries );
            if ( tmp_dict_value_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_kw_name_5 );

                exception_lineno = 448;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_6;
            }
            tmp_dict_key_19 = const_str_plain_retries;
            tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_19, tmp_dict_value_19 );
            Py_DECREF( tmp_dict_value_19 );
            assert( !(tmp_res != 0) );
            if ( par_timeout == NULL )
            {
                Py_DECREF( tmp_called_name_7 );
                Py_DECREF( tmp_kw_name_5 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "timeout" );
                exception_tb = NULL;

                exception_lineno = 449;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_6;
            }

            tmp_dict_value_20 = par_timeout;
            tmp_dict_key_20 = const_str_plain_timeout;
            tmp_res = PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_20, tmp_dict_value_20 );
            assert( !(tmp_res != 0) );
            frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 439;
            tmp_assign_source_14 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_7, tmp_kw_name_5 );
            Py_DECREF( tmp_called_name_7 );
            Py_DECREF( tmp_kw_name_5 );
            if ( tmp_assign_source_14 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 439;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_6;
            }
            assert( var_resp == NULL );
            var_resp = tmp_assign_source_14;
        }
        goto branch_end_5;
        branch_no_5:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_source_name_13;
            PyObject *tmp_attribute_name_1;
            CHECK_OBJECT( var_conn );
            tmp_source_name_13 = var_conn;
            tmp_attribute_name_1 = const_str_plain_proxy_pool;
            tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_13, tmp_attribute_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 454;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_6;
            }
            tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_6;
            }
            else
            {
                goto branch_no_6;
            }
            branch_yes_6:;
            {
                PyObject *tmp_assign_source_15;
                PyObject *tmp_source_name_14;
                CHECK_OBJECT( var_conn );
                tmp_source_name_14 = var_conn;
                tmp_assign_source_15 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_proxy_pool );
                if ( tmp_assign_source_15 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 455;
                    type_description_1 = "oooooooobooooooooooo";
                    goto try_except_handler_6;
                }
                {
                    PyObject *old = var_conn;
                    assert( old != NULL );
                    var_conn = tmp_assign_source_15;
                    Py_DECREF( old );
                }

            }
            branch_no_6:;
        }
        {
            PyObject *tmp_assign_source_16;
            PyObject *tmp_called_name_8;
            PyObject *tmp_source_name_15;
            PyObject *tmp_kw_name_6;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            PyObject *tmp_mvar_value_6;
            CHECK_OBJECT( var_conn );
            tmp_source_name_15 = var_conn;
            tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain__get_conn );
            if ( tmp_called_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 457;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_6;
            }
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOL_TIMEOUT );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOL_TIMEOUT );
            }

            if ( tmp_mvar_value_6 == NULL )
            {
                Py_DECREF( tmp_called_name_8 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "DEFAULT_POOL_TIMEOUT" );
                exception_tb = NULL;

                exception_lineno = 457;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_6;
            }

            tmp_dict_value_21 = tmp_mvar_value_6;
            tmp_dict_key_21 = const_str_plain_timeout;
            tmp_kw_name_6 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_21, tmp_dict_value_21 );
            assert( !(tmp_res != 0) );
            frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 457;
            tmp_assign_source_16 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_8, tmp_kw_name_6 );
            Py_DECREF( tmp_called_name_8 );
            Py_DECREF( tmp_kw_name_6 );
            if ( tmp_assign_source_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 457;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_6;
            }
            assert( var_low_conn == NULL );
            var_low_conn = tmp_assign_source_16;
        }
        // Tried code:
        {
            PyObject *tmp_called_name_9;
            PyObject *tmp_source_name_16;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_name_3;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_source_name_17;
            PyObject *tmp_kw_name_7;
            CHECK_OBJECT( var_low_conn );
            tmp_source_name_16 = var_low_conn;
            tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_putrequest );
            if ( tmp_called_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 460;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_7;
            }
            CHECK_OBJECT( par_request );
            tmp_source_name_17 = par_request;
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_method );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_9 );

                exception_lineno = 460;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_7;
            }
            tmp_args_name_3 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( var_url );
            tmp_tuple_element_3 = var_url;
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_3 );
            tmp_kw_name_7 = PyDict_Copy( const_dict_d57bfa9a8ed7a88f3af4f0a6e5cfc141 );
            frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 460;
            tmp_call_result_3 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_3, tmp_kw_name_7 );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_args_name_3 );
            Py_DECREF( tmp_kw_name_7 );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 460;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_7;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_source_name_18;
            CHECK_OBJECT( par_request );
            tmp_source_name_18 = par_request;
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_headers );
            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 464;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_7;
            }
            frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 464;
            tmp_iter_arg_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_items );
            Py_DECREF( tmp_called_instance_3 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 464;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_7;
            }
            tmp_assign_source_17 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 464;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_7;
            }
            assert( tmp_for_loop_1__for_iterator == NULL );
            tmp_for_loop_1__for_iterator = tmp_assign_source_17;
        }
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT( tmp_for_loop_1__for_iterator );
            tmp_next_source_1 = tmp_for_loop_1__for_iterator;
            tmp_assign_source_18 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_18 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooobooooooooooo";
                    exception_lineno = 464;
                    goto try_except_handler_8;
                }
            }

            {
                PyObject *old = tmp_for_loop_1__iter_value;
                tmp_for_loop_1__iter_value = tmp_assign_source_18;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT( tmp_for_loop_1__iter_value );
            tmp_iter_arg_3 = tmp_for_loop_1__iter_value;
            tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_3 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 464;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_9;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__source_iter;
                tmp_tuple_unpack_2__source_iter = tmp_assign_source_19;
                Py_XDECREF( old );
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_unpack_3;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_20 = UNPACK_NEXT( tmp_unpack_3, 0 );
            if ( tmp_assign_source_20 == NULL )
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


                type_description_1 = "oooooooobooooooooooo";
                exception_lineno = 464;
                goto try_except_handler_10;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_1;
                tmp_tuple_unpack_2__element_1 = tmp_assign_source_20;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_21;
            PyObject *tmp_unpack_4;
            CHECK_OBJECT( tmp_tuple_unpack_2__source_iter );
            tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
            tmp_assign_source_21 = UNPACK_NEXT( tmp_unpack_4, 1 );
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


                type_description_1 = "oooooooobooooooooooo";
                exception_lineno = 464;
                goto try_except_handler_10;
            }
            {
                PyObject *old = tmp_tuple_unpack_2__element_2;
                tmp_tuple_unpack_2__element_2 = tmp_assign_source_21;
                Py_XDECREF( old );
            }

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

                        type_description_1 = "oooooooobooooooooooo";
                        exception_lineno = 464;
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

                type_description_1 = "oooooooobooooooooooo";
                exception_lineno = 464;
                goto try_except_handler_10;
            }
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_9;
        // End of try:
        try_end_5:;
        goto try_end_6;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_8;
        // End of try:
        try_end_6:;
        CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
        Py_DECREF( tmp_tuple_unpack_2__source_iter );
        tmp_tuple_unpack_2__source_iter = NULL;

        {
            PyObject *tmp_assign_source_22;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_1 );
            tmp_assign_source_22 = tmp_tuple_unpack_2__element_1;
            {
                PyObject *old = var_header;
                var_header = tmp_assign_source_22;
                Py_INCREF( var_header );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_1 );
        tmp_tuple_unpack_2__element_1 = NULL;

        {
            PyObject *tmp_assign_source_23;
            CHECK_OBJECT( tmp_tuple_unpack_2__element_2 );
            tmp_assign_source_23 = tmp_tuple_unpack_2__element_2;
            {
                PyObject *old = var_value;
                var_value = tmp_assign_source_23;
                Py_INCREF( var_value );
                Py_XDECREF( old );
            }

        }
        Py_XDECREF( tmp_tuple_unpack_2__element_2 );
        tmp_tuple_unpack_2__element_2 = NULL;

        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_call_result_4;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_args_element_name_11;
            CHECK_OBJECT( var_low_conn );
            tmp_called_instance_4 = var_low_conn;
            CHECK_OBJECT( var_header );
            tmp_args_element_name_10 = var_header;
            CHECK_OBJECT( var_value );
            tmp_args_element_name_11 = var_value;
            frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 465;
            {
                PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
                tmp_call_result_4 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_4, const_str_plain_putheader, call_args );
            }

            if ( tmp_call_result_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 465;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_8;
            }
            Py_DECREF( tmp_call_result_4 );
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 464;
            type_description_1 = "oooooooobooooooooooo";
            goto try_except_handler_8;
        }
        goto loop_start_1;
        loop_end_1:;
        goto try_end_7;
        // Exception handler code:
        try_except_handler_8:;
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

        goto try_except_handler_7;
        // End of try:
        try_end_7:;
        Py_XDECREF( tmp_for_loop_1__iter_value );
        tmp_for_loop_1__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
        Py_DECREF( tmp_for_loop_1__for_iterator );
        tmp_for_loop_1__for_iterator = NULL;

        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_call_result_5;
            CHECK_OBJECT( var_low_conn );
            tmp_called_instance_5 = var_low_conn;
            frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 467;
            tmp_call_result_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_endheaders );
            if ( tmp_call_result_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 467;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_7;
            }
            Py_DECREF( tmp_call_result_5 );
        }
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_iter_arg_4;
            PyObject *tmp_source_name_19;
            CHECK_OBJECT( par_request );
            tmp_source_name_19 = par_request;
            tmp_iter_arg_4 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_body );
            if ( tmp_iter_arg_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 469;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_7;
            }
            tmp_assign_source_24 = MAKE_ITERATOR( tmp_iter_arg_4 );
            Py_DECREF( tmp_iter_arg_4 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 469;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_7;
            }
            assert( tmp_for_loop_2__for_iterator == NULL );
            tmp_for_loop_2__for_iterator = tmp_assign_source_24;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_25;
            CHECK_OBJECT( tmp_for_loop_2__for_iterator );
            tmp_next_source_2 = tmp_for_loop_2__for_iterator;
            tmp_assign_source_25 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_25 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooobooooooooooo";
                    exception_lineno = 469;
                    goto try_except_handler_11;
                }
            }

            {
                PyObject *old = tmp_for_loop_2__iter_value;
                tmp_for_loop_2__iter_value = tmp_assign_source_25;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_26;
            CHECK_OBJECT( tmp_for_loop_2__iter_value );
            tmp_assign_source_26 = tmp_for_loop_2__iter_value;
            {
                PyObject *old = var_i;
                var_i = tmp_assign_source_26;
                Py_INCREF( var_i );
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_called_name_10;
            PyObject *tmp_source_name_20;
            PyObject *tmp_call_result_6;
            PyObject *tmp_args_element_name_12;
            PyObject *tmp_called_instance_6;
            Py_ssize_t tmp_sliceslicedel_index_lower_1;
            Py_ssize_t tmp_slice_index_upper_1;
            PyObject *tmp_slice_source_1;
            PyObject *tmp_hex_arg_1;
            PyObject *tmp_len_arg_1;
            CHECK_OBJECT( var_low_conn );
            tmp_source_name_20 = var_low_conn;
            tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_send );
            if ( tmp_called_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 470;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_11;
            }
            tmp_sliceslicedel_index_lower_1 = 2;
            tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
            CHECK_OBJECT( var_i );
            tmp_len_arg_1 = var_i;
            tmp_hex_arg_1 = BUILTIN_LEN( tmp_len_arg_1 );
            if ( tmp_hex_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_10 );

                exception_lineno = 470;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_11;
            }
            tmp_slice_source_1 = BUILTIN_HEX( tmp_hex_arg_1 );
            Py_DECREF( tmp_hex_arg_1 );
            if ( tmp_slice_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_10 );

                exception_lineno = 470;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_11;
            }
            tmp_called_instance_6 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
            Py_DECREF( tmp_slice_source_1 );
            if ( tmp_called_instance_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_10 );

                exception_lineno = 470;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_11;
            }
            frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 470;
            tmp_args_element_name_12 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

            Py_DECREF( tmp_called_instance_6 );
            if ( tmp_args_element_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_10 );

                exception_lineno = 470;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_11;
            }
            frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 470;
            {
                PyObject *call_args[] = { tmp_args_element_name_12 };
                tmp_call_result_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
            }

            Py_DECREF( tmp_called_name_10 );
            Py_DECREF( tmp_args_element_name_12 );
            if ( tmp_call_result_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 470;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_11;
            }
            Py_DECREF( tmp_call_result_6 );
        }
        {
            PyObject *tmp_called_instance_7;
            PyObject *tmp_call_result_7;
            CHECK_OBJECT( var_low_conn );
            tmp_called_instance_7 = var_low_conn;
            frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 471;
            tmp_call_result_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_send, &PyTuple_GET_ITEM( const_tuple_str_digest_7ca129d2d421fe965ad48cbb290b579b_tuple, 0 ) );

            if ( tmp_call_result_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 471;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_11;
            }
            Py_DECREF( tmp_call_result_7 );
        }
        {
            PyObject *tmp_called_instance_8;
            PyObject *tmp_call_result_8;
            PyObject *tmp_args_element_name_13;
            CHECK_OBJECT( var_low_conn );
            tmp_called_instance_8 = var_low_conn;
            CHECK_OBJECT( var_i );
            tmp_args_element_name_13 = var_i;
            frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 472;
            {
                PyObject *call_args[] = { tmp_args_element_name_13 };
                tmp_call_result_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_send, call_args );
            }

            if ( tmp_call_result_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 472;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_11;
            }
            Py_DECREF( tmp_call_result_8 );
        }
        {
            PyObject *tmp_called_instance_9;
            PyObject *tmp_call_result_9;
            CHECK_OBJECT( var_low_conn );
            tmp_called_instance_9 = var_low_conn;
            frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 473;
            tmp_call_result_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_send, &PyTuple_GET_ITEM( const_tuple_str_digest_7ca129d2d421fe965ad48cbb290b579b_tuple, 0 ) );

            if ( tmp_call_result_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 473;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_11;
            }
            Py_DECREF( tmp_call_result_9 );
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 469;
            type_description_1 = "oooooooobooooooooooo";
            goto try_except_handler_11;
        }
        goto loop_start_2;
        loop_end_2:;
        goto try_end_8;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
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
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_7;
        // End of try:
        try_end_8:;
        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        {
            PyObject *tmp_called_instance_10;
            PyObject *tmp_call_result_10;
            CHECK_OBJECT( var_low_conn );
            tmp_called_instance_10 = var_low_conn;
            frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 474;
            tmp_call_result_10 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_send, &PyTuple_GET_ITEM( const_tuple_str_digest_0910c0c2f1750b2fe8203b1da8f91dfb_tuple, 0 ) );

            if ( tmp_call_result_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 474;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_7;
            }
            Py_DECREF( tmp_call_result_10 );
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_27;
            PyObject *tmp_called_name_11;
            PyObject *tmp_source_name_21;
            PyObject *tmp_kw_name_8;
            CHECK_OBJECT( var_low_conn );
            tmp_source_name_21 = var_low_conn;
            tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_getresponse );
            if ( tmp_called_name_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 479;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_12;
            }
            tmp_kw_name_8 = PyDict_Copy( const_dict_f965c4886458f8f721a7913cea1cd007 );
            frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 479;
            tmp_assign_source_27 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_11, tmp_kw_name_8 );
            Py_DECREF( tmp_called_name_11 );
            Py_DECREF( tmp_kw_name_8 );
            if ( tmp_assign_source_27 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 479;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_12;
            }
            assert( var_r == NULL );
            var_r = tmp_assign_source_27;
        }
        goto try_end_9;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Preserve existing published exception.
        PRESERVE_FRAME_EXCEPTION( frame_cf4370e57fceaf0438a9f1bafe8a8bb6 );
        if ( exception_keeper_tb_9 == NULL )
        {
            exception_keeper_tb_9 = MAKE_TRACEBACK( frame_cf4370e57fceaf0438a9f1bafe8a8bb6, exception_keeper_lineno_9 );
        }
        else if ( exception_keeper_lineno_9 != 0 )
        {
            exception_keeper_tb_9 = ADD_TRACEBACK( exception_keeper_tb_9, frame_cf4370e57fceaf0438a9f1bafe8a8bb6, exception_keeper_lineno_9 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9 );
        PUBLISH_EXCEPTION( &exception_keeper_type_9, &exception_keeper_value_9, &exception_keeper_tb_9 );
        {
            nuitka_bool tmp_condition_result_7;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            tmp_compexpr_left_5 = EXC_TYPE(PyThreadState_GET());
            tmp_compexpr_right_5 = PyExc_TypeError;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_5, tmp_compexpr_right_5 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 480;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_7;
            }
            tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_28;
                PyObject *tmp_called_instance_11;
                CHECK_OBJECT( var_low_conn );
                tmp_called_instance_11 = var_low_conn;
                frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 482;
                tmp_assign_source_28 = CALL_METHOD_NO_ARGS( tmp_called_instance_11, const_str_plain_getresponse );
                if ( tmp_assign_source_28 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 482;
                    type_description_1 = "oooooooobooooooooooo";
                    goto try_except_handler_7;
                }
                assert( var_r == NULL );
                var_r = tmp_assign_source_28;
            }
            goto branch_end_7;
            branch_no_7:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 477;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame) frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooooooobooooooooooo";
            goto try_except_handler_7;
            branch_end_7:;
        }
        goto try_end_9;
        // exception handler codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_17_send );
        return NULL;
        // End of try:
        try_end_9:;
        {
            PyObject *tmp_assign_source_29;
            PyObject *tmp_called_name_12;
            PyObject *tmp_source_name_22;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_name_4;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kw_name_9;
            PyObject *tmp_dict_key_22;
            PyObject *tmp_dict_value_22;
            PyObject *tmp_dict_key_23;
            PyObject *tmp_dict_value_23;
            PyObject *tmp_dict_key_24;
            PyObject *tmp_dict_value_24;
            PyObject *tmp_dict_key_25;
            PyObject *tmp_dict_value_25;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_HTTPResponse );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPResponse );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "HTTPResponse" );
                exception_tb = NULL;

                exception_lineno = 484;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_7;
            }

            tmp_source_name_22 = tmp_mvar_value_7;
            tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_from_httplib );
            if ( tmp_called_name_12 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 484;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_7;
            }
            if ( var_r == NULL )
            {
                Py_DECREF( tmp_called_name_12 );
                exception_type = PyExc_UnboundLocalError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "r" );
                exception_tb = NULL;

                exception_lineno = 485;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_7;
            }

            tmp_tuple_element_4 = var_r;
            tmp_args_name_4 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_4 );
            CHECK_OBJECT( var_conn );
            tmp_dict_value_22 = var_conn;
            tmp_dict_key_22 = const_str_plain_pool;
            tmp_kw_name_9 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem( tmp_kw_name_9, tmp_dict_key_22, tmp_dict_value_22 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( var_low_conn );
            tmp_dict_value_23 = var_low_conn;
            tmp_dict_key_23 = const_str_plain_connection;
            tmp_res = PyDict_SetItem( tmp_kw_name_9, tmp_dict_key_23, tmp_dict_value_23 );
            assert( !(tmp_res != 0) );
            tmp_dict_value_24 = Py_False;
            tmp_dict_key_24 = const_str_plain_preload_content;
            tmp_res = PyDict_SetItem( tmp_kw_name_9, tmp_dict_key_24, tmp_dict_value_24 );
            assert( !(tmp_res != 0) );
            tmp_dict_value_25 = Py_False;
            tmp_dict_key_25 = const_str_plain_decode_content;
            tmp_res = PyDict_SetItem( tmp_kw_name_9, tmp_dict_key_25, tmp_dict_value_25 );
            assert( !(tmp_res != 0) );
            frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 484;
            tmp_assign_source_29 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_4, tmp_kw_name_9 );
            Py_DECREF( tmp_called_name_12 );
            Py_DECREF( tmp_args_name_4 );
            Py_DECREF( tmp_kw_name_9 );
            if ( tmp_assign_source_29 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 484;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_7;
            }
            assert( var_resp == NULL );
            var_resp = tmp_assign_source_29;
        }
        goto try_end_10;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Preserve existing published exception.
        PRESERVE_FRAME_EXCEPTION( frame_cf4370e57fceaf0438a9f1bafe8a8bb6 );
        if ( exception_keeper_tb_10 == NULL )
        {
            exception_keeper_tb_10 = MAKE_TRACEBACK( frame_cf4370e57fceaf0438a9f1bafe8a8bb6, exception_keeper_lineno_10 );
        }
        else if ( exception_keeper_lineno_10 != 0 )
        {
            exception_keeper_tb_10 = ADD_TRACEBACK( exception_keeper_tb_10, frame_cf4370e57fceaf0438a9f1bafe8a8bb6, exception_keeper_lineno_10 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_10, &exception_keeper_value_10, &exception_keeper_tb_10 );
        PUBLISH_EXCEPTION( &exception_keeper_type_10, &exception_keeper_value_10, &exception_keeper_tb_10 );
        {
            PyObject *tmp_called_instance_12;
            PyObject *tmp_call_result_11;
            CHECK_OBJECT( var_low_conn );
            tmp_called_instance_12 = var_low_conn;
            frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 494;
            tmp_call_result_11 = CALL_METHOD_NO_ARGS( tmp_called_instance_12, const_str_plain_close );
            if ( tmp_call_result_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 494;
                type_description_1 = "oooooooobooooooooooo";
                goto try_except_handler_6;
            }
            Py_DECREF( tmp_call_result_11 );
        }
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 495;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame) frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "oooooooobooooooooooo";
        goto try_except_handler_6;
        // End of try:
        try_end_10:;
        branch_end_5:;
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_cf4370e57fceaf0438a9f1bafe8a8bb6 );
    if ( exception_keeper_tb_11 == NULL )
    {
        exception_keeper_tb_11 = MAKE_TRACEBACK( frame_cf4370e57fceaf0438a9f1bafe8a8bb6, exception_keeper_lineno_11 );
    }
    else if ( exception_keeper_lineno_11 != 0 )
    {
        exception_keeper_tb_11 = ADD_TRACEBACK( exception_keeper_tb_11, frame_cf4370e57fceaf0438a9f1bafe8a8bb6, exception_keeper_lineno_11 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_11, &exception_keeper_value_11, &exception_keeper_tb_11 );
    PUBLISH_EXCEPTION( &exception_keeper_type_11, &exception_keeper_value_11, &exception_keeper_tb_11 );
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_source_name_23;
        PyObject *tmp_mvar_value_9;
        tmp_compexpr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ProtocolError );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProtocolError );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "ProtocolError" );
            exception_tb = NULL;

            exception_lineno = 497;
            type_description_1 = "oooooooobooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_5 = tmp_mvar_value_8;
        tmp_compexpr_right_6 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_compexpr_right_6, 0, tmp_tuple_element_5 );
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_socket );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
        }

        if ( tmp_mvar_value_9 == NULL )
        {
            Py_DECREF( tmp_compexpr_right_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "socket" );
            exception_tb = NULL;

            exception_lineno = 497;
            type_description_1 = "oooooooobooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_23 = tmp_mvar_value_9;
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_error );
        if ( tmp_tuple_element_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_right_6 );

            exception_lineno = 497;
            type_description_1 = "oooooooobooooooooooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_compexpr_right_6, 1, tmp_tuple_element_5 );
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        Py_DECREF( tmp_compexpr_right_6 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 497;
            type_description_1 = "oooooooobooooooooooo";
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
            PyObject *tmp_assign_source_30;
            tmp_assign_source_30 = EXC_VALUE(PyThreadState_GET());
            assert( var_err == NULL );
            Py_INCREF( tmp_assign_source_30 );
            var_err = tmp_assign_source_30;
        }
        {
            PyObject *tmp_raise_type_3;
            PyObject *tmp_called_name_13;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_args_name_5;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kw_name_10;
            PyObject *tmp_dict_key_26;
            PyObject *tmp_dict_value_26;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ConnectionError );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionError );
            }

            if ( tmp_mvar_value_10 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "ConnectionError" );
                exception_tb = NULL;

                exception_lineno = 498;
                type_description_1 = "oooooooobooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_13 = tmp_mvar_value_10;
            CHECK_OBJECT( var_err );
            tmp_tuple_element_6 = var_err;
            tmp_args_name_5 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_6 );
            PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_6 );
            CHECK_OBJECT( par_request );
            tmp_dict_value_26 = par_request;
            tmp_dict_key_26 = const_str_plain_request;
            tmp_kw_name_10 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem( tmp_kw_name_10, tmp_dict_key_26, tmp_dict_value_26 );
            assert( !(tmp_res != 0) );
            frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 498;
            tmp_raise_type_3 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_5, tmp_kw_name_10 );
            Py_DECREF( tmp_args_name_5 );
            Py_DECREF( tmp_kw_name_10 );
            if ( tmp_raise_type_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 498;
                type_description_1 = "oooooooobooooooooooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_3;
            exception_lineno = 498;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooooooobooooooooooo";
            goto frame_exception_exit_1;
        }
        goto branch_end_8;
        branch_no_8:;
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_compexpr_left_7;
            PyObject *tmp_compexpr_right_7;
            PyObject *tmp_mvar_value_11;
            tmp_compexpr_left_7 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_MaxRetryError );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_MaxRetryError );
            }

            if ( tmp_mvar_value_11 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "MaxRetryError" );
                exception_tb = NULL;

                exception_lineno = 500;
                type_description_1 = "oooooooobooooooooooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_7 = tmp_mvar_value_11;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_7, tmp_compexpr_right_7 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 500;
                type_description_1 = "oooooooobooooooooooo";
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
                PyObject *tmp_assign_source_31;
                tmp_assign_source_31 = EXC_VALUE(PyThreadState_GET());
                assert( var_e == NULL );
                Py_INCREF( tmp_assign_source_31 );
                var_e = tmp_assign_source_31;
            }
            {
                nuitka_bool tmp_condition_result_10;
                PyObject *tmp_isinstance_inst_3;
                PyObject *tmp_isinstance_cls_3;
                PyObject *tmp_source_name_24;
                PyObject *tmp_mvar_value_12;
                CHECK_OBJECT( var_e );
                tmp_source_name_24 = var_e;
                tmp_isinstance_inst_3 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_reason );
                if ( tmp_isinstance_inst_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 501;
                    type_description_1 = "oooooooobooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );

                if (unlikely( tmp_mvar_value_12 == NULL ))
                {
                    tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );
                }

                if ( tmp_mvar_value_12 == NULL )
                {
                    Py_DECREF( tmp_isinstance_inst_3 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "ConnectTimeoutError" );
                    exception_tb = NULL;

                    exception_lineno = 501;
                    type_description_1 = "oooooooobooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_isinstance_cls_3 = tmp_mvar_value_12;
                tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
                Py_DECREF( tmp_isinstance_inst_3 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 501;
                    type_description_1 = "oooooooobooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_10 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    nuitka_bool tmp_condition_result_11;
                    PyObject *tmp_operand_name_4;
                    PyObject *tmp_isinstance_inst_4;
                    PyObject *tmp_isinstance_cls_4;
                    PyObject *tmp_source_name_25;
                    PyObject *tmp_mvar_value_13;
                    CHECK_OBJECT( var_e );
                    tmp_source_name_25 = var_e;
                    tmp_isinstance_inst_4 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_reason );
                    if ( tmp_isinstance_inst_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 503;
                        type_description_1 = "oooooooobooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_NewConnectionError );

                    if (unlikely( tmp_mvar_value_13 == NULL ))
                    {
                        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NewConnectionError );
                    }

                    if ( tmp_mvar_value_13 == NULL )
                    {
                        Py_DECREF( tmp_isinstance_inst_4 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NewConnectionError" );
                        exception_tb = NULL;

                        exception_lineno = 503;
                        type_description_1 = "oooooooobooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_isinstance_cls_4 = tmp_mvar_value_13;
                    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_4, tmp_isinstance_cls_4 );
                    Py_DECREF( tmp_isinstance_inst_4 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 503;
                        type_description_1 = "oooooooobooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_operand_name_4 = ( tmp_res != 0 ) ? Py_True : Py_False;
                    tmp_res = CHECK_IF_TRUE( tmp_operand_name_4 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 503;
                        type_description_1 = "oooooooobooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_11 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                        PyObject *tmp_raise_type_4;
                        PyObject *tmp_called_name_14;
                        PyObject *tmp_mvar_value_14;
                        PyObject *tmp_args_name_6;
                        PyObject *tmp_tuple_element_7;
                        PyObject *tmp_kw_name_11;
                        PyObject *tmp_dict_key_27;
                        PyObject *tmp_dict_value_27;
                        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ConnectTimeout );

                        if (unlikely( tmp_mvar_value_14 == NULL ))
                        {
                            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectTimeout );
                        }

                        if ( tmp_mvar_value_14 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyString_FromFormat( "global name '%s' is not defined", "ConnectTimeout" );
                            exception_tb = NULL;

                            exception_lineno = 504;
                            type_description_1 = "oooooooobooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_name_14 = tmp_mvar_value_14;
                        CHECK_OBJECT( var_e );
                        tmp_tuple_element_7 = var_e;
                        tmp_args_name_6 = PyTuple_New( 1 );
                        Py_INCREF( tmp_tuple_element_7 );
                        PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_7 );
                        CHECK_OBJECT( par_request );
                        tmp_dict_value_27 = par_request;
                        tmp_dict_key_27 = const_str_plain_request;
                        tmp_kw_name_11 = _PyDict_NewPresized( 1 );
                        tmp_res = PyDict_SetItem( tmp_kw_name_11, tmp_dict_key_27, tmp_dict_value_27 );
                        assert( !(tmp_res != 0) );
                        frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 504;
                        tmp_raise_type_4 = CALL_FUNCTION( tmp_called_name_14, tmp_args_name_6, tmp_kw_name_11 );
                        Py_DECREF( tmp_args_name_6 );
                        Py_DECREF( tmp_kw_name_11 );
                        if ( tmp_raise_type_4 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 504;
                            type_description_1 = "oooooooobooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        exception_type = tmp_raise_type_4;
                        exception_lineno = 504;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oooooooobooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    branch_no_11:;
                }
                branch_no_10:;
            }
            {
                nuitka_bool tmp_condition_result_12;
                PyObject *tmp_isinstance_inst_5;
                PyObject *tmp_isinstance_cls_5;
                PyObject *tmp_source_name_26;
                PyObject *tmp_mvar_value_15;
                CHECK_OBJECT( var_e );
                tmp_source_name_26 = var_e;
                tmp_isinstance_inst_5 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_reason );
                if ( tmp_isinstance_inst_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 506;
                    type_description_1 = "oooooooobooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ResponseError );

                if (unlikely( tmp_mvar_value_15 == NULL ))
                {
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ResponseError );
                }

                if ( tmp_mvar_value_15 == NULL )
                {
                    Py_DECREF( tmp_isinstance_inst_5 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "ResponseError" );
                    exception_tb = NULL;

                    exception_lineno = 506;
                    type_description_1 = "oooooooobooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_isinstance_cls_5 = tmp_mvar_value_15;
                tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_5, tmp_isinstance_cls_5 );
                Py_DECREF( tmp_isinstance_inst_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 506;
                    type_description_1 = "oooooooobooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_12 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_raise_type_5;
                    PyObject *tmp_called_name_15;
                    PyObject *tmp_mvar_value_16;
                    PyObject *tmp_args_name_7;
                    PyObject *tmp_tuple_element_8;
                    PyObject *tmp_kw_name_12;
                    PyObject *tmp_dict_key_28;
                    PyObject *tmp_dict_value_28;
                    tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_RetryError );

                    if (unlikely( tmp_mvar_value_16 == NULL ))
                    {
                        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RetryError );
                    }

                    if ( tmp_mvar_value_16 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "RetryError" );
                        exception_tb = NULL;

                        exception_lineno = 507;
                        type_description_1 = "oooooooobooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_15 = tmp_mvar_value_16;
                    CHECK_OBJECT( var_e );
                    tmp_tuple_element_8 = var_e;
                    tmp_args_name_7 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_8 );
                    PyTuple_SET_ITEM( tmp_args_name_7, 0, tmp_tuple_element_8 );
                    CHECK_OBJECT( par_request );
                    tmp_dict_value_28 = par_request;
                    tmp_dict_key_28 = const_str_plain_request;
                    tmp_kw_name_12 = _PyDict_NewPresized( 1 );
                    tmp_res = PyDict_SetItem( tmp_kw_name_12, tmp_dict_key_28, tmp_dict_value_28 );
                    assert( !(tmp_res != 0) );
                    frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 507;
                    tmp_raise_type_5 = CALL_FUNCTION( tmp_called_name_15, tmp_args_name_7, tmp_kw_name_12 );
                    Py_DECREF( tmp_args_name_7 );
                    Py_DECREF( tmp_kw_name_12 );
                    if ( tmp_raise_type_5 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 507;
                        type_description_1 = "oooooooobooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    exception_type = tmp_raise_type_5;
                    exception_lineno = 507;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooobooooooooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_12:;
            }
            {
                nuitka_bool tmp_condition_result_13;
                PyObject *tmp_isinstance_inst_6;
                PyObject *tmp_isinstance_cls_6;
                PyObject *tmp_source_name_27;
                PyObject *tmp_mvar_value_17;
                CHECK_OBJECT( var_e );
                tmp_source_name_27 = var_e;
                tmp_isinstance_inst_6 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_reason );
                if ( tmp_isinstance_inst_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 509;
                    type_description_1 = "oooooooobooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__ProxyError );

                if (unlikely( tmp_mvar_value_17 == NULL ))
                {
                    tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ProxyError );
                }

                if ( tmp_mvar_value_17 == NULL )
                {
                    Py_DECREF( tmp_isinstance_inst_6 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "_ProxyError" );
                    exception_tb = NULL;

                    exception_lineno = 509;
                    type_description_1 = "oooooooobooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_isinstance_cls_6 = tmp_mvar_value_17;
                tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_6, tmp_isinstance_cls_6 );
                Py_DECREF( tmp_isinstance_inst_6 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 509;
                    type_description_1 = "oooooooobooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_13 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_raise_type_6;
                    PyObject *tmp_called_name_16;
                    PyObject *tmp_mvar_value_18;
                    PyObject *tmp_args_name_8;
                    PyObject *tmp_tuple_element_9;
                    PyObject *tmp_kw_name_13;
                    PyObject *tmp_dict_key_29;
                    PyObject *tmp_dict_value_29;
                    tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ProxyError );

                    if (unlikely( tmp_mvar_value_18 == NULL ))
                    {
                        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProxyError );
                    }

                    if ( tmp_mvar_value_18 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ProxyError" );
                        exception_tb = NULL;

                        exception_lineno = 510;
                        type_description_1 = "oooooooobooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_16 = tmp_mvar_value_18;
                    CHECK_OBJECT( var_e );
                    tmp_tuple_element_9 = var_e;
                    tmp_args_name_8 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_9 );
                    PyTuple_SET_ITEM( tmp_args_name_8, 0, tmp_tuple_element_9 );
                    CHECK_OBJECT( par_request );
                    tmp_dict_value_29 = par_request;
                    tmp_dict_key_29 = const_str_plain_request;
                    tmp_kw_name_13 = _PyDict_NewPresized( 1 );
                    tmp_res = PyDict_SetItem( tmp_kw_name_13, tmp_dict_key_29, tmp_dict_value_29 );
                    assert( !(tmp_res != 0) );
                    frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 510;
                    tmp_raise_type_6 = CALL_FUNCTION( tmp_called_name_16, tmp_args_name_8, tmp_kw_name_13 );
                    Py_DECREF( tmp_args_name_8 );
                    Py_DECREF( tmp_kw_name_13 );
                    if ( tmp_raise_type_6 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 510;
                        type_description_1 = "oooooooobooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    exception_type = tmp_raise_type_6;
                    exception_lineno = 510;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooobooooooooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_13:;
            }
            {
                nuitka_bool tmp_condition_result_14;
                PyObject *tmp_isinstance_inst_7;
                PyObject *tmp_isinstance_cls_7;
                PyObject *tmp_source_name_28;
                PyObject *tmp_mvar_value_19;
                CHECK_OBJECT( var_e );
                tmp_source_name_28 = var_e;
                tmp_isinstance_inst_7 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_reason );
                if ( tmp_isinstance_inst_7 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 512;
                    type_description_1 = "oooooooobooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__SSLError );

                if (unlikely( tmp_mvar_value_19 == NULL ))
                {
                    tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__SSLError );
                }

                if ( tmp_mvar_value_19 == NULL )
                {
                    Py_DECREF( tmp_isinstance_inst_7 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "_SSLError" );
                    exception_tb = NULL;

                    exception_lineno = 512;
                    type_description_1 = "oooooooobooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_isinstance_cls_7 = tmp_mvar_value_19;
                tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_7, tmp_isinstance_cls_7 );
                Py_DECREF( tmp_isinstance_inst_7 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 512;
                    type_description_1 = "oooooooobooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_14 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                    PyObject *tmp_raise_type_7;
                    PyObject *tmp_called_name_17;
                    PyObject *tmp_mvar_value_20;
                    PyObject *tmp_args_name_9;
                    PyObject *tmp_tuple_element_10;
                    PyObject *tmp_kw_name_14;
                    PyObject *tmp_dict_key_30;
                    PyObject *tmp_dict_value_30;
                    tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_SSLError );

                    if (unlikely( tmp_mvar_value_20 == NULL ))
                    {
                        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
                    }

                    if ( tmp_mvar_value_20 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SSLError" );
                        exception_tb = NULL;

                        exception_lineno = 514;
                        type_description_1 = "oooooooobooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_17 = tmp_mvar_value_20;
                    CHECK_OBJECT( var_e );
                    tmp_tuple_element_10 = var_e;
                    tmp_args_name_9 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_10 );
                    PyTuple_SET_ITEM( tmp_args_name_9, 0, tmp_tuple_element_10 );
                    CHECK_OBJECT( par_request );
                    tmp_dict_value_30 = par_request;
                    tmp_dict_key_30 = const_str_plain_request;
                    tmp_kw_name_14 = _PyDict_NewPresized( 1 );
                    tmp_res = PyDict_SetItem( tmp_kw_name_14, tmp_dict_key_30, tmp_dict_value_30 );
                    assert( !(tmp_res != 0) );
                    frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 514;
                    tmp_raise_type_7 = CALL_FUNCTION( tmp_called_name_17, tmp_args_name_9, tmp_kw_name_14 );
                    Py_DECREF( tmp_args_name_9 );
                    Py_DECREF( tmp_kw_name_14 );
                    if ( tmp_raise_type_7 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 514;
                        type_description_1 = "oooooooobooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    exception_type = tmp_raise_type_7;
                    exception_lineno = 514;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooobooooooooooo";
                    goto frame_exception_exit_1;
                }
                branch_no_14:;
            }
            {
                PyObject *tmp_raise_type_8;
                PyObject *tmp_called_name_18;
                PyObject *tmp_mvar_value_21;
                PyObject *tmp_args_name_10;
                PyObject *tmp_tuple_element_11;
                PyObject *tmp_kw_name_15;
                PyObject *tmp_dict_key_31;
                PyObject *tmp_dict_value_31;
                tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ConnectionError );

                if (unlikely( tmp_mvar_value_21 == NULL ))
                {
                    tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionError );
                }

                if ( tmp_mvar_value_21 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "ConnectionError" );
                    exception_tb = NULL;

                    exception_lineno = 516;
                    type_description_1 = "oooooooobooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_18 = tmp_mvar_value_21;
                CHECK_OBJECT( var_e );
                tmp_tuple_element_11 = var_e;
                tmp_args_name_10 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_11 );
                PyTuple_SET_ITEM( tmp_args_name_10, 0, tmp_tuple_element_11 );
                CHECK_OBJECT( par_request );
                tmp_dict_value_31 = par_request;
                tmp_dict_key_31 = const_str_plain_request;
                tmp_kw_name_15 = _PyDict_NewPresized( 1 );
                tmp_res = PyDict_SetItem( tmp_kw_name_15, tmp_dict_key_31, tmp_dict_value_31 );
                assert( !(tmp_res != 0) );
                frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 516;
                tmp_raise_type_8 = CALL_FUNCTION( tmp_called_name_18, tmp_args_name_10, tmp_kw_name_15 );
                Py_DECREF( tmp_args_name_10 );
                Py_DECREF( tmp_kw_name_15 );
                if ( tmp_raise_type_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 516;
                    type_description_1 = "oooooooobooooooooooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_8;
                exception_lineno = 516;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooobooooooooooo";
                goto frame_exception_exit_1;
            }
            goto branch_end_9;
            branch_no_9:;
            {
                nuitka_bool tmp_condition_result_15;
                PyObject *tmp_compexpr_left_8;
                PyObject *tmp_compexpr_right_8;
                PyObject *tmp_mvar_value_22;
                tmp_compexpr_left_8 = EXC_TYPE(PyThreadState_GET());
                tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ClosedPoolError );

                if (unlikely( tmp_mvar_value_22 == NULL ))
                {
                    tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ClosedPoolError );
                }

                if ( tmp_mvar_value_22 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "ClosedPoolError" );
                    exception_tb = NULL;

                    exception_lineno = 518;
                    type_description_1 = "oooooooobooooooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_compexpr_right_8 = tmp_mvar_value_22;
                tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_8, tmp_compexpr_right_8 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 518;
                    type_description_1 = "oooooooobooooooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_condition_result_15 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if ( tmp_condition_result_15 == NUITKA_BOOL_TRUE )
                {
                    goto branch_yes_15;
                }
                else
                {
                    goto branch_no_15;
                }
                branch_yes_15:;
                {
                    PyObject *tmp_assign_source_32;
                    tmp_assign_source_32 = EXC_VALUE(PyThreadState_GET());
                    assert( var_e == NULL );
                    Py_INCREF( tmp_assign_source_32 );
                    var_e = tmp_assign_source_32;
                }
                {
                    PyObject *tmp_raise_type_9;
                    PyObject *tmp_called_name_19;
                    PyObject *tmp_mvar_value_23;
                    PyObject *tmp_args_name_11;
                    PyObject *tmp_tuple_element_12;
                    PyObject *tmp_kw_name_16;
                    PyObject *tmp_dict_key_32;
                    PyObject *tmp_dict_value_32;
                    tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ConnectionError );

                    if (unlikely( tmp_mvar_value_23 == NULL ))
                    {
                        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionError );
                    }

                    if ( tmp_mvar_value_23 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ConnectionError" );
                        exception_tb = NULL;

                        exception_lineno = 519;
                        type_description_1 = "oooooooobooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_called_name_19 = tmp_mvar_value_23;
                    CHECK_OBJECT( var_e );
                    tmp_tuple_element_12 = var_e;
                    tmp_args_name_11 = PyTuple_New( 1 );
                    Py_INCREF( tmp_tuple_element_12 );
                    PyTuple_SET_ITEM( tmp_args_name_11, 0, tmp_tuple_element_12 );
                    CHECK_OBJECT( par_request );
                    tmp_dict_value_32 = par_request;
                    tmp_dict_key_32 = const_str_plain_request;
                    tmp_kw_name_16 = _PyDict_NewPresized( 1 );
                    tmp_res = PyDict_SetItem( tmp_kw_name_16, tmp_dict_key_32, tmp_dict_value_32 );
                    assert( !(tmp_res != 0) );
                    frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 519;
                    tmp_raise_type_9 = CALL_FUNCTION( tmp_called_name_19, tmp_args_name_11, tmp_kw_name_16 );
                    Py_DECREF( tmp_args_name_11 );
                    Py_DECREF( tmp_kw_name_16 );
                    if ( tmp_raise_type_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 519;
                        type_description_1 = "oooooooobooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    exception_type = tmp_raise_type_9;
                    exception_lineno = 519;
                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooooobooooooooooo";
                    goto frame_exception_exit_1;
                }
                goto branch_end_15;
                branch_no_15:;
                {
                    nuitka_bool tmp_condition_result_16;
                    PyObject *tmp_compexpr_left_9;
                    PyObject *tmp_compexpr_right_9;
                    PyObject *tmp_mvar_value_24;
                    tmp_compexpr_left_9 = EXC_TYPE(PyThreadState_GET());
                    tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__ProxyError );

                    if (unlikely( tmp_mvar_value_24 == NULL ))
                    {
                        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ProxyError );
                    }

                    if ( tmp_mvar_value_24 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_ProxyError" );
                        exception_tb = NULL;

                        exception_lineno = 521;
                        type_description_1 = "oooooooobooooooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_compexpr_right_9 = tmp_mvar_value_24;
                    tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_9, tmp_compexpr_right_9 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 521;
                        type_description_1 = "oooooooobooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_16 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                    if ( tmp_condition_result_16 == NUITKA_BOOL_TRUE )
                    {
                        goto branch_yes_16;
                    }
                    else
                    {
                        goto branch_no_16;
                    }
                    branch_yes_16:;
                    {
                        PyObject *tmp_assign_source_33;
                        tmp_assign_source_33 = EXC_VALUE(PyThreadState_GET());
                        assert( var_e == NULL );
                        Py_INCREF( tmp_assign_source_33 );
                        var_e = tmp_assign_source_33;
                    }
                    {
                        PyObject *tmp_raise_type_10;
                        PyObject *tmp_called_name_20;
                        PyObject *tmp_mvar_value_25;
                        PyObject *tmp_args_element_name_14;
                        tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ProxyError );

                        if (unlikely( tmp_mvar_value_25 == NULL ))
                        {
                            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ProxyError );
                        }

                        if ( tmp_mvar_value_25 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyString_FromFormat( "global name '%s' is not defined", "ProxyError" );
                            exception_tb = NULL;

                            exception_lineno = 522;
                            type_description_1 = "oooooooobooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_name_20 = tmp_mvar_value_25;
                        CHECK_OBJECT( var_e );
                        tmp_args_element_name_14 = var_e;
                        frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 522;
                        {
                            PyObject *call_args[] = { tmp_args_element_name_14 };
                            tmp_raise_type_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
                        }

                        if ( tmp_raise_type_10 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 522;
                            type_description_1 = "oooooooobooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        exception_type = tmp_raise_type_10;
                        exception_lineno = 522;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oooooooobooooooooooo";
                        goto frame_exception_exit_1;
                    }
                    goto branch_end_16;
                    branch_no_16:;
                    {
                        nuitka_bool tmp_condition_result_17;
                        PyObject *tmp_compexpr_left_10;
                        PyObject *tmp_compexpr_right_10;
                        PyObject *tmp_tuple_element_13;
                        PyObject *tmp_mvar_value_26;
                        PyObject *tmp_mvar_value_27;
                        tmp_compexpr_left_10 = EXC_TYPE(PyThreadState_GET());
                        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__SSLError );

                        if (unlikely( tmp_mvar_value_26 == NULL ))
                        {
                            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__SSLError );
                        }

                        if ( tmp_mvar_value_26 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_SSLError" );
                            exception_tb = NULL;

                            exception_lineno = 524;
                            type_description_1 = "oooooooobooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_tuple_element_13 = tmp_mvar_value_26;
                        tmp_compexpr_right_10 = PyTuple_New( 2 );
                        Py_INCREF( tmp_tuple_element_13 );
                        PyTuple_SET_ITEM( tmp_compexpr_right_10, 0, tmp_tuple_element_13 );
                        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__HTTPError );

                        if (unlikely( tmp_mvar_value_27 == NULL ))
                        {
                            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__HTTPError );
                        }

                        if ( tmp_mvar_value_27 == NULL )
                        {
                            Py_DECREF( tmp_compexpr_right_10 );
                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_HTTPError" );
                            exception_tb = NULL;

                            exception_lineno = 524;
                            type_description_1 = "oooooooobooooooooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_tuple_element_13 = tmp_mvar_value_27;
                        Py_INCREF( tmp_tuple_element_13 );
                        PyTuple_SET_ITEM( tmp_compexpr_right_10, 1, tmp_tuple_element_13 );
                        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_10, tmp_compexpr_right_10 );
                        Py_DECREF( tmp_compexpr_right_10 );
                        if ( tmp_res == -1 )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 524;
                            type_description_1 = "oooooooobooooooooooo";
                            goto frame_exception_exit_1;
                        }
                        tmp_condition_result_17 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                        if ( tmp_condition_result_17 == NUITKA_BOOL_TRUE )
                        {
                            goto branch_yes_17;
                        }
                        else
                        {
                            goto branch_no_17;
                        }
                        branch_yes_17:;
                        {
                            PyObject *tmp_assign_source_34;
                            tmp_assign_source_34 = EXC_VALUE(PyThreadState_GET());
                            assert( var_e == NULL );
                            Py_INCREF( tmp_assign_source_34 );
                            var_e = tmp_assign_source_34;
                        }
                        {
                            nuitka_bool tmp_condition_result_18;
                            PyObject *tmp_isinstance_inst_8;
                            PyObject *tmp_isinstance_cls_8;
                            PyObject *tmp_mvar_value_28;
                            CHECK_OBJECT( var_e );
                            tmp_isinstance_inst_8 = var_e;
                            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__SSLError );

                            if (unlikely( tmp_mvar_value_28 == NULL ))
                            {
                                tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__SSLError );
                            }

                            if ( tmp_mvar_value_28 == NULL )
                            {

                                exception_type = PyExc_NameError;
                                Py_INCREF( exception_type );
                                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_SSLError" );
                                exception_tb = NULL;

                                exception_lineno = 525;
                                type_description_1 = "oooooooobooooooooooo";
                                goto frame_exception_exit_1;
                            }

                            tmp_isinstance_cls_8 = tmp_mvar_value_28;
                            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_8, tmp_isinstance_cls_8 );
                            if ( tmp_res == -1 )
                            {
                                assert( ERROR_OCCURRED() );

                                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                exception_lineno = 525;
                                type_description_1 = "oooooooobooooooooooo";
                                goto frame_exception_exit_1;
                            }
                            tmp_condition_result_18 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                            if ( tmp_condition_result_18 == NUITKA_BOOL_TRUE )
                            {
                                goto branch_yes_18;
                            }
                            else
                            {
                                goto branch_no_18;
                            }
                            branch_yes_18:;
                            {
                                PyObject *tmp_raise_type_11;
                                PyObject *tmp_called_name_21;
                                PyObject *tmp_mvar_value_29;
                                PyObject *tmp_args_name_12;
                                PyObject *tmp_tuple_element_14;
                                PyObject *tmp_kw_name_17;
                                PyObject *tmp_dict_key_33;
                                PyObject *tmp_dict_value_33;
                                tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_SSLError );

                                if (unlikely( tmp_mvar_value_29 == NULL ))
                                {
                                    tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSLError );
                                }

                                if ( tmp_mvar_value_29 == NULL )
                                {

                                    exception_type = PyExc_NameError;
                                    Py_INCREF( exception_type );
                                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "SSLError" );
                                    exception_tb = NULL;

                                    exception_lineno = 527;
                                    type_description_1 = "oooooooobooooooooooo";
                                    goto frame_exception_exit_1;
                                }

                                tmp_called_name_21 = tmp_mvar_value_29;
                                CHECK_OBJECT( var_e );
                                tmp_tuple_element_14 = var_e;
                                tmp_args_name_12 = PyTuple_New( 1 );
                                Py_INCREF( tmp_tuple_element_14 );
                                PyTuple_SET_ITEM( tmp_args_name_12, 0, tmp_tuple_element_14 );
                                CHECK_OBJECT( par_request );
                                tmp_dict_value_33 = par_request;
                                tmp_dict_key_33 = const_str_plain_request;
                                tmp_kw_name_17 = _PyDict_NewPresized( 1 );
                                tmp_res = PyDict_SetItem( tmp_kw_name_17, tmp_dict_key_33, tmp_dict_value_33 );
                                assert( !(tmp_res != 0) );
                                frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 527;
                                tmp_raise_type_11 = CALL_FUNCTION( tmp_called_name_21, tmp_args_name_12, tmp_kw_name_17 );
                                Py_DECREF( tmp_args_name_12 );
                                Py_DECREF( tmp_kw_name_17 );
                                if ( tmp_raise_type_11 == NULL )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 527;
                                    type_description_1 = "oooooooobooooooooooo";
                                    goto frame_exception_exit_1;
                                }
                                exception_type = tmp_raise_type_11;
                                exception_lineno = 527;
                                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                                type_description_1 = "oooooooobooooooooooo";
                                goto frame_exception_exit_1;
                            }
                            goto branch_end_18;
                            branch_no_18:;
                            {
                                nuitka_bool tmp_condition_result_19;
                                PyObject *tmp_isinstance_inst_9;
                                PyObject *tmp_isinstance_cls_9;
                                PyObject *tmp_mvar_value_30;
                                CHECK_OBJECT( var_e );
                                tmp_isinstance_inst_9 = var_e;
                                tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError );

                                if (unlikely( tmp_mvar_value_30 == NULL ))
                                {
                                    tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError );
                                }

                                if ( tmp_mvar_value_30 == NULL )
                                {

                                    exception_type = PyExc_NameError;
                                    Py_INCREF( exception_type );
                                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "ReadTimeoutError" );
                                    exception_tb = NULL;

                                    exception_lineno = 528;
                                    type_description_1 = "oooooooobooooooooooo";
                                    goto frame_exception_exit_1;
                                }

                                tmp_isinstance_cls_9 = tmp_mvar_value_30;
                                tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_9, tmp_isinstance_cls_9 );
                                if ( tmp_res == -1 )
                                {
                                    assert( ERROR_OCCURRED() );

                                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                    exception_lineno = 528;
                                    type_description_1 = "oooooooobooooooooooo";
                                    goto frame_exception_exit_1;
                                }
                                tmp_condition_result_19 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                                if ( tmp_condition_result_19 == NUITKA_BOOL_TRUE )
                                {
                                    goto branch_yes_19;
                                }
                                else
                                {
                                    goto branch_no_19;
                                }
                                branch_yes_19:;
                                {
                                    PyObject *tmp_raise_type_12;
                                    PyObject *tmp_called_name_22;
                                    PyObject *tmp_mvar_value_31;
                                    PyObject *tmp_args_name_13;
                                    PyObject *tmp_tuple_element_15;
                                    PyObject *tmp_kw_name_18;
                                    PyObject *tmp_dict_key_34;
                                    PyObject *tmp_dict_value_34;
                                    tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ReadTimeout );

                                    if (unlikely( tmp_mvar_value_31 == NULL ))
                                    {
                                        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ReadTimeout );
                                    }

                                    if ( tmp_mvar_value_31 == NULL )
                                    {

                                        exception_type = PyExc_NameError;
                                        Py_INCREF( exception_type );
                                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ReadTimeout" );
                                        exception_tb = NULL;

                                        exception_lineno = 529;
                                        type_description_1 = "oooooooobooooooooooo";
                                        goto frame_exception_exit_1;
                                    }

                                    tmp_called_name_22 = tmp_mvar_value_31;
                                    CHECK_OBJECT( var_e );
                                    tmp_tuple_element_15 = var_e;
                                    tmp_args_name_13 = PyTuple_New( 1 );
                                    Py_INCREF( tmp_tuple_element_15 );
                                    PyTuple_SET_ITEM( tmp_args_name_13, 0, tmp_tuple_element_15 );
                                    CHECK_OBJECT( par_request );
                                    tmp_dict_value_34 = par_request;
                                    tmp_dict_key_34 = const_str_plain_request;
                                    tmp_kw_name_18 = _PyDict_NewPresized( 1 );
                                    tmp_res = PyDict_SetItem( tmp_kw_name_18, tmp_dict_key_34, tmp_dict_value_34 );
                                    assert( !(tmp_res != 0) );
                                    frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 529;
                                    tmp_raise_type_12 = CALL_FUNCTION( tmp_called_name_22, tmp_args_name_13, tmp_kw_name_18 );
                                    Py_DECREF( tmp_args_name_13 );
                                    Py_DECREF( tmp_kw_name_18 );
                                    if ( tmp_raise_type_12 == NULL )
                                    {
                                        assert( ERROR_OCCURRED() );

                                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                                        exception_lineno = 529;
                                        type_description_1 = "oooooooobooooooooooo";
                                        goto frame_exception_exit_1;
                                    }
                                    exception_type = tmp_raise_type_12;
                                    exception_lineno = 529;
                                    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                                    type_description_1 = "oooooooobooooooooooo";
                                    goto frame_exception_exit_1;
                                }
                                goto branch_end_19;
                                branch_no_19:;
                                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                                if (unlikely( tmp_result == false ))
                                {
                                    exception_lineno = 531;
                                }

                                if (exception_tb && exception_tb->tb_frame == &frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame) frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = exception_tb->tb_lineno;
                                type_description_1 = "oooooooobooooooooooo";
                                goto frame_exception_exit_1;
                                branch_end_19:;
                            }
                            branch_end_18:;
                        }
                        goto branch_end_17;
                        branch_no_17:;
                        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                        if (unlikely( tmp_result == false ))
                        {
                            exception_lineno = 437;
                        }

                        if (exception_tb && exception_tb->tb_frame == &frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame) frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = exception_tb->tb_lineno;
                        type_description_1 = "oooooooobooooooooooo";
                        goto frame_exception_exit_1;
                        branch_end_17:;
                    }
                    branch_end_16:;
                }
                branch_end_15:;
            }
            branch_end_9:;
        }
        branch_end_8:;
    }
    // End of try:
    try_end_11:;
    {
        PyObject *tmp_called_instance_13;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        CHECK_OBJECT( par_self );
        tmp_called_instance_13 = par_self;
        CHECK_OBJECT( par_request );
        tmp_args_element_name_15 = par_request;
        CHECK_OBJECT( var_resp );
        tmp_args_element_name_16 = var_resp;
        frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame.f_lineno = 533;
        {
            PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
            tmp_return_value = CALL_METHOD_WITH_ARGS2( tmp_called_instance_13, const_str_plain_build_response, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 533;
            type_description_1 = "oooooooobooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 1
    RESTORE_FRAME_EXCEPTION( frame_cf4370e57fceaf0438a9f1bafe8a8bb6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_cf4370e57fceaf0438a9f1bafe8a8bb6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_cf4370e57fceaf0438a9f1bafe8a8bb6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cf4370e57fceaf0438a9f1bafe8a8bb6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cf4370e57fceaf0438a9f1bafe8a8bb6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cf4370e57fceaf0438a9f1bafe8a8bb6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cf4370e57fceaf0438a9f1bafe8a8bb6,
        type_description_1,
        par_self,
        par_request,
        par_stream,
        par_timeout,
        par_verify,
        par_cert,
        par_proxies,
        var_r,
        (int)var_chunked,
        var_e,
        var_err,
        var_header,
        var_url,
        var_value,
        var_read,
        var_low_conn,
        var_connect,
        var_i,
        var_resp,
        var_conn
    );


    // Release cached frame.
    if ( frame_cf4370e57fceaf0438a9f1bafe8a8bb6 == cache_frame_cf4370e57fceaf0438a9f1bafe8a8bb6 )
    {
        Py_DECREF( frame_cf4370e57fceaf0438a9f1bafe8a8bb6 );
    }
    cache_frame_cf4370e57fceaf0438a9f1bafe8a8bb6 = NULL;

    assertFrameObject( frame_cf4370e57fceaf0438a9f1bafe8a8bb6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_17_send );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_r );
    var_r = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( var_header );
    var_header = NULL;

    CHECK_OBJECT( (PyObject *)var_url );
    Py_DECREF( var_url );
    var_url = NULL;

    CHECK_OBJECT( (PyObject *)par_verify );
    Py_DECREF( par_verify );
    par_verify = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_read );
    var_read = NULL;

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    Py_XDECREF( var_low_conn );
    var_low_conn = NULL;

    Py_XDECREF( var_connect );
    var_connect = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)par_proxies );
    Py_DECREF( par_proxies );
    par_proxies = NULL;

    CHECK_OBJECT( (PyObject *)var_resp );
    Py_DECREF( var_resp );
    var_resp = NULL;

    Py_XDECREF( var_conn );
    var_conn = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_err );
    var_err = NULL;

    CHECK_OBJECT( (PyObject *)par_stream );
    Py_DECREF( par_stream );
    par_stream = NULL;

    Py_XDECREF( var_header );
    var_header = NULL;

    Py_XDECREF( var_url );
    var_url = NULL;

    CHECK_OBJECT( (PyObject *)par_verify );
    Py_DECREF( par_verify );
    par_verify = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_request );
    Py_DECREF( par_request );
    par_request = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_read );
    var_read = NULL;

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    Py_XDECREF( var_low_conn );
    var_low_conn = NULL;

    Py_XDECREF( var_connect );
    var_connect = NULL;

    Py_XDECREF( par_timeout );
    par_timeout = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    CHECK_OBJECT( (PyObject *)par_proxies );
    Py_DECREF( par_proxies );
    par_proxies = NULL;

    Py_XDECREF( var_resp );
    var_resp = NULL;

    Py_XDECREF( var_conn );
    var_conn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( requests$adapters$$$function_17_send );
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



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_10_cert_verify(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_10_cert_verify,
        const_str_plain_cert_verify,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cfdc13c9969d2a6ff3031ef7df276681,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_f0960f14478e5a2fef4fc81736af77be,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_11_build_response(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_11_build_response,
        const_str_plain_build_response,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_56ee817bbd0817003c33718cffef5ea2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_64ad7ce704a2035b2f3a90397c090ca7,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_12_get_connection( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_12_get_connection,
        const_str_plain_get_connection,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fe322788ddf6dabc5662a500e3d9c52c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_a3b4e21c527f3872bb2a3cad05caced3,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_13_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_13_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4a69072ef5b69b159eb8422c322b4d72,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_ab462680d0487f574012e6a7b3ea2cfd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_14_request_url(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_14_request_url,
        const_str_plain_request_url,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_edd4fdcf3b237a4c62726c8a1fda43cf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_cf164d66984f410735aac772ffcc2043,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_15_add_headers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_15_add_headers,
        const_str_plain_add_headers,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e807b21ea83f4dec8f5eafa75a621cfd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_0e90a733b836dccf8b7d0124401998c8,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_16_proxy_headers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_16_proxy_headers,
        const_str_plain_proxy_headers,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4713c83be7b14451adcb0e8c051d51b4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_dbc92a2b5167052219bbed5a2180ad0b,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_17_send( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_17_send,
        const_str_plain_send,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cf4370e57fceaf0438a9f1bafe8a8bb6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_fff293e3e7fde90d706cca79c91fa423,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_1_SOCKSProxyManager(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_1_SOCKSProxyManager,
        const_str_plain_SOCKSProxyManager,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_6662f22ce1fdc46fbc308e5eb37dfcdf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_2___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_80dc5fe54155e7c593da847c99105e7e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_3_send( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_3_send,
        const_str_plain_send,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_36419fd9c845eb4048b911532a6e222d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_92d7a028a7de3fecbe9df9c1fa24ee6e,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_4_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_4_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_5123ea2cdb7d0abd0e94f1bca68da0c3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_689f43089124f06b15e9987dc8e6f0cd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_5___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_5___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fa8c37c88554ceebc9c3d78867c25e51,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_6___getstate__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_6___getstate__,
        const_str_plain___getstate__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_222c56e2fc0a2c527367c690386a7dab,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_7___setstate__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_7___setstate__,
        const_str_plain___setstate__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a9872ebb0235d54b7bf180ceb9007c5c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_8_init_poolmanager( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_8_init_poolmanager,
        const_str_plain_init_poolmanager,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_0e3ece2c60f7b51e550ca34d75278be9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_8c58dbeb2a2c13a119eaf790ea7782dd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_requests$adapters$$$function_9_proxy_manager_for(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_requests$adapters$$$function_9_proxy_manager_for,
        const_str_plain_proxy_manager_for,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e60d2f119d46585f929b0027e234b08e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_requests$adapters,
        const_str_digest_bfa093c614acefeadc8693bd26119f2c,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_requests$adapters =
{
    PyModuleDef_HEAD_INIT,
    "requests.adapters",
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

MOD_INIT_DECL( requests$adapters )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_requests$adapters );
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
    puts("requests.adapters: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.adapters: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("requests.adapters: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initrequests$adapters" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_requests$adapters = Py_InitModule4(
        "requests.adapters",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_requests$adapters = PyModule_Create( &mdef_requests$adapters );
#endif

    moduledict_requests$adapters = MODULE_DICT( module_requests$adapters );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_requests$adapters,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$adapters,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_requests$adapters,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_requests$adapters );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_f564af29e8441da03b9e6bf26a88cc81, module_requests$adapters );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
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
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_locals_requests$adapters_55_key___init__ = NULL;
    PyObject *tmp_locals_requests$adapters_55_key_close = NULL;
    PyObject *tmp_locals_requests$adapters_55_key_send = NULL;
    PyObject *tmp_select_metaclass_2__base = NULL;
    struct Nuitka_FrameObject *frame_0f5936b6d9186a8d7dd5e4958b9f915a;
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
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_requests$adapters_84 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_bf16283824e926836c279e3b218e2c3b_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_bf16283824e926836c279e3b218e2c3b_2 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_str_digest_583f837ef2184e324997463a2ea927a1;
        UPDATE_STRING_DICT0( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_05727e9ade8b3b6ad320af9e2609e1dd;
        UPDATE_STRING_DICT0( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_0f5936b6d9186a8d7dd5e4958b9f915a = MAKE_MODULE_FRAME( codeobj_0f5936b6d9186a8d7dd5e4958b9f915a, module_requests$adapters );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_0f5936b6d9186a8d7dd5e4958b9f915a );
    assert( Py_REFCNT( frame_0f5936b6d9186a8d7dd5e4958b9f915a ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        tmp_name_name_1 = const_str_digest_e399ba4554180f37de594a6743234f17;
        tmp_globals_name_1 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame.f_lineno = 11;
        tmp_assign_source_3 = IMPORT_MODULE4( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        tmp_name_name_2 = const_str_plain_socket;
        tmp_globals_name_2 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame.f_lineno = 12;
        tmp_assign_source_4 = IMPORT_MODULE4( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_socket, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        tmp_name_name_3 = const_str_digest_901e90eee70586f15ff5cd8bfbf848b6;
        tmp_globals_name_3 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_PoolManager_str_plain_proxy_from_url_tuple;
        frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame.f_lineno = 14;
        tmp_assign_source_5 = IMPORT_MODULE4( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_1 = tmp_import_from_1__module;
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_PoolManager );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_PoolManager, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_proxy_from_url );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_proxy_from_url, tmp_assign_source_7 );
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        tmp_name_name_4 = const_str_digest_58d55cc0c39ccfcef76de1f9740cddf4;
        tmp_globals_name_4 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain_HTTPResponse_tuple;
        frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame.f_lineno = 15;
        tmp_import_name_from_3 = IMPORT_MODULE4( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4 );
        if ( tmp_import_name_from_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_HTTPResponse );
        Py_DECREF( tmp_import_name_from_3 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_HTTPResponse, tmp_assign_source_8 );
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        tmp_name_name_5 = const_str_digest_867cf107290997ea3f46e9cff397e1db;
        tmp_globals_name_5 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_parse_url_tuple;
        frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame.f_lineno = 16;
        tmp_import_name_from_4 = IMPORT_MODULE4( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_parse_url );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_parse_url, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        tmp_name_name_6 = const_str_digest_867cf107290997ea3f46e9cff397e1db;
        tmp_globals_name_6 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_Timeout_tuple;
        frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame.f_lineno = 17;
        tmp_import_name_from_5 = IMPORT_MODULE4( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_Timeout );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_TimeoutSauce, tmp_assign_source_10 );
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        tmp_name_name_7 = const_str_digest_b6ebd7edb958fb0b6c3fab72a5281cdd;
        tmp_globals_name_7 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_Retry_tuple;
        frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame.f_lineno = 18;
        tmp_import_name_from_6 = IMPORT_MODULE4( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7 );
        if ( tmp_import_name_from_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_Retry );
        Py_DECREF( tmp_import_name_from_6 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_Retry, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        tmp_name_name_8 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_globals_name_8 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain_ClosedPoolError_tuple;
        frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame.f_lineno = 19;
        tmp_import_name_from_7 = IMPORT_MODULE4( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8 );
        if ( tmp_import_name_from_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_ClosedPoolError );
        Py_DECREF( tmp_import_name_from_7 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ClosedPoolError, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        tmp_name_name_9 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_globals_name_9 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_str_plain_ConnectTimeoutError_tuple;
        frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame.f_lineno = 20;
        tmp_import_name_from_8 = IMPORT_MODULE4( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9 );
        if ( tmp_import_name_from_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_ConnectTimeoutError );
        Py_DECREF( tmp_import_name_from_8 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        tmp_name_name_10 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_globals_name_10 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = const_tuple_str_plain_HTTPError_tuple;
        frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame.f_lineno = 21;
        tmp_import_name_from_9 = IMPORT_MODULE4( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10 );
        if ( tmp_import_name_from_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_HTTPError );
        Py_DECREF( tmp_import_name_from_9 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__HTTPError, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_name_11;
        PyObject *tmp_locals_name_11;
        PyObject *tmp_fromlist_name_11;
        tmp_name_name_11 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_globals_name_11 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_11 = Py_None;
        tmp_fromlist_name_11 = const_tuple_str_plain_MaxRetryError_tuple;
        frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame.f_lineno = 22;
        tmp_import_name_from_10 = IMPORT_MODULE4( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11 );
        if ( tmp_import_name_from_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_MaxRetryError );
        Py_DECREF( tmp_import_name_from_10 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 22;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_MaxRetryError, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_12;
        PyObject *tmp_globals_name_12;
        PyObject *tmp_locals_name_12;
        PyObject *tmp_fromlist_name_12;
        tmp_name_name_12 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_globals_name_12 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_12 = Py_None;
        tmp_fromlist_name_12 = const_tuple_str_plain_NewConnectionError_tuple;
        frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame.f_lineno = 23;
        tmp_import_name_from_11 = IMPORT_MODULE4( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12 );
        if ( tmp_import_name_from_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_NewConnectionError );
        Py_DECREF( tmp_import_name_from_11 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_NewConnectionError, tmp_assign_source_16 );
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_name_13;
        PyObject *tmp_globals_name_13;
        PyObject *tmp_locals_name_13;
        PyObject *tmp_fromlist_name_13;
        tmp_name_name_13 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_globals_name_13 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_13 = Py_None;
        tmp_fromlist_name_13 = const_tuple_str_plain_ProxyError_tuple;
        frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame.f_lineno = 24;
        tmp_import_name_from_12 = IMPORT_MODULE4( tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13 );
        if ( tmp_import_name_from_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_ProxyError );
        Py_DECREF( tmp_import_name_from_12 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__ProxyError, tmp_assign_source_17 );
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_name_14;
        PyObject *tmp_globals_name_14;
        PyObject *tmp_locals_name_14;
        PyObject *tmp_fromlist_name_14;
        tmp_name_name_14 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_globals_name_14 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_14 = Py_None;
        tmp_fromlist_name_14 = const_tuple_str_plain_ProtocolError_tuple;
        frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame.f_lineno = 25;
        tmp_import_name_from_13 = IMPORT_MODULE4( tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14 );
        if ( tmp_import_name_from_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_ProtocolError );
        Py_DECREF( tmp_import_name_from_13 );
        if ( tmp_assign_source_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ProtocolError, tmp_assign_source_18 );
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_name_name_15;
        PyObject *tmp_globals_name_15;
        PyObject *tmp_locals_name_15;
        PyObject *tmp_fromlist_name_15;
        tmp_name_name_15 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_globals_name_15 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_15 = Py_None;
        tmp_fromlist_name_15 = const_tuple_str_plain_ReadTimeoutError_tuple;
        frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame.f_lineno = 26;
        tmp_import_name_from_14 = IMPORT_MODULE4( tmp_name_name_15, tmp_globals_name_15, tmp_locals_name_15, tmp_fromlist_name_15 );
        if ( tmp_import_name_from_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_ReadTimeoutError );
        Py_DECREF( tmp_import_name_from_14 );
        if ( tmp_assign_source_19 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 26;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ReadTimeoutError, tmp_assign_source_19 );
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_name_16;
        PyObject *tmp_globals_name_16;
        PyObject *tmp_locals_name_16;
        PyObject *tmp_fromlist_name_16;
        tmp_name_name_16 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_globals_name_16 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_16 = Py_None;
        tmp_fromlist_name_16 = const_tuple_str_plain_SSLError_tuple;
        frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame.f_lineno = 27;
        tmp_import_name_from_15 = IMPORT_MODULE4( tmp_name_name_16, tmp_globals_name_16, tmp_locals_name_16, tmp_fromlist_name_16 );
        if ( tmp_import_name_from_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_SSLError );
        Py_DECREF( tmp_import_name_from_15 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 27;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__SSLError, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_name_name_17;
        PyObject *tmp_globals_name_17;
        PyObject *tmp_locals_name_17;
        PyObject *tmp_fromlist_name_17;
        tmp_name_name_17 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_globals_name_17 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_17 = Py_None;
        tmp_fromlist_name_17 = const_tuple_str_plain_ResponseError_tuple;
        frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame.f_lineno = 28;
        tmp_import_name_from_16 = IMPORT_MODULE4( tmp_name_name_17, tmp_globals_name_17, tmp_locals_name_17, tmp_fromlist_name_17 );
        if ( tmp_import_name_from_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_ResponseError );
        Py_DECREF( tmp_import_name_from_16 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ResponseError, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_name_18;
        PyObject *tmp_globals_name_18;
        PyObject *tmp_locals_name_18;
        PyObject *tmp_fromlist_name_18;
        tmp_name_name_18 = const_str_digest_c8562bbff9d721153deb2fdd066393d0;
        tmp_globals_name_18 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_18 = Py_None;
        tmp_fromlist_name_18 = const_tuple_str_plain_LocationValueError_tuple;
        frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame.f_lineno = 29;
        tmp_import_name_from_17 = IMPORT_MODULE4( tmp_name_name_18, tmp_globals_name_18, tmp_locals_name_18, tmp_fromlist_name_18 );
        if ( tmp_import_name_from_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_LocationValueError );
        Py_DECREF( tmp_import_name_from_17 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_LocationValueError, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_name_19;
        PyObject *tmp_globals_name_19;
        PyObject *tmp_locals_name_19;
        PyObject *tmp_fromlist_name_19;
        PyObject *tmp_level_name_1;
        tmp_name_name_19 = const_str_plain_models;
        tmp_globals_name_19 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_19 = Py_None;
        tmp_fromlist_name_19 = const_tuple_str_plain_Response_tuple;
        tmp_level_name_1 = const_int_pos_1;
        frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame.f_lineno = 31;
        tmp_import_name_from_18 = IMPORT_MODULE5( tmp_name_name_19, tmp_globals_name_19, tmp_locals_name_19, tmp_fromlist_name_19, tmp_level_name_1 );
        if ( tmp_import_name_from_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_Response );
        Py_DECREF( tmp_import_name_from_18 );
        if ( tmp_assign_source_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 31;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_Response, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_name_name_20;
        PyObject *tmp_globals_name_20;
        PyObject *tmp_locals_name_20;
        PyObject *tmp_fromlist_name_20;
        PyObject *tmp_level_name_2;
        tmp_name_name_20 = const_str_plain_compat;
        tmp_globals_name_20 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_20 = Py_None;
        tmp_fromlist_name_20 = const_tuple_str_plain_urlparse_str_plain_basestring_tuple;
        tmp_level_name_2 = const_int_pos_1;
        frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame.f_lineno = 32;
        tmp_assign_source_24 = IMPORT_MODULE5( tmp_name_name_20, tmp_globals_name_20, tmp_locals_name_20, tmp_fromlist_name_20, tmp_level_name_2 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_24;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_19 = tmp_import_from_2__module;
        tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_urlparse );
        if ( tmp_assign_source_25 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_urlparse, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_20 = tmp_import_from_2__module;
        tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_basestring );
        if ( tmp_assign_source_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 32;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_basestring, tmp_assign_source_26 );
    }
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_name_name_21;
        PyObject *tmp_globals_name_21;
        PyObject *tmp_locals_name_21;
        PyObject *tmp_fromlist_name_21;
        PyObject *tmp_level_name_3;
        tmp_name_name_21 = const_str_plain_utils;
        tmp_globals_name_21 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_21 = Py_None;
        tmp_fromlist_name_21 = const_tuple_95cd6d024ed75955d1929487c3b7984a_tuple;
        tmp_level_name_3 = const_int_pos_1;
        frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame.f_lineno = 33;
        tmp_assign_source_27 = IMPORT_MODULE5( tmp_name_name_21, tmp_globals_name_21, tmp_locals_name_21, tmp_fromlist_name_21, tmp_level_name_3 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_27;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_21 = tmp_import_from_3__module;
        tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_DEFAULT_CA_BUNDLE_PATH );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_CA_BUNDLE_PATH, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_22 = tmp_import_from_3__module;
        tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_extract_zipped_paths );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_extract_zipped_paths, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_23 = tmp_import_from_3__module;
        tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_get_encoding_from_headers );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_get_encoding_from_headers, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_24 = tmp_import_from_3__module;
        tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_24, const_str_plain_prepend_scheme_if_needed );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_prepend_scheme_if_needed, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_25;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_25 = tmp_import_from_3__module;
        tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_25, const_str_plain_get_auth_from_url );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_get_auth_from_url, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_26;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_26 = tmp_import_from_3__module;
        tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_26, const_str_plain_urldefragauth );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_urldefragauth, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_27;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_27 = tmp_import_from_3__module;
        tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_27, const_str_plain_select_proxy );
        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 33;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_select_proxy, tmp_assign_source_34 );
    }
    goto try_end_3;
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_28;
        PyObject *tmp_name_name_22;
        PyObject *tmp_globals_name_22;
        PyObject *tmp_locals_name_22;
        PyObject *tmp_fromlist_name_22;
        PyObject *tmp_level_name_4;
        tmp_name_name_22 = const_str_plain_structures;
        tmp_globals_name_22 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_22 = Py_None;
        tmp_fromlist_name_22 = const_tuple_str_plain_CaseInsensitiveDict_tuple;
        tmp_level_name_4 = const_int_pos_1;
        frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame.f_lineno = 36;
        tmp_import_name_from_28 = IMPORT_MODULE5( tmp_name_name_22, tmp_globals_name_22, tmp_locals_name_22, tmp_fromlist_name_22, tmp_level_name_4 );
        if ( tmp_import_name_from_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_35 = IMPORT_NAME( tmp_import_name_from_28, const_str_plain_CaseInsensitiveDict );
        Py_DECREF( tmp_import_name_from_28 );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_CaseInsensitiveDict, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_29;
        PyObject *tmp_name_name_23;
        PyObject *tmp_globals_name_23;
        PyObject *tmp_locals_name_23;
        PyObject *tmp_fromlist_name_23;
        PyObject *tmp_level_name_5;
        tmp_name_name_23 = const_str_plain_cookies;
        tmp_globals_name_23 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_23 = Py_None;
        tmp_fromlist_name_23 = const_tuple_str_plain_extract_cookies_to_jar_tuple;
        tmp_level_name_5 = const_int_pos_1;
        frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame.f_lineno = 37;
        tmp_import_name_from_29 = IMPORT_MODULE5( tmp_name_name_23, tmp_globals_name_23, tmp_locals_name_23, tmp_fromlist_name_23, tmp_level_name_5 );
        if ( tmp_import_name_from_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_36 = IMPORT_NAME( tmp_import_name_from_29, const_str_plain_extract_cookies_to_jar );
        Py_DECREF( tmp_import_name_from_29 );
        if ( tmp_assign_source_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_extract_cookies_to_jar, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_name_name_24;
        PyObject *tmp_globals_name_24;
        PyObject *tmp_locals_name_24;
        PyObject *tmp_fromlist_name_24;
        PyObject *tmp_level_name_6;
        tmp_name_name_24 = const_str_plain_exceptions;
        tmp_globals_name_24 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_24 = Py_None;
        tmp_fromlist_name_24 = const_tuple_402e5278992b88e3d2e7fcf25552ac4f_tuple;
        tmp_level_name_6 = const_int_pos_1;
        frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame.f_lineno = 38;
        tmp_assign_source_37 = IMPORT_MODULE5( tmp_name_name_24, tmp_globals_name_24, tmp_locals_name_24, tmp_fromlist_name_24, tmp_level_name_6 );
        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_4__module == NULL );
        tmp_import_from_4__module = tmp_assign_source_37;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_30;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_30 = tmp_import_from_4__module;
        tmp_assign_source_38 = IMPORT_NAME( tmp_import_name_from_30, const_str_plain_ConnectionError );
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ConnectionError, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_31;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_31 = tmp_import_from_4__module;
        tmp_assign_source_39 = IMPORT_NAME( tmp_import_name_from_31, const_str_plain_ConnectTimeout );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ConnectTimeout, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_32;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_32 = tmp_import_from_4__module;
        tmp_assign_source_40 = IMPORT_NAME( tmp_import_name_from_32, const_str_plain_ReadTimeout );
        if ( tmp_assign_source_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ReadTimeout, tmp_assign_source_40 );
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_33;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_33 = tmp_import_from_4__module;
        tmp_assign_source_41 = IMPORT_NAME( tmp_import_name_from_33, const_str_plain_SSLError );
        if ( tmp_assign_source_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_SSLError, tmp_assign_source_41 );
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_34;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_34 = tmp_import_from_4__module;
        tmp_assign_source_42 = IMPORT_NAME( tmp_import_name_from_34, const_str_plain_ProxyError );
        if ( tmp_assign_source_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_ProxyError, tmp_assign_source_42 );
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_35;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_35 = tmp_import_from_4__module;
        tmp_assign_source_43 = IMPORT_NAME( tmp_import_name_from_35, const_str_plain_RetryError );
        if ( tmp_assign_source_43 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_RetryError, tmp_assign_source_43 );
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_import_name_from_36;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_36 = tmp_import_from_4__module;
        tmp_assign_source_44 = IMPORT_NAME( tmp_import_name_from_36, const_str_plain_InvalidSchema );
        if ( tmp_assign_source_44 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_InvalidSchema, tmp_assign_source_44 );
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_import_name_from_37;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_37 = tmp_import_from_4__module;
        tmp_assign_source_45 = IMPORT_NAME( tmp_import_name_from_37, const_str_plain_InvalidProxyURL );
        if ( tmp_assign_source_45 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_InvalidProxyURL, tmp_assign_source_45 );
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_import_name_from_38;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_38 = tmp_import_from_4__module;
        tmp_assign_source_46 = IMPORT_NAME( tmp_import_name_from_38, const_str_plain_InvalidURL );
        if ( tmp_assign_source_46 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_InvalidURL, tmp_assign_source_46 );
    }
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_import_name_from_39;
        PyObject *tmp_name_name_25;
        PyObject *tmp_globals_name_25;
        PyObject *tmp_locals_name_25;
        PyObject *tmp_fromlist_name_25;
        PyObject *tmp_level_name_7;
        tmp_name_name_25 = const_str_plain_auth;
        tmp_globals_name_25 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_25 = Py_None;
        tmp_fromlist_name_25 = const_tuple_str_plain__basic_auth_str_tuple;
        tmp_level_name_7 = const_int_pos_1;
        frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame.f_lineno = 41;
        tmp_import_name_from_39 = IMPORT_MODULE5( tmp_name_name_25, tmp_globals_name_25, tmp_locals_name_25, tmp_fromlist_name_25, tmp_level_name_7 );
        if ( tmp_import_name_from_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_47 = IMPORT_NAME( tmp_import_name_from_39, const_str_plain__basic_auth_str );
        Py_DECREF( tmp_import_name_from_39 );
        if ( tmp_assign_source_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain__basic_auth_str, tmp_assign_source_47 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_import_name_from_40;
        PyObject *tmp_name_name_26;
        PyObject *tmp_globals_name_26;
        PyObject *tmp_locals_name_26;
        PyObject *tmp_fromlist_name_26;
        tmp_name_name_26 = const_str_digest_d0cac7c67d1189a986b25b7cf105347d;
        tmp_globals_name_26 = (PyObject *)moduledict_requests$adapters;
        tmp_locals_name_26 = Py_None;
        tmp_fromlist_name_26 = const_tuple_str_plain_SOCKSProxyManager_tuple;
        frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame.f_lineno = 44;
        tmp_import_name_from_40 = IMPORT_MODULE4( tmp_name_name_26, tmp_globals_name_26, tmp_locals_name_26, tmp_fromlist_name_26 );
        if ( tmp_import_name_from_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;

            goto try_except_handler_5;
        }
        tmp_assign_source_48 = IMPORT_NAME( tmp_import_name_from_40, const_str_plain_SOCKSProxyManager );
        Py_DECREF( tmp_import_name_from_40 );
        if ( tmp_assign_source_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_SOCKSProxyManager, tmp_assign_source_48 );
    }
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_0f5936b6d9186a8d7dd5e4958b9f915a );
    if ( exception_keeper_tb_5 == NULL )
    {
        exception_keeper_tb_5 = MAKE_TRACEBACK( frame_0f5936b6d9186a8d7dd5e4958b9f915a, exception_keeper_lineno_5 );
    }
    else if ( exception_keeper_lineno_5 != 0 )
    {
        exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_0f5936b6d9186a8d7dd5e4958b9f915a, exception_keeper_lineno_5 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 45;

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
            PyObject *tmp_assign_source_49;
            tmp_assign_source_49 = MAKE_FUNCTION_requests$adapters$$$function_1_SOCKSProxyManager(  );



            UPDATE_STRING_DICT1( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_SOCKSProxyManager, tmp_assign_source_49 );
        }
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 43;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame) frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame.f_lineno = exception_tb->tb_lineno;

        goto frame_exception_exit_1;
        branch_end_1:;
    }
    goto try_end_5;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( requests$adapters );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_5:;
    {
        PyObject *tmp_assign_source_50;
        tmp_assign_source_50 = Py_False;
        UPDATE_STRING_DICT0( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLBLOCK, tmp_assign_source_50 );
    }
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = const_int_pos_10;
        UPDATE_STRING_DICT0( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLSIZE, tmp_assign_source_51 );
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = const_int_0;
        UPDATE_STRING_DICT0( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_RETRIES, tmp_assign_source_52 );
    }
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = Py_None;
        UPDATE_STRING_DICT0( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOL_TIMEOUT, tmp_assign_source_53 );
    }
    {
        PyObject *tmp_assign_source_54;
        {
            PyObject *tmp_assign_source_55;
            tmp_assign_source_55 = MAKE_FUNCTION_requests$adapters$$$function_2___init__(  );



            assert( tmp_locals_requests$adapters_55_key___init__ == NULL );
            tmp_locals_requests$adapters_55_key___init__ = tmp_assign_source_55;
        }
        {
            PyObject *tmp_assign_source_56;
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_false_none_true_none_none_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_assign_source_56 = MAKE_FUNCTION_requests$adapters$$$function_3_send( tmp_defaults_1 );



            assert( tmp_locals_requests$adapters_55_key_send == NULL );
            tmp_locals_requests$adapters_55_key_send = tmp_assign_source_56;
        }
        {
            PyObject *tmp_assign_source_57;
            tmp_assign_source_57 = MAKE_FUNCTION_requests$adapters$$$function_4_close(  );



            assert( tmp_locals_requests$adapters_55_key_close == NULL );
            tmp_locals_requests$adapters_55_key_close = tmp_assign_source_57;
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
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            tmp_dict_value_1 = const_str_digest_f564af29e8441da03b9e6bf26a88cc81;
            tmp_dict_key_1 = const_str_plain___module__;
            tmp_assign_source_54 = _PyDict_NewPresized( 5 );
            tmp_res = PyDict_SetItem( tmp_assign_source_54, tmp_dict_key_1, tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_dict_value_2 = const_str_digest_a634c3a07d79eddfe1581301d16e55a1;
            tmp_dict_key_2 = const_str_plain___doc__;
            tmp_res = PyDict_SetItem( tmp_assign_source_54, tmp_dict_key_2, tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_requests$adapters_55_key___init__ );
            tmp_dict_value_3 = tmp_locals_requests$adapters_55_key___init__;
            tmp_dict_key_3 = const_str_plain___init__;
            tmp_res = PyDict_SetItem( tmp_assign_source_54, tmp_dict_key_3, tmp_dict_value_3 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_requests$adapters_55_key_send );
            tmp_dict_value_4 = tmp_locals_requests$adapters_55_key_send;
            tmp_dict_key_4 = const_str_plain_send;
            tmp_res = PyDict_SetItem( tmp_assign_source_54, tmp_dict_key_4, tmp_dict_value_4 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_requests$adapters_55_key_close );
            tmp_dict_value_5 = tmp_locals_requests$adapters_55_key_close;
            tmp_dict_key_5 = const_str_plain_close;
            tmp_res = PyDict_SetItem( tmp_assign_source_54, tmp_dict_key_5, tmp_dict_value_5 );
            assert( !(tmp_res != 0) );
            goto try_return_handler_6;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$adapters );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT( (PyObject *)tmp_locals_requests$adapters_55_key___init__ );
        Py_DECREF( tmp_locals_requests$adapters_55_key___init__ );
        tmp_locals_requests$adapters_55_key___init__ = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_requests$adapters_55_key_send );
        Py_DECREF( tmp_locals_requests$adapters_55_key_send );
        tmp_locals_requests$adapters_55_key_send = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_requests$adapters_55_key_close );
        Py_DECREF( tmp_locals_requests$adapters_55_key_close );
        tmp_locals_requests$adapters_55_key_close = NULL;

        goto outline_result_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$adapters );
        return MOD_RETURN_VALUE( NULL );
        outline_result_1:;
        assert( tmp_class_creation_1__class_dict == NULL );
        tmp_class_creation_1__class_dict = tmp_assign_source_54;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_58;
        nuitka_bool tmp_condition_result_2;
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


            exception_lineno = 55;

            goto try_except_handler_7;
        }
        tmp_condition_result_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
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
        tmp_assign_source_58 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
        if ( tmp_assign_source_58 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;

            goto try_except_handler_7;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_58 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_58 );
        condexpr_end_1:;
        assert( tmp_class_creation_1__metaclass == NULL );
        tmp_class_creation_1__metaclass = tmp_assign_source_58;
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( tmp_class_creation_1__metaclass );
        tmp_called_name_1 = tmp_class_creation_1__metaclass;
        tmp_args_element_name_1 = const_str_plain_BaseAdapter;
        tmp_args_element_name_2 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_1__class_dict );
        tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
        frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_assign_source_59 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_59 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 55;

            goto try_except_handler_7;
        }
        assert( tmp_class_creation_1__class == NULL );
        tmp_class_creation_1__class = tmp_assign_source_59;
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    {
        PyObject *tmp_assign_source_60;
        CHECK_OBJECT( tmp_class_creation_1__class );
        tmp_assign_source_60 = tmp_class_creation_1__class;
        UPDATE_STRING_DICT0( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_BaseAdapter, tmp_assign_source_60 );
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
        PyObject *tmp_assign_source_61;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_BaseAdapter );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BaseAdapter );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "BaseAdapter" );
            exception_tb = NULL;

            exception_lineno = 84;

            goto try_except_handler_8;
        }

        tmp_tuple_element_1 = tmp_mvar_value_1;
        tmp_assign_source_61 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_61, 0, tmp_tuple_element_1 );
        assert( tmp_class_creation_2__bases == NULL );
        tmp_class_creation_2__bases = tmp_assign_source_61;
    }
    {
        PyObject *tmp_assign_source_62;
        {
            PyObject *tmp_set_locals_1;
            tmp_set_locals_1 = PyDict_New();
            locals_requests$adapters_84 = tmp_set_locals_1;
        }
        tmp_dictset_value = const_str_digest_f564af29e8441da03b9e6bf26a88cc81;
        tmp_res = PyDict_SetItem( locals_requests$adapters_84, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_19fdcf2df08a408493d23f0c1c422714;
        tmp_res = PyDict_SetItem( locals_requests$adapters_84, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = LIST_COPY( const_list_b210aeadbd087eaaf628d5f4d13acd25_list );
        tmp_res = PyDict_SetItem( locals_requests$adapters_84, const_str_plain___attrs__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_bf16283824e926836c279e3b218e2c3b_2, codeobj_bf16283824e926836c279e3b218e2c3b, module_requests$adapters, 0 );
        frame_bf16283824e926836c279e3b218e2c3b_2 = cache_frame_bf16283824e926836c279e3b218e2c3b_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_bf16283824e926836c279e3b218e2c3b_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_bf16283824e926836c279e3b218e2c3b_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_mvar_value_5;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLSIZE );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLSIZE );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "DEFAULT_POOLSIZE" );
                exception_tb = NULL;

                exception_lineno = 113;

                goto frame_exception_exit_2;
            }

            tmp_tuple_element_2 = tmp_mvar_value_2;
            tmp_defaults_2 = PyTuple_New( 4 );
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_2 );
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLSIZE );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLSIZE );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_defaults_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "DEFAULT_POOLSIZE" );
                exception_tb = NULL;

                exception_lineno = 114;

                goto frame_exception_exit_2;
            }

            tmp_tuple_element_2 = tmp_mvar_value_3;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_defaults_2, 1, tmp_tuple_element_2 );
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_RETRIES );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_RETRIES );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_defaults_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "DEFAULT_RETRIES" );
                exception_tb = NULL;

                exception_lineno = 114;

                goto frame_exception_exit_2;
            }

            tmp_tuple_element_2 = tmp_mvar_value_4;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_defaults_2, 2, tmp_tuple_element_2 );
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLBLOCK );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLBLOCK );
            }

            if ( tmp_mvar_value_5 == NULL )
            {
                Py_DECREF( tmp_defaults_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "DEFAULT_POOLBLOCK" );
                exception_tb = NULL;

                exception_lineno = 115;

                goto frame_exception_exit_2;
            }

            tmp_tuple_element_2 = tmp_mvar_value_5;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_defaults_2, 3, tmp_tuple_element_2 );
            tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_5___init__( tmp_defaults_2 );



            tmp_res = PyDict_SetItem( locals_requests$adapters_84, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 113;

                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_6___getstate__(  );



        tmp_res = PyDict_SetItem( locals_requests$adapters_84, const_str_plain___getstate__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_7___setstate__(  );



        tmp_res = PyDict_SetItem( locals_requests$adapters_84, const_str_plain___setstate__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_mvar_value_6;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLBLOCK );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEFAULT_POOLBLOCK );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "DEFAULT_POOLBLOCK" );
                exception_tb = NULL;

                exception_lineno = 146;

                goto frame_exception_exit_2;
            }

            tmp_tuple_element_3 = tmp_mvar_value_6;
            tmp_defaults_3 = PyTuple_New( 1 );
            Py_INCREF( tmp_tuple_element_3 );
            PyTuple_SET_ITEM( tmp_defaults_3, 0, tmp_tuple_element_3 );
            tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_8_init_poolmanager( tmp_defaults_3 );



            tmp_res = PyDict_SetItem( locals_requests$adapters_84, const_str_plain_init_poolmanager, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 146;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_bf16283824e926836c279e3b218e2c3b_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_bf16283824e926836c279e3b218e2c3b_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_bf16283824e926836c279e3b218e2c3b_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_bf16283824e926836c279e3b218e2c3b_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_bf16283824e926836c279e3b218e2c3b_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_bf16283824e926836c279e3b218e2c3b_2,
            type_description_2
        );


        // Release cached frame.
        if ( frame_bf16283824e926836c279e3b218e2c3b_2 == cache_frame_bf16283824e926836c279e3b218e2c3b_2 )
        {
            Py_DECREF( frame_bf16283824e926836c279e3b218e2c3b_2 );
        }
        cache_frame_bf16283824e926836c279e3b218e2c3b_2 = NULL;

        assertFrameObject( frame_bf16283824e926836c279e3b218e2c3b_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_9;
        skip_nested_handling_1:;
        tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_9_proxy_manager_for(  );



        tmp_res = PyDict_SetItem( locals_requests$adapters_84, const_str_plain_proxy_manager_for, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_10_cert_verify(  );



        tmp_res = PyDict_SetItem( locals_requests$adapters_84, const_str_plain_cert_verify, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_11_build_response(  );



        tmp_res = PyDict_SetItem( locals_requests$adapters_84, const_str_plain_build_response, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = const_tuple_none_tuple;
            Py_INCREF( tmp_defaults_4 );
            tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_12_get_connection( tmp_defaults_4 );



            tmp_res = PyDict_SetItem( locals_requests$adapters_84, const_str_plain_get_connection, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_13_close(  );



        tmp_res = PyDict_SetItem( locals_requests$adapters_84, const_str_plain_close, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_14_request_url(  );



        tmp_res = PyDict_SetItem( locals_requests$adapters_84, const_str_plain_request_url, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_15_add_headers(  );



        tmp_res = PyDict_SetItem( locals_requests$adapters_84, const_str_plain_add_headers, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_16_proxy_headers(  );



        tmp_res = PyDict_SetItem( locals_requests$adapters_84, const_str_plain_proxy_headers, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = const_tuple_false_none_true_none_none_tuple;
            Py_INCREF( tmp_defaults_5 );
            tmp_dictset_value = MAKE_FUNCTION_requests$adapters$$$function_17_send( tmp_defaults_5 );



            tmp_res = PyDict_SetItem( locals_requests$adapters_84, const_str_plain_send, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        tmp_assign_source_62 = locals_requests$adapters_84;
        Py_INCREF( tmp_assign_source_62 );
        goto try_return_handler_9;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$adapters );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF( locals_requests$adapters_84 );
        locals_requests$adapters_84 = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_requests$adapters_84 );
        locals_requests$adapters_84 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$adapters );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 84;
        goto try_except_handler_8;
        outline_result_2:;
        assert( tmp_class_creation_2__class_dict == NULL );
        tmp_class_creation_2__class_dict = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        nuitka_bool tmp_condition_result_3;
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


            exception_lineno = 84;

            goto try_except_handler_8;
        }
        tmp_condition_result_3 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_3 == NUITKA_BOOL_TRUE )
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
        tmp_assign_source_63 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_assign_source_63 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;

            goto try_except_handler_8;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        {
            PyObject *tmp_assign_source_64;
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_subscript_name_1;
            CHECK_OBJECT( tmp_class_creation_2__bases );
            tmp_subscribed_name_1 = tmp_class_creation_2__bases;
            tmp_subscript_name_1 = const_int_0;
            tmp_assign_source_64 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_1, tmp_subscript_name_1, 0 );
            if ( tmp_assign_source_64 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;

                goto try_except_handler_8;
            }
            assert( tmp_select_metaclass_2__base == NULL );
            tmp_select_metaclass_2__base = tmp_assign_source_64;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_1;
            CHECK_OBJECT( tmp_select_metaclass_2__base );
            tmp_source_name_1 = tmp_select_metaclass_2__base;
            tmp_assign_source_63 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
            if ( tmp_assign_source_63 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 84;

                goto try_except_handler_11;
            }
            goto try_return_handler_10;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$adapters );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_1;
            Py_DECREF( exception_keeper_type_8 );
            Py_XDECREF( exception_keeper_value_8 );
            Py_XDECREF( exception_keeper_tb_8 );
            CHECK_OBJECT( tmp_select_metaclass_2__base );
            tmp_type_arg_1 = tmp_select_metaclass_2__base;
            tmp_assign_source_63 = BUILTIN_TYPE1( tmp_type_arg_1 );
            assert( !(tmp_assign_source_63 == NULL) );
            goto try_return_handler_10;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( requests$adapters );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
        Py_DECREF( tmp_select_metaclass_2__base );
        tmp_select_metaclass_2__base = NULL;

        goto outline_result_3;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_2__base );
        Py_DECREF( tmp_select_metaclass_2__base );
        tmp_select_metaclass_2__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( requests$adapters );
        return MOD_RETURN_VALUE( NULL );
        outline_result_3:;
        condexpr_end_2:;
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_name_2;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_called_name_2 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_4 = const_str_plain_HTTPAdapter;
        CHECK_OBJECT( tmp_class_creation_2__bases );
        tmp_args_element_name_5 = tmp_class_creation_2__bases;
        CHECK_OBJECT( tmp_class_creation_2__class_dict );
        tmp_args_element_name_6 = tmp_class_creation_2__class_dict;
        frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame.f_lineno = 84;
        {
            PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
            tmp_assign_source_65 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
        }

        if ( tmp_assign_source_65 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;

            goto try_except_handler_8;
        }
        assert( tmp_class_creation_2__class == NULL );
        tmp_class_creation_2__class = tmp_assign_source_65;
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_0f5936b6d9186a8d7dd5e4958b9f915a );
#endif
    popFrameStack();

    assertFrameObject( frame_0f5936b6d9186a8d7dd5e4958b9f915a );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_0f5936b6d9186a8d7dd5e4958b9f915a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0f5936b6d9186a8d7dd5e4958b9f915a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0f5936b6d9186a8d7dd5e4958b9f915a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0f5936b6d9186a8d7dd5e4958b9f915a, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_66;
        CHECK_OBJECT( tmp_class_creation_2__class );
        tmp_assign_source_66 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain_HTTPAdapter, tmp_assign_source_66 );
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


#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_requests$adapters, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_requests$adapters );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
