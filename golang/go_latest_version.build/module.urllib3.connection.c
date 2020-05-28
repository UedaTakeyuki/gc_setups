/* Generated code for Python module 'urllib3.connection'
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

/* The "_module_urllib3$connection" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$connection;
PyDictObject *moduledict_urllib3$connection;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_plain_default_port;
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_str_plain_set_cert;
extern PyObject *const_str_plain_putheader;
extern PyObject *const_str_plain_get;
extern PyObject *const_tuple_type_object_tuple;
extern PyObject *const_str_plain_is_verified;
extern PyObject *const_str_plain_resolve_cert_reqs;
extern PyObject *const_str_plain_ConnectTimeoutError;
extern PyObject *const_str_plain_date;
extern PyObject *const_str_plain_type;
static PyObject *const_tuple_46883296661294fd3001b0890831f3c0_tuple;
extern PyObject *const_str_plain_cert_reqs;
extern PyObject *const_str_plain_assert_hostname;
extern PyObject *const_str_plain_verify_mode;
static PyObject *const_tuple_str_plain_cert_str_plain_asserted_hostname_str_plain_e_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_tuple_str_plain_self_str_plain_e_str_plain_conn_str_plain_extra_kw_tuple;
extern PyObject *const_str_digest_0a2ea16757d4dad15d4c8e0ada40cd0c;
extern PyObject *const_str_plain_None;
extern PyObject *const_str_plain_warn;
static PyObject *const_str_digest_413072d56f5b6cab90a6a564aa42b34d;
extern PyObject *const_str_plain_e;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_encode;
extern PyObject *const_str_plain_create_urllib3_context;
static PyObject *const_str_plain_is_time_off;
extern PyObject *const_int_pos_443;
extern PyObject *const_str_plain_VerifiedHTTPSConnection;
extern PyObject *const_str_plain_self;
static PyObject *const_str_digest_6c85cd0fa48022a0a18fa398644aa57f;
static PyObject *const_tuple_type_BaseException_tuple;
extern PyObject *const_str_plain_datetime;
extern PyObject *const_str_plain_ssl_wrap_socket;
extern PyObject *const_str_plain_skip_accept_encoding;
static PyObject *const_str_plain__protocol;
extern PyObject *const_str_plain__new_conn;
extern PyObject *const_str_plain_NewConnectionError;
extern PyObject *const_str_plain_warnings;
static PyObject *const_str_digest_003800fb824e3437bbbf235acf31301c;
extern PyObject *const_str_plain_connection;
extern PyObject *const_str_plain_strict;
extern PyObject *const_int_pos_30;
extern PyObject *const_str_plain_connect;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_dot;
extern PyObject *const_str_plain_socket;
extern PyObject *const_str_plain_http;
extern PyObject *const_str_plain_ssl_version;
extern PyObject *const_tuple_str_plain_self_str_plain_conn_tuple;
extern PyObject *const_str_digest_a93bc1dc732be398b86f8538baa37185;
extern PyObject *const_str_digest_03224f9e3167cae45c1e00020c2975eb;
extern PyObject *const_str_plain_value;
static PyObject *const_dict_a6ff982bac01e8d0bcf997a792f16c84;
static PyObject *const_str_digest_fbcb06792f2497ac6c7abd423e9e2d62;
extern PyObject *const_str_plain_conn;
extern PyObject *const_str_plain_chunked;
static PyObject *const_str_digest_23a97306f3a4bf1a3b9bf48c92fd45b8;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_str_digest_863f7ecfa780c39c386006d180d8b06a;
extern PyObject *const_str_plain__GLOBAL_DEFAULT_TIMEOUT;
static PyObject *const_tuple_str_plain_HTTPConnection_tuple;
extern PyObject *const_str_plain_chunk;
static PyObject *const_tuple_1bf7ec2364041a6038f313c34bc76226_tuple;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_tuple_str_dot_tuple;
extern PyObject *const_tuple_str_plain_subjectAltName_tuple_empty_tuple;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_context;
static PyObject *const_str_plain_len_str;
extern PyObject *const_str_plain_SystemTimeWarning;
extern PyObject *const_tuple_str_plain_error_str_plain_timeout_tuple;
extern PyObject *const_str_plain_error;
extern PyObject *const_str_plain_os;
static PyObject *const_str_digest_feb167a80b64f9a6111c2ef450038b43;
static PyObject *const_str_plain_stringish_types;
static PyObject *const_str_plain__match_hostname;
static PyObject *const_str_plain_IPPROTO_TCP;
extern PyObject *const_str_plain_resolve_ssl_version;
static PyObject *const_str_plain_TCP_NODELAY;
extern PyObject *const_str_plain_ConnectionError;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_ca_cert_dir;
static PyObject *const_tuple_str_plain_source_address_tuple;
extern PyObject *const_tuple_str_plain_HTTPHeaderDict_tuple;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_SSLError;
extern PyObject *const_str_plain_SubjectAltNameWarning;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_send;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain_auto_open;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain_DummyConnection;
extern PyObject *const_str_digest_f4cf83dd2e7e2f235646bf31dc9dfbff;
extern PyObject *const_int_pos_6;
extern PyObject *const_str_plain_binary_form;
extern PyObject *const_str_plain_putrequest;
extern PyObject *const_str_plain_HTTPConnection;
extern PyObject *const_str_plain_HTTPHeaderDict;
extern PyObject *const_str_plain_SocketTimeout;
static PyObject *const_str_digest_9edecb228e21673906c9e9045e5572f5;
static PyObject *const_tuple_str_plain_HTTPException_tuple;
extern PyObject *const_str_plain_extra_kw;
extern PyObject *const_str_plain_cert;
extern PyObject *const_str_plain_certfile;
extern PyObject *const_str_plain_keyfile;
static PyObject *const_tuple_str_plain_strict_none_tuple;
extern PyObject *const_str_plain_CERT_NONE;
extern PyObject *const_str_plain_subjectAltName;
extern PyObject *const_str_plain_request_chunked;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_e8fecadf67c84324aa28152f08ceec4c;
static PyObject *const_str_plain__HTTPConnection;
static PyObject *const_tuple_61284583746c6b5cc710968d0fedad5b_tuple;
extern PyObject *const_str_plain_rstrip;
extern PyObject *const_str_plain_items;
static PyObject *const_str_plain_skip_host;
extern PyObject *const_str_plain_setter;
extern PyObject *const_str_plain_endheaders;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_str_plain_assert_fingerprint;
extern PyObject *const_str_plain_ssl;
static PyObject *const_str_digest_e0fe92f188862ba1c4cac2ad70dff86d;
static PyObject *const_str_plain_today;
static PyObject *const_str_digest_76770aa881e569a0306b7353925db341;
static PyObject *const_str_digest_fa24e620292c5ddd664b0f39ae7cf5ea;
static PyObject *const_tuple_659bcfd89e2a907d800ea69675ef86b4_tuple;
extern PyObject *const_dict_93916f845314fde3dc45a1c4d3d34ff8;
extern PyObject *const_str_plain_url;
extern PyObject *const_str_plain_body;
static PyObject *const_str_plain__dns_host;
extern PyObject *const_str_plain_property;
extern PyObject *const_str_plain_BaseSSLError;
extern PyObject *const_str_plain_utf8;
extern PyObject *const_str_plain_path;
static PyObject *const_tuple_9ba071b8352bfa1da6b5cd19d910b3dc_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_args_str_plain_kw_tuple;
static PyObject *const_tuple_int_pos_2017_int_pos_6_int_pos_30_tuple;
extern PyObject *const_tuple_str_plain_utf8_tuple;
static PyObject *const_dict_937363fdfb0294000ca1176414b39b98;
static PyObject *const_str_plain__tunnel;
extern PyObject *const_str_plain_string_types;
static PyObject *const_str_plain_RECENT_DATE;
static PyObject *const_str_digest_df5958c87718dd50f2e0bfe7cc6ada5c;
extern PyObject *const_str_digest_80cf594c6b193676cb3f905f65b5d391;
static PyObject *const_int_pos_2017;
extern PyObject *const_str_plain_method;
static PyObject *const_tuple_str_plain_match_hostname_str_plain_CertificateError_tuple;
extern PyObject *const_str_plain_cert_file;
extern PyObject *const_tuple_type_str_tuple;
extern PyObject *const_tuple_type_ImportError_type_AttributeError_tuple;
static PyObject *const_str_plain__peer_cert;
static PyObject *const_str_plain_UnverifiedHTTPSConnection;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_str_digest_2b15502c566d8238f4869c227793bd1a;
extern PyObject *const_str_plain_https;
static PyObject *const_tuple_e4d50c48f2ee1b6eb3ae021a15141bf1_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_value_tuple;
static PyObject *const_str_plain_asserted_hostname;
static PyObject *const_tuple_str_digest_003800fb824e3437bbbf235acf31301c_tuple;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
extern PyObject *const_str_plain_CERT_REQUIRED;
extern PyObject *const_str_plain_log;
extern PyObject *const_str_plain__collections;
extern PyObject *const_str_plain_port_by_scheme;
extern PyObject *const_str_plain_kw;
static PyObject *const_tuple_str_plain_connection_tuple;
extern PyObject *const_tuple_str_digest_7ca129d2d421fe965ad48cbb290b579b_tuple;
extern PyObject *const_str_digest_0910c0c2f1750b2fe8203b1da8f91dfb;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_plain_sock;
static PyObject *const_str_digest_5e42e68968b4150e2b97070212311786;
extern PyObject *const_int_pos_80;
extern PyObject *const_tuple_str_digest_0910c0c2f1750b2fe8203b1da8f91dfb_tuple;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_SocketError;
extern PyObject *const_str_plain_create_connection;
static PyObject *const_str_plain__tunnel_host;
extern PyObject *const_str_plain_CertificateError;
extern PyObject *const_str_plain_exceptions;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_util;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_port;
static PyObject *const_str_plain_default_socket_options;
extern PyObject *const_str_plain_headers;
extern PyObject *const_str_plain_six;
extern PyObject *const_tuple_type_Exception_tuple;
extern PyObject *const_str_plain_host;
extern PyObject *const_str_digest_7ca129d2d421fe965ad48cbb290b579b;
extern PyObject *const_str_plain_check_hostname;
static PyObject *const_tuple_02414067ec49c68f9d7c2dbeff87995f_tuple;
extern PyObject *const_str_plain_expanduser;
extern PyObject *const_str_plain_match_hostname;
extern PyObject *const_tuple_none_none_none_none_none_none_none_tuple;
extern PyObject *const_str_plain_source_address;
extern PyObject *const_str_plain_PY3;
extern PyObject *const_str_plain_pop;
extern PyObject *const_str_plain_getpeercert;
extern PyObject *const_str_plain_socket_options;
extern PyObject *const_str_plain_header;
extern PyObject *const_str_plain_key_file;
extern PyObject *const_str_plain__prepare_conn;
extern PyObject *const_str_plain_hostname;
extern PyObject *const_str_plain_HTTPSConnection;
extern PyObject *const_str_plain_server_hostname;
extern PyObject *const_str_plain_HTTPException;
extern PyObject *const_str_plain_ca_certs;
static PyObject *const_str_digest_a2ffa7a4a6da141b7e16370ced35175d;
extern PyObject *const_str_plain_ssl_context;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_digest_dc659baf5812ef509a1bfb99226d850c;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_tuple_46883296661294fd3001b0890831f3c0_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_46883296661294fd3001b0890831f3c0_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_46883296661294fd3001b0890831f3c0_tuple, 1, const_str_plain_method ); Py_INCREF( const_str_plain_method );
    PyTuple_SET_ITEM( const_tuple_46883296661294fd3001b0890831f3c0_tuple, 2, const_str_plain_url ); Py_INCREF( const_str_plain_url );
    PyTuple_SET_ITEM( const_tuple_46883296661294fd3001b0890831f3c0_tuple, 3, const_str_plain_body ); Py_INCREF( const_str_plain_body );
    PyTuple_SET_ITEM( const_tuple_46883296661294fd3001b0890831f3c0_tuple, 4, const_str_plain_headers ); Py_INCREF( const_str_plain_headers );
    PyTuple_SET_ITEM( const_tuple_46883296661294fd3001b0890831f3c0_tuple, 5, const_str_plain_chunk ); Py_INCREF( const_str_plain_chunk );
    const_str_plain_skip_host = UNSTREAM_STRING( &constant_bin[ 1047101 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_46883296661294fd3001b0890831f3c0_tuple, 6, const_str_plain_skip_host ); Py_INCREF( const_str_plain_skip_host );
    PyTuple_SET_ITEM( const_tuple_46883296661294fd3001b0890831f3c0_tuple, 7, const_str_plain_header ); Py_INCREF( const_str_plain_header );
    PyTuple_SET_ITEM( const_tuple_46883296661294fd3001b0890831f3c0_tuple, 8, const_str_plain_value ); Py_INCREF( const_str_plain_value );
    const_str_plain_stringish_types = UNSTREAM_STRING( &constant_bin[ 1047110 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_46883296661294fd3001b0890831f3c0_tuple, 9, const_str_plain_stringish_types ); Py_INCREF( const_str_plain_stringish_types );
    const_str_plain_len_str = UNSTREAM_STRING( &constant_bin[ 898033 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_46883296661294fd3001b0890831f3c0_tuple, 10, const_str_plain_len_str ); Py_INCREF( const_str_plain_len_str );
    PyTuple_SET_ITEM( const_tuple_46883296661294fd3001b0890831f3c0_tuple, 11, const_str_plain_skip_accept_encoding ); Py_INCREF( const_str_plain_skip_accept_encoding );
    const_tuple_str_plain_cert_str_plain_asserted_hostname_str_plain_e_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cert_str_plain_asserted_hostname_str_plain_e_tuple, 0, const_str_plain_cert ); Py_INCREF( const_str_plain_cert );
    const_str_plain_asserted_hostname = UNSTREAM_STRING( &constant_bin[ 1047125 ], 17, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_cert_str_plain_asserted_hostname_str_plain_e_tuple, 1, const_str_plain_asserted_hostname ); Py_INCREF( const_str_plain_asserted_hostname );
    PyTuple_SET_ITEM( const_tuple_str_plain_cert_str_plain_asserted_hostname_str_plain_e_tuple, 2, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_tuple_str_plain_self_str_plain_e_str_plain_conn_str_plain_extra_kw_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_e_str_plain_conn_str_plain_extra_kw_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_e_str_plain_conn_str_plain_extra_kw_tuple, 1, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_e_str_plain_conn_str_plain_extra_kw_tuple, 2, const_str_plain_conn ); Py_INCREF( const_str_plain_conn );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_e_str_plain_conn_str_plain_extra_kw_tuple, 3, const_str_plain_extra_kw ); Py_INCREF( const_str_plain_extra_kw );
    const_str_digest_413072d56f5b6cab90a6a564aa42b34d = UNSTREAM_STRING( &constant_bin[ 1047142 ], 927, 0 );
    const_str_plain_is_time_off = UNSTREAM_STRING( &constant_bin[ 1048069 ], 11, 1 );
    const_str_digest_6c85cd0fa48022a0a18fa398644aa57f = UNSTREAM_STRING( &constant_bin[ 1048080 ], 54, 0 );
    const_tuple_type_BaseException_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_type_BaseException_tuple, 0, (PyObject *)PyExc_BaseException ); Py_INCREF( (PyObject *)PyExc_BaseException );
    const_str_plain__protocol = UNSTREAM_STRING( &constant_bin[ 22938 ], 9, 1 );
    const_str_digest_003800fb824e3437bbbf235acf31301c = UNSTREAM_STRING( &constant_bin[ 1048134 ], 18, 0 );
    const_dict_a6ff982bac01e8d0bcf997a792f16c84 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_a6ff982bac01e8d0bcf997a792f16c84, const_str_plain_binary_form, Py_True );
    assert( PyDict_Size( const_dict_a6ff982bac01e8d0bcf997a792f16c84 ) == 1 );
    const_str_digest_fbcb06792f2497ac6c7abd423e9e2d62 = UNSTREAM_STRING( &constant_bin[ 1048152 ], 9, 0 );
    const_str_digest_23a97306f3a4bf1a3b9bf48c92fd45b8 = UNSTREAM_STRING( &constant_bin[ 1048161 ], 27, 0 );
    const_tuple_str_plain_HTTPConnection_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HTTPConnection_tuple, 0, const_str_plain_HTTPConnection ); Py_INCREF( const_str_plain_HTTPConnection );
    const_tuple_1bf7ec2364041a6038f313c34bc76226_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_1bf7ec2364041a6038f313c34bc76226_tuple, 0, const_str_digest_2b15502c566d8238f4869c227793bd1a ); Py_INCREF( const_str_digest_2b15502c566d8238f4869c227793bd1a );
    PyTuple_SET_ITEM( const_tuple_1bf7ec2364041a6038f313c34bc76226_tuple, 1, const_str_plain_chunked ); Py_INCREF( const_str_plain_chunked );
    const_str_digest_feb167a80b64f9a6111c2ef450038b43 = UNSTREAM_STRING( &constant_bin[ 1048188 ], 215, 0 );
    const_str_plain__match_hostname = UNSTREAM_STRING( &constant_bin[ 1048403 ], 15, 1 );
    const_str_plain_IPPROTO_TCP = UNSTREAM_STRING( &constant_bin[ 1048418 ], 11, 1 );
    const_str_plain_TCP_NODELAY = UNSTREAM_STRING( &constant_bin[ 1048429 ], 11, 1 );
    const_tuple_str_plain_source_address_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_source_address_tuple, 0, const_str_plain_source_address ); Py_INCREF( const_str_plain_source_address );
    const_str_digest_9edecb228e21673906c9e9045e5572f5 = UNSTREAM_STRING( &constant_bin[ 1048440 ], 234, 0 );
    const_tuple_str_plain_HTTPException_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HTTPException_tuple, 0, const_str_plain_HTTPException ); Py_INCREF( const_str_plain_HTTPException );
    const_tuple_str_plain_strict_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_strict_none_tuple, 0, const_str_plain_strict ); Py_INCREF( const_str_plain_strict );
    PyTuple_SET_ITEM( const_tuple_str_plain_strict_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_digest_e8fecadf67c84324aa28152f08ceec4c = UNSTREAM_STRING( &constant_bin[ 1048674 ], 64, 0 );
    const_str_plain__HTTPConnection = UNSTREAM_STRING( &constant_bin[ 1048738 ], 15, 1 );
    const_tuple_61284583746c6b5cc710968d0fedad5b_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_61284583746c6b5cc710968d0fedad5b_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_61284583746c6b5cc710968d0fedad5b_tuple, 1, const_str_plain_key_file ); Py_INCREF( const_str_plain_key_file );
    PyTuple_SET_ITEM( const_tuple_61284583746c6b5cc710968d0fedad5b_tuple, 2, const_str_plain_cert_file ); Py_INCREF( const_str_plain_cert_file );
    PyTuple_SET_ITEM( const_tuple_61284583746c6b5cc710968d0fedad5b_tuple, 3, const_str_plain_cert_reqs ); Py_INCREF( const_str_plain_cert_reqs );
    PyTuple_SET_ITEM( const_tuple_61284583746c6b5cc710968d0fedad5b_tuple, 4, const_str_plain_ca_certs ); Py_INCREF( const_str_plain_ca_certs );
    PyTuple_SET_ITEM( const_tuple_61284583746c6b5cc710968d0fedad5b_tuple, 5, const_str_plain_assert_hostname ); Py_INCREF( const_str_plain_assert_hostname );
    PyTuple_SET_ITEM( const_tuple_61284583746c6b5cc710968d0fedad5b_tuple, 6, const_str_plain_assert_fingerprint ); Py_INCREF( const_str_plain_assert_fingerprint );
    PyTuple_SET_ITEM( const_tuple_61284583746c6b5cc710968d0fedad5b_tuple, 7, const_str_plain_ca_cert_dir ); Py_INCREF( const_str_plain_ca_cert_dir );
    const_str_digest_e0fe92f188862ba1c4cac2ad70dff86d = UNSTREAM_STRING( &constant_bin[ 1048753 ], 112, 0 );
    const_str_plain_today = UNSTREAM_STRING( &constant_bin[ 1048865 ], 5, 1 );
    const_str_digest_76770aa881e569a0306b7353925db341 = UNSTREAM_STRING( &constant_bin[ 1048870 ], 87, 0 );
    const_str_digest_fa24e620292c5ddd664b0f39ae7cf5ea = UNSTREAM_STRING( &constant_bin[ 1048957 ], 91, 0 );
    const_tuple_659bcfd89e2a907d800ea69675ef86b4_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_659bcfd89e2a907d800ea69675ef86b4_tuple, 0, const_str_plain_resolve_cert_reqs ); Py_INCREF( const_str_plain_resolve_cert_reqs );
    PyTuple_SET_ITEM( const_tuple_659bcfd89e2a907d800ea69675ef86b4_tuple, 1, const_str_plain_resolve_ssl_version ); Py_INCREF( const_str_plain_resolve_ssl_version );
    PyTuple_SET_ITEM( const_tuple_659bcfd89e2a907d800ea69675ef86b4_tuple, 2, const_str_plain_assert_fingerprint ); Py_INCREF( const_str_plain_assert_fingerprint );
    PyTuple_SET_ITEM( const_tuple_659bcfd89e2a907d800ea69675ef86b4_tuple, 3, const_str_plain_create_urllib3_context ); Py_INCREF( const_str_plain_create_urllib3_context );
    PyTuple_SET_ITEM( const_tuple_659bcfd89e2a907d800ea69675ef86b4_tuple, 4, const_str_plain_ssl_wrap_socket ); Py_INCREF( const_str_plain_ssl_wrap_socket );
    const_str_plain__dns_host = UNSTREAM_STRING( &constant_bin[ 1048275 ], 9, 1 );
    const_tuple_9ba071b8352bfa1da6b5cd19d910b3dc_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_9ba071b8352bfa1da6b5cd19d910b3dc_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_9ba071b8352bfa1da6b5cd19d910b3dc_tuple, 1, const_str_plain_host ); Py_INCREF( const_str_plain_host );
    PyTuple_SET_ITEM( const_tuple_9ba071b8352bfa1da6b5cd19d910b3dc_tuple, 2, const_str_plain_port ); Py_INCREF( const_str_plain_port );
    PyTuple_SET_ITEM( const_tuple_9ba071b8352bfa1da6b5cd19d910b3dc_tuple, 3, const_str_plain_key_file ); Py_INCREF( const_str_plain_key_file );
    PyTuple_SET_ITEM( const_tuple_9ba071b8352bfa1da6b5cd19d910b3dc_tuple, 4, const_str_plain_cert_file ); Py_INCREF( const_str_plain_cert_file );
    PyTuple_SET_ITEM( const_tuple_9ba071b8352bfa1da6b5cd19d910b3dc_tuple, 5, const_str_plain_strict ); Py_INCREF( const_str_plain_strict );
    PyTuple_SET_ITEM( const_tuple_9ba071b8352bfa1da6b5cd19d910b3dc_tuple, 6, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );
    PyTuple_SET_ITEM( const_tuple_9ba071b8352bfa1da6b5cd19d910b3dc_tuple, 7, const_str_plain_ssl_context ); Py_INCREF( const_str_plain_ssl_context );
    PyTuple_SET_ITEM( const_tuple_9ba071b8352bfa1da6b5cd19d910b3dc_tuple, 8, const_str_plain_server_hostname ); Py_INCREF( const_str_plain_server_hostname );
    PyTuple_SET_ITEM( const_tuple_9ba071b8352bfa1da6b5cd19d910b3dc_tuple, 9, const_str_plain_kw ); Py_INCREF( const_str_plain_kw );
    const_tuple_str_plain_self_str_plain_args_str_plain_kw_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_args_str_plain_kw_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_args_str_plain_kw_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_args_str_plain_kw_tuple, 2, const_str_plain_kw ); Py_INCREF( const_str_plain_kw );
    const_tuple_int_pos_2017_int_pos_6_int_pos_30_tuple = PyTuple_New( 3 );
    const_int_pos_2017 = PyInt_FromLong( 2017l );
    PyTuple_SET_ITEM( const_tuple_int_pos_2017_int_pos_6_int_pos_30_tuple, 0, const_int_pos_2017 ); Py_INCREF( const_int_pos_2017 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2017_int_pos_6_int_pos_30_tuple, 1, const_int_pos_6 ); Py_INCREF( const_int_pos_6 );
    PyTuple_SET_ITEM( const_tuple_int_pos_2017_int_pos_6_int_pos_30_tuple, 2, const_int_pos_30 ); Py_INCREF( const_int_pos_30 );
    const_dict_937363fdfb0294000ca1176414b39b98 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_937363fdfb0294000ca1176414b39b98, const_str_plain___module__, const_str_digest_003800fb824e3437bbbf235acf31301c );
    const_str_digest_df5958c87718dd50f2e0bfe7cc6ada5c = UNSTREAM_STRING( &constant_bin[ 1049048 ], 45, 0 );
    PyDict_SetItem( const_dict_937363fdfb0294000ca1176414b39b98, const_str_plain___doc__, const_str_digest_df5958c87718dd50f2e0bfe7cc6ada5c );
    assert( PyDict_Size( const_dict_937363fdfb0294000ca1176414b39b98 ) == 2 );
    const_str_plain__tunnel = UNSTREAM_STRING( &constant_bin[ 1049093 ], 7, 1 );
    const_str_plain_RECENT_DATE = UNSTREAM_STRING( &constant_bin[ 1049100 ], 11, 1 );
    const_tuple_str_plain_match_hostname_str_plain_CertificateError_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_match_hostname_str_plain_CertificateError_tuple, 0, const_str_plain_match_hostname ); Py_INCREF( const_str_plain_match_hostname );
    PyTuple_SET_ITEM( const_tuple_str_plain_match_hostname_str_plain_CertificateError_tuple, 1, const_str_plain_CertificateError ); Py_INCREF( const_str_plain_CertificateError );
    const_str_plain__peer_cert = UNSTREAM_STRING( &constant_bin[ 26468 ], 10, 1 );
    const_str_plain_UnverifiedHTTPSConnection = UNSTREAM_STRING( &constant_bin[ 1049111 ], 25, 1 );
    const_tuple_e4d50c48f2ee1b6eb3ae021a15141bf1_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_e4d50c48f2ee1b6eb3ae021a15141bf1_tuple, 0, const_str_plain_NewConnectionError ); Py_INCREF( const_str_plain_NewConnectionError );
    PyTuple_SET_ITEM( const_tuple_e4d50c48f2ee1b6eb3ae021a15141bf1_tuple, 1, const_str_plain_ConnectTimeoutError ); Py_INCREF( const_str_plain_ConnectTimeoutError );
    PyTuple_SET_ITEM( const_tuple_e4d50c48f2ee1b6eb3ae021a15141bf1_tuple, 2, const_str_plain_SubjectAltNameWarning ); Py_INCREF( const_str_plain_SubjectAltNameWarning );
    PyTuple_SET_ITEM( const_tuple_e4d50c48f2ee1b6eb3ae021a15141bf1_tuple, 3, const_str_plain_SystemTimeWarning ); Py_INCREF( const_str_plain_SystemTimeWarning );
    const_tuple_str_digest_003800fb824e3437bbbf235acf31301c_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_003800fb824e3437bbbf235acf31301c_tuple, 0, const_str_digest_003800fb824e3437bbbf235acf31301c ); Py_INCREF( const_str_digest_003800fb824e3437bbbf235acf31301c );
    const_tuple_str_plain_connection_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_connection_tuple, 0, const_str_plain_connection ); Py_INCREF( const_str_plain_connection );
    const_str_digest_5e42e68968b4150e2b97070212311786 = UNSTREAM_STRING( &constant_bin[ 1049136 ], 88, 0 );
    const_str_plain__tunnel_host = UNSTREAM_STRING( &constant_bin[ 1049224 ], 12, 1 );
    const_str_plain_default_socket_options = UNSTREAM_STRING( &constant_bin[ 1049236 ], 22, 1 );
    const_tuple_02414067ec49c68f9d7c2dbeff87995f_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_02414067ec49c68f9d7c2dbeff87995f_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_02414067ec49c68f9d7c2dbeff87995f_tuple, 1, const_str_plain_server_hostname ); Py_INCREF( const_str_plain_server_hostname );
    PyTuple_SET_ITEM( const_tuple_02414067ec49c68f9d7c2dbeff87995f_tuple, 2, const_str_plain_is_time_off ); Py_INCREF( const_str_plain_is_time_off );
    PyTuple_SET_ITEM( const_tuple_02414067ec49c68f9d7c2dbeff87995f_tuple, 3, const_str_plain_hostname ); Py_INCREF( const_str_plain_hostname );
    PyTuple_SET_ITEM( const_tuple_02414067ec49c68f9d7c2dbeff87995f_tuple, 4, const_str_plain_cert ); Py_INCREF( const_str_plain_cert );
    PyTuple_SET_ITEM( const_tuple_02414067ec49c68f9d7c2dbeff87995f_tuple, 5, const_str_plain_context ); Py_INCREF( const_str_plain_context );
    PyTuple_SET_ITEM( const_tuple_02414067ec49c68f9d7c2dbeff87995f_tuple, 6, const_str_plain_conn ); Py_INCREF( const_str_plain_conn );
    const_str_digest_a2ffa7a4a6da141b7e16370ced35175d = UNSTREAM_STRING( &constant_bin[ 1049258 ], 1060, 0 );
    const_str_digest_dc659baf5812ef509a1bfb99226d850c = UNSTREAM_STRING( &constant_bin[ 1050318 ], 131, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$connection( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_06097705cf8d915904fdd92f6f7e021f;
static PyCodeObject *codeobj_0b06d13aaa2e0f20c4a181cecf3bc156;
static PyCodeObject *codeobj_8a2d60eac0054a048957f5a0b8b61103;
static PyCodeObject *codeobj_7a19e30397471c4d2178416ce0dc75ab;
static PyCodeObject *codeobj_3c17f49e3fb13d361d23950e78236afa;
static PyCodeObject *codeobj_90ecccce4d2f06fa86f9ccae6f8805a5;
static PyCodeObject *codeobj_b548f10e4cf12bc70feb7236650b9db9;
static PyCodeObject *codeobj_4ee2562cce922dcdaab675b32028e11e;
static PyCodeObject *codeobj_4ca8c9ab68f82e9b05e578fb67288f09;
static PyCodeObject *codeobj_cfe928b0176d83ef4ea8a3da027112cb;
static PyCodeObject *codeobj_74636c179fd58215ac1137c71c394450;
static PyCodeObject *codeobj_10cf64b390001ab88e5d186c1b58f5dd;
static PyCodeObject *codeobj_acf6b9342bcbfb0059edb5dbca925f02;
static PyCodeObject *codeobj_c802c5ad73baea2ab7c33d548cf7fc84;
static PyCodeObject *codeobj_527b1bf39a155501c566215113af62ca;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_6c85cd0fa48022a0a18fa398644aa57f;
    codeobj_06097705cf8d915904fdd92f6f7e021f = MAKE_CODEOBJ( module_filename_obj, const_str_digest_23a97306f3a4bf1a3b9bf48c92fd45b8, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_0b06d13aaa2e0f20c4a181cecf3bc156 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_HTTPConnection, 70, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_8a2d60eac0054a048957f5a0b8b61103 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_HTTPSConnection, 223, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_7a19e30397471c4d2178416ce0dc75ab = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 103, const_tuple_str_plain_self_str_plain_args_str_plain_kw_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_3c17f49e3fb13d361d23950e78236afa = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 228, const_tuple_9ba071b8352bfa1da6b5cd19d910b3dc_tuple, 9, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_90ecccce4d2f06fa86f9ccae6f8805a5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__match_hostname, 372, const_tuple_str_plain_cert_str_plain_asserted_hostname_str_plain_e_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_b548f10e4cf12bc70feb7236650b9db9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__new_conn, 145, const_tuple_str_plain_self_str_plain_e_str_plain_conn_str_plain_extra_kw_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_4ee2562cce922dcdaab675b32028e11e = MAKE_CODEOBJ( module_filename_obj, const_str_plain__prepare_conn, 172, const_tuple_str_plain_self_str_plain_conn_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_4ca8c9ab68f82e9b05e578fb67288f09 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_connect, 180, const_tuple_str_plain_self_str_plain_conn_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_cfe928b0176d83ef4ea8a3da027112cb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_connect, 244, const_tuple_str_plain_self_str_plain_conn_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_74636c179fd58215ac1137c71c394450 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_connect, 299, const_tuple_02414067ec49c68f9d7c2dbeff87995f_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_10cf64b390001ab88e5d186c1b58f5dd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_host, 116, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_acf6b9342bcbfb0059edb5dbca925f02 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_host, 135, const_tuple_str_plain_self_str_plain_value_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_c802c5ad73baea2ab7c33d548cf7fc84 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_request_chunked, 184, const_tuple_46883296661294fd3001b0890831f3c0_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_527b1bf39a155501c566215113af62ca = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_cert, 274, const_tuple_61284583746c6b5cc710968d0fedad5b_tuple, 8, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_6_complex_call_helper_pos_star_list_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_4_complex_call_helper_pos_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_7_complex_call_helper_pos_keywords_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_10_set_cert( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_11_connect(  );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_12__match_hostname(  );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_2_host(  );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_3_host(  );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_4__new_conn(  );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_5__prepare_conn(  );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_6_connect(  );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_7_request_chunked( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_8___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_9_connect(  );


// The module function definitions.
static PyObject *impl_urllib3$connection$$$function_1___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kw = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_7a19e30397471c4d2178416ce0dc75ab;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_7a19e30397471c4d2178416ce0dc75ab = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7a19e30397471c4d2178416ce0dc75ab, codeobj_7a19e30397471c4d2178416ce0dc75ab, module_urllib3$connection, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_7a19e30397471c4d2178416ce0dc75ab = cache_frame_7a19e30397471c4d2178416ce0dc75ab;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7a19e30397471c4d2178416ce0dc75ab );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7a19e30397471c4d2178416ce0dc75ab ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_six );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "six" );
            exception_tb = NULL;

            exception_lineno = 104;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_PY3 );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 104;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 104;
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( par_kw );
            tmp_called_instance_1 = par_kw;
            frame_7a19e30397471c4d2178416ce0dc75ab->m_frame.f_lineno = 105;
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_1, const_str_plain_pop, &PyTuple_GET_ITEM( const_tuple_str_plain_strict_none_tuple, 0 ) );

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 105;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_kw );
        tmp_called_instance_2 = par_kw;
        frame_7a19e30397471c4d2178416ce0dc75ab->m_frame.f_lineno = 108;
        tmp_assattr_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_source_address_tuple, 0 ) );

        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_source_address, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_kw );
        tmp_source_name_2 = par_kw;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_pop );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = const_str_plain_socket_options;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_default_socket_options );
        if ( tmp_args_element_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 112;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_7a19e30397471c4d2178416ce0dc75ab->m_frame.f_lineno = 112;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_assattr_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );
        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_socket_options, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
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
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_call_result_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain__HTTPConnection );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__HTTPConnection );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_HTTPConnection" );
            exception_tb = NULL;

            exception_lineno = 114;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_2;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___init__ );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_tuple_element_1 = par_self;
        tmp_dircall_arg2_1 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_args );
        tmp_dircall_arg3_1 = par_args;
        CHECK_OBJECT( par_kw );
        tmp_dircall_arg4_1 = par_kw;
        Py_INCREF( tmp_dircall_arg3_1 );
        Py_INCREF( tmp_dircall_arg4_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_call_result_2 = impl___internal__$$$function_6_complex_call_helper_pos_star_list_star_dict( dir_call_args );
        }
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 114;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7a19e30397471c4d2178416ce0dc75ab );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7a19e30397471c4d2178416ce0dc75ab );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7a19e30397471c4d2178416ce0dc75ab, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7a19e30397471c4d2178416ce0dc75ab->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7a19e30397471c4d2178416ce0dc75ab, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7a19e30397471c4d2178416ce0dc75ab,
        type_description_1,
        par_self,
        par_args,
        par_kw
    );


    // Release cached frame.
    if ( frame_7a19e30397471c4d2178416ce0dc75ab == cache_frame_7a19e30397471c4d2178416ce0dc75ab )
    {
        Py_DECREF( frame_7a19e30397471c4d2178416ce0dc75ab );
    }
    cache_frame_7a19e30397471c4d2178416ce0dc75ab = NULL;

    assertFrameObject( frame_7a19e30397471c4d2178416ce0dc75ab );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kw );
    Py_DECREF( par_kw );
    par_kw = NULL;

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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kw );
    Py_DECREF( par_kw );
    par_kw = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_1___init__ );
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


static PyObject *impl_urllib3$connection$$$function_2_host( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_10cf64b390001ab88e5d186c1b58f5dd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_10cf64b390001ab88e5d186c1b58f5dd = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_10cf64b390001ab88e5d186c1b58f5dd, codeobj_10cf64b390001ab88e5d186c1b58f5dd, module_urllib3$connection, sizeof(void *) );
    frame_10cf64b390001ab88e5d186c1b58f5dd = cache_frame_10cf64b390001ab88e5d186c1b58f5dd;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_10cf64b390001ab88e5d186c1b58f5dd );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_10cf64b390001ab88e5d186c1b58f5dd ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__dns_host );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_10cf64b390001ab88e5d186c1b58f5dd->m_frame.f_lineno = 133;
        tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_rstrip, &PyTuple_GET_ITEM( const_tuple_str_dot_tuple, 0 ) );

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10cf64b390001ab88e5d186c1b58f5dd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_10cf64b390001ab88e5d186c1b58f5dd );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_10cf64b390001ab88e5d186c1b58f5dd );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_10cf64b390001ab88e5d186c1b58f5dd, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_10cf64b390001ab88e5d186c1b58f5dd->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_10cf64b390001ab88e5d186c1b58f5dd, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_10cf64b390001ab88e5d186c1b58f5dd,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_10cf64b390001ab88e5d186c1b58f5dd == cache_frame_10cf64b390001ab88e5d186c1b58f5dd )
    {
        Py_DECREF( frame_10cf64b390001ab88e5d186c1b58f5dd );
    }
    cache_frame_10cf64b390001ab88e5d186c1b58f5dd = NULL;

    assertFrameObject( frame_10cf64b390001ab88e5d186c1b58f5dd );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_2_host );
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
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_2_host );
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


static PyObject *impl_urllib3$connection$$$function_3_host( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_acf6b9342bcbfb0059edb5dbca925f02;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_acf6b9342bcbfb0059edb5dbca925f02 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_acf6b9342bcbfb0059edb5dbca925f02, codeobj_acf6b9342bcbfb0059edb5dbca925f02, module_urllib3$connection, sizeof(void *)+sizeof(void *) );
    frame_acf6b9342bcbfb0059edb5dbca925f02 = cache_frame_acf6b9342bcbfb0059edb5dbca925f02;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_acf6b9342bcbfb0059edb5dbca925f02 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_acf6b9342bcbfb0059edb5dbca925f02 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_value );
        tmp_assattr_name_1 = par_value;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__dns_host, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_acf6b9342bcbfb0059edb5dbca925f02 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_acf6b9342bcbfb0059edb5dbca925f02 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_acf6b9342bcbfb0059edb5dbca925f02, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_acf6b9342bcbfb0059edb5dbca925f02->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_acf6b9342bcbfb0059edb5dbca925f02, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_acf6b9342bcbfb0059edb5dbca925f02,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame.
    if ( frame_acf6b9342bcbfb0059edb5dbca925f02 == cache_frame_acf6b9342bcbfb0059edb5dbca925f02 )
    {
        Py_DECREF( frame_acf6b9342bcbfb0059edb5dbca925f02 );
    }
    cache_frame_acf6b9342bcbfb0059edb5dbca925f02 = NULL;

    assertFrameObject( frame_acf6b9342bcbfb0059edb5dbca925f02 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_3_host );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

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

    CHECK_OBJECT( (PyObject *)par_value );
    Py_DECREF( par_value );
    par_value = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_3_host );
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


static PyObject *impl_urllib3$connection$$$function_4__new_conn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_e = NULL;
    PyObject *var_conn = NULL;
    PyObject *var_extra_kw = NULL;
    struct Nuitka_FrameObject *frame_b548f10e4cf12bc70feb7236650b9db9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_b548f10e4cf12bc70feb7236650b9db9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = PyDict_New();
        assert( var_extra_kw == NULL );
        var_extra_kw = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b548f10e4cf12bc70feb7236650b9db9, codeobj_b548f10e4cf12bc70feb7236650b9db9, module_urllib3$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b548f10e4cf12bc70feb7236650b9db9 = cache_frame_b548f10e4cf12bc70feb7236650b9db9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b548f10e4cf12bc70feb7236650b9db9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b548f10e4cf12bc70feb7236650b9db9 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_source_address );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 151;
            type_description_1 = "oooo";
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
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_dictset_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_source_address );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 152;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_extra_kw );
            tmp_dictset_dict = var_extra_kw;
            tmp_dictset_key = const_str_plain_source_address;
            tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_socket_options );
        if ( tmp_attribute_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 154;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE( tmp_attribute_value_2 );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_2 );

            exception_lineno = 154;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_2 );
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
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_4 = par_self;
            tmp_dictset_value = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_socket_options );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 155;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_extra_kw );
            tmp_dictset_dict = var_extra_kw;
            tmp_dictset_key = const_str_plain_socket_options;
            tmp_res = PyDict_SetItem( tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        branch_no_2:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_source_name_6;
        PyObject *tmp_source_name_7;
        PyObject *tmp_source_name_8;
        PyObject *tmp_dircall_arg3_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_connection );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_connection );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "connection" );
            exception_tb = NULL;

            exception_lineno = 158;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_source_name_5 = tmp_mvar_value_1;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_create_connection );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_6 = par_self;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__dns_host );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );

            exception_lineno = 159;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
        CHECK_OBJECT( par_self );
        tmp_source_name_7 = par_self;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_port );
        if ( tmp_tuple_element_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_tuple_element_1 );

            exception_lineno = 159;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
        tmp_dircall_arg2_1 = PyTuple_New( 2 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_self );
        tmp_source_name_8 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_timeout );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dircall_arg1_1 );
            Py_DECREF( tmp_dircall_arg2_1 );

            exception_lineno = 159;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( var_extra_kw );
        tmp_dircall_arg3_1 = var_extra_kw;
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_2 = impl___internal__$$$function_4_complex_call_helper_pos_star_dict( dir_call_args );
        }
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 158;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert( var_conn == NULL );
        var_conn = tmp_assign_source_2;
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
    PRESERVE_FRAME_EXCEPTION( frame_b548f10e4cf12bc70feb7236650b9db9 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_b548f10e4cf12bc70feb7236650b9db9, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_b548f10e4cf12bc70feb7236650b9db9, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_2;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_SocketTimeout );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketTimeout );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "SocketTimeout" );
            exception_tb = NULL;

            exception_lineno = 161;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_2;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 161;
            type_description_1 = "oooo";
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
            tmp_assign_source_3 = EXC_VALUE(PyThreadState_GET());
            assert( var_e == NULL );
            Py_INCREF( tmp_assign_source_3 );
            var_e = tmp_assign_source_3;
        }
        {
            PyObject *tmp_raise_type_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_source_name_9;
            PyObject *tmp_source_name_10;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "ConnectTimeoutError" );
                exception_tb = NULL;

                exception_lineno = 162;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_3;
            CHECK_OBJECT( par_self );
            tmp_args_element_name_1 = par_self;
            tmp_left_name_1 = const_str_digest_03224f9e3167cae45c1e00020c2975eb;
            CHECK_OBJECT( par_self );
            tmp_source_name_9 = par_self;
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_host );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 164;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = PyTuple_New( 2 );
            PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_3 );
            CHECK_OBJECT( par_self );
            tmp_source_name_10 = par_self;
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_timeout );
            if ( tmp_tuple_element_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_right_name_1 );

                exception_lineno = 164;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_3 );
            tmp_args_element_name_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 163;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_b548f10e4cf12bc70feb7236650b9db9->m_frame.f_lineno = 162;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_raise_type_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 162;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            exception_type = tmp_raise_type_1;
            exception_lineno = 162;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        goto branch_end_3;
        branch_no_3:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_mvar_value_4;
            tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_SocketError );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketError );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "SocketError" );
                exception_tb = NULL;

                exception_lineno = 166;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_compexpr_right_2 = tmp_mvar_value_4;
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 166;
                type_description_1 = "oooo";
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
                tmp_assign_source_4 = EXC_VALUE(PyThreadState_GET());
                assert( var_e == NULL );
                Py_INCREF( tmp_assign_source_4 );
                var_e = tmp_assign_source_4;
            }
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_args_element_name_3;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_left_name_2;
                PyObject *tmp_right_name_2;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_NewConnectionError );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NewConnectionError );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "NewConnectionError" );
                    exception_tb = NULL;

                    exception_lineno = 167;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_2 = tmp_mvar_value_5;
                CHECK_OBJECT( par_self );
                tmp_args_element_name_3 = par_self;
                tmp_left_name_2 = const_str_digest_a93bc1dc732be398b86f8538baa37185;
                CHECK_OBJECT( var_e );
                tmp_right_name_2 = var_e;
                tmp_args_element_name_4 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
                if ( tmp_args_element_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 168;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                frame_b548f10e4cf12bc70feb7236650b9db9->m_frame.f_lineno = 167;
                {
                    PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                }

                Py_DECREF( tmp_args_element_name_4 );
                if ( tmp_raise_type_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 167;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_2;
                exception_lineno = 167;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            goto branch_end_4;
            branch_no_4:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 157;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_b548f10e4cf12bc70feb7236650b9db9->m_frame) frame_b548f10e4cf12bc70feb7236650b9db9->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
            branch_end_4:;
        }
        branch_end_3:;
    }
    // End of try:
    try_end_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_b548f10e4cf12bc70feb7236650b9db9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_b548f10e4cf12bc70feb7236650b9db9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b548f10e4cf12bc70feb7236650b9db9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b548f10e4cf12bc70feb7236650b9db9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b548f10e4cf12bc70feb7236650b9db9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b548f10e4cf12bc70feb7236650b9db9,
        type_description_1,
        par_self,
        var_e,
        var_conn,
        var_extra_kw
    );


    // Release cached frame.
    if ( frame_b548f10e4cf12bc70feb7236650b9db9 == cache_frame_b548f10e4cf12bc70feb7236650b9db9 )
    {
        Py_DECREF( frame_b548f10e4cf12bc70feb7236650b9db9 );
    }
    cache_frame_b548f10e4cf12bc70feb7236650b9db9 = NULL;

    assertFrameObject( frame_b548f10e4cf12bc70feb7236650b9db9 );

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
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_4__new_conn );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_conn );
    Py_DECREF( var_conn );
    var_conn = NULL;

    CHECK_OBJECT( (PyObject *)var_extra_kw );
    Py_DECREF( var_extra_kw );
    var_extra_kw = NULL;

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

    Py_XDECREF( var_e );
    var_e = NULL;

    CHECK_OBJECT( (PyObject *)var_extra_kw );
    Py_DECREF( var_extra_kw );
    var_extra_kw = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_4__new_conn );
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


static PyObject *impl_urllib3$connection$$$function_5__prepare_conn( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_conn = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_4ee2562cce922dcdaab675b32028e11e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4ee2562cce922dcdaab675b32028e11e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4ee2562cce922dcdaab675b32028e11e, codeobj_4ee2562cce922dcdaab675b32028e11e, module_urllib3$connection, sizeof(void *)+sizeof(void *) );
    frame_4ee2562cce922dcdaab675b32028e11e = cache_frame_4ee2562cce922dcdaab675b32028e11e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4ee2562cce922dcdaab675b32028e11e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4ee2562cce922dcdaab675b32028e11e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_conn );
        tmp_assattr_name_1 = par_conn;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_sock, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 173;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__tunnel_host );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 174;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 174;
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( par_self );
            tmp_called_instance_1 = par_self;
            frame_4ee2562cce922dcdaab675b32028e11e->m_frame.f_lineno = 176;
            tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__tunnel );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 176;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            tmp_assattr_name_2 = const_int_0;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_auto_open, tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 178;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ee2562cce922dcdaab675b32028e11e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ee2562cce922dcdaab675b32028e11e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4ee2562cce922dcdaab675b32028e11e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4ee2562cce922dcdaab675b32028e11e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4ee2562cce922dcdaab675b32028e11e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4ee2562cce922dcdaab675b32028e11e,
        type_description_1,
        par_self,
        par_conn
    );


    // Release cached frame.
    if ( frame_4ee2562cce922dcdaab675b32028e11e == cache_frame_4ee2562cce922dcdaab675b32028e11e )
    {
        Py_DECREF( frame_4ee2562cce922dcdaab675b32028e11e );
    }
    cache_frame_4ee2562cce922dcdaab675b32028e11e = NULL;

    assertFrameObject( frame_4ee2562cce922dcdaab675b32028e11e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_5__prepare_conn );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_5__prepare_conn );
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


static PyObject *impl_urllib3$connection$$$function_6_connect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_conn = NULL;
    struct Nuitka_FrameObject *frame_4ca8c9ab68f82e9b05e578fb67288f09;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4ca8c9ab68f82e9b05e578fb67288f09 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_4ca8c9ab68f82e9b05e578fb67288f09, codeobj_4ca8c9ab68f82e9b05e578fb67288f09, module_urllib3$connection, sizeof(void *)+sizeof(void *) );
    frame_4ca8c9ab68f82e9b05e578fb67288f09 = cache_frame_4ca8c9ab68f82e9b05e578fb67288f09;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_4ca8c9ab68f82e9b05e578fb67288f09 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_4ca8c9ab68f82e9b05e578fb67288f09 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_4ca8c9ab68f82e9b05e578fb67288f09->m_frame.f_lineno = 181;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__new_conn );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 181;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_conn == NULL );
        var_conn = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT( var_conn );
        tmp_args_element_name_1 = var_conn;
        frame_4ca8c9ab68f82e9b05e578fb67288f09->m_frame.f_lineno = 182;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__prepare_conn, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 182;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ca8c9ab68f82e9b05e578fb67288f09 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_4ca8c9ab68f82e9b05e578fb67288f09 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_4ca8c9ab68f82e9b05e578fb67288f09, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_4ca8c9ab68f82e9b05e578fb67288f09->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_4ca8c9ab68f82e9b05e578fb67288f09, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_4ca8c9ab68f82e9b05e578fb67288f09,
        type_description_1,
        par_self,
        var_conn
    );


    // Release cached frame.
    if ( frame_4ca8c9ab68f82e9b05e578fb67288f09 == cache_frame_4ca8c9ab68f82e9b05e578fb67288f09 )
    {
        Py_DECREF( frame_4ca8c9ab68f82e9b05e578fb67288f09 );
    }
    cache_frame_4ca8c9ab68f82e9b05e578fb67288f09 = NULL;

    assertFrameObject( frame_4ca8c9ab68f82e9b05e578fb67288f09 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_6_connect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_conn );
    var_conn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_6_connect );
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


static PyObject *impl_urllib3$connection$$$function_7_request_chunked( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_method = python_pars[ 1 ];
    PyObject *par_url = python_pars[ 2 ];
    PyObject *par_body = python_pars[ 3 ];
    PyObject *par_headers = python_pars[ 4 ];
    PyObject *var_chunk = NULL;
    nuitka_bool var_skip_host = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_header = NULL;
    PyObject *var_value = NULL;
    PyObject *var_stringish_types = NULL;
    PyObject *var_len_str = NULL;
    nuitka_bool var_skip_accept_encoding = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_c802c5ad73baea2ab7c33d548cf7fc84;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_c802c5ad73baea2ab7c33d548cf7fc84 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c802c5ad73baea2ab7c33d548cf7fc84, codeobj_c802c5ad73baea2ab7c33d548cf7fc84, module_urllib3$connection, sizeof(nuitka_bool)+sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_c802c5ad73baea2ab7c33d548cf7fc84 = cache_frame_c802c5ad73baea2ab7c33d548cf7fc84;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c802c5ad73baea2ab7c33d548cf7fc84 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c802c5ad73baea2ab7c33d548cf7fc84 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPHeaderDict );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPHeaderDict );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "HTTPHeaderDict" );
            exception_tb = NULL;

            exception_lineno = 189;
            type_description_1 = "ooooooboooob";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_headers );
        tmp_compexpr_left_1 = par_headers;
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_1 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_1;
        }
        else
        {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT( par_headers );
        tmp_args_element_name_1 = par_headers;
        Py_INCREF( tmp_args_element_name_1 );
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_args_element_name_1 = PyDict_New();
        condexpr_end_1:;
        frame_c802c5ad73baea2ab7c33d548cf7fc84->m_frame.f_lineno = 189;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 189;
            type_description_1 = "ooooooboooob";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_headers;
            assert( old != NULL );
            par_headers = tmp_assign_source_1;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_assign_source_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = const_str_digest_f4cf83dd2e7e2f235646bf31dc9dfbff;
        CHECK_OBJECT( par_headers );
        tmp_compexpr_right_2 = par_headers;
        tmp_res = PySequence_Contains( tmp_compexpr_right_2, tmp_compexpr_left_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 190;
            type_description_1 = "ooooooboooob";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        var_skip_accept_encoding = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_assign_source_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = const_str_plain_host;
        CHECK_OBJECT( par_headers );
        tmp_compexpr_right_3 = par_headers;
        tmp_res = PySequence_Contains( tmp_compexpr_right_3, tmp_compexpr_left_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 191;
            type_description_1 = "ooooooboooob";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = ( tmp_res == 1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        var_skip_host = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_putrequest );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "ooooooboooob";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_method );
        tmp_tuple_element_1 = par_method;
        tmp_args_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_url );
        tmp_tuple_element_1 = par_url;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        assert( var_skip_accept_encoding != NUITKA_BOOL_UNASSIGNED);
        tmp_dict_value_1 = ( var_skip_accept_encoding == NUITKA_BOOL_TRUE ) ? Py_True : Py_False;
        tmp_dict_key_1 = const_str_plain_skip_accept_encoding;
        tmp_kw_name_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        assert( var_skip_host != NUITKA_BOOL_UNASSIGNED);
        tmp_dict_value_2 = ( var_skip_host == NUITKA_BOOL_TRUE ) ? Py_True : Py_False;
        tmp_dict_key_2 = const_str_plain_skip_host;
        tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        frame_c802c5ad73baea2ab7c33d548cf7fc84->m_frame.f_lineno = 192;
        tmp_call_result_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 192;
            type_description_1 = "ooooooboooob";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_headers );
        tmp_called_instance_1 = par_headers;
        frame_c802c5ad73baea2ab7c33d548cf7fc84->m_frame.f_lineno = 198;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
        if ( tmp_iter_arg_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;
            type_description_1 = "ooooooboooob";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
        Py_DECREF( tmp_iter_arg_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;
            type_description_1 = "ooooooboooob";
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
                type_description_1 = "ooooooboooob";
                exception_lineno = 198;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 198;
            type_description_1 = "ooooooboooob";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
            Py_XDECREF( old );
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_1, 0 );
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


            type_description_1 = "ooooooboooob";
            exception_lineno = 198;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT( tmp_tuple_unpack_1__source_iter );
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


            type_description_1 = "ooooooboooob";
            exception_lineno = 198;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
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

                    type_description_1 = "ooooooboooob";
                    exception_lineno = 198;
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

            type_description_1 = "ooooooboooob";
            exception_lineno = 198;
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
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_1 );
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_header;
            var_header = tmp_assign_source_9;
            Py_INCREF( var_header );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT( tmp_tuple_unpack_1__element_2 );
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_value;
            var_value = tmp_assign_source_10;
            Py_INCREF( var_value );
            Py_XDECREF( old );
        }

    }
    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT( var_header );
        tmp_args_element_name_2 = var_header;
        CHECK_OBJECT( var_value );
        tmp_args_element_name_3 = var_value;
        frame_c802c5ad73baea2ab7c33d548cf7fc84->m_frame.f_lineno = 199;
        {
            PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_putheader, call_args );
        }

        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 199;
            type_description_1 = "ooooooboooob";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        type_description_1 = "ooooooboooob";
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
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_4;
        PyObject *tmp_compexpr_right_4;
        tmp_compexpr_left_4 = const_str_digest_80cf594c6b193676cb3f905f65b5d391;
        CHECK_OBJECT( par_headers );
        tmp_compexpr_right_4 = par_headers;
        tmp_res = PySequence_Contains( tmp_compexpr_right_4, tmp_compexpr_left_4 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "ooooooboooob";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_1;
        }
        else
        {
            goto branch_no_1;
        }
        branch_yes_1:;
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_call_result_3;
            CHECK_OBJECT( par_self );
            tmp_called_instance_3 = par_self;
            frame_c802c5ad73baea2ab7c33d548cf7fc84->m_frame.f_lineno = 201;
            tmp_call_result_3 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_putheader, &PyTuple_GET_ITEM( const_tuple_1bf7ec2364041a6038f313c34bc76226_tuple, 0 ) );

            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 201;
                type_description_1 = "ooooooboooob";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT( par_self );
        tmp_called_instance_4 = par_self;
        frame_c802c5ad73baea2ab7c33d548cf7fc84->m_frame.f_lineno = 202;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_endheaders );
        if ( tmp_call_result_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 202;
            type_description_1 = "ooooooboooob";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_4 );
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_5;
        PyObject *tmp_compexpr_right_5;
        CHECK_OBJECT( par_body );
        tmp_compexpr_left_5 = par_body;
        tmp_compexpr_right_5 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_5 != tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_assign_source_11;
            PyObject *tmp_left_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_right_name_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_six );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_six );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "six" );
                exception_tb = NULL;

                exception_lineno = 205;
                type_description_1 = "ooooooboooob";
                goto frame_exception_exit_1;
            }

            tmp_source_name_2 = tmp_mvar_value_2;
            tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_string_types );
            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 205;
                type_description_1 = "ooooooboooob";
                goto frame_exception_exit_1;
            }
            tmp_right_name_1 = const_tuple_type_str_tuple;
            tmp_assign_source_11 = BINARY_OPERATION_ADD_OBJECT_TUPLE( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 205;
                type_description_1 = "ooooooboooob";
                goto frame_exception_exit_1;
            }
            assert( var_stringish_types == NULL );
            var_stringish_types = tmp_assign_source_11;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_isinstance_inst_1;
            PyObject *tmp_isinstance_cls_1;
            CHECK_OBJECT( par_body );
            tmp_isinstance_inst_1 = par_body;
            CHECK_OBJECT( var_stringish_types );
            tmp_isinstance_cls_1 = var_stringish_types;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 206;
                type_description_1 = "ooooooboooob";
                goto frame_exception_exit_1;
            }
            tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_3;
            }
            else
            {
                goto branch_no_3;
            }
            branch_yes_3:;
            {
                PyObject *tmp_assign_source_12;
                PyObject *tmp_tuple_element_2;
                CHECK_OBJECT( par_body );
                tmp_tuple_element_2 = par_body;
                tmp_assign_source_12 = PyTuple_New( 1 );
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_assign_source_12, 0, tmp_tuple_element_2 );
                {
                    PyObject *old = par_body;
                    assert( old != NULL );
                    par_body = tmp_assign_source_12;
                    Py_DECREF( old );
                }

            }
            branch_no_3:;
        }
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT( par_body );
            tmp_iter_arg_3 = par_body;
            tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_3 );
            if ( tmp_assign_source_13 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 208;
                type_description_1 = "ooooooboooob";
                goto frame_exception_exit_1;
            }
            assert( tmp_for_loop_2__for_iterator == NULL );
            tmp_for_loop_2__for_iterator = tmp_assign_source_13;
        }
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT( tmp_for_loop_2__for_iterator );
            tmp_next_source_2 = tmp_for_loop_2__for_iterator;
            tmp_assign_source_14 = ITERATOR_NEXT( tmp_next_source_2 );
            if ( tmp_assign_source_14 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_2;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "ooooooboooob";
                    exception_lineno = 208;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_for_loop_2__iter_value;
                tmp_for_loop_2__iter_value = tmp_assign_source_14;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT( tmp_for_loop_2__iter_value );
            tmp_assign_source_15 = tmp_for_loop_2__iter_value;
            {
                PyObject *old = var_chunk;
                var_chunk = tmp_assign_source_15;
                Py_INCREF( var_chunk );
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_operand_name_1;
            CHECK_OBJECT( var_chunk );
            tmp_operand_name_1 = var_chunk;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 209;
                type_description_1 = "ooooooboooob";
                goto try_except_handler_5;
            }
            tmp_condition_result_5 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_4;
            }
            else
            {
                goto branch_no_4;
            }
            branch_yes_4:;
            goto loop_start_2;
            branch_no_4:;
        }
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_operand_name_2;
            PyObject *tmp_isinstance_inst_2;
            PyObject *tmp_isinstance_cls_2;
            CHECK_OBJECT( var_chunk );
            tmp_isinstance_inst_2 = var_chunk;
            tmp_isinstance_cls_2 = (PyObject *)&PyString_Type;
            tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 211;
                type_description_1 = "ooooooboooob";
                goto try_except_handler_5;
            }
            tmp_operand_name_2 = ( tmp_res != 0 ) ? Py_True : Py_False;
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 211;
                type_description_1 = "ooooooboooob";
                goto try_except_handler_5;
            }
            tmp_condition_result_6 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_16;
                PyObject *tmp_called_instance_5;
                CHECK_OBJECT( var_chunk );
                tmp_called_instance_5 = var_chunk;
                frame_c802c5ad73baea2ab7c33d548cf7fc84->m_frame.f_lineno = 212;
                tmp_assign_source_16 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_5, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_utf8_tuple, 0 ) );

                if ( tmp_assign_source_16 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 212;
                    type_description_1 = "ooooooboooob";
                    goto try_except_handler_5;
                }
                {
                    PyObject *old = var_chunk;
                    assert( old != NULL );
                    var_chunk = tmp_assign_source_16;
                    Py_DECREF( old );
                }

            }
            branch_no_5:;
        }
        {
            PyObject *tmp_assign_source_17;
            Py_ssize_t tmp_sliceslicedel_index_lower_1;
            Py_ssize_t tmp_slice_index_upper_1;
            PyObject *tmp_slice_source_1;
            PyObject *tmp_hex_arg_1;
            PyObject *tmp_len_arg_1;
            tmp_sliceslicedel_index_lower_1 = 2;
            tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
            CHECK_OBJECT( var_chunk );
            tmp_len_arg_1 = var_chunk;
            tmp_hex_arg_1 = BUILTIN_LEN( tmp_len_arg_1 );
            if ( tmp_hex_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 213;
                type_description_1 = "ooooooboooob";
                goto try_except_handler_5;
            }
            tmp_slice_source_1 = BUILTIN_HEX( tmp_hex_arg_1 );
            Py_DECREF( tmp_hex_arg_1 );
            if ( tmp_slice_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 213;
                type_description_1 = "ooooooboooob";
                goto try_except_handler_5;
            }
            tmp_assign_source_17 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
            Py_DECREF( tmp_slice_source_1 );
            if ( tmp_assign_source_17 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 213;
                type_description_1 = "ooooooboooob";
                goto try_except_handler_5;
            }
            {
                PyObject *old = var_len_str;
                var_len_str = tmp_assign_source_17;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_called_name_3;
            PyObject *tmp_source_name_3;
            PyObject *tmp_call_result_5;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_called_instance_6;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_send );
            if ( tmp_called_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 214;
                type_description_1 = "ooooooboooob";
                goto try_except_handler_5;
            }
            CHECK_OBJECT( var_len_str );
            tmp_called_instance_6 = var_len_str;
            frame_c802c5ad73baea2ab7c33d548cf7fc84->m_frame.f_lineno = 214;
            tmp_args_element_name_4 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_3 );

                exception_lineno = 214;
                type_description_1 = "ooooooboooob";
                goto try_except_handler_5;
            }
            frame_c802c5ad73baea2ab7c33d548cf7fc84->m_frame.f_lineno = 214;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_called_name_3 );
            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_call_result_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 214;
                type_description_1 = "ooooooboooob";
                goto try_except_handler_5;
            }
            Py_DECREF( tmp_call_result_5 );
        }
        {
            PyObject *tmp_called_instance_7;
            PyObject *tmp_call_result_6;
            CHECK_OBJECT( par_self );
            tmp_called_instance_7 = par_self;
            frame_c802c5ad73baea2ab7c33d548cf7fc84->m_frame.f_lineno = 215;
            tmp_call_result_6 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_7, const_str_plain_send, &PyTuple_GET_ITEM( const_tuple_str_digest_7ca129d2d421fe965ad48cbb290b579b_tuple, 0 ) );

            if ( tmp_call_result_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 215;
                type_description_1 = "ooooooboooob";
                goto try_except_handler_5;
            }
            Py_DECREF( tmp_call_result_6 );
        }
        {
            PyObject *tmp_called_instance_8;
            PyObject *tmp_call_result_7;
            PyObject *tmp_args_element_name_5;
            CHECK_OBJECT( par_self );
            tmp_called_instance_8 = par_self;
            CHECK_OBJECT( var_chunk );
            tmp_args_element_name_5 = var_chunk;
            frame_c802c5ad73baea2ab7c33d548cf7fc84->m_frame.f_lineno = 216;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_call_result_7 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_8, const_str_plain_send, call_args );
            }

            if ( tmp_call_result_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 216;
                type_description_1 = "ooooooboooob";
                goto try_except_handler_5;
            }
            Py_DECREF( tmp_call_result_7 );
        }
        {
            PyObject *tmp_called_instance_9;
            PyObject *tmp_call_result_8;
            CHECK_OBJECT( par_self );
            tmp_called_instance_9 = par_self;
            frame_c802c5ad73baea2ab7c33d548cf7fc84->m_frame.f_lineno = 217;
            tmp_call_result_8 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_9, const_str_plain_send, &PyTuple_GET_ITEM( const_tuple_str_digest_7ca129d2d421fe965ad48cbb290b579b_tuple, 0 ) );

            if ( tmp_call_result_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 217;
                type_description_1 = "ooooooboooob";
                goto try_except_handler_5;
            }
            Py_DECREF( tmp_call_result_8 );
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 208;
            type_description_1 = "ooooooboooob";
            goto try_except_handler_5;
        }
        goto loop_start_2;
        loop_end_2:;
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

        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto frame_exception_exit_1;
        // End of try:
        try_end_4:;
        Py_XDECREF( tmp_for_loop_2__iter_value );
        tmp_for_loop_2__iter_value = NULL;

        CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
        Py_DECREF( tmp_for_loop_2__for_iterator );
        tmp_for_loop_2__for_iterator = NULL;

        branch_no_2:;
    }
    {
        PyObject *tmp_called_instance_10;
        PyObject *tmp_call_result_9;
        CHECK_OBJECT( par_self );
        tmp_called_instance_10 = par_self;
        frame_c802c5ad73baea2ab7c33d548cf7fc84->m_frame.f_lineno = 220;
        tmp_call_result_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_10, const_str_plain_send, &PyTuple_GET_ITEM( const_tuple_str_digest_0910c0c2f1750b2fe8203b1da8f91dfb_tuple, 0 ) );

        if ( tmp_call_result_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 220;
            type_description_1 = "ooooooboooob";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_9 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c802c5ad73baea2ab7c33d548cf7fc84 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c802c5ad73baea2ab7c33d548cf7fc84 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c802c5ad73baea2ab7c33d548cf7fc84, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c802c5ad73baea2ab7c33d548cf7fc84->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c802c5ad73baea2ab7c33d548cf7fc84, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c802c5ad73baea2ab7c33d548cf7fc84,
        type_description_1,
        par_self,
        par_method,
        par_url,
        par_body,
        par_headers,
        var_chunk,
        (int)var_skip_host,
        var_header,
        var_value,
        var_stringish_types,
        var_len_str,
        (int)var_skip_accept_encoding
    );


    // Release cached frame.
    if ( frame_c802c5ad73baea2ab7c33d548cf7fc84 == cache_frame_c802c5ad73baea2ab7c33d548cf7fc84 )
    {
        Py_DECREF( frame_c802c5ad73baea2ab7c33d548cf7fc84 );
    }
    cache_frame_c802c5ad73baea2ab7c33d548cf7fc84 = NULL;

    assertFrameObject( frame_c802c5ad73baea2ab7c33d548cf7fc84 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_7_request_chunked );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_body );
    par_body = NULL;

    Py_XDECREF( var_chunk );
    var_chunk = NULL;

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_header );
    var_header = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_stringish_types );
    var_stringish_types = NULL;

    CHECK_OBJECT( (PyObject *)par_headers );
    Py_DECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( var_len_str );
    var_len_str = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

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

    Py_XDECREF( par_body );
    par_body = NULL;

    Py_XDECREF( var_chunk );
    var_chunk = NULL;

    CHECK_OBJECT( (PyObject *)par_url );
    Py_DECREF( par_url );
    par_url = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_header );
    var_header = NULL;

    Py_XDECREF( var_value );
    var_value = NULL;

    Py_XDECREF( var_stringish_types );
    var_stringish_types = NULL;

    CHECK_OBJECT( (PyObject *)par_headers );
    Py_DECREF( par_headers );
    par_headers = NULL;

    Py_XDECREF( var_len_str );
    var_len_str = NULL;

    CHECK_OBJECT( (PyObject *)par_method );
    Py_DECREF( par_method );
    par_method = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_7_request_chunked );
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


static PyObject *impl_urllib3$connection$$$function_8___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_host = python_pars[ 1 ];
    PyObject *par_port = python_pars[ 2 ];
    PyObject *par_key_file = python_pars[ 3 ];
    PyObject *par_cert_file = python_pars[ 4 ];
    PyObject *par_strict = python_pars[ 5 ];
    PyObject *par_timeout = python_pars[ 6 ];
    PyObject *par_ssl_context = python_pars[ 7 ];
    PyObject *par_server_hostname = python_pars[ 8 ];
    PyObject *par_kw = python_pars[ 9 ];
    struct Nuitka_FrameObject *frame_3c17f49e3fb13d361d23950e78236afa;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_3c17f49e3fb13d361d23950e78236afa = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_3c17f49e3fb13d361d23950e78236afa, codeobj_3c17f49e3fb13d361d23950e78236afa, module_urllib3$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_3c17f49e3fb13d361d23950e78236afa = cache_frame_3c17f49e3fb13d361d23950e78236afa;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_3c17f49e3fb13d361d23950e78236afa );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_3c17f49e3fb13d361d23950e78236afa ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_dircall_arg4_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPConnection );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPConnection );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "HTTPConnection" );
            exception_tb = NULL;

            exception_lineno = 232;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 232;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_tuple_element_1 = par_self;
        tmp_dircall_arg2_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_host );
        tmp_tuple_element_1 = par_host;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_port );
        tmp_tuple_element_1 = par_port;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_dircall_arg2_1, 2, tmp_tuple_element_1 );
        CHECK_OBJECT( par_strict );
        tmp_dict_value_1 = par_strict;
        tmp_dict_key_1 = const_str_plain_strict;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_timeout );
        tmp_dict_value_2 = par_timeout;
        tmp_dict_key_2 = const_str_plain_timeout;
        tmp_res = PyDict_SetItem( tmp_dircall_arg3_1, tmp_dict_key_2, tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_kw );
        tmp_dircall_arg4_1 = par_kw;
        Py_INCREF( tmp_dircall_arg4_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_call_result_1 = impl___internal__$$$function_7_complex_call_helper_pos_keywords_star_dict( dir_call_args );
        }
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 232;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_key_file );
        tmp_assattr_name_1 = par_key_file;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_key_file, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 235;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_cert_file );
        tmp_assattr_name_2 = par_cert_file;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_cert_file, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_ssl_context );
        tmp_assattr_name_3 = par_ssl_context;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_ssl_context, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 237;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( par_server_hostname );
        tmp_assattr_name_4 = par_server_hostname;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_server_hostname, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 238;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_name_5 = const_str_plain_https;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain__protocol, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 242;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3c17f49e3fb13d361d23950e78236afa );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_3c17f49e3fb13d361d23950e78236afa );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_3c17f49e3fb13d361d23950e78236afa, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_3c17f49e3fb13d361d23950e78236afa->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_3c17f49e3fb13d361d23950e78236afa, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_3c17f49e3fb13d361d23950e78236afa,
        type_description_1,
        par_self,
        par_host,
        par_port,
        par_key_file,
        par_cert_file,
        par_strict,
        par_timeout,
        par_ssl_context,
        par_server_hostname,
        par_kw
    );


    // Release cached frame.
    if ( frame_3c17f49e3fb13d361d23950e78236afa == cache_frame_3c17f49e3fb13d361d23950e78236afa )
    {
        Py_DECREF( frame_3c17f49e3fb13d361d23950e78236afa );
    }
    cache_frame_3c17f49e3fb13d361d23950e78236afa = NULL;

    assertFrameObject( frame_3c17f49e3fb13d361d23950e78236afa );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_8___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_server_hostname );
    Py_DECREF( par_server_hostname );
    par_server_hostname = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_ssl_context );
    Py_DECREF( par_ssl_context );
    par_ssl_context = NULL;

    CHECK_OBJECT( (PyObject *)par_port );
    Py_DECREF( par_port );
    par_port = NULL;

    CHECK_OBJECT( (PyObject *)par_strict );
    Py_DECREF( par_strict );
    par_strict = NULL;

    CHECK_OBJECT( (PyObject *)par_host );
    Py_DECREF( par_host );
    par_host = NULL;

    CHECK_OBJECT( (PyObject *)par_kw );
    Py_DECREF( par_kw );
    par_kw = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)par_key_file );
    Py_DECREF( par_key_file );
    par_key_file = NULL;

    CHECK_OBJECT( (PyObject *)par_cert_file );
    Py_DECREF( par_cert_file );
    par_cert_file = NULL;

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

    CHECK_OBJECT( (PyObject *)par_server_hostname );
    Py_DECREF( par_server_hostname );
    par_server_hostname = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_ssl_context );
    Py_DECREF( par_ssl_context );
    par_ssl_context = NULL;

    CHECK_OBJECT( (PyObject *)par_port );
    Py_DECREF( par_port );
    par_port = NULL;

    CHECK_OBJECT( (PyObject *)par_strict );
    Py_DECREF( par_strict );
    par_strict = NULL;

    CHECK_OBJECT( (PyObject *)par_host );
    Py_DECREF( par_host );
    par_host = NULL;

    CHECK_OBJECT( (PyObject *)par_kw );
    Py_DECREF( par_kw );
    par_kw = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    CHECK_OBJECT( (PyObject *)par_key_file );
    Py_DECREF( par_key_file );
    par_key_file = NULL;

    CHECK_OBJECT( (PyObject *)par_cert_file );
    Py_DECREF( par_cert_file );
    par_cert_file = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_8___init__ );
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


static PyObject *impl_urllib3$connection$$$function_9_connect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_conn = NULL;
    struct Nuitka_FrameObject *frame_cfe928b0176d83ef4ea8a3da027112cb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_cfe928b0176d83ef4ea8a3da027112cb = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_cfe928b0176d83ef4ea8a3da027112cb, codeobj_cfe928b0176d83ef4ea8a3da027112cb, module_urllib3$connection, sizeof(void *)+sizeof(void *) );
    frame_cfe928b0176d83ef4ea8a3da027112cb = cache_frame_cfe928b0176d83ef4ea8a3da027112cb;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_cfe928b0176d83ef4ea8a3da027112cb );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_cfe928b0176d83ef4ea8a3da027112cb ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_cfe928b0176d83ef4ea8a3da027112cb->m_frame.f_lineno = 245;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__new_conn );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 245;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert( var_conn == NULL );
        var_conn = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT( var_conn );
        tmp_args_element_name_1 = var_conn;
        frame_cfe928b0176d83ef4ea8a3da027112cb->m_frame.f_lineno = 246;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain__prepare_conn, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 246;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ssl_context );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 248;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_1 = ( tmp_compexpr_left_1 == tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_1 );
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
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_assattr_target_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_create_urllib3_context );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_create_urllib3_context );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "create_urllib3_context" );
                exception_tb = NULL;

                exception_lineno = 249;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_resolve_ssl_version );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_resolve_ssl_version );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "resolve_ssl_version" );
                exception_tb = NULL;

                exception_lineno = 250;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_2;
            frame_cfe928b0176d83ef4ea8a3da027112cb->m_frame.f_lineno = 250;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_none_tuple, 0 ) );

            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 250;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_1 = const_str_plain_ssl_version;
            tmp_kw_name_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs );
            }

            if ( tmp_mvar_value_3 == NULL )
            {
                Py_DECREF( tmp_kw_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "resolve_cert_reqs" );
                exception_tb = NULL;

                exception_lineno = 251;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_3;
            frame_cfe928b0176d83ef4ea8a3da027112cb->m_frame.f_lineno = 251;
            tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_none_tuple, 0 ) );

            if ( tmp_dict_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 251;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_2 = const_str_plain_cert_reqs;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            Py_DECREF( tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_cfe928b0176d83ef4ea8a3da027112cb->m_frame.f_lineno = 249;
            tmp_assattr_name_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assattr_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 249;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_ssl_context, tmp_assattr_name_1 );
            Py_DECREF( tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 249;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_name_4;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_source_name_2;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_source_name_3;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_source_name_4;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_source_name_5;
        PyObject *tmp_assattr_target_2;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ssl_wrap_socket );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl_wrap_socket );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "ssl_wrap_socket" );
            exception_tb = NULL;

            exception_lineno = 254;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_4 = tmp_mvar_value_4;
        CHECK_OBJECT( var_conn );
        tmp_dict_value_3 = var_conn;
        tmp_dict_key_3 = const_str_plain_sock;
        tmp_kw_name_2 = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_key_file );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 256;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_4 = const_str_plain_keyfile;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_cert_file );
        if ( tmp_dict_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 257;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_5 = const_str_plain_certfile;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ssl_context );
        if ( tmp_dict_value_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 258;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_6 = const_str_plain_ssl_context;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
        Py_DECREF( tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_self );
        tmp_source_name_5 = par_self;
        tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_server_hostname );
        if ( tmp_dict_value_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 259;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_7 = const_str_plain_server_hostname;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        frame_cfe928b0176d83ef4ea8a3da027112cb->m_frame.f_lineno = 254;
        tmp_assattr_name_2 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_4, tmp_kw_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 254;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_sock, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 254;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cfe928b0176d83ef4ea8a3da027112cb );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_cfe928b0176d83ef4ea8a3da027112cb );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_cfe928b0176d83ef4ea8a3da027112cb, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_cfe928b0176d83ef4ea8a3da027112cb->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_cfe928b0176d83ef4ea8a3da027112cb, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_cfe928b0176d83ef4ea8a3da027112cb,
        type_description_1,
        par_self,
        var_conn
    );


    // Release cached frame.
    if ( frame_cfe928b0176d83ef4ea8a3da027112cb == cache_frame_cfe928b0176d83ef4ea8a3da027112cb )
    {
        Py_DECREF( frame_cfe928b0176d83ef4ea8a3da027112cb );
    }
    cache_frame_cfe928b0176d83ef4ea8a3da027112cb = NULL;

    assertFrameObject( frame_cfe928b0176d83ef4ea8a3da027112cb );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_9_connect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_conn );
    var_conn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_9_connect );
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


static PyObject *impl_urllib3$connection$$$function_10_set_cert( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key_file = python_pars[ 1 ];
    PyObject *par_cert_file = python_pars[ 2 ];
    PyObject *par_cert_reqs = python_pars[ 3 ];
    PyObject *par_ca_certs = python_pars[ 4 ];
    PyObject *par_assert_hostname = python_pars[ 5 ];
    PyObject *par_assert_fingerprint = python_pars[ 6 ];
    PyObject *par_ca_cert_dir = python_pars[ 7 ];
    struct Nuitka_FrameObject *frame_527b1bf39a155501c566215113af62ca;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_527b1bf39a155501c566215113af62ca = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_527b1bf39a155501c566215113af62ca, codeobj_527b1bf39a155501c566215113af62ca, module_urllib3$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_527b1bf39a155501c566215113af62ca = cache_frame_527b1bf39a155501c566215113af62ca;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_527b1bf39a155501c566215113af62ca );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_527b1bf39a155501c566215113af62ca ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_cert_reqs );
        tmp_compexpr_left_1 = par_cert_reqs;
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
            nuitka_bool tmp_condition_result_2;
            int tmp_or_left_truth_1;
            nuitka_bool tmp_or_left_value_1;
            nuitka_bool tmp_or_right_value_1;
            int tmp_truth_name_1;
            int tmp_truth_name_2;
            CHECK_OBJECT( par_ca_certs );
            tmp_truth_name_1 = CHECK_IF_TRUE( par_ca_certs );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 286;
                type_description_1 = "oooooooo";
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
            CHECK_OBJECT( par_ca_cert_dir );
            tmp_truth_name_2 = CHECK_IF_TRUE( par_ca_cert_dir );
            if ( tmp_truth_name_2 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 286;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_or_right_value_1 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_assign_source_1;
                tmp_assign_source_1 = const_str_plain_CERT_REQUIRED;
                {
                    PyObject *old = par_cert_reqs;
                    assert( old != NULL );
                    par_cert_reqs = tmp_assign_source_1;
                    Py_INCREF( par_cert_reqs );
                    Py_DECREF( old );
                }

            }
            goto branch_end_2;
            branch_no_2:;
            {
                nuitka_bool tmp_condition_result_3;
                PyObject *tmp_compexpr_left_2;
                PyObject *tmp_compexpr_right_2;
                PyObject *tmp_source_name_1;
                CHECK_OBJECT( par_self );
                tmp_source_name_1 = par_self;
                tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ssl_context );
                if ( tmp_compexpr_left_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 288;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_2 = Py_None;
                tmp_condition_result_3 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                Py_DECREF( tmp_compexpr_left_2 );
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
                    PyObject *tmp_assign_source_2;
                    PyObject *tmp_source_name_2;
                    PyObject *tmp_source_name_3;
                    CHECK_OBJECT( par_self );
                    tmp_source_name_3 = par_self;
                    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ssl_context );
                    if ( tmp_source_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 289;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_verify_mode );
                    Py_DECREF( tmp_source_name_2 );
                    if ( tmp_assign_source_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 289;
                        type_description_1 = "oooooooo";
                        goto frame_exception_exit_1;
                    }
                    {
                        PyObject *old = par_cert_reqs;
                        assert( old != NULL );
                        par_cert_reqs = tmp_assign_source_2;
                        Py_DECREF( old );
                    }

                }
                branch_no_3:;
            }
            branch_end_2:;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_key_file );
        tmp_assattr_name_1 = par_key_file;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_key_file, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 291;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_cert_file );
        tmp_assattr_name_2 = par_cert_file;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_cert_file, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 292;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        if ( par_cert_reqs == NULL )
        {

            exception_type = PyExc_UnboundLocalError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "cert_reqs" );
            exception_tb = NULL;

            exception_lineno = 293;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_name_3 = par_cert_reqs;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_cert_reqs, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 293;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT( par_assert_hostname );
        tmp_assattr_name_4 = par_assert_hostname;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_assert_hostname, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 294;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT( par_assert_fingerprint );
        tmp_assattr_name_5 = par_assert_fingerprint;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_assert_fingerprint, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 295;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_6;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT( par_ca_certs );
        tmp_and_left_value_1 = par_ca_certs;
        tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
        if ( tmp_and_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 296;
            type_description_1 = "oooooooo";
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
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
            exception_tb = NULL;

            exception_lineno = 296;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_1;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_path );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 296;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ca_certs );
        tmp_args_element_name_1 = par_ca_certs;
        frame_527b1bf39a155501c566215113af62ca->m_frame.f_lineno = 296;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_and_right_value_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_expanduser, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_and_right_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 296;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_6 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF( tmp_and_left_value_1 );
        tmp_assattr_name_6 = tmp_and_left_value_1;
        and_end_1:;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_ca_certs, tmp_assattr_name_6 );
        Py_DECREF( tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 296;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_7;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT( par_ca_cert_dir );
        tmp_and_left_value_2 = par_ca_cert_dir;
        tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
        if ( tmp_and_left_truth_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 297;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if ( tmp_and_left_truth_2 == 1 )
        {
            goto and_right_2;
        }
        else
        {
            goto and_left_2;
        }
        and_right_2:;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_os );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "os" );
            exception_tb = NULL;

            exception_lineno = 297;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_2;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_path );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 297;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ca_cert_dir );
        tmp_args_element_name_2 = par_ca_cert_dir;
        frame_527b1bf39a155501c566215113af62ca->m_frame.f_lineno = 297;
        {
            PyObject *call_args[] = { tmp_args_element_name_2 };
            tmp_and_right_value_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_expanduser, call_args );
        }

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_and_right_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 297;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_name_7 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        Py_INCREF( tmp_and_left_value_2 );
        tmp_assattr_name_7 = tmp_and_left_value_2;
        and_end_2:;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_ca_cert_dir, tmp_assattr_name_7 );
        Py_DECREF( tmp_assattr_name_7 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 297;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_527b1bf39a155501c566215113af62ca );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_527b1bf39a155501c566215113af62ca );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_527b1bf39a155501c566215113af62ca, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_527b1bf39a155501c566215113af62ca->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_527b1bf39a155501c566215113af62ca, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_527b1bf39a155501c566215113af62ca,
        type_description_1,
        par_self,
        par_key_file,
        par_cert_file,
        par_cert_reqs,
        par_ca_certs,
        par_assert_hostname,
        par_assert_fingerprint,
        par_ca_cert_dir
    );


    // Release cached frame.
    if ( frame_527b1bf39a155501c566215113af62ca == cache_frame_527b1bf39a155501c566215113af62ca )
    {
        Py_DECREF( frame_527b1bf39a155501c566215113af62ca );
    }
    cache_frame_527b1bf39a155501c566215113af62ca = NULL;

    assertFrameObject( frame_527b1bf39a155501c566215113af62ca );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_10_set_cert );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_assert_hostname );
    Py_DECREF( par_assert_hostname );
    par_assert_hostname = NULL;

    CHECK_OBJECT( (PyObject *)par_assert_fingerprint );
    Py_DECREF( par_assert_fingerprint );
    par_assert_fingerprint = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_ca_cert_dir );
    Py_DECREF( par_ca_cert_dir );
    par_ca_cert_dir = NULL;

    Py_XDECREF( par_cert_reqs );
    par_cert_reqs = NULL;

    CHECK_OBJECT( (PyObject *)par_ca_certs );
    Py_DECREF( par_ca_certs );
    par_ca_certs = NULL;

    CHECK_OBJECT( (PyObject *)par_key_file );
    Py_DECREF( par_key_file );
    par_key_file = NULL;

    CHECK_OBJECT( (PyObject *)par_cert_file );
    Py_DECREF( par_cert_file );
    par_cert_file = NULL;

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

    CHECK_OBJECT( (PyObject *)par_assert_hostname );
    Py_DECREF( par_assert_hostname );
    par_assert_hostname = NULL;

    CHECK_OBJECT( (PyObject *)par_assert_fingerprint );
    Py_DECREF( par_assert_fingerprint );
    par_assert_fingerprint = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_ca_cert_dir );
    Py_DECREF( par_ca_cert_dir );
    par_ca_cert_dir = NULL;

    Py_XDECREF( par_cert_reqs );
    par_cert_reqs = NULL;

    CHECK_OBJECT( (PyObject *)par_ca_certs );
    Py_DECREF( par_ca_certs );
    par_ca_certs = NULL;

    CHECK_OBJECT( (PyObject *)par_key_file );
    Py_DECREF( par_key_file );
    par_key_file = NULL;

    CHECK_OBJECT( (PyObject *)par_cert_file );
    Py_DECREF( par_cert_file );
    par_cert_file = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_10_set_cert );
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


static PyObject *impl_urllib3$connection$$$function_11_connect( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_server_hostname = NULL;
    PyObject *var_is_time_off = NULL;
    PyObject *var_hostname = NULL;
    PyObject *var_cert = NULL;
    PyObject *var_context = NULL;
    PyObject *var_conn = NULL;
    struct Nuitka_FrameObject *frame_74636c179fd58215ac1137c71c394450;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_74636c179fd58215ac1137c71c394450 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_74636c179fd58215ac1137c71c394450, codeobj_74636c179fd58215ac1137c71c394450, module_urllib3$connection, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_74636c179fd58215ac1137c71c394450 = cache_frame_74636c179fd58215ac1137c71c394450;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_74636c179fd58215ac1137c71c394450 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_74636c179fd58215ac1137c71c394450 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT( par_self );
        tmp_called_instance_1 = par_self;
        frame_74636c179fd58215ac1137c71c394450->m_frame.f_lineno = 301;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain__new_conn );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 301;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_conn == NULL );
        var_conn = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_host );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 302;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_hostname == NULL );
        var_hostname = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__tunnel_host );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 304;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 304;
            type_description_1 = "ooooooo";
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
            CHECK_OBJECT( var_conn );
            tmp_assattr_name_1 = var_conn;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_sock, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 305;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_called_instance_2;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( par_self );
            tmp_called_instance_2 = par_self;
            frame_74636c179fd58215ac1137c71c394450->m_frame.f_lineno = 308;
            tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain__tunnel );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 308;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            tmp_assattr_name_2 = const_int_0;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_auto_open, tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 310;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
        }
        {
            PyObject *tmp_assign_source_3;
            PyObject *tmp_source_name_3;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__tunnel_host );
            if ( tmp_assign_source_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 313;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_hostname;
                assert( old != NULL );
                var_hostname = tmp_assign_source_3;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( var_hostname );
        tmp_assign_source_4 = var_hostname;
        assert( var_server_hostname == NULL );
        Py_INCREF( tmp_assign_source_4 );
        var_server_hostname = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_4;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_server_hostname );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 316;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_1 != tmp_compexpr_right_1 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_1 );
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
            PyObject *tmp_assign_source_5;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_server_hostname );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 317;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = var_server_hostname;
                assert( old != NULL );
                var_server_hostname = tmp_assign_source_5;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_datetime );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "datetime" );
            exception_tb = NULL;

            exception_lineno = 319;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_1;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_date );
        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 319;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_74636c179fd58215ac1137c71c394450->m_frame.f_lineno = 319;
        tmp_compexpr_left_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_today );
        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 319;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_RECENT_DATE );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RECENT_DATE );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "RECENT_DATE" );
            exception_tb = NULL;

            exception_lineno = 319;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_2 = tmp_mvar_value_2;
        tmp_assign_source_6 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_left_2 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 319;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_is_time_off == NULL );
        var_is_time_off = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT( var_is_time_off );
        tmp_truth_name_2 = CHECK_IF_TRUE( var_is_time_off );
        if ( tmp_truth_name_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 320;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_8;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_mvar_value_5;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_warnings );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "warnings" );
                exception_tb = NULL;

                exception_lineno = 321;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_7 = tmp_mvar_value_3;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_warn );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 321;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_source_name_8 = const_str_digest_76770aa881e569a0306b7353925db341;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_format );
            assert( !(tmp_called_name_2 == NULL) );
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_RECENT_DATE );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RECENT_DATE );
            }

            if ( tmp_mvar_value_4 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_called_name_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "RECENT_DATE" );
                exception_tb = NULL;

                exception_lineno = 323;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_2 = tmp_mvar_value_4;
            frame_74636c179fd58215ac1137c71c394450->m_frame.f_lineno = 322;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 322;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_SystemTimeWarning );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SystemTimeWarning );
            }

            if ( tmp_mvar_value_5 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "SystemTimeWarning" );
                exception_tb = NULL;

                exception_lineno = 324;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_3 = tmp_mvar_value_5;
            frame_74636c179fd58215ac1137c71c394450->m_frame.f_lineno = 321;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_3 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 321;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        PyObject *tmp_source_name_9;
        CHECK_OBJECT( par_self );
        tmp_source_name_9 = par_self;
        tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_ssl_context );
        if ( tmp_compexpr_left_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 329;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_4 = ( tmp_compexpr_left_3 == tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_3 );
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
            PyObject *tmp_assattr_name_3;
            PyObject *tmp_called_name_3;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_kw_name_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_called_name_4;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_source_name_10;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_called_name_5;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_source_name_11;
            PyObject *tmp_assattr_target_3;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_create_urllib3_context );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_create_urllib3_context );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "create_urllib3_context" );
                exception_tb = NULL;

                exception_lineno = 330;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_3 = tmp_mvar_value_6;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_resolve_ssl_version );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_resolve_ssl_version );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "resolve_ssl_version" );
                exception_tb = NULL;

                exception_lineno = 331;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_4 = tmp_mvar_value_7;
            CHECK_OBJECT( par_self );
            tmp_source_name_10 = par_self;
            tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_ssl_version );
            if ( tmp_args_element_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 331;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_74636c179fd58215ac1137c71c394450->m_frame.f_lineno = 331;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_dict_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_4 );
            if ( tmp_dict_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 331;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_1 = const_str_plain_ssl_version;
            tmp_kw_name_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
            Py_DECREF( tmp_dict_value_1 );
            assert( !(tmp_res != 0) );
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs );
            }

            if ( tmp_mvar_value_8 == NULL )
            {
                Py_DECREF( tmp_kw_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "resolve_cert_reqs" );
                exception_tb = NULL;

                exception_lineno = 332;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_5 = tmp_mvar_value_8;
            CHECK_OBJECT( par_self );
            tmp_source_name_11 = par_self;
            tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_cert_reqs );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 332;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_74636c179fd58215ac1137c71c394450->m_frame.f_lineno = 332;
            {
                PyObject *call_args[] = { tmp_args_element_name_5 };
                tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_dict_value_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_kw_name_1 );

                exception_lineno = 332;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_dict_key_2 = const_str_plain_cert_reqs;
            tmp_res = PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
            Py_DECREF( tmp_dict_value_2 );
            assert( !(tmp_res != 0) );
            frame_74636c179fd58215ac1137c71c394450->m_frame.f_lineno = 330;
            tmp_assattr_name_3 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_1 );
            Py_DECREF( tmp_kw_name_1 );
            if ( tmp_assattr_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 330;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_assattr_target_3 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_ssl_context, tmp_assattr_name_3 );
            Py_DECREF( tmp_assattr_name_3 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 330;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
        }
        branch_no_4:;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_source_name_12;
        CHECK_OBJECT( par_self );
        tmp_source_name_12 = par_self;
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_ssl_context );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 335;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_context == NULL );
        var_context = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_called_name_6;
        PyObject *tmp_mvar_value_9;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_source_name_13;
        PyObject *tmp_assattr_target_4;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "resolve_cert_reqs" );
            exception_tb = NULL;

            exception_lineno = 336;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_6 = tmp_mvar_value_9;
        CHECK_OBJECT( par_self );
        tmp_source_name_13 = par_self;
        tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_cert_reqs );
        if ( tmp_args_element_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 336;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_74636c179fd58215ac1137c71c394450->m_frame.f_lineno = 336;
        {
            PyObject *call_args[] = { tmp_args_element_name_6 };
            tmp_assattr_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
        }

        Py_DECREF( tmp_args_element_name_6 );
        if ( tmp_assattr_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 336;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( var_context );
        tmp_assattr_target_4 = var_context;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_verify_mode, tmp_assattr_name_4 );
        Py_DECREF( tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 336;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_called_name_7;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_kw_name_2;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_source_name_14;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_source_name_15;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_source_name_16;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_source_name_17;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_assattr_target_5;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ssl_wrap_socket );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl_wrap_socket );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "ssl_wrap_socket" );
            exception_tb = NULL;

            exception_lineno = 337;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_7 = tmp_mvar_value_10;
        CHECK_OBJECT( var_conn );
        tmp_dict_value_3 = var_conn;
        tmp_dict_key_3 = const_str_plain_sock;
        tmp_kw_name_2 = _PyDict_NewPresized( 7 );
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_self );
        tmp_source_name_14 = par_self;
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_key_file );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 339;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_4 = const_str_plain_keyfile;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_self );
        tmp_source_name_15 = par_self;
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_cert_file );
        if ( tmp_dict_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 340;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_5 = const_str_plain_certfile;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_self );
        tmp_source_name_16 = par_self;
        tmp_dict_value_6 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_ca_certs );
        if ( tmp_dict_value_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 341;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_6 = const_str_plain_ca_certs;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
        Py_DECREF( tmp_dict_value_6 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( par_self );
        tmp_source_name_17 = par_self;
        tmp_dict_value_7 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_ca_cert_dir );
        if ( tmp_dict_value_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_kw_name_2 );

            exception_lineno = 342;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_7 = const_str_plain_ca_cert_dir;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_7, tmp_dict_value_7 );
        Py_DECREF( tmp_dict_value_7 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( var_server_hostname );
        tmp_dict_value_8 = var_server_hostname;
        tmp_dict_key_8 = const_str_plain_server_hostname;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_8, tmp_dict_value_8 );
        assert( !(tmp_res != 0) );
        CHECK_OBJECT( var_context );
        tmp_dict_value_9 = var_context;
        tmp_dict_key_9 = const_str_plain_ssl_context;
        tmp_res = PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_9, tmp_dict_value_9 );
        assert( !(tmp_res != 0) );
        frame_74636c179fd58215ac1137c71c394450->m_frame.f_lineno = 337;
        tmp_assattr_name_5 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_7, tmp_kw_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        if ( tmp_assattr_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 337;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_sock, tmp_assattr_name_5 );
        Py_DECREF( tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 337;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_source_name_18;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_3;
        CHECK_OBJECT( par_self );
        tmp_source_name_18 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_assert_fingerprint );
        if ( tmp_attribute_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_3 = CHECK_IF_TRUE( tmp_attribute_value_2 );
        if ( tmp_truth_name_3 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_2 );

            exception_lineno = 346;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = tmp_truth_name_3 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_2 );
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
            PyObject *tmp_called_name_8;
            PyObject *tmp_mvar_value_11;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_called_name_9;
            PyObject *tmp_source_name_19;
            PyObject *tmp_source_name_20;
            PyObject *tmp_kw_name_3;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_source_name_21;
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_assert_fingerprint );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_assert_fingerprint );
            }

            if ( tmp_mvar_value_11 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "assert_fingerprint" );
                exception_tb = NULL;

                exception_lineno = 347;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_8 = tmp_mvar_value_11;
            CHECK_OBJECT( par_self );
            tmp_source_name_20 = par_self;
            tmp_source_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_sock );
            if ( tmp_source_name_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 347;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_getpeercert );
            Py_DECREF( tmp_source_name_19 );
            if ( tmp_called_name_9 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 347;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_kw_name_3 = PyDict_Copy( const_dict_a6ff982bac01e8d0bcf997a792f16c84 );
            frame_74636c179fd58215ac1137c71c394450->m_frame.f_lineno = 347;
            tmp_args_element_name_7 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_9, tmp_kw_name_3 );
            Py_DECREF( tmp_called_name_9 );
            Py_DECREF( tmp_kw_name_3 );
            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 347;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_21 = par_self;
            tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_assert_fingerprint );
            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_args_element_name_7 );

                exception_lineno = 348;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            frame_74636c179fd58215ac1137c71c394450->m_frame.f_lineno = 347;
            {
                PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
                tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
            }

            Py_DECREF( tmp_args_element_name_7 );
            Py_DECREF( tmp_args_element_name_8 );
            if ( tmp_call_result_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 347;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_3 );
        }
        goto branch_end_5;
        branch_no_5:;
        {
            nuitka_bool tmp_condition_result_6;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_compexpr_left_4;
            PyObject *tmp_compexpr_right_4;
            PyObject *tmp_source_name_22;
            PyObject *tmp_source_name_23;
            PyObject *tmp_mvar_value_12;
            int tmp_and_left_truth_2;
            nuitka_bool tmp_and_left_value_2;
            nuitka_bool tmp_and_right_value_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_getattr_target_1;
            PyObject *tmp_getattr_attr_1;
            PyObject *tmp_getattr_default_1;
            PyObject *tmp_compexpr_left_5;
            PyObject *tmp_compexpr_right_5;
            PyObject *tmp_source_name_24;
            CHECK_OBJECT( var_context );
            tmp_source_name_22 = var_context;
            tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_verify_mode );
            if ( tmp_compexpr_left_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 349;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ssl );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
            }

            if ( tmp_mvar_value_12 == NULL )
            {
                Py_DECREF( tmp_compexpr_left_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "ssl" );
                exception_tb = NULL;

                exception_lineno = 349;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_23 = tmp_mvar_value_12;
            tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_CERT_NONE );
            if ( tmp_compexpr_right_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_left_4 );

                exception_lineno = 349;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = RICH_COMPARE_BOOL_NOTEQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
            Py_DECREF( tmp_compexpr_left_4 );
            Py_DECREF( tmp_compexpr_right_4 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 349;
                type_description_1 = "ooooooo";
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
            CHECK_OBJECT( var_context );
            tmp_getattr_target_1 = var_context;
            tmp_getattr_attr_1 = const_str_plain_check_hostname;
            tmp_getattr_default_1 = Py_False;
            tmp_operand_name_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 350;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 350;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_2 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            CHECK_OBJECT( par_self );
            tmp_source_name_24 = par_self;
            tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_assert_hostname );
            if ( tmp_compexpr_left_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 351;
                type_description_1 = "ooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_5 = Py_False;
            tmp_and_right_value_2 = ( tmp_compexpr_left_5 != tmp_compexpr_right_5 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_compexpr_left_5 );
            tmp_and_right_value_1 = tmp_and_right_value_2;
            goto and_end_2;
            and_left_2:;
            tmp_and_right_value_1 = tmp_and_left_value_2;
            and_end_2:;
            tmp_condition_result_6 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_condition_result_6 = tmp_and_left_value_1;
            and_end_1:;
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
                PyObject *tmp_assign_source_8;
                PyObject *tmp_called_instance_4;
                PyObject *tmp_source_name_25;
                CHECK_OBJECT( par_self );
                tmp_source_name_25 = par_self;
                tmp_called_instance_4 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_sock );
                if ( tmp_called_instance_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 355;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                frame_74636c179fd58215ac1137c71c394450->m_frame.f_lineno = 355;
                tmp_assign_source_8 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_getpeercert );
                Py_DECREF( tmp_called_instance_4 );
                if ( tmp_assign_source_8 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 355;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                assert( var_cert == NULL );
                var_cert = tmp_assign_source_8;
            }
            {
                nuitka_bool tmp_condition_result_7;
                PyObject *tmp_operand_name_2;
                PyObject *tmp_called_instance_5;
                CHECK_OBJECT( var_cert );
                tmp_called_instance_5 = var_cert;
                frame_74636c179fd58215ac1137c71c394450->m_frame.f_lineno = 356;
                tmp_operand_name_2 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_5, const_str_plain_get, &PyTuple_GET_ITEM( const_tuple_str_plain_subjectAltName_tuple_empty_tuple, 0 ) );

                if ( tmp_operand_name_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 356;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = CHECK_IF_TRUE( tmp_operand_name_2 );
                Py_DECREF( tmp_operand_name_2 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 356;
                    type_description_1 = "ooooooo";
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
                    PyObject *tmp_called_name_10;
                    PyObject *tmp_source_name_26;
                    PyObject *tmp_mvar_value_13;
                    PyObject *tmp_call_result_4;
                    PyObject *tmp_args_element_name_9;
                    PyObject *tmp_called_instance_6;
                    PyObject *tmp_args_element_name_10;
                    PyObject *tmp_args_element_name_11;
                    PyObject *tmp_mvar_value_14;
                    tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_warnings );

                    if (unlikely( tmp_mvar_value_13 == NULL ))
                    {
                        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
                    }

                    if ( tmp_mvar_value_13 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "warnings" );
                        exception_tb = NULL;

                        exception_lineno = 357;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_26 = tmp_mvar_value_13;
                    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_warn );
                    if ( tmp_called_name_10 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 357;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_called_instance_6 = const_str_digest_9edecb228e21673906c9e9045e5572f5;
                    CHECK_OBJECT( var_hostname );
                    tmp_args_element_name_10 = var_hostname;
                    frame_74636c179fd58215ac1137c71c394450->m_frame.f_lineno = 358;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_10 };
                        tmp_args_element_name_9 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_6, const_str_plain_format, call_args );
                    }

                    if ( tmp_args_element_name_9 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_10 );

                        exception_lineno = 358;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_SubjectAltNameWarning );

                    if (unlikely( tmp_mvar_value_14 == NULL ))
                    {
                        tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SubjectAltNameWarning );
                    }

                    if ( tmp_mvar_value_14 == NULL )
                    {
                        Py_DECREF( tmp_called_name_10 );
                        Py_DECREF( tmp_args_element_name_9 );
                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "SubjectAltNameWarning" );
                        exception_tb = NULL;

                        exception_lineno = 362;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_args_element_name_11 = tmp_mvar_value_14;
                    frame_74636c179fd58215ac1137c71c394450->m_frame.f_lineno = 357;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_11 };
                        tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
                    }

                    Py_DECREF( tmp_called_name_10 );
                    Py_DECREF( tmp_args_element_name_9 );
                    if ( tmp_call_result_4 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 357;
                        type_description_1 = "ooooooo";
                        goto frame_exception_exit_1;
                    }
                    Py_DECREF( tmp_call_result_4 );
                }
                branch_no_7:;
            }
            {
                PyObject *tmp_called_name_11;
                PyObject *tmp_mvar_value_15;
                PyObject *tmp_call_result_5;
                PyObject *tmp_args_element_name_12;
                PyObject *tmp_args_element_name_13;
                int tmp_or_left_truth_1;
                PyObject *tmp_or_left_value_1;
                PyObject *tmp_or_right_value_1;
                PyObject *tmp_source_name_27;
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain__match_hostname );

                if (unlikely( tmp_mvar_value_15 == NULL ))
                {
                    tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__match_hostname );
                }

                if ( tmp_mvar_value_15 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "_match_hostname" );
                    exception_tb = NULL;

                    exception_lineno = 364;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_11 = tmp_mvar_value_15;
                CHECK_OBJECT( var_cert );
                tmp_args_element_name_12 = var_cert;
                CHECK_OBJECT( par_self );
                tmp_source_name_27 = par_self;
                tmp_or_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_assert_hostname );
                if ( tmp_or_left_value_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 364;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
                if ( tmp_or_left_truth_1 == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_or_left_value_1 );

                    exception_lineno = 364;
                    type_description_1 = "ooooooo";
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
                CHECK_OBJECT( var_server_hostname );
                tmp_or_right_value_1 = var_server_hostname;
                Py_INCREF( tmp_or_right_value_1 );
                tmp_args_element_name_13 = tmp_or_right_value_1;
                goto or_end_1;
                or_left_1:;
                tmp_args_element_name_13 = tmp_or_left_value_1;
                or_end_1:;
                frame_74636c179fd58215ac1137c71c394450->m_frame.f_lineno = 364;
                {
                    PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13 };
                    tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
                }

                Py_DECREF( tmp_args_element_name_13 );
                if ( tmp_call_result_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 364;
                    type_description_1 = "ooooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_5 );
            }
            branch_no_6:;
        }
        branch_end_5:;
    }
    {
        PyObject *tmp_assattr_name_6;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_compexpr_left_6;
        PyObject *tmp_compexpr_right_6;
        PyObject *tmp_source_name_28;
        PyObject *tmp_source_name_29;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_compexpr_left_7;
        PyObject *tmp_compexpr_right_7;
        PyObject *tmp_source_name_30;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT( var_context );
        tmp_source_name_28 = var_context;
        tmp_compexpr_left_6 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_verify_mode );
        if ( tmp_compexpr_left_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ssl );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
        }

        if ( tmp_mvar_value_16 == NULL )
        {
            Py_DECREF( tmp_compexpr_left_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "ssl" );
            exception_tb = NULL;

            exception_lineno = 367;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_29 = tmp_mvar_value_16;
        tmp_compexpr_right_6 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_CERT_REQUIRED );
        if ( tmp_compexpr_right_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_compexpr_left_6 );

            exception_lineno = 367;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_6, tmp_compexpr_right_6 );
        Py_DECREF( tmp_compexpr_left_6 );
        Py_DECREF( tmp_compexpr_right_6 );
        if ( tmp_or_left_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
        if ( tmp_or_left_truth_2 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_or_left_value_2 );

            exception_lineno = 368;
            type_description_1 = "ooooooo";
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
        CHECK_OBJECT( par_self );
        tmp_source_name_30 = par_self;
        tmp_compexpr_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_assert_fingerprint );
        if ( tmp_compexpr_left_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 368;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_7 = Py_None;
        tmp_or_right_value_2 = ( tmp_compexpr_left_7 != tmp_compexpr_right_7 ) ? Py_True : Py_False;
        Py_DECREF( tmp_compexpr_left_7 );
        Py_INCREF( tmp_or_right_value_2 );
        tmp_assattr_name_6 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_assattr_name_6 = tmp_or_left_value_2;
        or_end_2:;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_is_verified, tmp_assattr_name_6 );
        Py_DECREF( tmp_assattr_name_6 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 366;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_74636c179fd58215ac1137c71c394450 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_74636c179fd58215ac1137c71c394450 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_74636c179fd58215ac1137c71c394450, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_74636c179fd58215ac1137c71c394450->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_74636c179fd58215ac1137c71c394450, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_74636c179fd58215ac1137c71c394450,
        type_description_1,
        par_self,
        var_server_hostname,
        var_is_time_off,
        var_hostname,
        var_cert,
        var_context,
        var_conn
    );


    // Release cached frame.
    if ( frame_74636c179fd58215ac1137c71c394450 == cache_frame_74636c179fd58215ac1137c71c394450 )
    {
        Py_DECREF( frame_74636c179fd58215ac1137c71c394450 );
    }
    cache_frame_74636c179fd58215ac1137c71c394450 = NULL;

    assertFrameObject( frame_74636c179fd58215ac1137c71c394450 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_11_connect );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_server_hostname );
    Py_DECREF( var_server_hostname );
    var_server_hostname = NULL;

    CHECK_OBJECT( (PyObject *)var_is_time_off );
    Py_DECREF( var_is_time_off );
    var_is_time_off = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_hostname );
    Py_DECREF( var_hostname );
    var_hostname = NULL;

    Py_XDECREF( var_cert );
    var_cert = NULL;

    CHECK_OBJECT( (PyObject *)var_context );
    Py_DECREF( var_context );
    var_context = NULL;

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

    Py_XDECREF( var_server_hostname );
    var_server_hostname = NULL;

    Py_XDECREF( var_is_time_off );
    var_is_time_off = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_hostname );
    var_hostname = NULL;

    Py_XDECREF( var_cert );
    var_cert = NULL;

    Py_XDECREF( var_context );
    var_context = NULL;

    Py_XDECREF( var_conn );
    var_conn = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_11_connect );
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


static PyObject *impl_urllib3$connection$$$function_12__match_hostname( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cert = python_pars[ 0 ];
    PyObject *par_asserted_hostname = python_pars[ 1 ];
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_90ecccce4d2f06fa86f9ccae6f8805a5;
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
    static struct Nuitka_FrameObject *cache_frame_90ecccce4d2f06fa86f9ccae6f8805a5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_90ecccce4d2f06fa86f9ccae6f8805a5, codeobj_90ecccce4d2f06fa86f9ccae6f8805a5, module_urllib3$connection, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_90ecccce4d2f06fa86f9ccae6f8805a5 = cache_frame_90ecccce4d2f06fa86f9ccae6f8805a5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_90ecccce4d2f06fa86f9ccae6f8805a5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_90ecccce4d2f06fa86f9ccae6f8805a5 ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_match_hostname );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_match_hostname );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "match_hostname" );
            exception_tb = NULL;

            exception_lineno = 374;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_cert );
        tmp_args_element_name_1 = par_cert;
        CHECK_OBJECT( par_asserted_hostname );
        tmp_args_element_name_2 = par_asserted_hostname;
        frame_90ecccce4d2f06fa86f9ccae6f8805a5->m_frame.f_lineno = 374;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 374;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_1 );
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
    PRESERVE_FRAME_EXCEPTION( frame_90ecccce4d2f06fa86f9ccae6f8805a5 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_90ecccce4d2f06fa86f9ccae6f8805a5, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_90ecccce4d2f06fa86f9ccae6f8805a5, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_mvar_value_2;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_CertificateError );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CertificateError );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "CertificateError" );
            exception_tb = NULL;

            exception_lineno = 375;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_compexpr_right_1 = tmp_mvar_value_2;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 375;
            type_description_1 = "ooo";
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
            tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
            assert( var_e == NULL );
            Py_INCREF( tmp_assign_source_1 );
            var_e = tmp_assign_source_1;
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_3;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_log );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
                exception_tb = NULL;

                exception_lineno = 376;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_called_instance_1 = tmp_mvar_value_3;
            tmp_args_element_name_3 = const_str_digest_e8fecadf67c84324aa28152f08ceec4c;
            CHECK_OBJECT( par_asserted_hostname );
            tmp_args_element_name_4 = par_asserted_hostname;
            CHECK_OBJECT( par_cert );
            tmp_args_element_name_5 = par_cert;
            frame_90ecccce4d2f06fa86f9ccae6f8805a5->m_frame.f_lineno = 376;
            {
                PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_1, const_str_plain_error, call_args );
            }

            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 376;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT( par_cert );
            tmp_assattr_name_1 = par_cert;
            CHECK_OBJECT( var_e );
            tmp_assattr_target_1 = var_e;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__peer_cert, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 382;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
        }
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 383;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_90ecccce4d2f06fa86f9ccae6f8805a5->m_frame) frame_90ecccce4d2f06fa86f9ccae6f8805a5->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 373;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_90ecccce4d2f06fa86f9ccae6f8805a5->m_frame) frame_90ecccce4d2f06fa86f9ccae6f8805a5->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
        branch_end_1:;
    }
    // End of try:
    try_end_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_90ecccce4d2f06fa86f9ccae6f8805a5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_90ecccce4d2f06fa86f9ccae6f8805a5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_90ecccce4d2f06fa86f9ccae6f8805a5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_90ecccce4d2f06fa86f9ccae6f8805a5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_90ecccce4d2f06fa86f9ccae6f8805a5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_90ecccce4d2f06fa86f9ccae6f8805a5,
        type_description_1,
        par_cert,
        par_asserted_hostname,
        var_e
    );


    // Release cached frame.
    if ( frame_90ecccce4d2f06fa86f9ccae6f8805a5 == cache_frame_90ecccce4d2f06fa86f9ccae6f8805a5 )
    {
        Py_DECREF( frame_90ecccce4d2f06fa86f9ccae6f8805a5 );
    }
    cache_frame_90ecccce4d2f06fa86f9ccae6f8805a5 = NULL;

    assertFrameObject( frame_90ecccce4d2f06fa86f9ccae6f8805a5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_12__match_hostname );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    CHECK_OBJECT( (PyObject *)par_asserted_hostname );
    Py_DECREF( par_asserted_hostname );
    par_asserted_hostname = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cert );
    Py_DECREF( par_cert );
    par_cert = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    CHECK_OBJECT( (PyObject *)par_asserted_hostname );
    Py_DECREF( par_asserted_hostname );
    par_asserted_hostname = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$connection$$$function_12__match_hostname );
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



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_10_set_cert( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_10_set_cert,
        const_str_plain_set_cert,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_527b1bf39a155501c566215113af62ca,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connection,
        const_str_digest_5e42e68968b4150e2b97070212311786,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_11_connect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_11_connect,
        const_str_plain_connect,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_74636c179fd58215ac1137c71c394450,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connection,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_12__match_hostname(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_12__match_hostname,
        const_str_plain__match_hostname,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_90ecccce4d2f06fa86f9ccae6f8805a5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connection,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_1___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7a19e30397471c4d2178416ce0dc75ab,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connection,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_2_host(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_2_host,
        const_str_plain_host,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_10cf64b390001ab88e5d186c1b58f5dd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connection,
        const_str_digest_413072d56f5b6cab90a6a564aa42b34d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_3_host(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_3_host,
        const_str_plain_host,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_acf6b9342bcbfb0059edb5dbca925f02,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connection,
        const_str_digest_feb167a80b64f9a6111c2ef450038b43,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_4__new_conn(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_4__new_conn,
        const_str_plain__new_conn,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b548f10e4cf12bc70feb7236650b9db9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connection,
        const_str_digest_e0fe92f188862ba1c4cac2ad70dff86d,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_5__prepare_conn(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_5__prepare_conn,
        const_str_plain__prepare_conn,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4ee2562cce922dcdaab675b32028e11e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connection,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_6_connect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_6_connect,
        const_str_plain_connect,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_4ca8c9ab68f82e9b05e578fb67288f09,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connection,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_7_request_chunked( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_7_request_chunked,
        const_str_plain_request_chunked,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c802c5ad73baea2ab7c33d548cf7fc84,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connection,
        const_str_digest_dc659baf5812ef509a1bfb99226d850c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_8___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_8___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_3c17f49e3fb13d361d23950e78236afa,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connection,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$connection$$$function_9_connect(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$connection$$$function_9_connect,
        const_str_plain_connect,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_cfe928b0176d83ef4ea8a3da027112cb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$connection,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$connection =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.connection",
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

MOD_INIT_DECL( urllib3$connection )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$connection );
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
    puts("urllib3.connection: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.connection: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.connection: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$connection" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$connection = Py_InitModule4(
        "urllib3.connection",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$connection = PyModule_Create( &mdef_urllib3$connection );
#endif

    moduledict_urllib3$connection = MODULE_DICT( module_urllib3$connection );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$connection,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$connection,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$connection,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$connection );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_003800fb824e3437bbbf235acf31301c, module_urllib3$connection );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_3__class = NULL;
    PyObject *tmp_class_creation_3__class_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class = NULL;
    PyObject *tmp_class_creation_4__class_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__class = NULL;
    PyObject *tmp_class_creation_5__class_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_6__bases = NULL;
    PyObject *tmp_class_creation_6__class = NULL;
    PyObject *tmp_class_creation_6__class_dict = NULL;
    PyObject *tmp_class_creation_6__metaclass = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_select_metaclass_4__base = NULL;
    PyObject *tmp_select_metaclass_5__base = NULL;
    PyObject *tmp_select_metaclass_6__base = NULL;
    struct Nuitka_FrameObject *frame_06097705cf8d915904fdd92f6f7e021f;
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
    int tmp_res;
    PyObject *locals_urllib3$connection_18 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *locals_urllib3$connection_26 = NULL;
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
    PyObject *locals_urllib3$connection_70 = NULL;
    struct Nuitka_FrameObject *frame_0b06d13aaa2e0f20c4a181cecf3bc156_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_0b06d13aaa2e0f20c4a181cecf3bc156_2 = NULL;
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
    PyObject *locals_urllib3$connection_223 = NULL;
    struct Nuitka_FrameObject *frame_8a2d60eac0054a048957f5a0b8b61103_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    static struct Nuitka_FrameObject *cache_frame_8a2d60eac0054a048957f5a0b8b61103_3 = NULL;
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
    PyObject *locals_urllib3$connection_263 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_6c85cd0fa48022a0a18fa398644aa57f;
        UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_06097705cf8d915904fdd92f6f7e021f = MAKE_MODULE_FRAME( codeobj_06097705cf8d915904fdd92f6f7e021f, module_urllib3$connection );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_06097705cf8d915904fdd92f6f7e021f );
    assert( Py_REFCNT( frame_06097705cf8d915904fdd92f6f7e021f ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        frame_06097705cf8d915904fdd92f6f7e021f->m_frame.f_lineno = 1;
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
        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_datetime;
        tmp_globals_name_1 = (PyObject *)moduledict_urllib3$connection;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_06097705cf8d915904fdd92f6f7e021f->m_frame.f_lineno = 2;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        assert( !(tmp_assign_source_4 == NULL) );
        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_datetime, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_logging;
        tmp_globals_name_2 = (PyObject *)moduledict_urllib3$connection;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = Py_None;
        tmp_level_name_2 = const_int_0;
        frame_06097705cf8d915904fdd92f6f7e021f->m_frame.f_lineno = 3;
        tmp_assign_source_5 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_plain_os;
        tmp_globals_name_3 = (PyObject *)moduledict_urllib3$connection;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = Py_None;
        tmp_level_name_3 = const_int_0;
        frame_06097705cf8d915904fdd92f6f7e021f->m_frame.f_lineno = 4;
        tmp_assign_source_6 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_plain_socket;
        tmp_globals_name_4 = (PyObject *)moduledict_urllib3$connection;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = Py_None;
        tmp_level_name_4 = const_int_0;
        frame_06097705cf8d915904fdd92f6f7e021f->m_frame.f_lineno = 5;
        tmp_assign_source_7 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_socket, tmp_assign_source_7 );
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_plain_socket;
        tmp_globals_name_5 = (PyObject *)moduledict_urllib3$connection;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_error_str_plain_timeout_tuple;
        tmp_level_name_5 = const_int_0;
        frame_06097705cf8d915904fdd92f6f7e021f->m_frame.f_lineno = 6;
        tmp_assign_source_8 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_2 = tmp_import_from_1__module;
        tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_error );
        if ( tmp_assign_source_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_SocketError, tmp_assign_source_9 );
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_3 = tmp_import_from_1__module;
        tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_timeout );
        if ( tmp_assign_source_10 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 6;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_SocketTimeout, tmp_assign_source_10 );
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
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_warnings;
        tmp_globals_name_6 = (PyObject *)moduledict_urllib3$connection;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = Py_None;
        tmp_level_name_6 = const_int_0;
        frame_06097705cf8d915904fdd92f6f7e021f->m_frame.f_lineno = 7;
        tmp_assign_source_11 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_11 );
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_six;
        tmp_globals_name_7 = (PyObject *)moduledict_urllib3$connection;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = Py_None;
        tmp_level_name_7 = const_int_0;
        frame_06097705cf8d915904fdd92f6f7e021f->m_frame.f_lineno = 8;
        tmp_assign_source_12 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_assign_source_12 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_12 );
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_digest_863f7ecfa780c39c386006d180d8b06a;
        tmp_globals_name_8 = (PyObject *)moduledict_urllib3$connection;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain_HTTPConnection_tuple;
        tmp_level_name_8 = const_int_0;
        frame_06097705cf8d915904fdd92f6f7e021f->m_frame.f_lineno = 9;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_HTTPConnection );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain__HTTPConnection, tmp_assign_source_13 );
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_9;
        PyObject *tmp_globals_name_9;
        PyObject *tmp_locals_name_9;
        PyObject *tmp_fromlist_name_9;
        PyObject *tmp_level_name_9;
        tmp_name_name_9 = const_str_digest_863f7ecfa780c39c386006d180d8b06a;
        tmp_globals_name_9 = (PyObject *)moduledict_urllib3$connection;
        tmp_locals_name_9 = Py_None;
        tmp_fromlist_name_9 = const_tuple_str_plain_HTTPException_tuple;
        tmp_level_name_9 = const_int_0;
        frame_06097705cf8d915904fdd92f6f7e021f->m_frame.f_lineno = 10;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_HTTPException );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPException, tmp_assign_source_14 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = const_str_plain_ssl;
        tmp_globals_name_10 = (PyObject *)moduledict_urllib3$connection;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = Py_None;
        tmp_level_name_10 = const_int_0;
        frame_06097705cf8d915904fdd92f6f7e021f->m_frame.f_lineno = 13;
        tmp_assign_source_15 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ssl, tmp_assign_source_15 );
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ssl );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
        }

        CHECK_OBJECT( tmp_mvar_value_1 );
        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_assign_source_16 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_SSLError );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 14;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_BaseSSLError, tmp_assign_source_16 );
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_06097705cf8d915904fdd92f6f7e021f );
    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_06097705cf8d915904fdd92f6f7e021f, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != 0 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_06097705cf8d915904fdd92f6f7e021f, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_1 = const_tuple_type_ImportError_type_AttributeError_tuple;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 15;

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
            PyObject *tmp_assign_source_17;
            tmp_assign_source_17 = Py_None;
            UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ssl, tmp_assign_source_17 );
        }
        {
            PyObject *tmp_assign_source_18;
            {
                PyObject *tmp_set_locals_1;
                tmp_set_locals_1 = PyDict_New();
                locals_urllib3$connection_18 = tmp_set_locals_1;
            }
            tmp_dictset_value = const_str_digest_003800fb824e3437bbbf235acf31301c;
            tmp_res = PyDict_SetItem( locals_urllib3$connection_18, const_str_plain___module__, tmp_dictset_value );
            assert( !(tmp_res != 0) );
            // Tried code:
            tmp_assign_source_18 = locals_urllib3$connection_18;
            Py_INCREF( tmp_assign_source_18 );
            goto try_return_handler_3;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( urllib3$connection );
            return MOD_RETURN_VALUE( NULL );
            // Return handler code:
            try_return_handler_3:;
            Py_DECREF( locals_urllib3$connection_18 );
            locals_urllib3$connection_18 = NULL;
            goto outline_result_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( urllib3$connection );
            return MOD_RETURN_VALUE( NULL );
            outline_result_1:;
            assert( tmp_class_creation_1__class_dict == NULL );
            tmp_class_creation_1__class_dict = tmp_assign_source_18;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_19;
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


                exception_lineno = 18;

                goto try_except_handler_4;
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
            tmp_assign_source_19 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;

                goto try_except_handler_4;
            }
            goto condexpr_end_1;
            condexpr_false_1:;
            tmp_assign_source_19 = (PyObject *)&PyType_Type;
            Py_INCREF( tmp_assign_source_19 );
            condexpr_end_1:;
            assert( tmp_class_creation_1__metaclass == NULL );
            tmp_class_creation_1__metaclass = tmp_assign_source_19;
        }
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_1 = tmp_class_creation_1__metaclass;
            tmp_args_element_name_1 = const_str_plain_BaseSSLError;
            tmp_args_element_name_2 = const_tuple_type_BaseException_tuple;
            CHECK_OBJECT( tmp_class_creation_1__class_dict );
            tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
            frame_06097705cf8d915904fdd92f6f7e021f->m_frame.f_lineno = 18;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
            }

            if ( tmp_assign_source_20 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 18;

                goto try_except_handler_4;
            }
            assert( tmp_class_creation_1__class == NULL );
            tmp_class_creation_1__class = tmp_assign_source_20;
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

        CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
        Py_DECREF( tmp_class_creation_1__class_dict );
        tmp_class_creation_1__class_dict = NULL;

        Py_XDECREF( tmp_class_creation_1__metaclass );
        tmp_class_creation_1__metaclass = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_1;
        // End of try:
        try_end_3:;
        {
            PyObject *tmp_assign_source_21;
            CHECK_OBJECT( tmp_class_creation_1__class );
            tmp_assign_source_21 = tmp_class_creation_1__class;
            UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_BaseSSLError, tmp_assign_source_21 );
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

        goto branch_end_1;
        branch_no_1:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 12;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_06097705cf8d915904fdd92f6f7e021f->m_frame) frame_06097705cf8d915904fdd92f6f7e021f->m_frame.f_lineno = exception_tb->tb_lineno;

        goto frame_exception_exit_1;
        branch_end_1:;
    }
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ConnectionError );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ConnectionError );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ConnectionError" );
            exception_tb = NULL;

            exception_lineno = 24;

            goto try_except_handler_5;
        }

        tmp_assign_source_22 = tmp_mvar_value_2;
        UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ConnectionError, tmp_assign_source_22 );
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_06097705cf8d915904fdd92f6f7e021f );
    if ( exception_keeper_tb_4 == NULL )
    {
        exception_keeper_tb_4 = MAKE_TRACEBACK( frame_06097705cf8d915904fdd92f6f7e021f, exception_keeper_lineno_4 );
    }
    else if ( exception_keeper_lineno_4 != 0 )
    {
        exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_06097705cf8d915904fdd92f6f7e021f, exception_keeper_lineno_4 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_NameError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 25;

            goto frame_exception_exit_1;
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
            PyObject *tmp_assign_source_23;
            {
                PyObject *tmp_set_locals_2;
                tmp_set_locals_2 = PyDict_New();
                locals_urllib3$connection_26 = tmp_set_locals_2;
            }
            tmp_dictset_value = const_str_digest_003800fb824e3437bbbf235acf31301c;
            tmp_res = PyDict_SetItem( locals_urllib3$connection_26, const_str_plain___module__, tmp_dictset_value );
            assert( !(tmp_res != 0) );
            // Tried code:
            tmp_assign_source_23 = locals_urllib3$connection_26;
            Py_INCREF( tmp_assign_source_23 );
            goto try_return_handler_6;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( urllib3$connection );
            return MOD_RETURN_VALUE( NULL );
            // Return handler code:
            try_return_handler_6:;
            Py_DECREF( locals_urllib3$connection_26 );
            locals_urllib3$connection_26 = NULL;
            goto outline_result_2;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( urllib3$connection );
            return MOD_RETURN_VALUE( NULL );
            outline_result_2:;
            assert( tmp_class_creation_2__class_dict == NULL );
            tmp_class_creation_2__class_dict = tmp_assign_source_23;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_24;
            nuitka_bool tmp_condition_result_4;
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


                exception_lineno = 26;

                goto try_except_handler_7;
            }
            tmp_condition_result_4 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if ( tmp_condition_result_4 == NUITKA_BOOL_TRUE )
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
            tmp_assign_source_24 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
            if ( tmp_assign_source_24 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 26;

                goto try_except_handler_7;
            }
            goto condexpr_end_2;
            condexpr_false_2:;
            tmp_assign_source_24 = (PyObject *)&PyType_Type;
            Py_INCREF( tmp_assign_source_24 );
            condexpr_end_2:;
            assert( tmp_class_creation_2__metaclass == NULL );
            tmp_class_creation_2__metaclass = tmp_assign_source_24;
        }
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_name_2;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_args_element_name_6;
            CHECK_OBJECT( tmp_class_creation_2__metaclass );
            tmp_called_name_2 = tmp_class_creation_2__metaclass;
            tmp_args_element_name_4 = const_str_plain_ConnectionError;
            tmp_args_element_name_5 = const_tuple_type_Exception_tuple;
            CHECK_OBJECT( tmp_class_creation_2__class_dict );
            tmp_args_element_name_6 = tmp_class_creation_2__class_dict;
            frame_06097705cf8d915904fdd92f6f7e021f->m_frame.f_lineno = 26;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
                tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
            }

            if ( tmp_assign_source_25 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 26;

                goto try_except_handler_7;
            }
            assert( tmp_class_creation_2__class == NULL );
            tmp_class_creation_2__class = tmp_assign_source_25;
        }
        goto try_end_5;
        // Exception handler code:
        try_except_handler_7:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
        Py_DECREF( tmp_class_creation_2__class_dict );
        tmp_class_creation_2__class_dict = NULL;

        Py_XDECREF( tmp_class_creation_2__metaclass );
        tmp_class_creation_2__metaclass = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_1;
        // End of try:
        try_end_5:;
        {
            PyObject *tmp_assign_source_26;
            CHECK_OBJECT( tmp_class_creation_2__class );
            tmp_assign_source_26 = tmp_class_creation_2__class;
            UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ConnectionError, tmp_assign_source_26 );
        }
        CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class );
        Py_DECREF( tmp_class_creation_2__class );
        tmp_class_creation_2__class = NULL;

        CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
        Py_DECREF( tmp_class_creation_2__class_dict );
        tmp_class_creation_2__class_dict = NULL;

        CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
        Py_DECREF( tmp_class_creation_2__metaclass );
        tmp_class_creation_2__metaclass = NULL;

        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 22;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_06097705cf8d915904fdd92f6f7e021f->m_frame) frame_06097705cf8d915904fdd92f6f7e021f->m_frame.f_lineno = exception_tb->tb_lineno;

        goto frame_exception_exit_1;
        branch_end_2:;
    }
    goto try_end_4;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$connection );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_name_11;
        PyObject *tmp_locals_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = const_str_plain_exceptions;
        tmp_globals_name_11 = (PyObject *)moduledict_urllib3$connection;
        tmp_locals_name_11 = Py_None;
        tmp_fromlist_name_11 = const_tuple_e4d50c48f2ee1b6eb3ae021a15141bf1_tuple;
        tmp_level_name_11 = const_int_pos_1;
        frame_06097705cf8d915904fdd92f6f7e021f->m_frame.f_lineno = 30;
        tmp_assign_source_27 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
        if ( tmp_assign_source_27 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_2__module == NULL );
        tmp_import_from_2__module = tmp_assign_source_27;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_6 = tmp_import_from_2__module;
        tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_NewConnectionError );
        if ( tmp_assign_source_28 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_NewConnectionError, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_7 = tmp_import_from_2__module;
        tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_ConnectTimeoutError );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ConnectTimeoutError, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_8 = tmp_import_from_2__module;
        tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_SubjectAltNameWarning );
        if ( tmp_assign_source_30 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_SubjectAltNameWarning, tmp_assign_source_30 );
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT( tmp_import_from_2__module );
        tmp_import_name_from_9 = tmp_import_from_2__module;
        tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_SystemTimeWarning );
        if ( tmp_assign_source_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 30;

            goto try_except_handler_8;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_SystemTimeWarning, tmp_assign_source_31 );
    }
    goto try_end_6;
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_2__module );
    Py_DECREF( tmp_import_from_2__module );
    tmp_import_from_2__module = NULL;

    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_name_name_12;
        PyObject *tmp_globals_name_12;
        PyObject *tmp_locals_name_12;
        PyObject *tmp_fromlist_name_12;
        PyObject *tmp_level_name_12;
        tmp_name_name_12 = const_str_digest_0a2ea16757d4dad15d4c8e0ada40cd0c;
        tmp_globals_name_12 = (PyObject *)moduledict_urllib3$connection;
        tmp_locals_name_12 = Py_None;
        tmp_fromlist_name_12 = const_tuple_str_plain_match_hostname_str_plain_CertificateError_tuple;
        tmp_level_name_12 = const_int_pos_1;
        frame_06097705cf8d915904fdd92f6f7e021f->m_frame.f_lineno = 36;
        tmp_assign_source_32 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_3__module == NULL );
        tmp_import_from_3__module = tmp_assign_source_32;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_10 = tmp_import_from_3__module;
        tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_match_hostname );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_match_hostname, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT( tmp_import_from_3__module );
        tmp_import_name_from_11 = tmp_import_from_3__module;
        tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_CertificateError );
        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 36;

            goto try_except_handler_9;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_CertificateError, tmp_assign_source_34 );
    }
    goto try_end_7;
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_3__module );
    Py_DECREF( tmp_import_from_3__module );
    tmp_import_from_3__module = NULL;

    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_name_name_13;
        PyObject *tmp_globals_name_13;
        PyObject *tmp_locals_name_13;
        PyObject *tmp_fromlist_name_13;
        PyObject *tmp_level_name_13;
        tmp_name_name_13 = const_str_digest_fbcb06792f2497ac6c7abd423e9e2d62;
        tmp_globals_name_13 = (PyObject *)moduledict_urllib3$connection;
        tmp_locals_name_13 = Py_None;
        tmp_fromlist_name_13 = const_tuple_659bcfd89e2a907d800ea69675ef86b4_tuple;
        tmp_level_name_13 = const_int_pos_1;
        frame_06097705cf8d915904fdd92f6f7e021f->m_frame.f_lineno = 38;
        tmp_assign_source_35 = IMPORT_MODULE5( tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13 );
        if ( tmp_assign_source_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_4__module == NULL );
        tmp_import_from_4__module = tmp_assign_source_35;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_12 = tmp_import_from_4__module;
        tmp_assign_source_36 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_resolve_cert_reqs );
        if ( tmp_assign_source_36 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_resolve_cert_reqs, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_13 = tmp_import_from_4__module;
        tmp_assign_source_37 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_resolve_ssl_version );
        if ( tmp_assign_source_37 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_resolve_ssl_version, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_14 = tmp_import_from_4__module;
        tmp_assign_source_38 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_assert_fingerprint );
        if ( tmp_assign_source_38 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_assert_fingerprint, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_15 = tmp_import_from_4__module;
        tmp_assign_source_39 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_create_urllib3_context );
        if ( tmp_assign_source_39 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_create_urllib3_context, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT( tmp_import_from_4__module );
        tmp_import_name_from_16 = tmp_import_from_4__module;
        tmp_assign_source_40 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_ssl_wrap_socket );
        if ( tmp_assign_source_40 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 38;

            goto try_except_handler_10;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ssl_wrap_socket, tmp_assign_source_40 );
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_4__module );
    Py_DECREF( tmp_import_from_4__module );
    tmp_import_from_4__module = NULL;

    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_name_14;
        PyObject *tmp_globals_name_14;
        PyObject *tmp_locals_name_14;
        PyObject *tmp_fromlist_name_14;
        PyObject *tmp_level_name_14;
        tmp_name_name_14 = const_str_plain_util;
        tmp_globals_name_14 = (PyObject *)moduledict_urllib3$connection;
        tmp_locals_name_14 = Py_None;
        tmp_fromlist_name_14 = const_tuple_str_plain_connection_tuple;
        tmp_level_name_14 = const_int_pos_1;
        frame_06097705cf8d915904fdd92f6f7e021f->m_frame.f_lineno = 47;
        tmp_import_name_from_17 = IMPORT_MODULE5( tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14, tmp_level_name_14 );
        if ( tmp_import_name_from_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_41 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_connection );
        Py_DECREF( tmp_import_name_from_17 );
        if ( tmp_assign_source_41 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_connection, tmp_assign_source_41 );
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_name_15;
        PyObject *tmp_globals_name_15;
        PyObject *tmp_locals_name_15;
        PyObject *tmp_fromlist_name_15;
        PyObject *tmp_level_name_15;
        tmp_name_name_15 = const_str_plain__collections;
        tmp_globals_name_15 = (PyObject *)moduledict_urllib3$connection;
        tmp_locals_name_15 = Py_None;
        tmp_fromlist_name_15 = const_tuple_str_plain_HTTPHeaderDict_tuple;
        tmp_level_name_15 = const_int_pos_1;
        frame_06097705cf8d915904fdd92f6f7e021f->m_frame.f_lineno = 49;
        tmp_import_name_from_18 = IMPORT_MODULE5( tmp_name_name_15, tmp_globals_name_15, tmp_locals_name_15, tmp_fromlist_name_15, tmp_level_name_15 );
        if ( tmp_import_name_from_18 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_42 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_HTTPHeaderDict );
        Py_DECREF( tmp_import_name_from_18 );
        if ( tmp_assign_source_42 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPHeaderDict, tmp_assign_source_42 );
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_logging );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "logging" );
            exception_tb = NULL;

            exception_lineno = 51;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_1 = tmp_mvar_value_3;
        frame_06097705cf8d915904fdd92f6f7e021f->m_frame.f_lineno = 51;
        tmp_assign_source_43 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_getLogger, &PyTuple_GET_ITEM( const_tuple_str_digest_003800fb824e3437bbbf235acf31301c_tuple, 0 ) );

        if ( tmp_assign_source_43 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_43 );
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = PyDict_Copy( const_dict_93916f845314fde3dc45a1c4d3d34ff8 );
        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_port_by_scheme, tmp_assign_source_44 );
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_datetime );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_datetime );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "datetime" );
            exception_tb = NULL;

            exception_lineno = 62;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_4;
        frame_06097705cf8d915904fdd92f6f7e021f->m_frame.f_lineno = 62;
        tmp_assign_source_45 = CALL_METHOD_WITH_ARGS3( tmp_called_instance_2, const_str_plain_date, &PyTuple_GET_ITEM( const_tuple_int_pos_2017_int_pos_6_int_pos_30_tuple, 0 ) );

        if ( tmp_assign_source_45 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_RECENT_DATE, tmp_assign_source_45 );
    }
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = PyDict_Copy( const_dict_937363fdfb0294000ca1176414b39b98 );
        assert( tmp_class_creation_3__class_dict == NULL );
        tmp_class_creation_3__class_dict = tmp_assign_source_46;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_47;
        nuitka_bool tmp_condition_result_5;
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


            exception_lineno = 65;

            goto try_except_handler_11;
        }
        tmp_condition_result_5 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_5 == NUITKA_BOOL_TRUE )
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
        tmp_assign_source_47 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
        if ( tmp_assign_source_47 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_11;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_assign_source_47 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_47 );
        condexpr_end_3:;
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_called_name_3 = tmp_class_creation_3__metaclass;
        tmp_args_element_name_7 = const_str_plain_DummyConnection;
        tmp_args_element_name_8 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_3__class_dict );
        tmp_args_element_name_9 = tmp_class_creation_3__class_dict;
        frame_06097705cf8d915904fdd92f6f7e021f->m_frame.f_lineno = 65;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
            tmp_assign_source_48 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_48 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 65;

            goto try_except_handler_11;
        }
        assert( tmp_class_creation_3__class == NULL );
        tmp_class_creation_3__class = tmp_assign_source_48;
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_dict );
    Py_DECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    {
        PyObject *tmp_assign_source_49;
        CHECK_OBJECT( tmp_class_creation_3__class );
        tmp_assign_source_49 = tmp_class_creation_3__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_DummyConnection, tmp_assign_source_49 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class );
    Py_DECREF( tmp_class_creation_3__class );
    tmp_class_creation_3__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_dict );
    Py_DECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain__HTTPConnection );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__HTTPConnection );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_HTTPConnection" );
            exception_tb = NULL;

            exception_lineno = 70;

            goto try_except_handler_12;
        }

        tmp_tuple_element_1 = tmp_mvar_value_5;
        tmp_assign_source_50 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_50, 0, tmp_tuple_element_1 );
        tmp_tuple_element_1 = (PyObject *)&PyBaseObject_Type;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_assign_source_50, 1, tmp_tuple_element_1 );
        assert( tmp_class_creation_4__bases == NULL );
        tmp_class_creation_4__bases = tmp_assign_source_50;
    }
    {
        PyObject *tmp_assign_source_51;
        {
            PyObject *tmp_set_locals_3;
            tmp_set_locals_3 = PyDict_New();
            locals_urllib3$connection_70 = tmp_set_locals_3;
        }
        tmp_dictset_value = const_str_digest_003800fb824e3437bbbf235acf31301c;
        tmp_res = PyDict_SetItem( locals_urllib3$connection_70, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_a2ffa7a4a6da141b7e16370ced35175d;
        tmp_res = PyDict_SetItem( locals_urllib3$connection_70, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_0b06d13aaa2e0f20c4a181cecf3bc156_2, codeobj_0b06d13aaa2e0f20c4a181cecf3bc156, module_urllib3$connection, 0 );
        frame_0b06d13aaa2e0f20c4a181cecf3bc156_2 = cache_frame_0b06d13aaa2e0f20c4a181cecf3bc156_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_0b06d13aaa2e0f20c4a181cecf3bc156_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_0b06d13aaa2e0f20c4a181cecf3bc156_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_subscribed_name_1;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_subscript_name_1;
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_port_by_scheme );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_port_by_scheme );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "port_by_scheme" );
                exception_tb = NULL;

                exception_lineno = 94;

                goto frame_exception_exit_2;
            }

            tmp_subscribed_name_1 = tmp_mvar_value_6;
            tmp_subscript_name_1 = const_str_plain_http;
            tmp_dictset_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem( locals_urllib3$connection_70, const_str_plain_default_port, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 94;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_8;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_socket );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "socket" );
                exception_tb = NULL;

                exception_lineno = 98;

                goto frame_exception_exit_2;
            }

            tmp_source_name_2 = tmp_mvar_value_7;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_IPPROTO_TCP );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;

                goto frame_exception_exit_2;
            }
            tmp_list_element_1 = PyTuple_New( 3 );
            PyTuple_SET_ITEM( tmp_list_element_1, 0, tmp_tuple_element_2 );
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_socket );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
            }

            if ( tmp_mvar_value_8 == NULL )
            {
                Py_DECREF( tmp_list_element_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "socket" );
                exception_tb = NULL;

                exception_lineno = 98;

                goto frame_exception_exit_2;
            }

            tmp_source_name_3 = tmp_mvar_value_8;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_TCP_NODELAY );
            if ( tmp_tuple_element_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_list_element_1 );

                exception_lineno = 98;

                goto frame_exception_exit_2;
            }
            PyTuple_SET_ITEM( tmp_list_element_1, 1, tmp_tuple_element_2 );
            tmp_tuple_element_2 = const_int_pos_1;
            Py_INCREF( tmp_tuple_element_2 );
            PyTuple_SET_ITEM( tmp_list_element_1, 2, tmp_tuple_element_2 );
            tmp_dictset_value = PyList_New( 1 );
            PyList_SET_ITEM( tmp_dictset_value, 0, tmp_list_element_1 );
            tmp_res = PyDict_SetItem( locals_urllib3$connection_70, const_str_plain_default_socket_options, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 98;

                goto frame_exception_exit_2;
            }
        }
        tmp_dictset_value = Py_False;
        tmp_res = PyDict_SetItem( locals_urllib3$connection_70, const_str_plain_is_verified, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_urllib3$connection$$$function_1___init__(  );



        tmp_res = PyDict_SetItem( locals_urllib3$connection_70, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_10;
            tmp_called_name_4 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_10 = MAKE_FUNCTION_urllib3$connection$$$function_2_host(  );



            frame_0b06d13aaa2e0f20c4a181cecf3bc156_2->m_frame.f_lineno = 116;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 116;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem( locals_urllib3$connection_70, const_str_plain_host, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 116;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_11;
            tmp_called_instance_3 = PyDict_GetItem( locals_urllib3$connection_70, const_str_plain_host );

            if ( tmp_called_instance_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "host" );
                exception_tb = NULL;

                exception_lineno = 135;

                goto frame_exception_exit_2;
            }

            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 135;

                goto frame_exception_exit_2;
            }
            tmp_args_element_name_11 = MAKE_FUNCTION_urllib3$connection$$$function_3_host(  );



            frame_0b06d13aaa2e0f20c4a181cecf3bc156_2->m_frame.f_lineno = 135;
            {
                PyObject *call_args[] = { tmp_args_element_name_11 };
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_setter, call_args );
            }

            Py_DECREF( tmp_args_element_name_11 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 135;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem( locals_urllib3$connection_70, const_str_plain_host, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 135;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_0b06d13aaa2e0f20c4a181cecf3bc156_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_0b06d13aaa2e0f20c4a181cecf3bc156_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_0b06d13aaa2e0f20c4a181cecf3bc156_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_0b06d13aaa2e0f20c4a181cecf3bc156_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_0b06d13aaa2e0f20c4a181cecf3bc156_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_0b06d13aaa2e0f20c4a181cecf3bc156_2,
            type_description_2
        );


        // Release cached frame.
        if ( frame_0b06d13aaa2e0f20c4a181cecf3bc156_2 == cache_frame_0b06d13aaa2e0f20c4a181cecf3bc156_2 )
        {
            Py_DECREF( frame_0b06d13aaa2e0f20c4a181cecf3bc156_2 );
        }
        cache_frame_0b06d13aaa2e0f20c4a181cecf3bc156_2 = NULL;

        assertFrameObject( frame_0b06d13aaa2e0f20c4a181cecf3bc156_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_13;
        skip_nested_handling_1:;
        tmp_dictset_value = MAKE_FUNCTION_urllib3$connection$$$function_4__new_conn(  );



        tmp_res = PyDict_SetItem( locals_urllib3$connection_70, const_str_plain__new_conn, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_urllib3$connection$$$function_5__prepare_conn(  );



        tmp_res = PyDict_SetItem( locals_urllib3$connection_70, const_str_plain__prepare_conn, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_urllib3$connection$$$function_6_connect(  );



        tmp_res = PyDict_SetItem( locals_urllib3$connection_70, const_str_plain_connect, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_none_none_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_dictset_value = MAKE_FUNCTION_urllib3$connection$$$function_7_request_chunked( tmp_defaults_1 );



            tmp_res = PyDict_SetItem( locals_urllib3$connection_70, const_str_plain_request_chunked, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        tmp_assign_source_51 = locals_urllib3$connection_70;
        Py_INCREF( tmp_assign_source_51 );
        goto try_return_handler_13;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$connection );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF( locals_urllib3$connection_70 );
        locals_urllib3$connection_70 = NULL;
        goto outline_result_3;
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

        Py_DECREF( locals_urllib3$connection_70 );
        locals_urllib3$connection_70 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$connection );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 70;
        goto try_except_handler_12;
        outline_result_3:;
        assert( tmp_class_creation_4__class_dict == NULL );
        tmp_class_creation_4__class_dict = tmp_assign_source_51;
    }
    {
        PyObject *tmp_assign_source_52;
        nuitka_bool tmp_condition_result_6;
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


            exception_lineno = 70;

            goto try_except_handler_12;
        }
        tmp_condition_result_6 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_6 == NUITKA_BOOL_TRUE )
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
        tmp_assign_source_52 = DICT_GET_ITEM( tmp_dict_name_8, tmp_key_name_8 );
        if ( tmp_assign_source_52 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;

            goto try_except_handler_12;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        {
            PyObject *tmp_assign_source_53;
            PyObject *tmp_subscribed_name_2;
            PyObject *tmp_subscript_name_2;
            CHECK_OBJECT( tmp_class_creation_4__bases );
            tmp_subscribed_name_2 = tmp_class_creation_4__bases;
            tmp_subscript_name_2 = const_int_0;
            tmp_assign_source_53 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_2, tmp_subscript_name_2, 0 );
            if ( tmp_assign_source_53 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 70;

                goto try_except_handler_12;
            }
            assert( tmp_select_metaclass_4__base == NULL );
            tmp_select_metaclass_4__base = tmp_assign_source_53;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_4;
            CHECK_OBJECT( tmp_select_metaclass_4__base );
            tmp_source_name_4 = tmp_select_metaclass_4__base;
            tmp_assign_source_52 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_4 );
            if ( tmp_assign_source_52 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 70;

                goto try_except_handler_15;
            }
            goto try_return_handler_14;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$connection );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_15:;
        exception_keeper_type_11 = exception_type;
        exception_keeper_value_11 = exception_value;
        exception_keeper_tb_11 = exception_tb;
        exception_keeper_lineno_11 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_1;
            Py_DECREF( exception_keeper_type_11 );
            Py_XDECREF( exception_keeper_value_11 );
            Py_XDECREF( exception_keeper_tb_11 );
            CHECK_OBJECT( tmp_select_metaclass_4__base );
            tmp_type_arg_1 = tmp_select_metaclass_4__base;
            tmp_assign_source_52 = BUILTIN_TYPE1( tmp_type_arg_1 );
            assert( !(tmp_assign_source_52 == NULL) );
            goto try_return_handler_14;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$connection );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_4__base );
        Py_DECREF( tmp_select_metaclass_4__base );
        tmp_select_metaclass_4__base = NULL;

        goto outline_result_4;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_4__base );
        Py_DECREF( tmp_select_metaclass_4__base );
        tmp_select_metaclass_4__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$connection );
        return MOD_RETURN_VALUE( NULL );
        outline_result_4:;
        condexpr_end_4:;
        assert( tmp_class_creation_4__metaclass == NULL );
        tmp_class_creation_4__metaclass = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_called_name_5;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        CHECK_OBJECT( tmp_class_creation_4__metaclass );
        tmp_called_name_5 = tmp_class_creation_4__metaclass;
        tmp_args_element_name_12 = const_str_plain_HTTPConnection;
        CHECK_OBJECT( tmp_class_creation_4__bases );
        tmp_args_element_name_13 = tmp_class_creation_4__bases;
        CHECK_OBJECT( tmp_class_creation_4__class_dict );
        tmp_args_element_name_14 = tmp_class_creation_4__class_dict;
        frame_06097705cf8d915904fdd92f6f7e021f->m_frame.f_lineno = 70;
        {
            PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
            tmp_assign_source_54 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
        }

        if ( tmp_assign_source_54 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 70;

            goto try_except_handler_12;
        }
        assert( tmp_class_creation_4__class == NULL );
        tmp_class_creation_4__class = tmp_assign_source_54;
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
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
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
    {
        PyObject *tmp_assign_source_55;
        CHECK_OBJECT( tmp_class_creation_4__class );
        tmp_assign_source_55 = tmp_class_creation_4__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPConnection, tmp_assign_source_55 );
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

    // Tried code:
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_mvar_value_9;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPConnection );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPConnection );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPConnection" );
            exception_tb = NULL;

            exception_lineno = 223;

            goto try_except_handler_16;
        }

        tmp_tuple_element_3 = tmp_mvar_value_9;
        tmp_assign_source_56 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_assign_source_56, 0, tmp_tuple_element_3 );
        assert( tmp_class_creation_5__bases == NULL );
        tmp_class_creation_5__bases = tmp_assign_source_56;
    }
    {
        PyObject *tmp_assign_source_57;
        {
            PyObject *tmp_set_locals_4;
            tmp_set_locals_4 = PyDict_New();
            locals_urllib3$connection_223 = tmp_set_locals_4;
        }
        tmp_dictset_value = const_str_digest_003800fb824e3437bbbf235acf31301c;
        tmp_res = PyDict_SetItem( locals_urllib3$connection_223, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_8a2d60eac0054a048957f5a0b8b61103_3, codeobj_8a2d60eac0054a048957f5a0b8b61103, module_urllib3$connection, 0 );
        frame_8a2d60eac0054a048957f5a0b8b61103_3 = cache_frame_8a2d60eac0054a048957f5a0b8b61103_3;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_8a2d60eac0054a048957f5a0b8b61103_3 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_8a2d60eac0054a048957f5a0b8b61103_3 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_subscribed_name_3;
            PyObject *tmp_mvar_value_10;
            PyObject *tmp_subscript_name_3;
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_port_by_scheme );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_port_by_scheme );
            }

            if ( tmp_mvar_value_10 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "port_by_scheme" );
                exception_tb = NULL;

                exception_lineno = 224;

                goto frame_exception_exit_3;
            }

            tmp_subscribed_name_3 = tmp_mvar_value_10;
            tmp_subscript_name_3 = const_str_plain_https;
            tmp_dictset_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 224;

                goto frame_exception_exit_3;
            }
            tmp_res = PyDict_SetItem( locals_urllib3$connection_223, const_str_plain_default_port, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 224;

                goto frame_exception_exit_3;
            }
        }
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem( locals_urllib3$connection_223, const_str_plain_ssl_version, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_11;
            tmp_tuple_element_4 = Py_None;
            tmp_defaults_2 = PyTuple_New( 7 );
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_4 );
            tmp_tuple_element_4 = Py_None;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_2, 1, tmp_tuple_element_4 );
            tmp_tuple_element_4 = Py_None;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_2, 2, tmp_tuple_element_4 );
            tmp_tuple_element_4 = Py_None;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_2, 3, tmp_tuple_element_4 );
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_socket );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_socket );
            }

            if ( tmp_mvar_value_11 == NULL )
            {
                Py_DECREF( tmp_defaults_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "socket" );
                exception_tb = NULL;

                exception_lineno = 229;

                goto frame_exception_exit_3;
            }

            tmp_source_name_5 = tmp_mvar_value_11;
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__GLOBAL_DEFAULT_TIMEOUT );
            if ( tmp_tuple_element_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_defaults_2 );

                exception_lineno = 229;

                goto frame_exception_exit_3;
            }
            PyTuple_SET_ITEM( tmp_defaults_2, 4, tmp_tuple_element_4 );
            tmp_tuple_element_4 = Py_None;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_2, 5, tmp_tuple_element_4 );
            tmp_tuple_element_4 = Py_None;
            Py_INCREF( tmp_tuple_element_4 );
            PyTuple_SET_ITEM( tmp_defaults_2, 6, tmp_tuple_element_4 );
            tmp_dictset_value = MAKE_FUNCTION_urllib3$connection$$$function_8___init__( tmp_defaults_2 );



            tmp_res = PyDict_SetItem( locals_urllib3$connection_223, const_str_plain___init__, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 228;

                goto frame_exception_exit_3;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_8a2d60eac0054a048957f5a0b8b61103_3 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;

        frame_exception_exit_3:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_8a2d60eac0054a048957f5a0b8b61103_3 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_8a2d60eac0054a048957f5a0b8b61103_3, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_8a2d60eac0054a048957f5a0b8b61103_3->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_8a2d60eac0054a048957f5a0b8b61103_3, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_8a2d60eac0054a048957f5a0b8b61103_3,
            type_description_2
        );


        // Release cached frame.
        if ( frame_8a2d60eac0054a048957f5a0b8b61103_3 == cache_frame_8a2d60eac0054a048957f5a0b8b61103_3 )
        {
            Py_DECREF( frame_8a2d60eac0054a048957f5a0b8b61103_3 );
        }
        cache_frame_8a2d60eac0054a048957f5a0b8b61103_3 = NULL;

        assertFrameObject( frame_8a2d60eac0054a048957f5a0b8b61103_3 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;

        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_17;
        skip_nested_handling_2:;
        tmp_dictset_value = MAKE_FUNCTION_urllib3$connection$$$function_9_connect(  );



        tmp_res = PyDict_SetItem( locals_urllib3$connection_223, const_str_plain_connect, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_assign_source_57 = locals_urllib3$connection_223;
        Py_INCREF( tmp_assign_source_57 );
        goto try_return_handler_17;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$connection );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_17:;
        Py_DECREF( locals_urllib3$connection_223 );
        locals_urllib3$connection_223 = NULL;
        goto outline_result_5;
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

        Py_DECREF( locals_urllib3$connection_223 );
        locals_urllib3$connection_223 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto outline_exception_2;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$connection );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_2:;
        exception_lineno = 223;
        goto try_except_handler_16;
        outline_result_5:;
        assert( tmp_class_creation_5__class_dict == NULL );
        tmp_class_creation_5__class_dict = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_key_name_9;
        PyObject *tmp_dict_name_9;
        PyObject *tmp_dict_name_10;
        PyObject *tmp_key_name_10;
        tmp_key_name_9 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_5__class_dict );
        tmp_dict_name_9 = tmp_class_creation_5__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_9, tmp_key_name_9 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 223;

            goto try_except_handler_16;
        }
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_5;
        }
        else
        {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT( tmp_class_creation_5__class_dict );
        tmp_dict_name_10 = tmp_class_creation_5__class_dict;
        tmp_key_name_10 = const_str_plain___metaclass__;
        tmp_assign_source_58 = DICT_GET_ITEM( tmp_dict_name_10, tmp_key_name_10 );
        if ( tmp_assign_source_58 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 223;

            goto try_except_handler_16;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_subscribed_name_4;
            PyObject *tmp_subscript_name_4;
            CHECK_OBJECT( tmp_class_creation_5__bases );
            tmp_subscribed_name_4 = tmp_class_creation_5__bases;
            tmp_subscript_name_4 = const_int_0;
            tmp_assign_source_59 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_4, tmp_subscript_name_4, 0 );
            if ( tmp_assign_source_59 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 223;

                goto try_except_handler_16;
            }
            assert( tmp_select_metaclass_5__base == NULL );
            tmp_select_metaclass_5__base = tmp_assign_source_59;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( tmp_select_metaclass_5__base );
            tmp_source_name_6 = tmp_select_metaclass_5__base;
            tmp_assign_source_58 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_6 );
            if ( tmp_assign_source_58 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 223;

                goto try_except_handler_19;
            }
            goto try_return_handler_18;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$connection );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_19:;
        exception_keeper_type_14 = exception_type;
        exception_keeper_value_14 = exception_value;
        exception_keeper_tb_14 = exception_tb;
        exception_keeper_lineno_14 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_2;
            Py_DECREF( exception_keeper_type_14 );
            Py_XDECREF( exception_keeper_value_14 );
            Py_XDECREF( exception_keeper_tb_14 );
            CHECK_OBJECT( tmp_select_metaclass_5__base );
            tmp_type_arg_2 = tmp_select_metaclass_5__base;
            tmp_assign_source_58 = BUILTIN_TYPE1( tmp_type_arg_2 );
            assert( !(tmp_assign_source_58 == NULL) );
            goto try_return_handler_18;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$connection );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_18:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_5__base );
        Py_DECREF( tmp_select_metaclass_5__base );
        tmp_select_metaclass_5__base = NULL;

        goto outline_result_6;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_5__base );
        Py_DECREF( tmp_select_metaclass_5__base );
        tmp_select_metaclass_5__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$connection );
        return MOD_RETURN_VALUE( NULL );
        outline_result_6:;
        condexpr_end_5:;
        assert( tmp_class_creation_5__metaclass == NULL );
        tmp_class_creation_5__metaclass = tmp_assign_source_58;
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_15;
        PyObject *tmp_args_element_name_16;
        PyObject *tmp_args_element_name_17;
        CHECK_OBJECT( tmp_class_creation_5__metaclass );
        tmp_called_name_6 = tmp_class_creation_5__metaclass;
        tmp_args_element_name_15 = const_str_plain_HTTPSConnection;
        CHECK_OBJECT( tmp_class_creation_5__bases );
        tmp_args_element_name_16 = tmp_class_creation_5__bases;
        CHECK_OBJECT( tmp_class_creation_5__class_dict );
        tmp_args_element_name_17 = tmp_class_creation_5__class_dict;
        frame_06097705cf8d915904fdd92f6f7e021f->m_frame.f_lineno = 223;
        {
            PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17 };
            tmp_assign_source_60 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
        }

        if ( tmp_assign_source_60 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 223;

            goto try_except_handler_16;
        }
        assert( tmp_class_creation_5__class == NULL );
        tmp_class_creation_5__class = tmp_assign_source_60;
    }
    goto try_end_11;
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

    Py_XDECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    Py_XDECREF( tmp_class_creation_5__class_dict );
    tmp_class_creation_5__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    {
        PyObject *tmp_assign_source_61;
        CHECK_OBJECT( tmp_class_creation_5__class );
        tmp_assign_source_61 = tmp_class_creation_5__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPSConnection, tmp_assign_source_61 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class );
    Py_DECREF( tmp_class_creation_5__class );
    tmp_class_creation_5__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__bases );
    Py_DECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_dict );
    Py_DECREF( tmp_class_creation_5__class_dict );
    tmp_class_creation_5__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__metaclass );
    Py_DECREF( tmp_class_creation_5__metaclass );
    tmp_class_creation_5__metaclass = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_mvar_value_12;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPSConnection );

        if (unlikely( tmp_mvar_value_12 == NULL ))
        {
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPSConnection );
        }

        if ( tmp_mvar_value_12 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPSConnection" );
            exception_tb = NULL;

            exception_lineno = 263;

            goto try_except_handler_20;
        }

        tmp_tuple_element_5 = tmp_mvar_value_12;
        tmp_assign_source_62 = PyTuple_New( 1 );
        Py_INCREF( tmp_tuple_element_5 );
        PyTuple_SET_ITEM( tmp_assign_source_62, 0, tmp_tuple_element_5 );
        assert( tmp_class_creation_6__bases == NULL );
        tmp_class_creation_6__bases = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        {
            PyObject *tmp_set_locals_5;
            tmp_set_locals_5 = PyDict_New();
            locals_urllib3$connection_263 = tmp_set_locals_5;
        }
        tmp_dictset_value = const_str_digest_003800fb824e3437bbbf235acf31301c;
        tmp_res = PyDict_SetItem( locals_urllib3$connection_263, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_fa24e620292c5ddd664b0f39ae7cf5ea;
        tmp_res = PyDict_SetItem( locals_urllib3$connection_263, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem( locals_urllib3$connection_263, const_str_plain_cert_reqs, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem( locals_urllib3$connection_263, const_str_plain_ca_certs, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem( locals_urllib3$connection_263, const_str_plain_ca_cert_dir, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem( locals_urllib3$connection_263, const_str_plain_ssl_version, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = Py_None;
        tmp_res = PyDict_SetItem( locals_urllib3$connection_263, const_str_plain_assert_fingerprint, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = const_tuple_none_none_none_none_none_none_none_tuple;
            Py_INCREF( tmp_defaults_3 );
            tmp_dictset_value = MAKE_FUNCTION_urllib3$connection$$$function_10_set_cert( tmp_defaults_3 );



            tmp_res = PyDict_SetItem( locals_urllib3$connection_263, const_str_plain_set_cert, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        tmp_dictset_value = MAKE_FUNCTION_urllib3$connection$$$function_11_connect(  );



        tmp_res = PyDict_SetItem( locals_urllib3$connection_263, const_str_plain_connect, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        tmp_assign_source_63 = locals_urllib3$connection_263;
        Py_INCREF( tmp_assign_source_63 );
        goto try_return_handler_21;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$connection );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_21:;
        Py_DECREF( locals_urllib3$connection_263 );
        locals_urllib3$connection_263 = NULL;
        goto outline_result_7;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$connection );
        return MOD_RETURN_VALUE( NULL );
        outline_result_7:;
        assert( tmp_class_creation_6__class_dict == NULL );
        tmp_class_creation_6__class_dict = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_key_name_11;
        PyObject *tmp_dict_name_11;
        PyObject *tmp_dict_name_12;
        PyObject *tmp_key_name_12;
        tmp_key_name_11 = const_str_plain___metaclass__;
        CHECK_OBJECT( tmp_class_creation_6__class_dict );
        tmp_dict_name_11 = tmp_class_creation_6__class_dict;
        tmp_res = PyDict_Contains( tmp_dict_name_11, tmp_key_name_11 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 263;

            goto try_except_handler_20;
        }
        tmp_condition_result_8 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto condexpr_true_6;
        }
        else
        {
            goto condexpr_false_6;
        }
        condexpr_true_6:;
        CHECK_OBJECT( tmp_class_creation_6__class_dict );
        tmp_dict_name_12 = tmp_class_creation_6__class_dict;
        tmp_key_name_12 = const_str_plain___metaclass__;
        tmp_assign_source_64 = DICT_GET_ITEM( tmp_dict_name_12, tmp_key_name_12 );
        if ( tmp_assign_source_64 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 263;

            goto try_except_handler_20;
        }
        goto condexpr_end_6;
        condexpr_false_6:;
        {
            PyObject *tmp_assign_source_65;
            PyObject *tmp_subscribed_name_5;
            PyObject *tmp_subscript_name_5;
            CHECK_OBJECT( tmp_class_creation_6__bases );
            tmp_subscribed_name_5 = tmp_class_creation_6__bases;
            tmp_subscript_name_5 = const_int_0;
            tmp_assign_source_65 = LOOKUP_SUBSCRIPT_CONST( tmp_subscribed_name_5, tmp_subscript_name_5, 0 );
            if ( tmp_assign_source_65 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 263;

                goto try_except_handler_20;
            }
            assert( tmp_select_metaclass_6__base == NULL );
            tmp_select_metaclass_6__base = tmp_assign_source_65;
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_source_name_7;
            CHECK_OBJECT( tmp_select_metaclass_6__base );
            tmp_source_name_7 = tmp_select_metaclass_6__base;
            tmp_assign_source_64 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_7 );
            if ( tmp_assign_source_64 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 263;

                goto try_except_handler_23;
            }
            goto try_return_handler_22;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$connection );
        return MOD_RETURN_VALUE( NULL );
        // Exception handler code:
        try_except_handler_23:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        {
            PyObject *tmp_type_arg_3;
            Py_DECREF( exception_keeper_type_16 );
            Py_XDECREF( exception_keeper_value_16 );
            Py_XDECREF( exception_keeper_tb_16 );
            CHECK_OBJECT( tmp_select_metaclass_6__base );
            tmp_type_arg_3 = tmp_select_metaclass_6__base;
            tmp_assign_source_64 = BUILTIN_TYPE1( tmp_type_arg_3 );
            assert( !(tmp_assign_source_64 == NULL) );
            goto try_return_handler_22;
        }
        // End of try:
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$connection );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_22:;
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_6__base );
        Py_DECREF( tmp_select_metaclass_6__base );
        tmp_select_metaclass_6__base = NULL;

        goto outline_result_8;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_select_metaclass_6__base );
        Py_DECREF( tmp_select_metaclass_6__base );
        tmp_select_metaclass_6__base = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$connection );
        return MOD_RETURN_VALUE( NULL );
        outline_result_8:;
        condexpr_end_6:;
        assert( tmp_class_creation_6__metaclass == NULL );
        tmp_class_creation_6__metaclass = tmp_assign_source_64;
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_name_7;
        PyObject *tmp_args_element_name_18;
        PyObject *tmp_args_element_name_19;
        PyObject *tmp_args_element_name_20;
        CHECK_OBJECT( tmp_class_creation_6__metaclass );
        tmp_called_name_7 = tmp_class_creation_6__metaclass;
        tmp_args_element_name_18 = const_str_plain_VerifiedHTTPSConnection;
        CHECK_OBJECT( tmp_class_creation_6__bases );
        tmp_args_element_name_19 = tmp_class_creation_6__bases;
        CHECK_OBJECT( tmp_class_creation_6__class_dict );
        tmp_args_element_name_20 = tmp_class_creation_6__class_dict;
        frame_06097705cf8d915904fdd92f6f7e021f->m_frame.f_lineno = 263;
        {
            PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20 };
            tmp_assign_source_66 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
        }

        if ( tmp_assign_source_66 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 263;

            goto try_except_handler_20;
        }
        assert( tmp_class_creation_6__class == NULL );
        tmp_class_creation_6__class = tmp_assign_source_66;
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    Py_XDECREF( tmp_class_creation_6__class_dict );
    tmp_class_creation_6__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;
    {
        PyObject *tmp_assign_source_67;
        CHECK_OBJECT( tmp_class_creation_6__class );
        tmp_assign_source_67 = tmp_class_creation_6__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_VerifiedHTTPSConnection, tmp_assign_source_67 );
    }
    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class );
    Py_DECREF( tmp_class_creation_6__class );
    tmp_class_creation_6__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__bases );
    Py_DECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class_dict );
    Py_DECREF( tmp_class_creation_6__class_dict );
    tmp_class_creation_6__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__metaclass );
    Py_DECREF( tmp_class_creation_6__metaclass );
    tmp_class_creation_6__metaclass = NULL;

    {
        PyObject *tmp_assign_source_68;
        tmp_assign_source_68 = MAKE_FUNCTION_urllib3$connection$$$function_12__match_hostname(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain__match_hostname, tmp_assign_source_68 );
    }
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_mvar_value_13;
        int tmp_truth_name_1;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_ssl );

        if (unlikely( tmp_mvar_value_13 == NULL ))
        {
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
        }

        if ( tmp_mvar_value_13 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ssl" );
            exception_tb = NULL;

            exception_lineno = 386;

            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_mvar_value_13 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 386;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_assign_source_69;
            PyObject *tmp_mvar_value_14;
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPSConnection );

            if (unlikely( tmp_mvar_value_14 == NULL ))
            {
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HTTPSConnection );
            }

            if ( tmp_mvar_value_14 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "HTTPSConnection" );
                exception_tb = NULL;

                exception_lineno = 388;

                goto frame_exception_exit_1;
            }

            tmp_assign_source_69 = tmp_mvar_value_14;
            UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_UnverifiedHTTPSConnection, tmp_assign_source_69 );
        }
        {
            PyObject *tmp_assign_source_70;
            PyObject *tmp_mvar_value_15;
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_VerifiedHTTPSConnection );

            if (unlikely( tmp_mvar_value_15 == NULL ))
            {
                tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_VerifiedHTTPSConnection );
            }

            if ( tmp_mvar_value_15 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "VerifiedHTTPSConnection" );
                exception_tb = NULL;

                exception_lineno = 389;

                goto frame_exception_exit_1;
            }

            tmp_assign_source_70 = tmp_mvar_value_15;
            UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPSConnection, tmp_assign_source_70 );
        }
        goto branch_end_3;
        branch_no_3:;
        {
            PyObject *tmp_assign_source_71;
            PyObject *tmp_mvar_value_16;
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_DummyConnection );

            if (unlikely( tmp_mvar_value_16 == NULL ))
            {
                tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DummyConnection );
            }

            if ( tmp_mvar_value_16 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "DummyConnection" );
                exception_tb = NULL;

                exception_lineno = 391;

                goto frame_exception_exit_1;
            }

            tmp_assign_source_71 = tmp_mvar_value_16;
            UPDATE_STRING_DICT0( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain_HTTPSConnection, tmp_assign_source_71 );
        }
        branch_end_3:;
    }

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_06097705cf8d915904fdd92f6f7e021f );
#endif
    popFrameStack();

    assertFrameObject( frame_06097705cf8d915904fdd92f6f7e021f );

    goto frame_no_exception_3;

    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_06097705cf8d915904fdd92f6f7e021f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_06097705cf8d915904fdd92f6f7e021f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_06097705cf8d915904fdd92f6f7e021f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_06097705cf8d915904fdd92f6f7e021f, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_3:;

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_urllib3$connection, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_urllib3$connection );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
