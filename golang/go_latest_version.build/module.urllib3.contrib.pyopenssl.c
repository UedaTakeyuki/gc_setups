/* Generated code for Python module 'urllib3.contrib.pyopenssl'
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

/* The "_module_urllib3$contrib$pyopenssl" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_urllib3$contrib$pyopenssl;
PyDictObject *moduledict_urllib3$contrib$pyopenssl;

/* The declarations of module constants used, if any. */
extern PyObject *const_str_digest_7822abce90b4f23aa7a437cf95bbfec5;
extern PyObject *const_tuple_none_none_tuple;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_update;
static PyObject *const_str_plain_orig_util_HAS_SNI;
extern PyObject *const_tuple_type_object_tuple;
static PyObject *const_str_plain_bufsize;
static PyObject *const_str_digest_20c12b8a448bbfc5cd8c17b869421e3c;
extern PyObject *const_str_plain_set_cipher_list;
extern PyObject *const_tuple_str_plain_util_tuple;
static PyObject *const_str_plain__options;
extern PyObject *const_str_plain_type;
static PyObject *const_tuple_9829b42a413956e60fb7135a6c97d639_tuple;
static PyObject *const_tuple_unicode_digest_f16ebd80f485bce26a5c8a0fab91362b_unicode_dot_tuple;
static PyObject *const_str_digest_3ff79c08d61077339220a6b991e28f93;
extern PyObject *const_str_plain_get_values_for_type;
extern PyObject *const_str_plain_decode;
extern PyObject *const_str_plain_to_cryptography;
extern PyObject *const_str_plain_SSLv23_METHOD;
extern PyObject *const_str_plain_startswith;
extern PyObject *const_str_digest_76d751ede7bd087f9346e5a615d3c397;
extern PyObject *const_str_plain_verify_mode;
static PyObject *const_tuple_b07c4382fc3b698eab7bb6e79a5f230f_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_binary_form_str_plain_x509_tuple;
static PyObject *const_str_plain__openssl_versions;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_digest_36dfc40fd76fef32a3245e24bfe74ea9;
extern PyObject *const_str_plain__verify_callback;
static PyObject *const_str_digest_f677804d4d3769d5dce63fb421e9aca2;
extern PyObject *const_str_plain_None;
static PyObject *const_tuple_str_plain_backport_makefile_tuple;
static PyObject *const_tuple_str_digest_7e30f7b167f6016bf2ebb297c1892f81_tuple;
static PyObject *const_str_digest_22ce283067899ce16a8ff927ff2a141c;
extern PyObject *const_str_plain_backend;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_plain__ctx;
extern PyObject *const_str_plain_TLSv1_METHOD;
extern PyObject *const_str_plain_object;
static PyObject *const_str_plain__closed;
extern PyObject *const_str_plain_encode;
extern PyObject *const_str_plain_ciphers;
extern PyObject *const_str_plain_keyfile;
extern PyObject *const_str_plain_HAS_SNI;
extern PyObject *const_str_plain_set_default_verify_paths;
extern PyObject *const_str_plain_subject;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_str_plain_data;
extern PyObject *const_str_plain_TLSv1_2_METHOD;
extern PyObject *const_str_plain_do_handshake;
static PyObject *const_tuple_str_digest_22ce283067899ce16a8ff927ff2a141c_tuple;
static PyObject *const_tuple_str_plain_X509_tuple;
static PyObject *const_str_plain__fileobject;
extern PyObject *const_str_plain_ext;
static PyObject *const_str_digest_9b140d54e682de757186c632bf3beb69;
static PyObject *const_str_digest_be78399d62208a7b25aea812a1645ac7;
extern PyObject *const_str_plain__makefile_refs;
static PyObject *const_str_digest_2ff175dae94b767efe83d915c1b97f5f;
extern PyObject *const_tuple_str_plain_self_str_plain_value_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_ciphers_tuple;
extern PyObject *const_str_plain_IS_PYOPENSSL;
extern PyObject *const_str_plain_close;
extern PyObject *const_str_plain_connection;
extern PyObject *const_tuple_int_pos_3_int_0_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_mode_str_plain_bufsize_tuple;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_socket;
static PyObject *const_str_plain_cnx;
extern PyObject *const_str_plain_prefix;
static PyObject *const_str_digest_b0cc3d29be4aca6ee1b850699a83d626;
extern PyObject *const_str_plain_value;
static PyObject *const_str_plain__send_until_done;
extern PyObject *const_str_plain_SSLv3_METHOD;
extern PyObject *const_str_plain_backport_makefile;
static PyObject *const_str_plain__reuse;
static PyObject *const_str_plain_SSL_WRITE_BLOCKSIZE;
extern PyObject *const_str_plain_WantWriteError;
extern PyObject *const_str_plain_makefile;
static PyObject *const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_str_plain_e_tuple;
extern PyObject *const_str_plain_DuplicateExtension;
static PyObject *const_tuple_432e5ac716e1cbef0fe2dd1d2bb9851c_tuple;
extern PyObject *const_str_plain_set_verify;
extern PyObject *const_str_plain_DNSName;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_getpeercert;
extern PyObject *const_str_plain_settimeout;
extern PyObject *const_str_plain_PROTOCOL_SSLv23;
extern PyObject *const_str_plain_ssl_;
static PyObject *const_tuple_str_plain_timeout_str_plain_error_tuple;
static PyObject *const_str_digest_071e6215d1e4e670779a10c8173678ae;
static PyObject *const_str_digest_ea524135603414934edfdf9a140120da;
extern PyObject *const_str_plain_idna;
extern PyObject *const_str_plain_capath;
extern PyObject *const_tuple_str_plain_self_tuple;
static PyObject *const_str_plain_prompt_twice;
extern PyObject *const_str_plain_dump_certificate;
extern PyObject *const_str_plain_ascii;
extern PyObject *const_str_plain_map;
static PyObject *const_tuple_e8b2873230843a4bb1a2136fdf114bf7_tuple;
extern PyObject *const_str_digest_60a1bac43ab19e7498cc2fb7d34f5b86;
extern PyObject *const_str_plain_recv;
extern PyObject *const_str_plain_return_code;
extern PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_name_tuple;
extern PyObject *const_str_plain_error;
static PyObject *const_str_plain_err_no;
extern PyObject *const_str_plain_shutdown;
extern PyObject *const_str_plain_Context;
extern PyObject *const_str_plain_WantReadError;
extern PyObject *const_tuple_str_plain__Certificate_tuple;
extern PyObject *const_str_plain_options;
extern PyObject *const_str_plain_get_peer_certificate;
extern PyObject *const_str_plain_IPAddress;
static PyObject *const_str_plain_peer_cert;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_cadata;
extern PyObject *const_str_plain_kwargs;
extern PyObject *const_str_plain_commonName;
extern PyObject *const_str_plain_SSLError;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_RECEIVED_SHUTDOWN;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_send;
extern PyObject *const_str_plain___module__;
extern PyObject *const_tuple_int_neg_1_tuple;
extern PyObject *const_str_plain_binary_form;
static PyObject *const_str_plain_do_handshake_on_connect;
extern PyObject *const_tuple_true_tuple;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_tuple_str_plain__fileobject_tuple;
extern PyObject *const_str_plain_certfile;
static PyObject *const_str_digest_f5748acc7624a8d3f9bd48b7312e95e1;
extern PyObject *const_str_plain_CERT_NONE;
static PyObject *const_tuple_a5f32eb6eb0599095716173348d96f8b_tuple;
extern PyObject *const_str_plain_subjectAltName;
extern PyObject *const_str_plain_userdata;
static PyObject *const_str_plain_orig_util_SSLContext;
extern PyObject *const_str_plain_warning;
static PyObject *const_str_plain_suppress_ragged_eofs;
static PyObject *const_tuple_str_plain_name_str_plain_prefix_str_plain_idna_tuple;
extern PyObject *const_str_digest_fa91b370bf4aa8601b20ad022c04c7f5;
extern PyObject *const_str_plain_cafile;
extern PyObject *const_str_plain_protocol;
extern PyObject *const_str_plain_items;
extern PyObject *const_str_plain_TLSv1_1_METHOD;
extern PyObject *const_str_plain_extensions;
extern PyObject *const_str_plain_setter;
extern PyObject *const_str_plain_DNS;
static PyObject *const_str_digest_bb5bc8c3c3606f20b540789b2cae4e87;
static PyObject *const_str_plain__validate_dependencies_met;
extern PyObject *const_str_digest_c075052d723d6707083e869a0e3659bb;
extern PyObject *const_str_plain_ssl;
extern PyObject *const_str_plain__Certificate;
static PyObject *const_tuple_str_plain_self_str_plain_data_str_plain_e_tuple;
extern PyObject *const_tuple_int_neg_1_str_digest_fa91b370bf4aa8601b20ad022c04c7f5_tuple;
extern PyObject *const_str_plain_crypto;
static PyObject *const_str_digest_da6b5f185ded68c9e526279026e68fbc;
extern PyObject *const_str_plain_io;
extern PyObject *const_str_plain_property;
extern PyObject *const_str_digest_ee742e011576d32d1c182b86832e4555;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_use_privatekey_file;
extern PyObject *const_str_angle_genexpr;
extern PyObject *const_str_plain_recv_into;
extern PyObject *const_str_plain_ZeroReturnError;
static PyObject *const_tuple_2fb08e1c17c01c11662f4f13f1e1495a_tuple;
extern PyObject *const_str_plain_VERIFY_PEER;
extern PyObject *const_tuple_str_plain_x509_tuple;
static PyObject *const_tuple_9adbeddbb33e8f695757bd0d436ea91c_tuple;
static PyObject *const_str_plain_CERT_OPTIONAL;
static PyObject *const_tuple_str_plain_Extensions_tuple;
extern PyObject *const_str_plain_set_ciphers;
extern PyObject *const_str_plain_getLogger;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_get_verify_mode;
extern PyObject *const_str_plain_ExtensionNotFound;
static PyObject *const_str_plain_err_depth;
extern PyObject *const_str_plain_extend;
extern PyObject *const_str_plain_VERIFY_NONE;
extern PyObject *const_str_plain_set_tlsext_host_name;
extern PyObject *const_str_plain_FILETYPE_ASN1;
static PyObject *const_unicode_digest_f16ebd80f485bce26a5c8a0fab91362b;
static PyObject *const_tuple_str_plain_X509_str_plain_x509_str_plain_Extensions_tuple;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_inject_into_urllib3;
static PyObject *const_str_plain_sent;
static PyObject *const_str_plain__decref_socketios;
static PyObject *const_str_plain__drop;
static PyObject *const_str_plain_extract_from_urllib3;
static PyObject *const_tuple_629e317cdb0a0a5b930602624a4df919_tuple;
extern PyObject *const_str_plain_load_cert_chain;
static PyObject *const_str_plain_max_length;
extern PyObject *const_str_plain_wait_for_read;
extern PyObject *const_str_plain_server_side;
extern PyObject *const_str_plain___debug__;
extern PyObject *const_tuple_b0c00933e83a0151953f3a00c2178204_tuple;
extern PyObject *const_str_plain_e;
static PyObject *const_str_plain_PROTOCOL_SSLv3;
extern PyObject *const_str_plain_wait_for_write;
extern PyObject *const_str_plain_SSLContext;
extern PyObject *const_str_plain_set_options;
static PyObject *const_tuple_str_digest_9b140d54e682de757186c632bf3beb69_tuple;
extern PyObject *const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple;
extern PyObject *const_tuple_str_plain_self_str_plain_protocol_tuple;
extern PyObject *const_str_plain_CERT_REQUIRED;
static PyObject *const_str_plain__dnsname_to_stdlib;
extern PyObject *const_str_plain_log;
extern PyObject *const_tuple_str_plain_ascii_tuple;
extern PyObject *const_str_plain_Extensions;
extern PyObject *const_tuple_str_plain_self_str_plain_timeout_tuple;
extern PyObject *const_str_plain_Error;
extern PyObject *const_str_plain_password;
static PyObject *const_str_plain_PROTOCOL_TLSv1_2;
static PyObject *const_str_plain_PROTOCOL_TLSv1_1;
extern PyObject *const_str_digest_2b6a6c0099f1f1dd77d2725acd0722df;
static PyObject *const_str_plain_PyOpenSSLContext;
static PyObject *const_list_str_plain_inject_into_urllib3_str_plain_extract_from_urllib3_list;
static PyObject *const_str_plain_WrappedSocket;
extern PyObject *const_str_plain_text_type;
extern PyObject *const_str_plain_OpenSSL;
extern PyObject *const_str_plain_logging;
extern PyObject *const_str_plain_core;
extern PyObject *const_str_plain_x509;
extern PyObject *const_str_plain_names;
extern PyObject *const_str_plain_cryptography;
extern PyObject *const_str_angle_lambda;
static PyObject *const_str_digest_d22ac54ae5c0616296ff857ea08c49cb;
static PyObject *const_str_plain_openssl_backend;
extern PyObject *const_str_plain_util;
extern PyObject *const_str_plain_get_shutdown;
static PyObject *const_str_plain_idna_encode;
static PyObject *const_tuple_db2402bbc0165418bbec6436b14cef3c_tuple;
extern PyObject *const_str_plain_False;
extern PyObject *const_str_plain_IDNAError;
extern PyObject *const_str_plain_set_passwd_cb;
extern PyObject *const_tuple_str_plain_BytesIO_tuple;
static PyObject *const_str_plain_PROTOCOL_TLSv1;
extern PyObject *const_str_plain_SocketError;
static PyObject *const_int_pos_16384;
extern PyObject *const_str_plain_cert;
extern PyObject *const_str_plain_SSL;
extern PyObject *const_str_plain_total_sent;
static PyObject *const_tuple_str_plain_name_str_plain_idna_encode_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_sock;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_sendall;
extern PyObject *const_str_plain_six;
extern PyObject *const_str_plain_UnsupportedGeneralNameType;
extern PyObject *const_tuple_type_Exception_tuple;
extern PyObject *const_str_plain_get_extension_for_class;
extern PyObject *const_str_plain_CN;
extern PyObject *const_str_plain_use_certificate_chain_file;
extern PyObject *const_str_plain_mode;
static PyObject *const_dict_e24f4d9d6e3eb6f736872abe66cd35c1;
static PyObject *const_str_plain_gettimeout;
extern PyObject *const_str_plain_check_hostname;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_str_plain_SysCallError;
extern PyObject *const_str_plain_Connection;
static PyObject *const_str_digest_2f7e5e6bd20de78d1a826b224bb68950;
extern PyObject *const_str_plain_get_subject;
extern PyObject *const_str_digest_6d237a1253b74549ee18fb0e488e3cf9;
extern PyObject *const_tuple_str_plain_backend_tuple;
static PyObject *const_str_plain_get_subj_alt_name;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_set_connect_state;
static PyObject *const_tuple_false_true_true_none_tuple;
static PyObject *const_str_plain__openssl_to_stdlib_verify;
static PyObject *const_str_plain__stdlib_to_openssl_verify;
extern PyObject *const_str_plain_SubjectAlternativeName;
static PyObject *const_tuple_str_plain_UnsupportedExtension_tuple;
extern PyObject *const_str_plain__x509;
extern PyObject *const_str_plain_fileno;
extern PyObject *const_str_plain_BytesIO;
extern PyObject *const_str_plain_VERIFY_FAIL_IF_NO_PEER_CERT;
extern PyObject *const_str_plain_server_hostname;
extern PyObject *const_str_plain_timeout;
extern PyObject *const_tuple_false_tuple;
static PyObject *const_str_digest_572541d49912921fc3f520d5fbbbace7;
static PyObject *const_str_plain_UnsupportedExtension;
extern PyObject *const_unicode_dot;
extern PyObject *const_str_plain_load_verify_locations;
extern PyObject *const_str_plain_wrap_socket;
extern PyObject *const_str_plain_X509;
static PyObject *const_str_digest_7e30f7b167f6016bf2ebb297c1892f81;
static PyObject *const_str_digest_c2ca9ee709c1d2285dbebbfa7f97f083;
static PyObject *const_str_digest_7ac562d65cde2e151e56b218341d4cdd;
static PyObject *module_filename_obj;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants( void )
{
    const_str_plain_orig_util_HAS_SNI = UNSTREAM_STRING( &constant_bin[ 1063018 ], 17, 1 );
    const_str_plain_bufsize = UNSTREAM_STRING( &constant_bin[ 1063035 ], 7, 1 );
    const_str_digest_20c12b8a448bbfc5cd8c17b869421e3c = UNSTREAM_STRING( &constant_bin[ 1063042 ], 123, 0 );
    const_str_plain__options = UNSTREAM_STRING( &constant_bin[ 28319 ], 8, 1 );
    const_tuple_9829b42a413956e60fb7135a6c97d639_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_9829b42a413956e60fb7135a6c97d639_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_9829b42a413956e60fb7135a6c97d639_tuple, 1, const_str_plain_sock ); Py_INCREF( const_str_plain_sock );
    PyTuple_SET_ITEM( const_tuple_9829b42a413956e60fb7135a6c97d639_tuple, 2, const_str_plain_server_side ); Py_INCREF( const_str_plain_server_side );
    const_str_plain_do_handshake_on_connect = UNSTREAM_STRING( &constant_bin[ 1063165 ], 23, 1 );
    PyTuple_SET_ITEM( const_tuple_9829b42a413956e60fb7135a6c97d639_tuple, 3, const_str_plain_do_handshake_on_connect ); Py_INCREF( const_str_plain_do_handshake_on_connect );
    const_str_plain_suppress_ragged_eofs = UNSTREAM_STRING( &constant_bin[ 1063188 ], 20, 1 );
    PyTuple_SET_ITEM( const_tuple_9829b42a413956e60fb7135a6c97d639_tuple, 4, const_str_plain_suppress_ragged_eofs ); Py_INCREF( const_str_plain_suppress_ragged_eofs );
    PyTuple_SET_ITEM( const_tuple_9829b42a413956e60fb7135a6c97d639_tuple, 5, const_str_plain_server_hostname ); Py_INCREF( const_str_plain_server_hostname );
    PyTuple_SET_ITEM( const_tuple_9829b42a413956e60fb7135a6c97d639_tuple, 6, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_str_plain_cnx = UNSTREAM_STRING( &constant_bin[ 1063208 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_9829b42a413956e60fb7135a6c97d639_tuple, 7, const_str_plain_cnx ); Py_INCREF( const_str_plain_cnx );
    const_tuple_unicode_digest_f16ebd80f485bce26a5c8a0fab91362b_unicode_dot_tuple = PyTuple_New( 2 );
    const_unicode_digest_f16ebd80f485bce26a5c8a0fab91362b = UNSTREAM_UNICODE( &constant_bin[ 21856 ], 2 );
    PyTuple_SET_ITEM( const_tuple_unicode_digest_f16ebd80f485bce26a5c8a0fab91362b_unicode_dot_tuple, 0, const_unicode_digest_f16ebd80f485bce26a5c8a0fab91362b ); Py_INCREF( const_unicode_digest_f16ebd80f485bce26a5c8a0fab91362b );
    PyTuple_SET_ITEM( const_tuple_unicode_digest_f16ebd80f485bce26a5c8a0fab91362b_unicode_dot_tuple, 1, const_unicode_dot ); Py_INCREF( const_unicode_dot );
    const_str_digest_3ff79c08d61077339220a6b991e28f93 = UNSTREAM_STRING( &constant_bin[ 1063211 ], 83, 0 );
    const_tuple_b07c4382fc3b698eab7bb6e79a5f230f_tuple = PyTuple_New( 4 );
    const_str_plain_max_length = UNSTREAM_STRING( &constant_bin[ 1063294 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_b07c4382fc3b698eab7bb6e79a5f230f_tuple, 0, const_str_plain_max_length ); Py_INCREF( const_str_plain_max_length );
    const_str_plain_prompt_twice = UNSTREAM_STRING( &constant_bin[ 1063304 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_b07c4382fc3b698eab7bb6e79a5f230f_tuple, 1, const_str_plain_prompt_twice ); Py_INCREF( const_str_plain_prompt_twice );
    PyTuple_SET_ITEM( const_tuple_b07c4382fc3b698eab7bb6e79a5f230f_tuple, 2, const_str_plain_userdata ); Py_INCREF( const_str_plain_userdata );
    PyTuple_SET_ITEM( const_tuple_b07c4382fc3b698eab7bb6e79a5f230f_tuple, 3, const_str_plain_password ); Py_INCREF( const_str_plain_password );
    const_tuple_str_plain_self_str_plain_binary_form_str_plain_x509_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_binary_form_str_plain_x509_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_binary_form_str_plain_x509_tuple, 1, const_str_plain_binary_form ); Py_INCREF( const_str_plain_binary_form );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_binary_form_str_plain_x509_tuple, 2, const_str_plain_x509 ); Py_INCREF( const_str_plain_x509 );
    const_str_plain__openssl_versions = UNSTREAM_STRING( &constant_bin[ 1063316 ], 17, 1 );
    const_str_digest_f677804d4d3769d5dce63fb421e9aca2 = UNSTREAM_STRING( &constant_bin[ 1063333 ], 61, 0 );
    const_tuple_str_plain_backport_makefile_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_backport_makefile_tuple, 0, const_str_plain_backport_makefile ); Py_INCREF( const_str_plain_backport_makefile );
    const_tuple_str_digest_7e30f7b167f6016bf2ebb297c1892f81_tuple = PyTuple_New( 1 );
    const_str_digest_7e30f7b167f6016bf2ebb297c1892f81 = UNSTREAM_STRING( &constant_bin[ 1063394 ], 28, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_7e30f7b167f6016bf2ebb297c1892f81_tuple, 0, const_str_digest_7e30f7b167f6016bf2ebb297c1892f81 ); Py_INCREF( const_str_digest_7e30f7b167f6016bf2ebb297c1892f81 );
    const_str_digest_22ce283067899ce16a8ff927ff2a141c = UNSTREAM_STRING( &constant_bin[ 1063422 ], 16, 0 );
    const_str_plain__closed = UNSTREAM_STRING( &constant_bin[ 191811 ], 7, 1 );
    const_tuple_str_digest_22ce283067899ce16a8ff927ff2a141c_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_22ce283067899ce16a8ff927ff2a141c_tuple, 0, const_str_digest_22ce283067899ce16a8ff927ff2a141c ); Py_INCREF( const_str_digest_22ce283067899ce16a8ff927ff2a141c );
    const_tuple_str_plain_X509_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_X509_tuple, 0, const_str_plain_X509 ); Py_INCREF( const_str_plain_X509 );
    const_str_plain__fileobject = UNSTREAM_STRING( &constant_bin[ 1063438 ], 11, 1 );
    const_str_digest_9b140d54e682de757186c632bf3beb69 = UNSTREAM_STRING( &constant_bin[ 1063449 ], 25, 0 );
    const_str_digest_be78399d62208a7b25aea812a1645ac7 = UNSTREAM_STRING( &constant_bin[ 1063474 ], 167, 0 );
    const_str_digest_2ff175dae94b767efe83d915c1b97f5f = UNSTREAM_STRING( &constant_bin[ 1063641 ], 17, 0 );
    const_tuple_str_plain_self_str_plain_ciphers_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_ciphers_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_ciphers_tuple, 1, const_str_plain_ciphers ); Py_INCREF( const_str_plain_ciphers );
    const_tuple_str_plain_self_str_plain_mode_str_plain_bufsize_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_mode_str_plain_bufsize_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_mode_str_plain_bufsize_tuple, 1, const_str_plain_mode ); Py_INCREF( const_str_plain_mode );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_mode_str_plain_bufsize_tuple, 2, const_str_plain_bufsize ); Py_INCREF( const_str_plain_bufsize );
    const_str_digest_b0cc3d29be4aca6ee1b850699a83d626 = UNSTREAM_STRING( &constant_bin[ 1063658 ], 549, 0 );
    const_str_plain__send_until_done = UNSTREAM_STRING( &constant_bin[ 1064207 ], 16, 1 );
    const_str_plain__reuse = UNSTREAM_STRING( &constant_bin[ 1063578 ], 6, 1 );
    const_str_plain_SSL_WRITE_BLOCKSIZE = UNSTREAM_STRING( &constant_bin[ 1064223 ], 19, 1 );
    const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_str_plain_e_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_str_plain_e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_str_plain_e_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_str_plain_e_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_str_plain_e_tuple, 3, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_tuple_432e5ac716e1cbef0fe2dd1d2bb9851c_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_432e5ac716e1cbef0fe2dd1d2bb9851c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_432e5ac716e1cbef0fe2dd1d2bb9851c_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_432e5ac716e1cbef0fe2dd1d2bb9851c_tuple, 2, const_str_plain_kwargs ); Py_INCREF( const_str_plain_kwargs );
    PyTuple_SET_ITEM( const_tuple_432e5ac716e1cbef0fe2dd1d2bb9851c_tuple, 3, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    PyTuple_SET_ITEM( const_tuple_432e5ac716e1cbef0fe2dd1d2bb9851c_tuple, 4, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    const_tuple_str_plain_timeout_str_plain_error_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_timeout_str_plain_error_tuple, 0, const_str_plain_timeout ); Py_INCREF( const_str_plain_timeout );
    PyTuple_SET_ITEM( const_tuple_str_plain_timeout_str_plain_error_tuple, 1, const_str_plain_error ); Py_INCREF( const_str_plain_error );
    const_str_digest_071e6215d1e4e670779a10c8173678ae = UNSTREAM_STRING( &constant_bin[ 1064242 ], 210, 0 );
    const_str_digest_ea524135603414934edfdf9a140120da = UNSTREAM_STRING( &constant_bin[ 1064452 ], 85, 0 );
    const_tuple_e8b2873230843a4bb1a2136fdf114bf7_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_e8b2873230843a4bb1a2136fdf114bf7_tuple, 0, const_str_plain_cnx ); Py_INCREF( const_str_plain_cnx );
    PyTuple_SET_ITEM( const_tuple_e8b2873230843a4bb1a2136fdf114bf7_tuple, 1, const_str_plain_x509 ); Py_INCREF( const_str_plain_x509 );
    const_str_plain_err_no = UNSTREAM_STRING( &constant_bin[ 1064537 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_e8b2873230843a4bb1a2136fdf114bf7_tuple, 2, const_str_plain_err_no ); Py_INCREF( const_str_plain_err_no );
    const_str_plain_err_depth = UNSTREAM_STRING( &constant_bin[ 1064543 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_e8b2873230843a4bb1a2136fdf114bf7_tuple, 3, const_str_plain_err_depth ); Py_INCREF( const_str_plain_err_depth );
    PyTuple_SET_ITEM( const_tuple_e8b2873230843a4bb1a2136fdf114bf7_tuple, 4, const_str_plain_return_code ); Py_INCREF( const_str_plain_return_code );
    const_str_plain_peer_cert = UNSTREAM_STRING( &constant_bin[ 26469 ], 9, 1 );
    const_str_plain_cadata = UNSTREAM_STRING( &constant_bin[ 1064552 ], 6, 1 );
    const_tuple_str_plain__fileobject_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__fileobject_tuple, 0, const_str_plain__fileobject ); Py_INCREF( const_str_plain__fileobject );
    const_str_digest_f5748acc7624a8d3f9bd48b7312e95e1 = UNSTREAM_STRING( &constant_bin[ 1064558 ], 27, 0 );
    const_tuple_a5f32eb6eb0599095716173348d96f8b_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_a5f32eb6eb0599095716173348d96f8b_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_a5f32eb6eb0599095716173348d96f8b_tuple, 1, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_a5f32eb6eb0599095716173348d96f8b_tuple, 2, const_str_plain_total_sent ); Py_INCREF( const_str_plain_total_sent );
    const_str_plain_sent = UNSTREAM_STRING( &constant_bin[ 2789 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_a5f32eb6eb0599095716173348d96f8b_tuple, 3, const_str_plain_sent ); Py_INCREF( const_str_plain_sent );
    const_str_plain_orig_util_SSLContext = UNSTREAM_STRING( &constant_bin[ 1064585 ], 20, 1 );
    const_tuple_str_plain_name_str_plain_prefix_str_plain_idna_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_prefix_str_plain_idna_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_prefix_str_plain_idna_tuple, 1, const_str_plain_prefix ); Py_INCREF( const_str_plain_prefix );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_prefix_str_plain_idna_tuple, 2, const_str_plain_idna ); Py_INCREF( const_str_plain_idna );
    const_str_digest_bb5bc8c3c3606f20b540789b2cae4e87 = UNSTREAM_STRING( &constant_bin[ 1064605 ], 173, 0 );
    const_str_plain__validate_dependencies_met = UNSTREAM_STRING( &constant_bin[ 1064778 ], 26, 1 );
    const_tuple_str_plain_self_str_plain_data_str_plain_e_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_data_str_plain_e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_data_str_plain_e_tuple, 1, const_str_plain_data ); Py_INCREF( const_str_plain_data );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_data_str_plain_e_tuple, 2, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_str_digest_da6b5f185ded68c9e526279026e68fbc = UNSTREAM_STRING( &constant_bin[ 1064804 ], 194, 0 );
    const_tuple_2fb08e1c17c01c11662f4f13f1e1495a_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_2fb08e1c17c01c11662f4f13f1e1495a_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_2fb08e1c17c01c11662f4f13f1e1495a_tuple, 1, const_str_plain_cafile ); Py_INCREF( const_str_plain_cafile );
    PyTuple_SET_ITEM( const_tuple_2fb08e1c17c01c11662f4f13f1e1495a_tuple, 2, const_str_plain_capath ); Py_INCREF( const_str_plain_capath );
    PyTuple_SET_ITEM( const_tuple_2fb08e1c17c01c11662f4f13f1e1495a_tuple, 3, const_str_plain_cadata ); Py_INCREF( const_str_plain_cadata );
    const_tuple_9adbeddbb33e8f695757bd0d436ea91c_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_9adbeddbb33e8f695757bd0d436ea91c_tuple, 0, const_str_plain_peer_cert ); Py_INCREF( const_str_plain_peer_cert );
    PyTuple_SET_ITEM( const_tuple_9adbeddbb33e8f695757bd0d436ea91c_tuple, 1, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    PyTuple_SET_ITEM( const_tuple_9adbeddbb33e8f695757bd0d436ea91c_tuple, 2, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_9adbeddbb33e8f695757bd0d436ea91c_tuple, 3, const_str_plain_ext ); Py_INCREF( const_str_plain_ext );
    PyTuple_SET_ITEM( const_tuple_9adbeddbb33e8f695757bd0d436ea91c_tuple, 4, const_str_plain_cert ); Py_INCREF( const_str_plain_cert );
    PyTuple_SET_ITEM( const_tuple_9adbeddbb33e8f695757bd0d436ea91c_tuple, 5, const_str_plain_names ); Py_INCREF( const_str_plain_names );
    const_str_plain_CERT_OPTIONAL = UNSTREAM_STRING( &constant_bin[ 1064998 ], 13, 1 );
    const_tuple_str_plain_Extensions_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Extensions_tuple, 0, const_str_plain_Extensions ); Py_INCREF( const_str_plain_Extensions );
    const_tuple_str_plain_X509_str_plain_x509_str_plain_Extensions_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_X509_str_plain_x509_str_plain_Extensions_tuple, 0, const_str_plain_X509 ); Py_INCREF( const_str_plain_X509 );
    PyTuple_SET_ITEM( const_tuple_str_plain_X509_str_plain_x509_str_plain_Extensions_tuple, 1, const_str_plain_x509 ); Py_INCREF( const_str_plain_x509 );
    PyTuple_SET_ITEM( const_tuple_str_plain_X509_str_plain_x509_str_plain_Extensions_tuple, 2, const_str_plain_Extensions ); Py_INCREF( const_str_plain_Extensions );
    const_str_plain__decref_socketios = UNSTREAM_STRING( &constant_bin[ 1065011 ], 17, 1 );
    const_str_plain__drop = UNSTREAM_STRING( &constant_bin[ 1063566 ], 5, 1 );
    const_str_plain_extract_from_urllib3 = UNSTREAM_STRING( &constant_bin[ 1065028 ], 20, 1 );
    const_tuple_629e317cdb0a0a5b930602624a4df919_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_629e317cdb0a0a5b930602624a4df919_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_629e317cdb0a0a5b930602624a4df919_tuple, 1, const_str_plain_connection ); Py_INCREF( const_str_plain_connection );
    PyTuple_SET_ITEM( const_tuple_629e317cdb0a0a5b930602624a4df919_tuple, 2, const_str_plain_socket ); Py_INCREF( const_str_plain_socket );
    PyTuple_SET_ITEM( const_tuple_629e317cdb0a0a5b930602624a4df919_tuple, 3, const_str_plain_suppress_ragged_eofs ); Py_INCREF( const_str_plain_suppress_ragged_eofs );
    const_str_plain_PROTOCOL_SSLv3 = UNSTREAM_STRING( &constant_bin[ 1065048 ], 14, 1 );
    const_tuple_str_digest_9b140d54e682de757186c632bf3beb69_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_9b140d54e682de757186c632bf3beb69_tuple, 0, const_str_digest_9b140d54e682de757186c632bf3beb69 ); Py_INCREF( const_str_digest_9b140d54e682de757186c632bf3beb69 );
    const_str_plain__dnsname_to_stdlib = UNSTREAM_STRING( &constant_bin[ 1065062 ], 18, 1 );
    const_str_plain_PROTOCOL_TLSv1_2 = UNSTREAM_STRING( &constant_bin[ 1065080 ], 16, 1 );
    const_str_plain_PROTOCOL_TLSv1_1 = UNSTREAM_STRING( &constant_bin[ 1065096 ], 16, 1 );
    const_str_plain_PyOpenSSLContext = UNSTREAM_STRING( &constant_bin[ 1065112 ], 16, 1 );
    const_list_str_plain_inject_into_urllib3_str_plain_extract_from_urllib3_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_inject_into_urllib3_str_plain_extract_from_urllib3_list, 0, const_str_plain_inject_into_urllib3 ); Py_INCREF( const_str_plain_inject_into_urllib3 );
    PyList_SET_ITEM( const_list_str_plain_inject_into_urllib3_str_plain_extract_from_urllib3_list, 1, const_str_plain_extract_from_urllib3 ); Py_INCREF( const_str_plain_extract_from_urllib3 );
    const_str_plain_WrappedSocket = UNSTREAM_STRING( &constant_bin[ 1065128 ], 13, 1 );
    const_str_digest_d22ac54ae5c0616296ff857ea08c49cb = UNSTREAM_STRING( &constant_bin[ 1065141 ], 88, 0 );
    const_str_plain_openssl_backend = UNSTREAM_STRING( &constant_bin[ 1065229 ], 15, 1 );
    const_str_plain_idna_encode = UNSTREAM_STRING( &constant_bin[ 593460 ], 11, 1 );
    const_tuple_db2402bbc0165418bbec6436b14cef3c_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_db2402bbc0165418bbec6436b14cef3c_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_db2402bbc0165418bbec6436b14cef3c_tuple, 1, const_str_plain_certfile ); Py_INCREF( const_str_plain_certfile );
    PyTuple_SET_ITEM( const_tuple_db2402bbc0165418bbec6436b14cef3c_tuple, 2, const_str_plain_keyfile ); Py_INCREF( const_str_plain_keyfile );
    PyTuple_SET_ITEM( const_tuple_db2402bbc0165418bbec6436b14cef3c_tuple, 3, const_str_plain_password ); Py_INCREF( const_str_plain_password );
    const_str_plain_PROTOCOL_TLSv1 = UNSTREAM_STRING( &constant_bin[ 1065080 ], 14, 1 );
    const_int_pos_16384 = PyInt_FromLong( 16384l );
    const_tuple_str_plain_name_str_plain_idna_encode_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_idna_encode_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_idna_encode_tuple, 1, const_str_plain_idna_encode ); Py_INCREF( const_str_plain_idna_encode );
    const_dict_e24f4d9d6e3eb6f736872abe66cd35c1 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_e24f4d9d6e3eb6f736872abe66cd35c1, const_str_plain_close, Py_True );
    assert( PyDict_Size( const_dict_e24f4d9d6e3eb6f736872abe66cd35c1 ) == 1 );
    const_str_plain_gettimeout = UNSTREAM_STRING( &constant_bin[ 1065244 ], 10, 1 );
    const_str_digest_2f7e5e6bd20de78d1a826b224bb68950 = UNSTREAM_STRING( &constant_bin[ 1065254 ], 1634, 0 );
    const_str_plain_get_subj_alt_name = UNSTREAM_STRING( &constant_bin[ 1066888 ], 17, 1 );
    const_tuple_false_true_true_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_false_true_true_none_tuple, 0, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_false_true_true_none_tuple, 1, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_false_true_true_none_tuple, 2, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_false_true_true_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    const_str_plain__openssl_to_stdlib_verify = UNSTREAM_STRING( &constant_bin[ 1066905 ], 25, 1 );
    const_str_plain__stdlib_to_openssl_verify = UNSTREAM_STRING( &constant_bin[ 1066930 ], 25, 1 );
    const_tuple_str_plain_UnsupportedExtension_tuple = PyTuple_New( 1 );
    const_str_plain_UnsupportedExtension = UNSTREAM_STRING( &constant_bin[ 1066955 ], 20, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_UnsupportedExtension_tuple, 0, const_str_plain_UnsupportedExtension ); Py_INCREF( const_str_plain_UnsupportedExtension );
    const_str_digest_572541d49912921fc3f520d5fbbbace7 = UNSTREAM_STRING( &constant_bin[ 1066975 ], 34, 0 );
    const_str_digest_c2ca9ee709c1d2285dbebbfa7f97f083 = UNSTREAM_STRING( &constant_bin[ 1067009 ], 55, 0 );
    const_str_digest_7ac562d65cde2e151e56b218341d4cdd = UNSTREAM_STRING( &constant_bin[ 1067064 ], 52, 0 );

    constants_created = true;
}

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_urllib3$contrib$pyopenssl( void )
{
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_02c6a93c23743bc5f63b25727f893298;
static PyCodeObject *codeobj_7a8c9f5938e49ea0fc09de728677e915;
static PyCodeObject *codeobj_90e9c32bbbad2ec3e7ee11d55db50785;
static PyCodeObject *codeobj_0a680d72b2ee4e2063e1e0f9f2aa3976;
static PyCodeObject *codeobj_2b2b13d89fc5cfd1809f4b0721181c86;
static PyCodeObject *codeobj_eff9462608e30b6a7ed7fbd35a07f39d;
static PyCodeObject *codeobj_dda9d9ffe30a6459cc5c7957c3979826;
static PyCodeObject *codeobj_7a3fa89f2aadcad452da25ffbe3520e8;
static PyCodeObject *codeobj_e5f757fc7ddd9567415dbf17c77043e2;
static PyCodeObject *codeobj_fde9466e947a523f97c62f7d8cdc26d9;
static PyCodeObject *codeobj_21c20163c94dc3c8dc94475ee2feab4c;
static PyCodeObject *codeobj_a50bd93ba671fcb71afd591313270100;
static PyCodeObject *codeobj_76d8a515232d56932ad684c24e014fb5;
static PyCodeObject *codeobj_dac0d0b81bebb7055c6b91e0d524ba7f;
static PyCodeObject *codeobj_b5931f052ea4ee31ea48932a53a4cbe7;
static PyCodeObject *codeobj_66f177e68906233d576f6b1222496eb7;
static PyCodeObject *codeobj_f95dfdddf57f520ec95cbb0c6432a072;
static PyCodeObject *codeobj_eb1e835efc743b7d22b71d7add10966f;
static PyCodeObject *codeobj_b3d11a822812571f0e5e19fe35c7fa7b;
static PyCodeObject *codeobj_56ce4c9caa719767fa1307cbe541bd24;
static PyCodeObject *codeobj_311ce9cf1262adba6244c81e7c36e69e;
static PyCodeObject *codeobj_d9b679121c717b9f690a97402a914907;
static PyCodeObject *codeobj_9c77490b16b85fcf03e0727d8e5618c6;
static PyCodeObject *codeobj_00fe3b572cd70d603d7be799d9b26a5e;
static PyCodeObject *codeobj_1803d6968829f589aa30839d9afe9e2f;
static PyCodeObject *codeobj_c44847664bb26d19ffdf044ebd088962;
static PyCodeObject *codeobj_664a3194f205b3d21858002a04f58b5a;
static PyCodeObject *codeobj_9e1e0e3e5f1a00b34156120a41cbad7c;
static PyCodeObject *codeobj_ee4abade8c89584dfb2069f1eb025b15;
static PyCodeObject *codeobj_23d49aef9290e1f6def6c3bd946d5e5e;
static PyCodeObject *codeobj_bc924150e8755483ecf3f2d6d32d3c6b;
static PyCodeObject *codeobj_62dcc2c532e0185f3bf04af9af7f4cc2;
static PyCodeObject *codeobj_a894d6e34a45169354f7d4f30d954d2d;
static PyCodeObject *codeobj_77dad20f1e01fd301ab41bcc400e0a5d;
static PyCodeObject *codeobj_e940705c9cd6ba8a8c8fddbc31d83888;
static PyCodeObject *codeobj_f9f3bdf997e5d9a62abac2f7b867bae1;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_f677804d4d3769d5dce63fb421e9aca2;
    codeobj_02c6a93c23743bc5f63b25727f893298 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 102, const_tuple_b0c00933e83a0151953f3a00c2178204_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_7a8c9f5938e49ea0fc09de728677e915 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 240, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_str_plain_name_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_90e9c32bbbad2ec3e7ee11d55db50785 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 435, const_tuple_b07c4382fc3b698eab7bb6e79a5f230f_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_0a680d72b2ee4e2063e1e0f9f2aa3976 = MAKE_CODEOBJ( module_filename_obj, const_str_digest_572541d49912921fc3f520d5fbbbace7, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_2b2b13d89fc5cfd1809f4b0721181c86 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_PyOpenSSLContext, 383, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_eff9462608e30b6a7ed7fbd35a07f39d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 254, const_tuple_629e317cdb0a0a5b930602624a4df919_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_dda9d9ffe30a6459cc5c7957c3979826 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 389, const_tuple_str_plain_self_str_plain_protocol_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_7a3fa89f2aadcad452da25ffbe3520e8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__decref_socketios, 265, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_e5f757fc7ddd9567415dbf17c77043e2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__dnsname_to_stdlib, 157, const_tuple_str_plain_name_str_plain_idna_encode_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_fde9466e947a523f97c62f7d8cdc26d9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__drop, 366, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_21c20163c94dc3c8dc94475ee2feab4c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__reuse, 363, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_a50bd93ba671fcb71afd591313270100 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__send_until_done, 314, const_tuple_str_plain_self_str_plain_data_str_plain_e_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_76d8a515232d56932ad684c24e014fb5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__validate_dependencies_met, 137, const_tuple_str_plain_X509_str_plain_x509_str_plain_Extensions_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_dac0d0b81bebb7055c6b91e0d524ba7f = MAKE_CODEOBJ( module_filename_obj, const_str_plain__verify_callback, 465, const_tuple_e8b2873230843a4bb1a2136fdf114bf7_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_b5931f052ea4ee31ea48932a53a4cbe7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_close, 335, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_66f177e68906233d576f6b1222496eb7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_extract_from_urllib3, 127, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_f95dfdddf57f520ec95cbb0c6432a072 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fileno, 261, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_eb1e835efc743b7d22b71d7add10966f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_subj_alt_name, 195, const_tuple_9adbeddbb33e8f695757bd0d436ea91c_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_b3d11a822812571f0e5e19fe35c7fa7b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getpeercert, 345, const_tuple_str_plain_self_str_plain_binary_form_str_plain_x509_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_56ce4c9caa719767fa1307cbe541bd24 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_idna_encode, 170, const_tuple_str_plain_name_str_plain_prefix_str_plain_idna_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_311ce9cf1262adba6244c81e7c36e69e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_inject_into_urllib3, 115, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_d9b679121c717b9f690a97402a914907 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_cert_chain, 432, const_tuple_db2402bbc0165418bbec6436b14cef3c_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_9c77490b16b85fcf03e0727d8e5618c6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_load_verify_locations, 423, const_tuple_2fb08e1c17c01c11662f4f13f1e1495a_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_00fe3b572cd70d603d7be799d9b26a5e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_makefile, 374, const_tuple_str_plain_self_str_plain_mode_str_plain_bufsize_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_1803d6968829f589aa30839d9afe9e2f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_options, 395, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_c44847664bb26d19ffdf044ebd088962 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_options, 399, const_tuple_str_plain_self_str_plain_value_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_664a3194f205b3d21858002a04f58b5a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_recv, 271, const_tuple_432e5ac716e1cbef0fe2dd1d2bb9851c_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_9e1e0e3e5f1a00b34156120a41cbad7c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_recv_into, 292, const_tuple_str_plain_self_str_plain_args_str_plain_kwargs_str_plain_e_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_ee4abade8c89584dfb2069f1eb025b15 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_sendall, 325, const_tuple_a5f32eb6eb0599095716173348d96f8b_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_23d49aef9290e1f6def6c3bd946d5e5e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_ciphers, 418, const_tuple_str_plain_self_str_plain_ciphers_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_bc924150e8755483ecf3f2d6d32d3c6b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_set_default_verify_paths, 415, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_62dcc2c532e0185f3bf04af9af7f4cc2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_settimeout, 311, const_tuple_str_plain_self_str_plain_timeout_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_a894d6e34a45169354f7d4f30d954d2d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_shutdown, 331, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_77dad20f1e01fd301ab41bcc400e0a5d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_verify_mode, 404, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_e940705c9cd6ba8a8c8fddbc31d83888 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_verify_mode, 408, const_tuple_str_plain_self_str_plain_value_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_f9f3bdf997e5d9a62abac2f7b867bae1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_wrap_socket, 438, const_tuple_9829b42a413956e60fb7135a6c97d639_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
}

// The module function declarations.
static PyObject *urllib3$contrib$pyopenssl$$$genexpr_1_genexpr_maker( void );


static PyObject *urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name$$$genexpr_1_genexpr_maker( void );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_3_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_10_recv_into(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_11_settimeout(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_12__send_until_done(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_13_sendall(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_14_shutdown(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_15_close(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_16_getpeercert( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_17__reuse(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_18__drop(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_19_makefile( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_1_inject_into_urllib3(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_20___init__(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_21_options(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_22_options(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_23_verify_mode(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_24_verify_mode(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_25_set_default_verify_paths(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_26_set_ciphers(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_27_load_verify_locations( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_28_load_cert_chain( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_28_load_cert_chain$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_29_wrap_socket( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_2_extract_from_urllib3(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_30__verify_callback(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_3__validate_dependencies_met(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib$$$function_1_idna_encode(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_6___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_7_fileno(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_8__decref_socketios(  );


static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_9_recv(  );


// The module function definitions.

struct urllib3$contrib$pyopenssl$$$genexpr_1_genexpr_locals {
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

static PyObject *urllib3$contrib$pyopenssl$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct urllib3$contrib$pyopenssl$$$genexpr_1_genexpr_locals *generator_heap = (struct urllib3$contrib$pyopenssl$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

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
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_02c6a93c23743bc5f63b25727f893298, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *) );
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
                generator_heap->type_description_1 = "Noo";
                generator_heap->exception_lineno = 102;
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


            generator_heap->exception_lineno = 102;
            generator_heap->type_description_1 = "Noo";
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


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 102;
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


            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 102;
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

                    generator_heap->type_description_1 = "Noo";
                    generator_heap->exception_lineno = 102;
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

            generator_heap->type_description_1 = "Noo";
            generator_heap->exception_lineno = 102;
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
        PyObject *tmp_tuple_element_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT( generator_heap->var_v );
        tmp_tuple_element_1 = generator_heap->var_v;
        tmp_expression_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_expression_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( generator_heap->var_k );
        tmp_tuple_element_1 = generator_heap->var_k;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_expression_name_1, 1, tmp_tuple_element_1 );
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 102;
            generator_heap->type_description_1 = "Noo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 102;
        generator_heap->type_description_1 = "Noo";
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

static PyObject *urllib3$contrib$pyopenssl$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        urllib3$contrib$pyopenssl$$$genexpr_1_genexpr_context,
        module_urllib3$contrib$pyopenssl,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_02c6a93c23743bc5f63b25727f893298,
        1,
        sizeof(struct urllib3$contrib$pyopenssl$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_1_inject_into_urllib3( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_311ce9cf1262adba6244c81e7c36e69e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_311ce9cf1262adba6244c81e7c36e69e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_311ce9cf1262adba6244c81e7c36e69e, codeobj_311ce9cf1262adba6244c81e7c36e69e, module_urllib3$contrib$pyopenssl, 0 );
    frame_311ce9cf1262adba6244c81e7c36e69e = cache_frame_311ce9cf1262adba6244c81e7c36e69e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_311ce9cf1262adba6244c81e7c36e69e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_311ce9cf1262adba6244c81e7c36e69e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_call_result_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__validate_dependencies_met );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__validate_dependencies_met );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_validate_dependencies_met" );
            exception_tb = NULL;

            exception_lineno = 118;

            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        frame_311ce9cf1262adba6244c81e7c36e69e->m_frame.f_lineno = 118;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 118;

            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_3;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_PyOpenSSLContext );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PyOpenSSLContext );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "PyOpenSSLContext" );
            exception_tb = NULL;

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_1 = tmp_mvar_value_2;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "util" );
            exception_tb = NULL;

            exception_lineno = 120;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_3;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ssl_ );
        if ( tmp_assattr_target_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_SSLContext, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_target_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 120;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_mvar_value_4;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_mvar_value_5;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_HAS_SNI );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HAS_SNI );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "HAS_SNI" );
            exception_tb = NULL;

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_2 = tmp_mvar_value_4;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "util" );
            exception_tb = NULL;

            exception_lineno = 121;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = tmp_mvar_value_5;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_HAS_SNI, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 121;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_7;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_HAS_SNI );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_HAS_SNI );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "HAS_SNI" );
            exception_tb = NULL;

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_3 = tmp_mvar_value_6;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "util" );
            exception_tb = NULL;

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_7;
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ssl_ );
        if ( tmp_assattr_target_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_HAS_SNI, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_target_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_mvar_value_8;
        tmp_assattr_name_4 = Py_True;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "util" );
            exception_tb = NULL;

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = tmp_mvar_value_8;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_IS_PYOPENSSL, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_9;
        tmp_assattr_name_5 = Py_True;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

        if (unlikely( tmp_mvar_value_9 == NULL ))
        {
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
        }

        if ( tmp_mvar_value_9 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "util" );
            exception_tb = NULL;

            exception_lineno = 124;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_9;
        tmp_assattr_target_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ssl_ );
        if ( tmp_assattr_target_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_IS_PYOPENSSL, tmp_assattr_name_5 );
        Py_DECREF( tmp_assattr_target_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_311ce9cf1262adba6244c81e7c36e69e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_311ce9cf1262adba6244c81e7c36e69e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_311ce9cf1262adba6244c81e7c36e69e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_311ce9cf1262adba6244c81e7c36e69e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_311ce9cf1262adba6244c81e7c36e69e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_311ce9cf1262adba6244c81e7c36e69e,
        type_description_1
    );


    // Release cached frame.
    if ( frame_311ce9cf1262adba6244c81e7c36e69e == cache_frame_311ce9cf1262adba6244c81e7c36e69e )
    {
        Py_DECREF( frame_311ce9cf1262adba6244c81e7c36e69e );
    }
    cache_frame_311ce9cf1262adba6244c81e7c36e69e = NULL;

    assertFrameObject( frame_311ce9cf1262adba6244c81e7c36e69e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_1_inject_into_urllib3 );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_2_extract_from_urllib3( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_66f177e68906233d576f6b1222496eb7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_66f177e68906233d576f6b1222496eb7 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    MAKE_OR_REUSE_FRAME( cache_frame_66f177e68906233d576f6b1222496eb7, codeobj_66f177e68906233d576f6b1222496eb7, module_urllib3$contrib$pyopenssl, 0 );
    frame_66f177e68906233d576f6b1222496eb7 = cache_frame_66f177e68906233d576f6b1222496eb7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_66f177e68906233d576f6b1222496eb7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_66f177e68906233d576f6b1222496eb7 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_orig_util_SSLContext );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_orig_util_SSLContext );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "orig_util_SSLContext" );
            exception_tb = NULL;

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_1 = tmp_mvar_value_1;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "util" );
            exception_tb = NULL;

            exception_lineno = 130;

            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_2;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ssl_ );
        if ( tmp_assattr_target_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_SSLContext, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_target_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 130;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_assattr_target_2;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_orig_util_HAS_SNI );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_orig_util_HAS_SNI );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "orig_util_HAS_SNI" );
            exception_tb = NULL;

            exception_lineno = 131;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_2 = tmp_mvar_value_3;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "util" );
            exception_tb = NULL;

            exception_lineno = 131;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_2 = tmp_mvar_value_4;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_HAS_SNI, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 131;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_6;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_orig_util_HAS_SNI );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_orig_util_HAS_SNI );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "orig_util_HAS_SNI" );
            exception_tb = NULL;

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }

        tmp_assattr_name_3 = tmp_mvar_value_5;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "util" );
            exception_tb = NULL;

            exception_lineno = 132;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_6;
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ssl_ );
        if ( tmp_assattr_target_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_HAS_SNI, tmp_assattr_name_3 );
        Py_DECREF( tmp_assattr_target_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 132;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_mvar_value_7;
        tmp_assattr_name_4 = Py_False;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

        if (unlikely( tmp_mvar_value_7 == NULL ))
        {
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
        }

        if ( tmp_mvar_value_7 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "util" );
            exception_tb = NULL;

            exception_lineno = 133;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_4 = tmp_mvar_value_7;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_IS_PYOPENSSL, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 133;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_8;
        tmp_assattr_name_5 = Py_False;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "util" );
            exception_tb = NULL;

            exception_lineno = 134;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_8;
        tmp_assattr_target_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ssl_ );
        if ( tmp_assattr_target_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_IS_PYOPENSSL, tmp_assattr_name_5 );
        Py_DECREF( tmp_assattr_target_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_66f177e68906233d576f6b1222496eb7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_66f177e68906233d576f6b1222496eb7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_66f177e68906233d576f6b1222496eb7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_66f177e68906233d576f6b1222496eb7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_66f177e68906233d576f6b1222496eb7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_66f177e68906233d576f6b1222496eb7,
        type_description_1
    );


    // Release cached frame.
    if ( frame_66f177e68906233d576f6b1222496eb7 == cache_frame_66f177e68906233d576f6b1222496eb7 )
    {
        Py_DECREF( frame_66f177e68906233d576f6b1222496eb7 );
    }
    cache_frame_66f177e68906233d576f6b1222496eb7 = NULL;

    assertFrameObject( frame_66f177e68906233d576f6b1222496eb7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto function_return_exit;

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_2_extract_from_urllib3 );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_3__validate_dependencies_met( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_X509 = NULL;
    PyObject *var_x509 = NULL;
    PyObject *var_Extensions = NULL;
    struct Nuitka_FrameObject *frame_76d8a515232d56932ad684c24e014fb5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_76d8a515232d56932ad684c24e014fb5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_76d8a515232d56932ad684c24e014fb5, codeobj_76d8a515232d56932ad684c24e014fb5, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_76d8a515232d56932ad684c24e014fb5 = cache_frame_76d8a515232d56932ad684c24e014fb5;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_76d8a515232d56932ad684c24e014fb5 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_76d8a515232d56932ad684c24e014fb5 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_7822abce90b4f23aa7a437cf95bbfec5;
        tmp_globals_name_1 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = const_tuple_str_plain_Extensions_tuple;
        tmp_level_name_1 = const_int_0;
        frame_76d8a515232d56932ad684c24e014fb5->m_frame.f_lineno = 143;
        tmp_import_name_from_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_import_name_from_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Extensions );
        Py_DECREF( tmp_import_name_from_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 143;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_Extensions == NULL );
        var_Extensions = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        CHECK_OBJECT( var_Extensions );
        tmp_getattr_target_1 = var_Extensions;
        tmp_getattr_attr_1 = const_str_plain_get_extension_for_class;
        tmp_getattr_default_1 = Py_None;
        tmp_compexpr_left_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 144;
            type_description_1 = "ooo";
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
            PyObject *tmp_raise_type_1;
            PyObject *tmp_make_exception_arg_1;
            tmp_make_exception_arg_1 = const_str_digest_d22ac54ae5c0616296ff857ea08c49cb;
            frame_76d8a515232d56932ad684c24e014fb5->m_frame.f_lineno = 145;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_1 };
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ImportError, call_args );
            }

            assert( !(tmp_raise_type_1 == NULL) );
            exception_type = tmp_raise_type_1;
            exception_lineno = 145;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_digest_6d237a1253b74549ee18fb0e488e3cf9;
        tmp_globals_name_2 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_X509_tuple;
        tmp_level_name_2 = const_int_0;
        frame_76d8a515232d56932ad684c24e014fb5->m_frame.f_lineno = 150;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_X509 );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 150;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_X509 == NULL );
        var_X509 = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_name_1;
        CHECK_OBJECT( var_X509 );
        tmp_called_name_1 = var_X509;
        frame_76d8a515232d56932ad684c24e014fb5->m_frame.f_lineno = 151;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 151;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_x509 == NULL );
        var_x509 = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        CHECK_OBJECT( var_x509 );
        tmp_getattr_target_2 = var_x509;
        tmp_getattr_attr_2 = const_str_plain__x509;
        tmp_getattr_default_2 = Py_None;
        tmp_compexpr_left_2 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
        if ( tmp_compexpr_left_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 152;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 == tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_compexpr_left_2 );
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
            PyObject *tmp_raise_type_2;
            PyObject *tmp_make_exception_arg_2;
            tmp_make_exception_arg_2 = const_str_digest_3ff79c08d61077339220a6b991e28f93;
            frame_76d8a515232d56932ad684c24e014fb5->m_frame.f_lineno = 153;
            {
                PyObject *call_args[] = { tmp_make_exception_arg_2 };
                tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ImportError, call_args );
            }

            assert( !(tmp_raise_type_2 == NULL) );
            exception_type = tmp_raise_type_2;
            exception_lineno = 153;
            RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_76d8a515232d56932ad684c24e014fb5 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_76d8a515232d56932ad684c24e014fb5 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_76d8a515232d56932ad684c24e014fb5, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_76d8a515232d56932ad684c24e014fb5->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_76d8a515232d56932ad684c24e014fb5, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_76d8a515232d56932ad684c24e014fb5,
        type_description_1,
        var_X509,
        var_x509,
        var_Extensions
    );


    // Release cached frame.
    if ( frame_76d8a515232d56932ad684c24e014fb5 == cache_frame_76d8a515232d56932ad684c24e014fb5 )
    {
        Py_DECREF( frame_76d8a515232d56932ad684c24e014fb5 );
    }
    cache_frame_76d8a515232d56932ad684c24e014fb5 = NULL;

    assertFrameObject( frame_76d8a515232d56932ad684c24e014fb5 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_3__validate_dependencies_met );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_X509 );
    Py_DECREF( var_X509 );
    var_X509 = NULL;

    CHECK_OBJECT( (PyObject *)var_x509 );
    Py_DECREF( var_x509 );
    var_x509 = NULL;

    CHECK_OBJECT( (PyObject *)var_Extensions );
    Py_DECREF( var_Extensions );
    var_Extensions = NULL;

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

    Py_XDECREF( var_X509 );
    var_X509 = NULL;

    Py_XDECREF( var_x509 );
    var_x509 = NULL;

    Py_XDECREF( var_Extensions );
    var_Extensions = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_3__validate_dependencies_met );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
    PyObject *var_idna_encode = NULL;
    struct Nuitka_FrameObject *frame_e5f757fc7ddd9567415dbf17c77043e2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_e5f757fc7ddd9567415dbf17c77043e2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib$$$function_1_idna_encode(  );



        assert( var_idna_encode == NULL );
        var_idna_encode = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e5f757fc7ddd9567415dbf17c77043e2, codeobj_e5f757fc7ddd9567415dbf17c77043e2, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *) );
    frame_e5f757fc7ddd9567415dbf17c77043e2 = cache_frame_e5f757fc7ddd9567415dbf17c77043e2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e5f757fc7ddd9567415dbf17c77043e2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e5f757fc7ddd9567415dbf17c77043e2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( var_idna_encode );
        tmp_called_name_1 = var_idna_encode;
        CHECK_OBJECT( par_name );
        tmp_args_element_name_1 = par_name;
        frame_e5f757fc7ddd9567415dbf17c77043e2->m_frame.f_lineno = 187;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 187;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_name;
            assert( old != NULL );
            par_name = tmp_assign_source_2;
            Py_DECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_name );
        tmp_compexpr_left_1 = par_name;
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
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_1;
            PyObject *tmp_mvar_value_1;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_sys );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
                exception_tb = NULL;

                exception_lineno = 190;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_1 = tmp_mvar_value_1;
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 190;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = const_tuple_int_pos_3_int_0_tuple;
            tmp_res = RICH_COMPARE_BOOL_GTE_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 190;
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
                PyObject *tmp_assign_source_3;
                PyObject *tmp_called_instance_1;
                CHECK_OBJECT( par_name );
                tmp_called_instance_1 = par_name;
                frame_e5f757fc7ddd9567415dbf17c77043e2->m_frame.f_lineno = 191;
                tmp_assign_source_3 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_decode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

                if ( tmp_assign_source_3 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 191;
                    type_description_1 = "oo";
                    goto frame_exception_exit_1;
                }
                {
                    PyObject *old = par_name;
                    assert( old != NULL );
                    par_name = tmp_assign_source_3;
                    Py_DECREF( old );
                }

            }
            branch_no_2:;
        }
        branch_end_1:;
    }
    if ( par_name == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;

        exception_lineno = 192;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_name;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e5f757fc7ddd9567415dbf17c77043e2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_e5f757fc7ddd9567415dbf17c77043e2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e5f757fc7ddd9567415dbf17c77043e2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e5f757fc7ddd9567415dbf17c77043e2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e5f757fc7ddd9567415dbf17c77043e2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e5f757fc7ddd9567415dbf17c77043e2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e5f757fc7ddd9567415dbf17c77043e2,
        type_description_1,
        par_name,
        var_idna_encode
    );


    // Release cached frame.
    if ( frame_e5f757fc7ddd9567415dbf17c77043e2 == cache_frame_e5f757fc7ddd9567415dbf17c77043e2 )
    {
        Py_DECREF( frame_e5f757fc7ddd9567415dbf17c77043e2 );
    }
    cache_frame_e5f757fc7ddd9567415dbf17c77043e2 = NULL;

    assertFrameObject( frame_e5f757fc7ddd9567415dbf17c77043e2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)var_idna_encode );
    Py_DECREF( var_idna_encode );
    var_idna_encode = NULL;

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

    Py_XDECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)var_idna_encode );
    Py_DECREF( var_idna_encode );
    var_idna_encode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib$$$function_1_idna_encode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
    PyObject *var_prefix = NULL;
    PyObject *var_idna = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_56ce4c9caa719767fa1307cbe541bd24;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_56ce4c9caa719767fa1307cbe541bd24 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_56ce4c9caa719767fa1307cbe541bd24, codeobj_56ce4c9caa719767fa1307cbe541bd24, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_56ce4c9caa719767fa1307cbe541bd24 = cache_frame_56ce4c9caa719767fa1307cbe541bd24;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_56ce4c9caa719767fa1307cbe541bd24 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_56ce4c9caa719767fa1307cbe541bd24 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_plain_idna;
        tmp_globals_name_1 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_56ce4c9caa719767fa1307cbe541bd24->m_frame.f_lineno = 176;
        tmp_assign_source_1 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 176;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_idna == NULL );
        var_idna = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = const_tuple_unicode_digest_f16ebd80f485bce26a5c8a0fab91362b_unicode_dot_tuple;
        tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
        assert( !(tmp_assign_source_2 == NULL) );
        assert( tmp_for_loop_1__for_iterator == NULL );
        tmp_for_loop_1__for_iterator = tmp_assign_source_2;
    }
    // Tried code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT( tmp_for_loop_1__for_iterator );
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
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
                type_description_1 = "ooo";
                exception_lineno = 179;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT( tmp_for_loop_1__iter_value );
        tmp_assign_source_4 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_prefix;
            var_prefix = tmp_assign_source_4;
            Py_INCREF( var_prefix );
            Py_XDECREF( old );
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_name );
        tmp_called_instance_1 = par_name;
        CHECK_OBJECT( var_prefix );
        tmp_args_element_name_1 = var_prefix;
        frame_56ce4c9caa719767fa1307cbe541bd24->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_startswith, call_args );
        }

        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 180;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_call_result_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_call_result_1 );

            exception_lineno = 180;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_call_result_1 );
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
            PyObject *tmp_slice_source_1;
            PyObject *tmp_slice_lower_1;
            PyObject *tmp_len_arg_1;
            CHECK_OBJECT( par_name );
            tmp_slice_source_1 = par_name;
            CHECK_OBJECT( var_prefix );
            tmp_len_arg_1 = var_prefix;
            tmp_slice_lower_1 = BUILTIN_LEN( tmp_len_arg_1 );
            if ( tmp_slice_lower_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 181;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            tmp_assign_source_5 = LOOKUP_SLICE( tmp_slice_source_1, tmp_slice_lower_1, Py_None );
            Py_DECREF( tmp_slice_lower_1 );
            if ( tmp_assign_source_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 181;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = par_name;
                assert( old != NULL );
                par_name = tmp_assign_source_5;
                Py_DECREF( old );
            }

        }
        {
            PyObject *tmp_left_name_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_right_name_1;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( var_prefix );
            tmp_called_instance_2 = var_prefix;
            frame_56ce4c9caa719767fa1307cbe541bd24->m_frame.f_lineno = 182;
            tmp_left_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_plain_ascii_tuple, 0 ) );

            if ( tmp_left_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 182;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT( var_idna );
            tmp_called_instance_3 = var_idna;
            CHECK_OBJECT( par_name );
            tmp_args_element_name_2 = par_name;
            frame_56ce4c9caa719767fa1307cbe541bd24->m_frame.f_lineno = 182;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_right_name_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_encode, call_args );
            }

            if ( tmp_right_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_left_name_1 );

                exception_lineno = 182;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
            Py_DECREF( tmp_left_name_1 );
            Py_DECREF( tmp_right_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 182;
                type_description_1 = "ooo";
                goto try_except_handler_3;
            }
            goto try_return_handler_3;
        }
        branch_no_1:;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Return handler code:
    try_return_handler_3:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__iter_value );
    Py_DECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
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

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_name_3;
        CHECK_OBJECT( var_idna );
        tmp_called_instance_4 = var_idna;
        CHECK_OBJECT( par_name );
        tmp_args_element_name_3 = par_name;
        frame_56ce4c9caa719767fa1307cbe541bd24->m_frame.f_lineno = 183;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_encode, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 183;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib$$$function_1_idna_encode );
    return NULL;
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
    PRESERVE_FRAME_EXCEPTION( frame_56ce4c9caa719767fa1307cbe541bd24 );
    if ( exception_keeper_tb_2 == NULL )
    {
        exception_keeper_tb_2 = MAKE_TRACEBACK( frame_56ce4c9caa719767fa1307cbe541bd24, exception_keeper_lineno_2 );
    }
    else if ( exception_keeper_lineno_2 != 0 )
    {
        exception_keeper_tb_2 = ADD_TRACEBACK( exception_keeper_tb_2, frame_56ce4c9caa719767fa1307cbe541bd24, exception_keeper_lineno_2 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    PUBLISH_EXCEPTION( &exception_keeper_type_2, &exception_keeper_value_2, &exception_keeper_tb_2 );
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        CHECK_OBJECT( var_idna );
        tmp_source_name_2 = var_idna;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_core );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_IDNAError );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 184;
            type_description_1 = "ooo";
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
        tmp_return_value = Py_None;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 178;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_56ce4c9caa719767fa1307cbe541bd24->m_frame) frame_56ce4c9caa719767fa1307cbe541bd24->m_frame.f_lineno = exception_tb->tb_lineno;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
        branch_end_2:;
    }
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION( frame_56ce4c9caa719767fa1307cbe541bd24 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_56ce4c9caa719767fa1307cbe541bd24 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_56ce4c9caa719767fa1307cbe541bd24 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_56ce4c9caa719767fa1307cbe541bd24, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_56ce4c9caa719767fa1307cbe541bd24->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_56ce4c9caa719767fa1307cbe541bd24, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_56ce4c9caa719767fa1307cbe541bd24,
        type_description_1,
        par_name,
        var_prefix,
        var_idna
    );


    // Release cached frame.
    if ( frame_56ce4c9caa719767fa1307cbe541bd24 == cache_frame_56ce4c9caa719767fa1307cbe541bd24 )
    {
        Py_DECREF( frame_56ce4c9caa719767fa1307cbe541bd24 );
    }
    cache_frame_56ce4c9caa719767fa1307cbe541bd24 = NULL;

    assertFrameObject( frame_56ce4c9caa719767fa1307cbe541bd24 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib$$$function_1_idna_encode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_prefix );
    var_prefix = NULL;

    CHECK_OBJECT( (PyObject *)var_idna );
    Py_DECREF( var_idna );
    var_idna = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

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

    Py_XDECREF( var_prefix );
    var_prefix = NULL;

    Py_XDECREF( var_idna );
    var_idna = NULL;

    Py_XDECREF( par_name );
    par_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib$$$function_1_idna_encode );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_peer_cert = python_pars[ 0 ];
    PyObject *var_e = NULL;
    PyObject *var_name = NULL;
    PyObject *var_ext = NULL;
    PyObject *var_cert = NULL;
    PyObject *var_names = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_eb1e835efc743b7d22b71d7add10966f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_eb1e835efc743b7d22b71d7add10966f = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_eb1e835efc743b7d22b71d7add10966f, codeobj_eb1e835efc743b7d22b71d7add10966f, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_eb1e835efc743b7d22b71d7add10966f = cache_frame_eb1e835efc743b7d22b71d7add10966f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_eb1e835efc743b7d22b71d7add10966f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_eb1e835efc743b7d22b71d7add10966f ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_attribute_name_1;
        CHECK_OBJECT( par_peer_cert );
        tmp_source_name_1 = par_peer_cert;
        tmp_attribute_name_1 = const_str_plain_to_cryptography;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_1, tmp_attribute_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 200;
            type_description_1 = "oooooo";
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
            CHECK_OBJECT( par_peer_cert );
            tmp_called_instance_1 = par_peer_cert;
            frame_eb1e835efc743b7d22b71d7add10966f->m_frame.f_lineno = 201;
            tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_to_cryptography );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 201;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_cert == NULL );
            var_cert = tmp_assign_source_1;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_called_name_1;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__Certificate );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__Certificate );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_Certificate" );
                exception_tb = NULL;

                exception_lineno = 205;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_1 = tmp_mvar_value_1;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_openssl_backend );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_openssl_backend );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "openssl_backend" );
                exception_tb = NULL;

                exception_lineno = 205;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_args_element_name_1 = tmp_mvar_value_2;
            CHECK_OBJECT( par_peer_cert );
            tmp_source_name_2 = par_peer_cert;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__x509 );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 205;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_eb1e835efc743b7d22b71d7add10966f->m_frame.f_lineno = 205;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 205;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( var_cert == NULL );
            var_cert = tmp_assign_source_2;
        }
        branch_end_1:;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_source_name_3;
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_args_element_name_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_3;
        CHECK_OBJECT( var_cert );
        tmp_source_name_5 = var_cert;
        tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_extensions );
        if ( tmp_source_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_get_extension_for_class );
        Py_DECREF( tmp_source_name_4 );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_x509 );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x509 );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "x509" );
            exception_tb = NULL;

            exception_lineno = 211;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_source_name_6 = tmp_mvar_value_3;
        tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_SubjectAlternativeName );
        if ( tmp_args_element_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 211;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_eb1e835efc743b7d22b71d7add10966f->m_frame.f_lineno = 210;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_source_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_value );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 210;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert( var_ext == NULL );
        var_ext = tmp_assign_source_3;
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
    PRESERVE_FRAME_EXCEPTION( frame_eb1e835efc743b7d22b71d7add10966f );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_eb1e835efc743b7d22b71d7add10966f, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_eb1e835efc743b7d22b71d7add10966f, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_4;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_x509 );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x509 );
        }

        if ( tmp_mvar_value_4 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "x509" );
            exception_tb = NULL;

            exception_lineno = 213;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_4;
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ExtensionNotFound );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 213;
            type_description_1 = "oooooo";
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
        tmp_return_value = PyList_New( 0 );
        goto frame_return_exit_1;
        goto branch_end_2;
        branch_no_2:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_5;
            PyObject *tmp_mvar_value_6;
            PyObject *tmp_source_name_9;
            PyObject *tmp_mvar_value_7;
            tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_x509 );

            if (unlikely( tmp_mvar_value_5 == NULL ))
            {
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x509 );
            }

            if ( tmp_mvar_value_5 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "x509" );
                exception_tb = NULL;

                exception_lineno = 216;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_5;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_DuplicateExtension );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 216;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = PyTuple_New( 4 );
            PyTuple_SET_ITEM( tmp_compexpr_right_2, 0, tmp_tuple_element_1 );
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_UnsupportedExtension );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UnsupportedExtension );
            }

            if ( tmp_mvar_value_6 == NULL )
            {
                Py_DECREF( tmp_compexpr_right_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "UnsupportedExtension" );
                exception_tb = NULL;

                exception_lineno = 216;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_tuple_element_1 = tmp_mvar_value_6;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_compexpr_right_2, 1, tmp_tuple_element_1 );
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_x509 );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x509 );
            }

            if ( tmp_mvar_value_7 == NULL )
            {
                Py_DECREF( tmp_compexpr_right_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "x509" );
                exception_tb = NULL;

                exception_lineno = 217;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_9 = tmp_mvar_value_7;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_UnsupportedGeneralNameType );
            if ( tmp_tuple_element_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_compexpr_right_2 );

                exception_lineno = 217;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            PyTuple_SET_ITEM( tmp_compexpr_right_2, 2, tmp_tuple_element_1 );
            tmp_tuple_element_1 = PyExc_UnicodeError;
            Py_INCREF( tmp_tuple_element_1 );
            PyTuple_SET_ITEM( tmp_compexpr_right_2, 3, tmp_tuple_element_1 );
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 216;
                type_description_1 = "oooooo";
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
                PyObject *tmp_assign_source_4;
                tmp_assign_source_4 = EXC_VALUE(PyThreadState_GET());
                assert( var_e == NULL );
                Py_INCREF( tmp_assign_source_4 );
                var_e = tmp_assign_source_4;
            }
            {
                PyObject *tmp_called_instance_2;
                PyObject *tmp_mvar_value_8;
                PyObject *tmp_call_result_1;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_args_element_name_5;
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_log );

                if (unlikely( tmp_mvar_value_8 == NULL ))
                {
                    tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_log );
                }

                if ( tmp_mvar_value_8 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "log" );
                    exception_tb = NULL;

                    exception_lineno = 220;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_instance_2 = tmp_mvar_value_8;
                tmp_args_element_name_4 = const_str_digest_bb5bc8c3c3606f20b540789b2cae4e87;
                CHECK_OBJECT( var_e );
                tmp_args_element_name_5 = var_e;
                frame_eb1e835efc743b7d22b71d7add10966f->m_frame.f_lineno = 220;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                    tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_2, const_str_plain_warning, call_args );
                }

                if ( tmp_call_result_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 220;
                    type_description_1 = "oooooo";
                    goto frame_exception_exit_1;
                }
                Py_DECREF( tmp_call_result_1 );
            }
            tmp_return_value = PyList_New( 0 );
            goto frame_return_exit_1;
            goto branch_end_3;
            branch_no_3:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 209;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_eb1e835efc743b7d22b71d7add10966f->m_frame) frame_eb1e835efc743b7d22b71d7add10966f->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
            branch_end_3:;
        }
        branch_end_2:;
    }
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_5;
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_name_3;
            PyObject *tmp_args_element_name_6;
            PyObject *tmp_mvar_value_9;
            PyObject *tmp_args_element_name_7;
            PyObject *tmp_called_name_4;
            PyObject *tmp_source_name_10;
            PyObject *tmp_args_element_name_8;
            PyObject *tmp_source_name_11;
            PyObject *tmp_mvar_value_10;
            tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_map );
            assert( tmp_called_name_3 != NULL );
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__dnsname_to_stdlib );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__dnsname_to_stdlib );
            }

            if ( tmp_mvar_value_9 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "_dnsname_to_stdlib" );
                exception_tb = NULL;

                exception_lineno = 236;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }

            tmp_args_element_name_6 = tmp_mvar_value_9;
            CHECK_OBJECT( var_ext );
            tmp_source_name_10 = var_ext;
            tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_get_values_for_type );
            if ( tmp_called_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 236;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_x509 );

            if (unlikely( tmp_mvar_value_10 == NULL ))
            {
                tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x509 );
            }

            if ( tmp_mvar_value_10 == NULL )
            {
                Py_DECREF( tmp_called_name_4 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "x509" );
                exception_tb = NULL;

                exception_lineno = 236;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }

            tmp_source_name_11 = tmp_mvar_value_10;
            tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_DNSName );
            if ( tmp_args_element_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_4 );

                exception_lineno = 236;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            frame_eb1e835efc743b7d22b71d7add10966f->m_frame.f_lineno = 236;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_args_element_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_called_name_4 );
            Py_DECREF( tmp_args_element_name_8 );
            if ( tmp_args_element_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 236;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            frame_eb1e835efc743b7d22b71d7add10966f->m_frame.f_lineno = 236;
            {
                PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
                tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
            }

            Py_DECREF( tmp_args_element_name_7 );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 236;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 236;
                type_description_1 = "oooooo";
                goto try_except_handler_3;
            }
            assert( tmp_list_contraction_1__$0 == NULL );
            tmp_list_contraction_1__$0 = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = PyList_New( 0 );
            assert( tmp_list_contraction_1__contraction_result == NULL );
            tmp_list_contraction_1__contraction_result = tmp_assign_source_7;
        }
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT( tmp_list_contraction_1__$0 );
            tmp_next_source_1 = tmp_list_contraction_1__$0;
            tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_1 );
            if ( tmp_assign_source_8 == NULL )
            {
                if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
                {

                    goto loop_end_1;
                }
                else
                {

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    type_description_1 = "oooooo";
                    exception_lineno = 236;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_list_contraction_1__iter_value_0;
                tmp_list_contraction_1__iter_value_0 = tmp_assign_source_8;
                Py_XDECREF( old );
            }

        }
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT( tmp_list_contraction_1__iter_value_0 );
            tmp_assign_source_9 = tmp_list_contraction_1__iter_value_0;
            {
                PyObject *old = var_name;
                var_name = tmp_assign_source_9;
                Py_INCREF( var_name );
                Py_XDECREF( old );
            }

        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            CHECK_OBJECT( var_name );
            tmp_compexpr_left_3 = var_name;
            tmp_compexpr_right_3 = Py_None;
            tmp_condition_result_4 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                PyObject *tmp_tuple_element_2;
                CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
                tmp_append_list_1 = tmp_list_contraction_1__contraction_result;
                tmp_tuple_element_2 = const_str_plain_DNS;
                tmp_append_value_1 = PyTuple_New( 2 );
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_append_value_1, 0, tmp_tuple_element_2 );
                CHECK_OBJECT( var_name );
                tmp_tuple_element_2 = var_name;
                Py_INCREF( tmp_tuple_element_2 );
                PyTuple_SET_ITEM( tmp_append_value_1, 1, tmp_tuple_element_2 );
                assert( PyList_Check( tmp_append_list_1 ) );
                tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
                Py_DECREF( tmp_append_value_1 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 236;
                    type_description_1 = "oooooo";
                    goto try_except_handler_3;
                }
            }
            branch_no_4:;
        }
        if ( CONSIDER_THREADING() == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 236;
            type_description_1 = "oooooo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT( tmp_list_contraction_1__contraction_result );
        tmp_assign_source_5 = tmp_list_contraction_1__contraction_result;
        Py_INCREF( tmp_assign_source_5 );
        goto try_return_handler_3;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name );
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__$0 );
        Py_DECREF( tmp_list_contraction_1__$0 );
        tmp_list_contraction_1__$0 = NULL;

        CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__contraction_result );
        Py_DECREF( tmp_list_contraction_1__contraction_result );
        tmp_list_contraction_1__contraction_result = NULL;

        Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
        tmp_list_contraction_1__iter_value_0 = NULL;

        goto outline_result_1;
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

        Py_XDECREF( tmp_list_contraction_1__$0 );
        tmp_list_contraction_1__$0 = NULL;

        Py_XDECREF( tmp_list_contraction_1__contraction_result );
        tmp_list_contraction_1__contraction_result = NULL;

        Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
        tmp_list_contraction_1__iter_value_0 = NULL;

        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto frame_exception_exit_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name );
        return NULL;
        outline_result_1:;
        assert( var_names == NULL );
        var_names = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_source_name_12;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_name_9;
        CHECK_OBJECT( var_names );
        tmp_source_name_12 = var_names;
        tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_extend );
        if ( tmp_called_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 239;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_name_6;
            PyObject *tmp_source_name_13;
            PyObject *tmp_args_element_name_10;
            PyObject *tmp_source_name_14;
            PyObject *tmp_mvar_value_11;
            CHECK_OBJECT( var_ext );
            tmp_source_name_13 = var_ext;
            tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_get_values_for_type );
            if ( tmp_called_name_6 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 241;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_x509 );

            if (unlikely( tmp_mvar_value_11 == NULL ))
            {
                tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_x509 );
            }

            if ( tmp_mvar_value_11 == NULL )
            {
                Py_DECREF( tmp_called_name_6 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "x509" );
                exception_tb = NULL;

                exception_lineno = 241;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_14 = tmp_mvar_value_11;
            tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_IPAddress );
            if ( tmp_args_element_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_6 );

                exception_lineno = 241;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_eb1e835efc743b7d22b71d7add10966f->m_frame.f_lineno = 241;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
            }

            Py_DECREF( tmp_called_name_6 );
            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_iter_arg_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 241;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
            Py_DECREF( tmp_iter_arg_2 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 240;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_10;
        }
        // Tried code:
        tmp_args_element_name_9 = urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_args_element_name_9)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );


        goto try_return_handler_4;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name );
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        goto outline_result_2;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name );
        return NULL;
        outline_result_2:;
        frame_eb1e835efc743b7d22b71d7add10966f->m_frame.f_lineno = 239;
        {
            PyObject *call_args[] = { tmp_args_element_name_9 };
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
        }

        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_9 );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 239;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }

#if 1
    RESTORE_FRAME_EXCEPTION( frame_eb1e835efc743b7d22b71d7add10966f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_eb1e835efc743b7d22b71d7add10966f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_eb1e835efc743b7d22b71d7add10966f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_eb1e835efc743b7d22b71d7add10966f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_eb1e835efc743b7d22b71d7add10966f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_eb1e835efc743b7d22b71d7add10966f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_eb1e835efc743b7d22b71d7add10966f,
        type_description_1,
        par_peer_cert,
        var_e,
        var_name,
        var_ext,
        var_cert,
        var_names
    );


    // Release cached frame.
    if ( frame_eb1e835efc743b7d22b71d7add10966f == cache_frame_eb1e835efc743b7d22b71d7add10966f )
    {
        Py_DECREF( frame_eb1e835efc743b7d22b71d7add10966f );
    }
    cache_frame_eb1e835efc743b7d22b71d7add10966f = NULL;

    assertFrameObject( frame_eb1e835efc743b7d22b71d7add10966f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_names );
    tmp_return_value = var_names;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    CHECK_OBJECT( (PyObject *)par_peer_cert );
    Py_DECREF( par_peer_cert );
    par_peer_cert = NULL;

    Py_XDECREF( var_ext );
    var_ext = NULL;

    CHECK_OBJECT( (PyObject *)var_cert );
    Py_DECREF( var_cert );
    var_cert = NULL;

    Py_XDECREF( var_names );
    var_names = NULL;

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

    Py_XDECREF( var_e );
    var_e = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    CHECK_OBJECT( (PyObject *)par_peer_cert );
    Py_DECREF( par_peer_cert );
    par_peer_cert = NULL;

    Py_XDECREF( var_ext );
    var_ext = NULL;

    Py_XDECREF( var_cert );
    var_cert = NULL;

    Py_XDECREF( var_names );
    var_names = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name );
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



struct urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name$$$genexpr_1_genexpr_locals {
    PyObject *var_name;
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

static PyObject *urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name$$$genexpr_1_genexpr_context( struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Heap access if used.
    struct urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name$$$genexpr_1_genexpr_locals *generator_heap = (struct urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name$$$genexpr_1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_name = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_m_frame, codeobj_7a8c9f5938e49ea0fc09de728677e915, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *) );
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
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 240;
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
            PyObject *old = generator_heap->var_name;
            generator_heap->var_name = tmp_assign_source_2;
            Py_INCREF( generator_heap->var_name );
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_expression_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_str_arg_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_tuple_element_1 = const_str_digest_76d751ede7bd087f9346e5a615d3c397;
        tmp_expression_name_1 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_expression_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( generator_heap->var_name );
        tmp_str_arg_1 = generator_heap->var_name;
        tmp_tuple_element_1 = PyObject_Str( tmp_str_arg_1 );
        if ( tmp_tuple_element_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );
            Py_DECREF( tmp_expression_name_1 );

            generator_heap->exception_lineno = 240;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        PyTuple_SET_ITEM( tmp_expression_name_1, 1, tmp_tuple_element_1 );
        Nuitka_PreserveHeap( generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_str_arg_1, sizeof(PyObject *), NULL );
        generator->m_yield_return_index = 1;
        return tmp_expression_name_1;
        yield_return_1:
        Nuitka_RestoreHeap( generator_heap->yield_tmps, &tmp_tuple_element_1, sizeof(PyObject *), &tmp_str_arg_1, sizeof(PyObject *), NULL );
        if ( yield_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


            generator_heap->exception_lineno = 240;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb );


        generator_heap->exception_lineno = 240;
        generator_heap->type_description_1 = "No";
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
            generator_heap->var_name
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

    Py_XDECREF( generator_heap->var_name );
    generator_heap->var_name = NULL;

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

    Py_XDECREF( generator_heap->var_name );
    generator_heap->var_name = NULL;



    return NULL;

    function_exception_exit:
    assert( generator_heap->exception_type );
    RESTORE_ERROR_OCCURRED( generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb );

    return NULL;

}

static PyObject *urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name$$$genexpr_1_genexpr_maker( void )
{
    return Nuitka_Generator_New(
        urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name$$$genexpr_1_genexpr_context,
        module_urllib3$contrib$pyopenssl,
        const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
        NULL,
#endif
        codeobj_7a8c9f5938e49ea0fc09de728677e915,
        1,
        sizeof(struct urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name$$$genexpr_1_genexpr_locals)
    );
}


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_6___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_connection = python_pars[ 1 ];
    PyObject *par_socket = python_pars[ 2 ];
    PyObject *par_suppress_ragged_eofs = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_eff9462608e30b6a7ed7fbd35a07f39d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_eff9462608e30b6a7ed7fbd35a07f39d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_eff9462608e30b6a7ed7fbd35a07f39d, codeobj_eff9462608e30b6a7ed7fbd35a07f39d, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_eff9462608e30b6a7ed7fbd35a07f39d = cache_frame_eff9462608e30b6a7ed7fbd35a07f39d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_eff9462608e30b6a7ed7fbd35a07f39d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_eff9462608e30b6a7ed7fbd35a07f39d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_connection );
        tmp_assattr_name_1 = par_connection;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_connection, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 255;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT( par_socket );
        tmp_assattr_name_2 = par_socket;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_socket, tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 256;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT( par_suppress_ragged_eofs );
        tmp_assattr_name_3 = par_suppress_ragged_eofs;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_suppress_ragged_eofs, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 257;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = const_int_0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain__makefile_refs, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 258;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_5;
        PyObject *tmp_assattr_target_5;
        tmp_assattr_name_5 = Py_False;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain__closed, tmp_assattr_name_5 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 259;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eff9462608e30b6a7ed7fbd35a07f39d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_eff9462608e30b6a7ed7fbd35a07f39d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_eff9462608e30b6a7ed7fbd35a07f39d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_eff9462608e30b6a7ed7fbd35a07f39d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_eff9462608e30b6a7ed7fbd35a07f39d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_eff9462608e30b6a7ed7fbd35a07f39d,
        type_description_1,
        par_self,
        par_connection,
        par_socket,
        par_suppress_ragged_eofs
    );


    // Release cached frame.
    if ( frame_eff9462608e30b6a7ed7fbd35a07f39d == cache_frame_eff9462608e30b6a7ed7fbd35a07f39d )
    {
        Py_DECREF( frame_eff9462608e30b6a7ed7fbd35a07f39d );
    }
    cache_frame_eff9462608e30b6a7ed7fbd35a07f39d = NULL;

    assertFrameObject( frame_eff9462608e30b6a7ed7fbd35a07f39d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_6___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_suppress_ragged_eofs );
    Py_DECREF( par_suppress_ragged_eofs );
    par_suppress_ragged_eofs = NULL;

    CHECK_OBJECT( (PyObject *)par_connection );
    Py_DECREF( par_connection );
    par_connection = NULL;

    CHECK_OBJECT( (PyObject *)par_socket );
    Py_DECREF( par_socket );
    par_socket = NULL;

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

    CHECK_OBJECT( (PyObject *)par_suppress_ragged_eofs );
    Py_DECREF( par_suppress_ragged_eofs );
    par_suppress_ragged_eofs = NULL;

    CHECK_OBJECT( (PyObject *)par_connection );
    Py_DECREF( par_connection );
    par_connection = NULL;

    CHECK_OBJECT( (PyObject *)par_socket );
    Py_DECREF( par_socket );
    par_socket = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_6___init__ );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_7_fileno( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_f95dfdddf57f520ec95cbb0c6432a072;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f95dfdddf57f520ec95cbb0c6432a072 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f95dfdddf57f520ec95cbb0c6432a072, codeobj_f95dfdddf57f520ec95cbb0c6432a072, module_urllib3$contrib$pyopenssl, sizeof(void *) );
    frame_f95dfdddf57f520ec95cbb0c6432a072 = cache_frame_f95dfdddf57f520ec95cbb0c6432a072;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f95dfdddf57f520ec95cbb0c6432a072 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f95dfdddf57f520ec95cbb0c6432a072 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_socket );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_f95dfdddf57f520ec95cbb0c6432a072->m_frame.f_lineno = 262;
        tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_fileno );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 262;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f95dfdddf57f520ec95cbb0c6432a072 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_f95dfdddf57f520ec95cbb0c6432a072 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_f95dfdddf57f520ec95cbb0c6432a072 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f95dfdddf57f520ec95cbb0c6432a072, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f95dfdddf57f520ec95cbb0c6432a072->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f95dfdddf57f520ec95cbb0c6432a072, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f95dfdddf57f520ec95cbb0c6432a072,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_f95dfdddf57f520ec95cbb0c6432a072 == cache_frame_f95dfdddf57f520ec95cbb0c6432a072 )
    {
        Py_DECREF( frame_f95dfdddf57f520ec95cbb0c6432a072 );
    }
    cache_frame_f95dfdddf57f520ec95cbb0c6432a072 = NULL;

    assertFrameObject( frame_f95dfdddf57f520ec95cbb0c6432a072 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_7_fileno );
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
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_7_fileno );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_8__decref_socketios( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_7a3fa89f2aadcad452da25ffbe3520e8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_7a3fa89f2aadcad452da25ffbe3520e8 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_7a3fa89f2aadcad452da25ffbe3520e8, codeobj_7a3fa89f2aadcad452da25ffbe3520e8, module_urllib3$contrib$pyopenssl, sizeof(void *) );
    frame_7a3fa89f2aadcad452da25ffbe3520e8 = cache_frame_7a3fa89f2aadcad452da25ffbe3520e8;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_7a3fa89f2aadcad452da25ffbe3520e8 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_7a3fa89f2aadcad452da25ffbe3520e8 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__makefile_refs );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 266;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_0;
        tmp_res = RICH_COMPARE_BOOL_GT_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 266;
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
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__makefile_refs );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 267;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            assert( tmp_inplace_assign_attr_1__start == NULL );
            tmp_inplace_assign_attr_1__start = tmp_assign_source_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
            tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
            tmp_right_name_1 = const_int_pos_1;
            tmp_assign_source_2 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 267;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
            assert( tmp_inplace_assign_attr_1__end == NULL );
            tmp_inplace_assign_attr_1__end = tmp_assign_source_2;
        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
            tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__makefile_refs, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 267;
                type_description_1 = "o";
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

        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__closed );
        if ( tmp_attribute_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 268;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_attribute_value_1 );

            exception_lineno = 268;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF( tmp_attribute_value_1 );
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( par_self );
            tmp_called_instance_1 = par_self;
            frame_7a3fa89f2aadcad452da25ffbe3520e8->m_frame.f_lineno = 269;
            tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_close );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 269;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_2:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7a3fa89f2aadcad452da25ffbe3520e8 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_7a3fa89f2aadcad452da25ffbe3520e8 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_7a3fa89f2aadcad452da25ffbe3520e8, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_7a3fa89f2aadcad452da25ffbe3520e8->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_7a3fa89f2aadcad452da25ffbe3520e8, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_7a3fa89f2aadcad452da25ffbe3520e8,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_7a3fa89f2aadcad452da25ffbe3520e8 == cache_frame_7a3fa89f2aadcad452da25ffbe3520e8 )
    {
        Py_DECREF( frame_7a3fa89f2aadcad452da25ffbe3520e8 );
    }
    cache_frame_7a3fa89f2aadcad452da25ffbe3520e8 = NULL;

    assertFrameObject( frame_7a3fa89f2aadcad452da25ffbe3520e8 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_8__decref_socketios );
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
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_8__decref_socketios );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_9_recv( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *var_e = NULL;
    PyObject *var_data = NULL;
    struct Nuitka_FrameObject *frame_664a3194f205b3d21858002a04f58b5a;
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
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_664a3194f205b3d21858002a04f58b5a = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_664a3194f205b3d21858002a04f58b5a, codeobj_664a3194f205b3d21858002a04f58b5a, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_664a3194f205b3d21858002a04f58b5a = cache_frame_664a3194f205b3d21858002a04f58b5a;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_664a3194f205b3d21858002a04f58b5a );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_664a3194f205b3d21858002a04f58b5a ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_connection );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 273;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_recv );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 273;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_args );
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_1 = par_kwargs;
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


            exception_lineno = 273;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert( var_data == NULL );
        var_data = tmp_assign_source_1;
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
    PRESERVE_FRAME_EXCEPTION( frame_664a3194f205b3d21858002a04f58b5a );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_664a3194f205b3d21858002a04f58b5a, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_664a3194f205b3d21858002a04f58b5a, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;

            exception_lineno = 274;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_1;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_SSL );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_SysCallError );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 274;
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
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = EXC_VALUE(PyThreadState_GET());
            assert( var_e == NULL );
            Py_INCREF( tmp_assign_source_2 );
            var_e = tmp_assign_source_2;
        }
        {
            nuitka_bool tmp_condition_result_2;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_attribute_value_1;
            int tmp_truth_name_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_suppress_ragged_eofs );
            if ( tmp_attribute_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 275;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_1 );

                exception_lineno = 275;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_attribute_value_1 );
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
            CHECK_OBJECT( var_e );
            tmp_source_name_6 = var_e;
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_args );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 275;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = const_tuple_int_neg_1_str_digest_fa91b370bf4aa8601b20ad022c04c7f5_tuple;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 275;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_2 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_condition_result_2 = tmp_and_left_value_1;
            and_end_1:;
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            tmp_return_value = const_str_empty;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_called_name_1;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_str_arg_1;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_SocketError );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketError );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "SocketError" );
                    exception_tb = NULL;

                    exception_lineno = 278;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_1 = tmp_mvar_value_2;
                CHECK_OBJECT( var_e );
                tmp_str_arg_1 = var_e;
                tmp_args_element_name_1 = PyObject_Str( tmp_str_arg_1 );
                if ( tmp_args_element_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 278;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                frame_664a3194f205b3d21858002a04f58b5a->m_frame.f_lineno = 278;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_args_element_name_1 );
                if ( tmp_raise_type_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 278;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_1;
                exception_lineno = 278;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            branch_end_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_7;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_3;
            tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "OpenSSL" );
                exception_tb = NULL;

                exception_lineno = 279;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_3;
            tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_SSL );
            if ( tmp_source_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 279;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ZeroReturnError );
            Py_DECREF( tmp_source_name_7 );
            if ( tmp_compexpr_right_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 279;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 279;
                type_description_1 = "ooooo";
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
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_source_name_9;
                PyObject *tmp_source_name_10;
                PyObject *tmp_source_name_11;
                PyObject *tmp_mvar_value_4;
                CHECK_OBJECT( par_self );
                tmp_source_name_9 = par_self;
                tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_connection );
                if ( tmp_called_instance_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 280;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                frame_664a3194f205b3d21858002a04f58b5a->m_frame.f_lineno = 280;
                tmp_compexpr_left_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_shutdown );
                Py_DECREF( tmp_called_instance_1 );
                if ( tmp_compexpr_left_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 280;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
                }

                if ( tmp_mvar_value_4 == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_4 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "OpenSSL" );
                    exception_tb = NULL;

                    exception_lineno = 280;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_11 = tmp_mvar_value_4;
                tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_SSL );
                if ( tmp_source_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_4 );

                    exception_lineno = 280;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_RECEIVED_SHUTDOWN );
                Py_DECREF( tmp_source_name_10 );
                if ( tmp_compexpr_right_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_4 );

                    exception_lineno = 280;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                Py_DECREF( tmp_compexpr_left_4 );
                Py_DECREF( tmp_compexpr_right_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 280;
                    type_description_1 = "ooooo";
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
                tmp_return_value = const_str_empty;
                Py_INCREF( tmp_return_value );
                goto frame_return_exit_1;
                goto branch_end_4;
                branch_no_4:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 283;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_664a3194f205b3d21858002a04f58b5a->m_frame) frame_664a3194f205b3d21858002a04f58b5a->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
                branch_end_4:;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                PyObject *tmp_source_name_12;
                PyObject *tmp_source_name_13;
                PyObject *tmp_mvar_value_5;
                tmp_compexpr_left_5 = EXC_TYPE(PyThreadState_GET());
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "OpenSSL" );
                    exception_tb = NULL;

                    exception_lineno = 284;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_13 = tmp_mvar_value_5;
                tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_SSL );
                if ( tmp_source_name_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 284;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_WantReadError );
                Py_DECREF( tmp_source_name_12 );
                if ( tmp_compexpr_right_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 284;
                    type_description_1 = "ooooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                Py_DECREF( tmp_compexpr_right_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 284;
                    type_description_1 = "ooooo";
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
                    nuitka_bool tmp_condition_result_6;
                    PyObject *tmp_operand_name_1;
                    PyObject *tmp_called_name_2;
                    PyObject *tmp_source_name_14;
                    PyObject *tmp_mvar_value_6;
                    PyObject *tmp_args_element_name_2;
                    PyObject *tmp_source_name_15;
                    PyObject *tmp_args_element_name_3;
                    PyObject *tmp_called_instance_2;
                    PyObject *tmp_source_name_16;
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

                    if (unlikely( tmp_mvar_value_6 == NULL ))
                    {
                        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
                    }

                    if ( tmp_mvar_value_6 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "util" );
                        exception_tb = NULL;

                        exception_lineno = 285;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_14 = tmp_mvar_value_6;
                    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_wait_for_read );
                    if ( tmp_called_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 285;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_source_name_15 = par_self;
                    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_socket );
                    if ( tmp_args_element_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_2 );

                        exception_lineno = 285;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_source_name_16 = par_self;
                    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_socket );
                    if ( tmp_called_instance_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_2 );
                        Py_DECREF( tmp_args_element_name_2 );

                        exception_lineno = 285;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_664a3194f205b3d21858002a04f58b5a->m_frame.f_lineno = 285;
                    tmp_args_element_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_gettimeout );
                    Py_DECREF( tmp_called_instance_2 );
                    if ( tmp_args_element_name_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_2 );
                        Py_DECREF( tmp_args_element_name_2 );

                        exception_lineno = 285;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    frame_664a3194f205b3d21858002a04f58b5a->m_frame.f_lineno = 285;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                        tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                    }

                    Py_DECREF( tmp_called_name_2 );
                    Py_DECREF( tmp_args_element_name_2 );
                    Py_DECREF( tmp_args_element_name_3 );
                    if ( tmp_operand_name_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 285;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
                    Py_DECREF( tmp_operand_name_1 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 285;
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_6 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                        PyObject *tmp_raise_type_2;
                        PyObject *tmp_called_name_3;
                        PyObject *tmp_mvar_value_7;
                        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_timeout );

                        if (unlikely( tmp_mvar_value_7 == NULL ))
                        {
                            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timeout );
                        }

                        if ( tmp_mvar_value_7 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyString_FromFormat( "global name '%s' is not defined", "timeout" );
                            exception_tb = NULL;

                            exception_lineno = 286;
                            type_description_1 = "ooooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_name_3 = tmp_mvar_value_7;
                        frame_664a3194f205b3d21858002a04f58b5a->m_frame.f_lineno = 286;
                        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_digest_7e30f7b167f6016bf2ebb297c1892f81_tuple, 0 ) );

                        if ( tmp_raise_type_2 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 286;
                            type_description_1 = "ooooo";
                            goto frame_exception_exit_1;
                        }
                        exception_type = tmp_raise_type_2;
                        exception_lineno = 286;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "ooooo";
                        goto frame_exception_exit_1;
                    }
                    goto branch_end_6;
                    branch_no_6:;
                    {
                        PyObject *tmp_dircall_arg1_2;
                        PyObject *tmp_source_name_17;
                        PyObject *tmp_dircall_arg2_2;
                        PyObject *tmp_dircall_arg3_2;
                        CHECK_OBJECT( par_self );
                        tmp_source_name_17 = par_self;
                        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_recv );
                        if ( tmp_dircall_arg1_2 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 288;
                            type_description_1 = "ooooo";
                            goto frame_exception_exit_1;
                        }
                        CHECK_OBJECT( par_args );
                        tmp_dircall_arg2_2 = par_args;
                        CHECK_OBJECT( par_kwargs );
                        tmp_dircall_arg3_2 = par_kwargs;
                        Py_INCREF( tmp_dircall_arg2_2 );
                        Py_INCREF( tmp_dircall_arg3_2 );

                        {
                            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
                            tmp_return_value = impl___internal__$$$function_3_complex_call_helper_star_list_star_dict( dir_call_args );
                        }
                        if ( tmp_return_value == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 288;
                            type_description_1 = "ooooo";
                            goto frame_exception_exit_1;
                        }
                        goto frame_return_exit_1;
                    }
                    branch_end_6:;
                }
                goto branch_end_5;
                branch_no_5:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 272;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_664a3194f205b3d21858002a04f58b5a->m_frame) frame_664a3194f205b3d21858002a04f58b5a->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "ooooo";
                goto frame_exception_exit_1;
                branch_end_5:;
            }
            branch_end_3:;
        }
        branch_end_1:;
    }
    // End of try:
    try_end_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_664a3194f205b3d21858002a04f58b5a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_664a3194f205b3d21858002a04f58b5a );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_664a3194f205b3d21858002a04f58b5a );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_664a3194f205b3d21858002a04f58b5a, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_664a3194f205b3d21858002a04f58b5a->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_664a3194f205b3d21858002a04f58b5a, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_664a3194f205b3d21858002a04f58b5a,
        type_description_1,
        par_self,
        par_args,
        par_kwargs,
        var_e,
        var_data
    );


    // Release cached frame.
    if ( frame_664a3194f205b3d21858002a04f58b5a == cache_frame_664a3194f205b3d21858002a04f58b5a )
    {
        Py_DECREF( frame_664a3194f205b3d21858002a04f58b5a );
    }
    cache_frame_664a3194f205b3d21858002a04f58b5a = NULL;

    assertFrameObject( frame_664a3194f205b3d21858002a04f58b5a );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( var_data );
    tmp_return_value = var_data;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_9_recv );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_e );
    var_e = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_data );
    var_data = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

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

    Py_XDECREF( var_e );
    var_e = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_9_recv );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_10_recv_into( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kwargs = python_pars[ 2 ];
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_9e1e0e3e5f1a00b34156120a41cbad7c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_9e1e0e3e5f1a00b34156120a41cbad7c = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9e1e0e3e5f1a00b34156120a41cbad7c, codeobj_9e1e0e3e5f1a00b34156120a41cbad7c, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9e1e0e3e5f1a00b34156120a41cbad7c = cache_frame_9e1e0e3e5f1a00b34156120a41cbad7c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9e1e0e3e5f1a00b34156120a41cbad7c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9e1e0e3e5f1a00b34156120a41cbad7c ) == 2 ); // Frame stack

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_dircall_arg3_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_connection );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 294;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_recv_into );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_dircall_arg1_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 294;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_args );
        tmp_dircall_arg2_1 = par_args;
        CHECK_OBJECT( par_kwargs );
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF( tmp_dircall_arg2_1 );
        Py_INCREF( tmp_dircall_arg3_1 );

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___internal__$$$function_3_complex_call_helper_star_list_star_dict( dir_call_args );
        }
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 294;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_10_recv_into );
    return NULL;
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
    PRESERVE_FRAME_EXCEPTION( frame_9e1e0e3e5f1a00b34156120a41cbad7c );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_9e1e0e3e5f1a00b34156120a41cbad7c, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_9e1e0e3e5f1a00b34156120a41cbad7c, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;

            exception_lineno = 295;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_1;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_SSL );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 295;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_SysCallError );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 295;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 295;
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
            PyObject *tmp_assign_source_1;
            tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
            assert( var_e == NULL );
            Py_INCREF( tmp_assign_source_1 );
            var_e = tmp_assign_source_1;
        }
        {
            nuitka_bool tmp_condition_result_2;
            int tmp_and_left_truth_1;
            nuitka_bool tmp_and_left_value_1;
            nuitka_bool tmp_and_right_value_1;
            PyObject *tmp_source_name_5;
            PyObject *tmp_attribute_value_1;
            int tmp_truth_name_1;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_6;
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_attribute_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_suppress_ragged_eofs );
            if ( tmp_attribute_value_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 296;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE( tmp_attribute_value_1 );
            if ( tmp_truth_name_1 == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_attribute_value_1 );

                exception_lineno = 296;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_and_left_value_1 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            Py_DECREF( tmp_attribute_value_1 );
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
            CHECK_OBJECT( var_e );
            tmp_source_name_6 = var_e;
            tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_args );
            if ( tmp_compexpr_left_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 296;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = const_tuple_int_neg_1_str_digest_fa91b370bf4aa8601b20ad022c04c7f5_tuple;
            tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_left_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 296;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_and_right_value_1 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            tmp_condition_result_2 = tmp_and_right_value_1;
            goto and_end_1;
            and_left_1:;
            tmp_condition_result_2 = tmp_and_left_value_1;
            and_end_1:;
            if ( tmp_condition_result_2 == NUITKA_BOOL_TRUE )
            {
                goto branch_yes_2;
            }
            else
            {
                goto branch_no_2;
            }
            branch_yes_2:;
            tmp_return_value = const_int_0;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            goto branch_end_2;
            branch_no_2:;
            {
                PyObject *tmp_raise_type_1;
                PyObject *tmp_called_name_1;
                PyObject *tmp_mvar_value_2;
                PyObject *tmp_args_element_name_1;
                PyObject *tmp_str_arg_1;
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_SocketError );

                if (unlikely( tmp_mvar_value_2 == NULL ))
                {
                    tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketError );
                }

                if ( tmp_mvar_value_2 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "SocketError" );
                    exception_tb = NULL;

                    exception_lineno = 299;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_1 = tmp_mvar_value_2;
                CHECK_OBJECT( var_e );
                tmp_str_arg_1 = var_e;
                tmp_args_element_name_1 = PyObject_Str( tmp_str_arg_1 );
                if ( tmp_args_element_name_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 299;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                frame_9e1e0e3e5f1a00b34156120a41cbad7c->m_frame.f_lineno = 299;
                {
                    PyObject *call_args[] = { tmp_args_element_name_1 };
                    tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
                }

                Py_DECREF( tmp_args_element_name_1 );
                if ( tmp_raise_type_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 299;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_1;
                exception_lineno = 299;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            branch_end_2:;
        }
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_7;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_3;
            tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

            if (unlikely( tmp_mvar_value_3 == NULL ))
            {
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
            }

            if ( tmp_mvar_value_3 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "OpenSSL" );
                exception_tb = NULL;

                exception_lineno = 300;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_3;
            tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_SSL );
            if ( tmp_source_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 300;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ZeroReturnError );
            Py_DECREF( tmp_source_name_7 );
            if ( tmp_compexpr_right_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 300;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 300;
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
                PyObject *tmp_assign_source_2;
                tmp_assign_source_2 = EXC_VALUE(PyThreadState_GET());
                assert( var_e == NULL );
                Py_INCREF( tmp_assign_source_2 );
                var_e = tmp_assign_source_2;
            }
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_compexpr_left_4;
                PyObject *tmp_compexpr_right_4;
                PyObject *tmp_called_instance_1;
                PyObject *tmp_source_name_9;
                PyObject *tmp_source_name_10;
                PyObject *tmp_source_name_11;
                PyObject *tmp_mvar_value_4;
                CHECK_OBJECT( par_self );
                tmp_source_name_9 = par_self;
                tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_connection );
                if ( tmp_called_instance_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 301;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                frame_9e1e0e3e5f1a00b34156120a41cbad7c->m_frame.f_lineno = 301;
                tmp_compexpr_left_4 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_shutdown );
                Py_DECREF( tmp_called_instance_1 );
                if ( tmp_compexpr_left_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 301;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

                if (unlikely( tmp_mvar_value_4 == NULL ))
                {
                    tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
                }

                if ( tmp_mvar_value_4 == NULL )
                {
                    Py_DECREF( tmp_compexpr_left_4 );
                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "OpenSSL" );
                    exception_tb = NULL;

                    exception_lineno = 301;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_11 = tmp_mvar_value_4;
                tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_SSL );
                if ( tmp_source_name_10 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_4 );

                    exception_lineno = 301;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_RECEIVED_SHUTDOWN );
                Py_DECREF( tmp_source_name_10 );
                if ( tmp_compexpr_right_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_compexpr_left_4 );

                    exception_lineno = 301;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = RICH_COMPARE_BOOL_EQ_OBJECT_OBJECT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
                Py_DECREF( tmp_compexpr_left_4 );
                Py_DECREF( tmp_compexpr_right_4 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 301;
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
                tmp_return_value = const_int_0;
                Py_INCREF( tmp_return_value );
                goto frame_return_exit_1;
                goto branch_end_4;
                branch_no_4:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 304;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_9e1e0e3e5f1a00b34156120a41cbad7c->m_frame) frame_9e1e0e3e5f1a00b34156120a41cbad7c->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
                branch_end_4:;
            }
            goto branch_end_3;
            branch_no_3:;
            {
                nuitka_bool tmp_condition_result_5;
                PyObject *tmp_compexpr_left_5;
                PyObject *tmp_compexpr_right_5;
                PyObject *tmp_source_name_12;
                PyObject *tmp_source_name_13;
                PyObject *tmp_mvar_value_5;
                tmp_compexpr_left_5 = EXC_TYPE(PyThreadState_GET());
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "OpenSSL" );
                    exception_tb = NULL;

                    exception_lineno = 305;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_13 = tmp_mvar_value_5;
                tmp_source_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_SSL );
                if ( tmp_source_name_12 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 305;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_compexpr_right_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_WantReadError );
                Py_DECREF( tmp_source_name_12 );
                if ( tmp_compexpr_right_5 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 305;
                    type_description_1 = "oooo";
                    goto frame_exception_exit_1;
                }
                tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_5, tmp_compexpr_right_5 );
                Py_DECREF( tmp_compexpr_right_5 );
                if ( tmp_res == -1 )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 305;
                    type_description_1 = "oooo";
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
                    nuitka_bool tmp_condition_result_6;
                    PyObject *tmp_operand_name_1;
                    PyObject *tmp_called_name_2;
                    PyObject *tmp_source_name_14;
                    PyObject *tmp_mvar_value_6;
                    PyObject *tmp_args_element_name_2;
                    PyObject *tmp_source_name_15;
                    PyObject *tmp_args_element_name_3;
                    PyObject *tmp_called_instance_2;
                    PyObject *tmp_source_name_16;
                    tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

                    if (unlikely( tmp_mvar_value_6 == NULL ))
                    {
                        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
                    }

                    if ( tmp_mvar_value_6 == NULL )
                    {

                        exception_type = PyExc_NameError;
                        Py_INCREF( exception_type );
                        exception_value = PyString_FromFormat( "global name '%s' is not defined", "util" );
                        exception_tb = NULL;

                        exception_lineno = 306;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }

                    tmp_source_name_14 = tmp_mvar_value_6;
                    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_wait_for_read );
                    if ( tmp_called_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 306;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_source_name_15 = par_self;
                    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_socket );
                    if ( tmp_args_element_name_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_2 );

                        exception_lineno = 306;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    CHECK_OBJECT( par_self );
                    tmp_source_name_16 = par_self;
                    tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_socket );
                    if ( tmp_called_instance_2 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_2 );
                        Py_DECREF( tmp_args_element_name_2 );

                        exception_lineno = 306;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    frame_9e1e0e3e5f1a00b34156120a41cbad7c->m_frame.f_lineno = 306;
                    tmp_args_element_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_gettimeout );
                    Py_DECREF( tmp_called_instance_2 );
                    if ( tmp_args_element_name_3 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                        Py_DECREF( tmp_called_name_2 );
                        Py_DECREF( tmp_args_element_name_2 );

                        exception_lineno = 306;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    frame_9e1e0e3e5f1a00b34156120a41cbad7c->m_frame.f_lineno = 306;
                    {
                        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                        tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
                    }

                    Py_DECREF( tmp_called_name_2 );
                    Py_DECREF( tmp_args_element_name_2 );
                    Py_DECREF( tmp_args_element_name_3 );
                    if ( tmp_operand_name_1 == NULL )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 306;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
                    Py_DECREF( tmp_operand_name_1 );
                    if ( tmp_res == -1 )
                    {
                        assert( ERROR_OCCURRED() );

                        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                        exception_lineno = 306;
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    tmp_condition_result_6 = ( tmp_res == 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
                        PyObject *tmp_raise_type_2;
                        PyObject *tmp_called_name_3;
                        PyObject *tmp_mvar_value_7;
                        tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_timeout );

                        if (unlikely( tmp_mvar_value_7 == NULL ))
                        {
                            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timeout );
                        }

                        if ( tmp_mvar_value_7 == NULL )
                        {

                            exception_type = PyExc_NameError;
                            Py_INCREF( exception_type );
                            exception_value = PyString_FromFormat( "global name '%s' is not defined", "timeout" );
                            exception_tb = NULL;

                            exception_lineno = 307;
                            type_description_1 = "oooo";
                            goto frame_exception_exit_1;
                        }

                        tmp_called_name_3 = tmp_mvar_value_7;
                        frame_9e1e0e3e5f1a00b34156120a41cbad7c->m_frame.f_lineno = 307;
                        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_digest_7e30f7b167f6016bf2ebb297c1892f81_tuple, 0 ) );

                        if ( tmp_raise_type_2 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 307;
                            type_description_1 = "oooo";
                            goto frame_exception_exit_1;
                        }
                        exception_type = tmp_raise_type_2;
                        exception_lineno = 307;
                        RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                        type_description_1 = "oooo";
                        goto frame_exception_exit_1;
                    }
                    goto branch_end_6;
                    branch_no_6:;
                    {
                        PyObject *tmp_dircall_arg1_2;
                        PyObject *tmp_source_name_17;
                        PyObject *tmp_dircall_arg2_2;
                        PyObject *tmp_dircall_arg3_2;
                        CHECK_OBJECT( par_self );
                        tmp_source_name_17 = par_self;
                        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_recv_into );
                        if ( tmp_dircall_arg1_2 == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 309;
                            type_description_1 = "oooo";
                            goto frame_exception_exit_1;
                        }
                        CHECK_OBJECT( par_args );
                        tmp_dircall_arg2_2 = par_args;
                        CHECK_OBJECT( par_kwargs );
                        tmp_dircall_arg3_2 = par_kwargs;
                        Py_INCREF( tmp_dircall_arg2_2 );
                        Py_INCREF( tmp_dircall_arg3_2 );

                        {
                            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2, tmp_dircall_arg3_2};
                            tmp_return_value = impl___internal__$$$function_3_complex_call_helper_star_list_star_dict( dir_call_args );
                        }
                        if ( tmp_return_value == NULL )
                        {
                            assert( ERROR_OCCURRED() );

                            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                            exception_lineno = 309;
                            type_description_1 = "oooo";
                            goto frame_exception_exit_1;
                        }
                        goto frame_return_exit_1;
                    }
                    branch_end_6:;
                }
                goto branch_end_5;
                branch_no_5:;
                tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
                if (unlikely( tmp_result == false ))
                {
                    exception_lineno = 293;
                }

                if (exception_tb && exception_tb->tb_frame == &frame_9e1e0e3e5f1a00b34156120a41cbad7c->m_frame) frame_9e1e0e3e5f1a00b34156120a41cbad7c->m_frame.f_lineno = exception_tb->tb_lineno;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
                branch_end_5:;
            }
            branch_end_3:;
        }
        branch_end_1:;
    }
    // End of try:

#if 1
    RESTORE_FRAME_EXCEPTION( frame_9e1e0e3e5f1a00b34156120a41cbad7c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_9e1e0e3e5f1a00b34156120a41cbad7c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_9e1e0e3e5f1a00b34156120a41cbad7c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9e1e0e3e5f1a00b34156120a41cbad7c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9e1e0e3e5f1a00b34156120a41cbad7c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9e1e0e3e5f1a00b34156120a41cbad7c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9e1e0e3e5f1a00b34156120a41cbad7c,
        type_description_1,
        par_self,
        par_args,
        par_kwargs,
        var_e
    );


    // Release cached frame.
    if ( frame_9e1e0e3e5f1a00b34156120a41cbad7c == cache_frame_9e1e0e3e5f1a00b34156120a41cbad7c )
    {
        Py_DECREF( frame_9e1e0e3e5f1a00b34156120a41cbad7c );
    }
    cache_frame_9e1e0e3e5f1a00b34156120a41cbad7c = NULL;

    assertFrameObject( frame_9e1e0e3e5f1a00b34156120a41cbad7c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_10_recv_into );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    CHECK_OBJECT( (PyObject *)par_kwargs );
    Py_DECREF( par_kwargs );
    par_kwargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_10_recv_into );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_11_settimeout( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_timeout = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_62dcc2c532e0185f3bf04af9af7f4cc2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_62dcc2c532e0185f3bf04af9af7f4cc2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_62dcc2c532e0185f3bf04af9af7f4cc2, codeobj_62dcc2c532e0185f3bf04af9af7f4cc2, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *) );
    frame_62dcc2c532e0185f3bf04af9af7f4cc2 = cache_frame_62dcc2c532e0185f3bf04af9af7f4cc2;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_62dcc2c532e0185f3bf04af9af7f4cc2 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_62dcc2c532e0185f3bf04af9af7f4cc2 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_socket );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_timeout );
        tmp_args_element_name_1 = par_timeout;
        frame_62dcc2c532e0185f3bf04af9af7f4cc2->m_frame.f_lineno = 312;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_settimeout, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 312;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_62dcc2c532e0185f3bf04af9af7f4cc2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_62dcc2c532e0185f3bf04af9af7f4cc2 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_62dcc2c532e0185f3bf04af9af7f4cc2 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_62dcc2c532e0185f3bf04af9af7f4cc2, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_62dcc2c532e0185f3bf04af9af7f4cc2->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_62dcc2c532e0185f3bf04af9af7f4cc2, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_62dcc2c532e0185f3bf04af9af7f4cc2,
        type_description_1,
        par_self,
        par_timeout
    );


    // Release cached frame.
    if ( frame_62dcc2c532e0185f3bf04af9af7f4cc2 == cache_frame_62dcc2c532e0185f3bf04af9af7f4cc2 )
    {
        Py_DECREF( frame_62dcc2c532e0185f3bf04af9af7f4cc2 );
    }
    cache_frame_62dcc2c532e0185f3bf04af9af7f4cc2 = NULL;

    assertFrameObject( frame_62dcc2c532e0185f3bf04af9af7f4cc2 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_11_settimeout );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

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

    CHECK_OBJECT( (PyObject *)par_timeout );
    Py_DECREF( par_timeout );
    par_timeout = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_11_settimeout );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_12__send_until_done( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_a50bd93ba671fcb71afd591313270100;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_a50bd93ba671fcb71afd591313270100 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a50bd93ba671fcb71afd591313270100, codeobj_a50bd93ba671fcb71afd591313270100, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_a50bd93ba671fcb71afd591313270100 = cache_frame_a50bd93ba671fcb71afd591313270100;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a50bd93ba671fcb71afd591313270100 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a50bd93ba671fcb71afd591313270100 ) == 2 ); // Frame stack

    // Framed code:
    loop_start_1:;
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_connection );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT( par_data );
        tmp_args_element_name_1 = par_data;
        frame_a50bd93ba671fcb71afd591313270100->m_frame.f_lineno = 317;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_return_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_send, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 317;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_12__send_until_done );
    return NULL;
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
    PRESERVE_FRAME_EXCEPTION( frame_a50bd93ba671fcb71afd591313270100 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_a50bd93ba671fcb71afd591313270100, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_a50bd93ba671fcb71afd591313270100, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_1;
        tmp_compexpr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;

            exception_lineno = 318;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_1;
        tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_SSL );
        if ( tmp_source_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 318;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_WantWriteError );
        Py_DECREF( tmp_source_name_2 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 318;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 318;
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
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_source_name_5;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_6;
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
            }

            if ( tmp_mvar_value_2 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "util" );
                exception_tb = NULL;

                exception_lineno = 319;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_2;
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_wait_for_write );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 319;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_socket );
            if ( tmp_args_element_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 319;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_self );
            tmp_source_name_6 = par_self;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_socket );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_2 );

                exception_lineno = 319;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_a50bd93ba671fcb71afd591313270100->m_frame.f_lineno = 319;
            tmp_args_element_name_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_gettimeout );
            Py_DECREF( tmp_called_instance_2 );
            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );
                Py_DECREF( tmp_args_element_name_2 );

                exception_lineno = 319;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            frame_a50bd93ba671fcb71afd591313270100->m_frame.f_lineno = 319;
            {
                PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_2 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 319;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 319;
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_called_name_2;
                PyObject *tmp_mvar_value_3;
                tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_timeout );

                if (unlikely( tmp_mvar_value_3 == NULL ))
                {
                    tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timeout );
                }

                if ( tmp_mvar_value_3 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "timeout" );
                    exception_tb = NULL;

                    exception_lineno = 320;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_2 = tmp_mvar_value_3;
                frame_a50bd93ba671fcb71afd591313270100->m_frame.f_lineno = 320;
                tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
                if ( tmp_raise_type_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 320;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_1;
                exception_lineno = 320;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            branch_no_2:;
        }
        goto loop_start_1;
        goto branch_end_1;
        branch_no_1:;
        {
            nuitka_bool tmp_condition_result_3;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_7;
            PyObject *tmp_source_name_8;
            PyObject *tmp_mvar_value_4;
            tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "OpenSSL" );
                exception_tb = NULL;

                exception_lineno = 322;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_8 = tmp_mvar_value_4;
            tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_SSL );
            if ( tmp_source_name_7 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 322;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_SysCallError );
            Py_DECREF( tmp_source_name_7 );
            if ( tmp_compexpr_right_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 322;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 322;
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
                PyObject *tmp_assign_source_1;
                tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
                assert( var_e == NULL );
                Py_INCREF( tmp_assign_source_1 );
                var_e = tmp_assign_source_1;
            }
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_5;
                PyObject *tmp_args_element_name_4;
                PyObject *tmp_str_arg_1;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_SocketError );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SocketError );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "SocketError" );
                    exception_tb = NULL;

                    exception_lineno = 323;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_3 = tmp_mvar_value_5;
                CHECK_OBJECT( var_e );
                tmp_str_arg_1 = var_e;
                tmp_args_element_name_4 = PyObject_Str( tmp_str_arg_1 );
                if ( tmp_args_element_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 323;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                frame_a50bd93ba671fcb71afd591313270100->m_frame.f_lineno = 323;
                {
                    PyObject *call_args[] = { tmp_args_element_name_4 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
                }

                Py_DECREF( tmp_args_element_name_4 );
                if ( tmp_raise_type_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 323;
                    type_description_1 = "ooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_2;
                exception_lineno = 323;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto branch_end_3;
            branch_no_3:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 316;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_a50bd93ba671fcb71afd591313270100->m_frame) frame_a50bd93ba671fcb71afd591313270100->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
            branch_end_3:;
        }
        branch_end_1:;
    }
    // End of try:
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 315;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_a50bd93ba671fcb71afd591313270100 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_a50bd93ba671fcb71afd591313270100 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_a50bd93ba671fcb71afd591313270100 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a50bd93ba671fcb71afd591313270100, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a50bd93ba671fcb71afd591313270100->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a50bd93ba671fcb71afd591313270100, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a50bd93ba671fcb71afd591313270100,
        type_description_1,
        par_self,
        par_data,
        var_e
    );


    // Release cached frame.
    if ( frame_a50bd93ba671fcb71afd591313270100 == cache_frame_a50bd93ba671fcb71afd591313270100 )
    {
        Py_DECREF( frame_a50bd93ba671fcb71afd591313270100 );
    }
    cache_frame_a50bd93ba671fcb71afd591313270100 = NULL;

    assertFrameObject( frame_a50bd93ba671fcb71afd591313270100 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_12__send_until_done );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

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

    Py_XDECREF( var_e );
    var_e = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_12__send_until_done );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_13_sendall( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_data = python_pars[ 1 ];
    PyObject *var_total_sent = NULL;
    PyObject *var_sent = NULL;
    struct Nuitka_FrameObject *frame_ee4abade8c89584dfb2069f1eb025b15;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_ee4abade8c89584dfb2069f1eb025b15 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = const_int_0;
        assert( var_total_sent == NULL );
        Py_INCREF( tmp_assign_source_1 );
        var_total_sent = tmp_assign_source_1;
    }
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_ee4abade8c89584dfb2069f1eb025b15, codeobj_ee4abade8c89584dfb2069f1eb025b15, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_ee4abade8c89584dfb2069f1eb025b15 = cache_frame_ee4abade8c89584dfb2069f1eb025b15;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_ee4abade8c89584dfb2069f1eb025b15 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_ee4abade8c89584dfb2069f1eb025b15 ) == 2 ); // Frame stack

    // Framed code:
    loop_start_1:;
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT( var_total_sent );
        tmp_compexpr_left_1 = var_total_sent;
        CHECK_OBJECT( par_data );
        tmp_len_arg_1 = par_data;
        tmp_compexpr_right_1 = BUILTIN_LEN( tmp_len_arg_1 );
        if ( tmp_compexpr_right_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = RICH_COMPARE_LT_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_right_1 );
        if ( tmp_operand_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        Py_DECREF( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 327;
            type_description_1 = "oooo";
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
        goto loop_end_1;
        branch_no_1:;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_slice_source_1;
        PyObject *tmp_slice_lower_1;
        PyObject *tmp_slice_upper_1;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__send_until_done );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_data );
        tmp_slice_source_1 = par_data;
        CHECK_OBJECT( var_total_sent );
        tmp_slice_lower_1 = var_total_sent;
        CHECK_OBJECT( var_total_sent );
        tmp_left_name_1 = var_total_sent;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_SSL_WRITE_BLOCKSIZE );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_SSL_WRITE_BLOCKSIZE );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "SSL_WRITE_BLOCKSIZE" );
            exception_tb = NULL;

            exception_lineno = 328;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_right_name_1 = tmp_mvar_value_1;
        tmp_slice_upper_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_slice_upper_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 328;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_name_1 = LOOKUP_SLICE( tmp_slice_source_1, tmp_slice_lower_1, tmp_slice_upper_1 );
        Py_DECREF( tmp_slice_upper_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 328;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_ee4abade8c89584dfb2069f1eb025b15->m_frame.f_lineno = 328;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 328;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_sent;
            var_sent = tmp_assign_source_2;
            Py_XDECREF( old );
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_left_name_2;
        PyObject *tmp_right_name_2;
        CHECK_OBJECT( var_total_sent );
        tmp_left_name_2 = var_total_sent;
        CHECK_OBJECT( var_sent );
        tmp_right_name_2 = var_sent;
        tmp_result = BINARY_OPERATION_ADD_OBJECT_OBJECT_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 329;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_left_name_2;
        var_total_sent = tmp_assign_source_3;

    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 327;
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ee4abade8c89584dfb2069f1eb025b15 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_ee4abade8c89584dfb2069f1eb025b15 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_ee4abade8c89584dfb2069f1eb025b15, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_ee4abade8c89584dfb2069f1eb025b15->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_ee4abade8c89584dfb2069f1eb025b15, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_ee4abade8c89584dfb2069f1eb025b15,
        type_description_1,
        par_self,
        par_data,
        var_total_sent,
        var_sent
    );


    // Release cached frame.
    if ( frame_ee4abade8c89584dfb2069f1eb025b15 == cache_frame_ee4abade8c89584dfb2069f1eb025b15 )
    {
        Py_DECREF( frame_ee4abade8c89584dfb2069f1eb025b15 );
    }
    cache_frame_ee4abade8c89584dfb2069f1eb025b15 = NULL;

    assertFrameObject( frame_ee4abade8c89584dfb2069f1eb025b15 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_13_sendall );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_total_sent );
    Py_DECREF( var_total_sent );
    var_total_sent = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    Py_XDECREF( var_sent );
    var_sent = NULL;

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

    CHECK_OBJECT( (PyObject *)var_total_sent );
    Py_DECREF( var_total_sent );
    var_total_sent = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_data );
    Py_DECREF( par_data );
    par_data = NULL;

    Py_XDECREF( var_sent );
    var_sent = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_13_sendall );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_14_shutdown( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_a894d6e34a45169354f7d4f30d954d2d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a894d6e34a45169354f7d4f30d954d2d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_a894d6e34a45169354f7d4f30d954d2d, codeobj_a894d6e34a45169354f7d4f30d954d2d, module_urllib3$contrib$pyopenssl, sizeof(void *) );
    frame_a894d6e34a45169354f7d4f30d954d2d = cache_frame_a894d6e34a45169354f7d4f30d954d2d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_a894d6e34a45169354f7d4f30d954d2d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_a894d6e34a45169354f7d4f30d954d2d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_connection );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 333;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a894d6e34a45169354f7d4f30d954d2d->m_frame.f_lineno = 333;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_shutdown );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 333;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a894d6e34a45169354f7d4f30d954d2d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_a894d6e34a45169354f7d4f30d954d2d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_a894d6e34a45169354f7d4f30d954d2d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_a894d6e34a45169354f7d4f30d954d2d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_a894d6e34a45169354f7d4f30d954d2d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_a894d6e34a45169354f7d4f30d954d2d,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_a894d6e34a45169354f7d4f30d954d2d == cache_frame_a894d6e34a45169354f7d4f30d954d2d )
    {
        Py_DECREF( frame_a894d6e34a45169354f7d4f30d954d2d );
    }
    cache_frame_a894d6e34a45169354f7d4f30d954d2d = NULL;

    assertFrameObject( frame_a894d6e34a45169354f7d4f30d954d2d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_14_shutdown );
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
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_14_shutdown );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_15_close( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_b5931f052ea4ee31ea48932a53a4cbe7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_b5931f052ea4ee31ea48932a53a4cbe7 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b5931f052ea4ee31ea48932a53a4cbe7, codeobj_b5931f052ea4ee31ea48932a53a4cbe7, module_urllib3$contrib$pyopenssl, sizeof(void *) );
    frame_b5931f052ea4ee31ea48932a53a4cbe7 = cache_frame_b5931f052ea4ee31ea48932a53a4cbe7;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b5931f052ea4ee31ea48932a53a4cbe7 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b5931f052ea4ee31ea48932a53a4cbe7 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__makefile_refs );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 336;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 336;
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
        // Tried code:
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            tmp_assattr_name_1 = Py_True;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__closed, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 338;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
        }
        {
            PyObject *tmp_called_instance_1;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_connection );
            if ( tmp_called_instance_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 339;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
            frame_b5931f052ea4ee31ea48932a53a4cbe7->m_frame.f_lineno = 339;
            tmp_return_value = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_close );
            Py_DECREF( tmp_called_instance_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 339;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
            goto frame_return_exit_1;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_15_close );
        return NULL;
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
        PRESERVE_FRAME_EXCEPTION( frame_b5931f052ea4ee31ea48932a53a4cbe7 );
        if ( exception_keeper_tb_1 == NULL )
        {
            exception_keeper_tb_1 = MAKE_TRACEBACK( frame_b5931f052ea4ee31ea48932a53a4cbe7, exception_keeper_lineno_1 );
        }
        else if ( exception_keeper_lineno_1 != 0 )
        {
            exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_b5931f052ea4ee31ea48932a53a4cbe7, exception_keeper_lineno_1 );
        }

        NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
        {
            nuitka_bool tmp_condition_result_2;
            PyObject *tmp_compexpr_left_2;
            PyObject *tmp_compexpr_right_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_source_name_4;
            PyObject *tmp_mvar_value_1;
            tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "OpenSSL" );
                exception_tb = NULL;

                exception_lineno = 340;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }

            tmp_source_name_4 = tmp_mvar_value_1;
            tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_SSL );
            if ( tmp_source_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 340;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_Error );
            Py_DECREF( tmp_source_name_3 );
            if ( tmp_compexpr_right_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 340;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
            Py_DECREF( tmp_compexpr_right_2 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 340;
                type_description_1 = "o";
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
            tmp_return_value = Py_None;
            Py_INCREF( tmp_return_value );
            goto frame_return_exit_1;
            goto branch_end_2;
            branch_no_2:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 337;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_b5931f052ea4ee31ea48932a53a4cbe7->m_frame) frame_b5931f052ea4ee31ea48932a53a4cbe7->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "o";
            goto frame_exception_exit_1;
            branch_end_2:;
        }
        // End of try:
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_source_name_5;
            CHECK_OBJECT( par_self );
            tmp_source_name_5 = par_self;
            tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__makefile_refs );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 343;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            assert( tmp_inplace_assign_attr_1__start == NULL );
            tmp_inplace_assign_attr_1__start = tmp_assign_source_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
            tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
            tmp_right_name_1 = const_int_pos_1;
            tmp_assign_source_2 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 343;
                type_description_1 = "o";
                goto try_except_handler_3;
            }
            assert( tmp_inplace_assign_attr_1__end == NULL );
            tmp_inplace_assign_attr_1__end = tmp_assign_source_2;
        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_2;
            PyObject *tmp_assattr_target_2;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
            tmp_assattr_name_2 = tmp_inplace_assign_attr_1__end;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_2 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__makefile_refs, tmp_assattr_name_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 343;
                type_description_1 = "o";
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

        branch_end_1:;
    }

#if 1
    RESTORE_FRAME_EXCEPTION( frame_b5931f052ea4ee31ea48932a53a4cbe7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_b5931f052ea4ee31ea48932a53a4cbe7 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_b5931f052ea4ee31ea48932a53a4cbe7 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b5931f052ea4ee31ea48932a53a4cbe7, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b5931f052ea4ee31ea48932a53a4cbe7->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b5931f052ea4ee31ea48932a53a4cbe7, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b5931f052ea4ee31ea48932a53a4cbe7,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_b5931f052ea4ee31ea48932a53a4cbe7 == cache_frame_b5931f052ea4ee31ea48932a53a4cbe7 )
    {
        Py_DECREF( frame_b5931f052ea4ee31ea48932a53a4cbe7 );
    }
    cache_frame_b5931f052ea4ee31ea48932a53a4cbe7 = NULL;

    assertFrameObject( frame_b5931f052ea4ee31ea48932a53a4cbe7 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_15_close );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_15_close );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_16_getpeercert( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_binary_form = python_pars[ 1 ];
    PyObject *var_x509 = NULL;
    struct Nuitka_FrameObject *frame_b3d11a822812571f0e5e19fe35c7fa7b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b3d11a822812571f0e5e19fe35c7fa7b = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_b3d11a822812571f0e5e19fe35c7fa7b, codeobj_b3d11a822812571f0e5e19fe35c7fa7b, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_b3d11a822812571f0e5e19fe35c7fa7b = cache_frame_b3d11a822812571f0e5e19fe35c7fa7b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_b3d11a822812571f0e5e19fe35c7fa7b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_b3d11a822812571f0e5e19fe35c7fa7b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_connection );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_b3d11a822812571f0e5e19fe35c7fa7b->m_frame.f_lineno = 346;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_peer_certificate );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 346;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( var_x509 == NULL );
        var_x509 = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_operand_name_1;
        CHECK_OBJECT( var_x509 );
        tmp_operand_name_1 = var_x509;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 348;
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
        CHECK_OBJECT( var_x509 );
        tmp_return_value = var_x509;
        Py_INCREF( tmp_return_value );
        goto frame_return_exit_1;
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT( par_binary_form );
        tmp_truth_name_1 = CHECK_IF_TRUE( par_binary_form );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 351;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_name_1;
            PyObject *tmp_source_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_source_name_4;
            PyObject *tmp_source_name_5;
            PyObject *tmp_mvar_value_2;
            PyObject *tmp_args_element_name_2;
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
            }

            if ( tmp_mvar_value_1 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "OpenSSL" );
                exception_tb = NULL;

                exception_lineno = 352;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_3 = tmp_mvar_value_1;
            tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_crypto );
            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 352;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dump_certificate );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 352;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

            if (unlikely( tmp_mvar_value_2 == NULL ))
            {
                tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
            }

            if ( tmp_mvar_value_2 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "OpenSSL" );
                exception_tb = NULL;

                exception_lineno = 353;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_5 = tmp_mvar_value_2;
            tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_crypto );
            if ( tmp_source_name_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 353;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_FILETYPE_ASN1 );
            Py_DECREF( tmp_source_name_4 );
            if ( tmp_args_element_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 353;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( var_x509 );
            tmp_args_element_name_2 = var_x509;
            frame_b3d11a822812571f0e5e19fe35c7fa7b->m_frame.f_lineno = 352;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
                tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            if ( tmp_return_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 352;
                type_description_1 = "ooo";
                goto frame_exception_exit_1;
            }
            goto frame_return_exit_1;
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_called_name_2;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_args_element_name_3;
        tmp_tuple_element_3 = const_str_plain_commonName;
        tmp_tuple_element_2 = PyTuple_New( 2 );
        Py_INCREF( tmp_tuple_element_3 );
        PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_3 );
        CHECK_OBJECT( var_x509 );
        tmp_called_instance_2 = var_x509;
        frame_b3d11a822812571f0e5e19fe35c7fa7b->m_frame.f_lineno = 358;
        tmp_source_name_6 = CALL_METHOD_NO_ARGS( tmp_called_instance_2, const_str_plain_get_subject );
        if ( tmp_source_name_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_tuple_element_2 );

            exception_lineno = 358;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_CN );
        Py_DECREF( tmp_source_name_6 );
        if ( tmp_tuple_element_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_tuple_element_2 );

            exception_lineno = 358;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        PyTuple_SET_ITEM( tmp_tuple_element_2, 1, tmp_tuple_element_3 );
        tmp_tuple_element_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
        tmp_dict_value_1 = PyTuple_New( 1 );
        PyTuple_SET_ITEM( tmp_dict_value_1, 0, tmp_tuple_element_1 );
        tmp_dict_key_1 = const_str_plain_subject;
        tmp_return_value = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        assert( !(tmp_res != 0) );
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_get_subj_alt_name );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_get_subj_alt_name );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_return_value );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "get_subj_alt_name" );
            exception_tb = NULL;

            exception_lineno = 360;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_2 = tmp_mvar_value_3;
        CHECK_OBJECT( var_x509 );
        tmp_args_element_name_3 = var_x509;
        frame_b3d11a822812571f0e5e19fe35c7fa7b->m_frame.f_lineno = 360;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_return_value );

            exception_lineno = 360;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = const_str_plain_subjectAltName;
        tmp_res = PyDict_SetItem( tmp_return_value, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        assert( !(tmp_res != 0) );
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b3d11a822812571f0e5e19fe35c7fa7b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_b3d11a822812571f0e5e19fe35c7fa7b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_b3d11a822812571f0e5e19fe35c7fa7b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_b3d11a822812571f0e5e19fe35c7fa7b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_b3d11a822812571f0e5e19fe35c7fa7b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_b3d11a822812571f0e5e19fe35c7fa7b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_b3d11a822812571f0e5e19fe35c7fa7b,
        type_description_1,
        par_self,
        par_binary_form,
        var_x509
    );


    // Release cached frame.
    if ( frame_b3d11a822812571f0e5e19fe35c7fa7b == cache_frame_b3d11a822812571f0e5e19fe35c7fa7b )
    {
        Py_DECREF( frame_b3d11a822812571f0e5e19fe35c7fa7b );
    }
    cache_frame_b3d11a822812571f0e5e19fe35c7fa7b = NULL;

    assertFrameObject( frame_b3d11a822812571f0e5e19fe35c7fa7b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_16_getpeercert );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var_x509 );
    Py_DECREF( var_x509 );
    var_x509 = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_binary_form );
    Py_DECREF( par_binary_form );
    par_binary_form = NULL;

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

    Py_XDECREF( var_x509 );
    var_x509 = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_binary_form );
    Py_DECREF( par_binary_form );
    par_binary_form = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_16_getpeercert );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_17__reuse( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_21c20163c94dc3c8dc94475ee2feab4c;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_21c20163c94dc3c8dc94475ee2feab4c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_21c20163c94dc3c8dc94475ee2feab4c, codeobj_21c20163c94dc3c8dc94475ee2feab4c, module_urllib3$contrib$pyopenssl, sizeof(void *) );
    frame_21c20163c94dc3c8dc94475ee2feab4c = cache_frame_21c20163c94dc3c8dc94475ee2feab4c;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_21c20163c94dc3c8dc94475ee2feab4c );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_21c20163c94dc3c8dc94475ee2feab4c ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__makefile_refs );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert( tmp_inplace_assign_attr_1__start == NULL );
        tmp_inplace_assign_attr_1__start = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_2 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__makefile_refs, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 364;
            type_description_1 = "o";
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

#if 0
    RESTORE_FRAME_EXCEPTION( frame_21c20163c94dc3c8dc94475ee2feab4c );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_21c20163c94dc3c8dc94475ee2feab4c );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_21c20163c94dc3c8dc94475ee2feab4c, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_21c20163c94dc3c8dc94475ee2feab4c->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_21c20163c94dc3c8dc94475ee2feab4c, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_21c20163c94dc3c8dc94475ee2feab4c,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_21c20163c94dc3c8dc94475ee2feab4c == cache_frame_21c20163c94dc3c8dc94475ee2feab4c )
    {
        Py_DECREF( frame_21c20163c94dc3c8dc94475ee2feab4c );
    }
    cache_frame_21c20163c94dc3c8dc94475ee2feab4c = NULL;

    assertFrameObject( frame_21c20163c94dc3c8dc94475ee2feab4c );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__end );
    Py_DECREF( tmp_inplace_assign_attr_1__end );
    tmp_inplace_assign_attr_1__end = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_attr_1__start );
    Py_DECREF( tmp_inplace_assign_attr_1__start );
    tmp_inplace_assign_attr_1__start = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_17__reuse );
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
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_17__reuse );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_18__drop( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_fde9466e947a523f97c62f7d8cdc26d9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_fde9466e947a523f97c62f7d8cdc26d9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_fde9466e947a523f97c62f7d8cdc26d9, codeobj_fde9466e947a523f97c62f7d8cdc26d9, module_urllib3$contrib$pyopenssl, sizeof(void *) );
    frame_fde9466e947a523f97c62f7d8cdc26d9 = cache_frame_fde9466e947a523f97c62f7d8cdc26d9;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_fde9466e947a523f97c62f7d8cdc26d9 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_fde9466e947a523f97c62f7d8cdc26d9 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__makefile_refs );
        if ( tmp_compexpr_left_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_1 = const_int_pos_1;
        tmp_res = RICH_COMPARE_BOOL_LT_OBJECT_INT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        Py_DECREF( tmp_compexpr_left_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 367;
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
            PyObject *tmp_called_instance_1;
            PyObject *tmp_call_result_1;
            CHECK_OBJECT( par_self );
            tmp_called_instance_1 = par_self;
            frame_fde9466e947a523f97c62f7d8cdc26d9->m_frame.f_lineno = 368;
            tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_close );
            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 368;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        goto branch_end_1;
        branch_no_1:;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_source_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__makefile_refs );
            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 370;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            assert( tmp_inplace_assign_attr_1__start == NULL );
            tmp_inplace_assign_attr_1__start = tmp_assign_source_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_left_name_1;
            PyObject *tmp_right_name_1;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
            tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
            tmp_right_name_1 = const_int_pos_1;
            tmp_assign_source_2 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_left_name_1, tmp_right_name_1 );
            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 370;
                type_description_1 = "o";
                goto try_except_handler_2;
            }
            assert( tmp_inplace_assign_attr_1__end == NULL );
            tmp_inplace_assign_attr_1__end = tmp_assign_source_2;
        }
        // Tried code:
        {
            PyObject *tmp_assattr_name_1;
            PyObject *tmp_assattr_target_1;
            CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
            tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
            CHECK_OBJECT( par_self );
            tmp_assattr_target_1 = par_self;
            tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__makefile_refs, tmp_assattr_name_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 370;
                type_description_1 = "o";
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

        branch_end_1:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fde9466e947a523f97c62f7d8cdc26d9 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_fde9466e947a523f97c62f7d8cdc26d9 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_fde9466e947a523f97c62f7d8cdc26d9, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_fde9466e947a523f97c62f7d8cdc26d9->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_fde9466e947a523f97c62f7d8cdc26d9, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_fde9466e947a523f97c62f7d8cdc26d9,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_fde9466e947a523f97c62f7d8cdc26d9 == cache_frame_fde9466e947a523f97c62f7d8cdc26d9 )
    {
        Py_DECREF( frame_fde9466e947a523f97c62f7d8cdc26d9 );
    }
    cache_frame_fde9466e947a523f97c62f7d8cdc26d9 = NULL;

    assertFrameObject( frame_fde9466e947a523f97c62f7d8cdc26d9 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_18__drop );
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
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_18__drop );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_19_makefile( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_mode = python_pars[ 1 ];
    PyObject *par_bufsize = python_pars[ 2 ];
    PyObject *tmp_inplace_assign_attr_1__end = NULL;
    PyObject *tmp_inplace_assign_attr_1__start = NULL;
    struct Nuitka_FrameObject *frame_00fe3b572cd70d603d7be799d9b26a5e;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_00fe3b572cd70d603d7be799d9b26a5e = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_00fe3b572cd70d603d7be799d9b26a5e, codeobj_00fe3b572cd70d603d7be799d9b26a5e, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_00fe3b572cd70d603d7be799d9b26a5e = cache_frame_00fe3b572cd70d603d7be799d9b26a5e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_00fe3b572cd70d603d7be799d9b26a5e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_00fe3b572cd70d603d7be799d9b26a5e ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__makefile_refs );
        if ( tmp_assign_source_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 375;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert( tmp_inplace_assign_attr_1__start == NULL );
        tmp_inplace_assign_attr_1__start = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_left_name_1;
        PyObject *tmp_right_name_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__start );
        tmp_left_name_1 = tmp_inplace_assign_attr_1__start;
        tmp_right_name_1 = const_int_pos_1;
        tmp_assign_source_2 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
        if ( tmp_assign_source_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 375;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert( tmp_inplace_assign_attr_1__end == NULL );
        tmp_inplace_assign_attr_1__end = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( tmp_inplace_assign_attr_1__end );
        tmp_assattr_name_1 = tmp_inplace_assign_attr_1__end;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__makefile_refs, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 375;
            type_description_1 = "ooo";
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

    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_name_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__fileobject );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fileobject );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_fileobject" );
            exception_tb = NULL;

            exception_lineno = 376;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_tuple_element_1 = par_self;
        tmp_args_name_1 = PyTuple_New( 3 );
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
        CHECK_OBJECT( par_mode );
        tmp_tuple_element_1 = par_mode;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
        CHECK_OBJECT( par_bufsize );
        tmp_tuple_element_1 = par_bufsize;
        Py_INCREF( tmp_tuple_element_1 );
        PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
        tmp_kw_name_1 = PyDict_Copy( const_dict_e24f4d9d6e3eb6f736872abe66cd35c1 );
        frame_00fe3b572cd70d603d7be799d9b26a5e->m_frame.f_lineno = 376;
        tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 376;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_00fe3b572cd70d603d7be799d9b26a5e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_00fe3b572cd70d603d7be799d9b26a5e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_00fe3b572cd70d603d7be799d9b26a5e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_00fe3b572cd70d603d7be799d9b26a5e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_00fe3b572cd70d603d7be799d9b26a5e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_00fe3b572cd70d603d7be799d9b26a5e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_00fe3b572cd70d603d7be799d9b26a5e,
        type_description_1,
        par_self,
        par_mode,
        par_bufsize
    );


    // Release cached frame.
    if ( frame_00fe3b572cd70d603d7be799d9b26a5e == cache_frame_00fe3b572cd70d603d7be799d9b26a5e )
    {
        Py_DECREF( frame_00fe3b572cd70d603d7be799d9b26a5e );
    }
    cache_frame_00fe3b572cd70d603d7be799d9b26a5e = NULL;

    assertFrameObject( frame_00fe3b572cd70d603d7be799d9b26a5e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_19_makefile );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_bufsize );
    Py_DECREF( par_bufsize );
    par_bufsize = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

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

    CHECK_OBJECT( (PyObject *)par_bufsize );
    Py_DECREF( par_bufsize );
    par_bufsize = NULL;

    CHECK_OBJECT( (PyObject *)par_mode );
    Py_DECREF( par_mode );
    par_mode = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_19_makefile );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_20___init__( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_protocol = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_dda9d9ffe30a6459cc5c7957c3979826;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_dda9d9ffe30a6459cc5c7957c3979826 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dda9d9ffe30a6459cc5c7957c3979826, codeobj_dda9d9ffe30a6459cc5c7957c3979826, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *) );
    frame_dda9d9ffe30a6459cc5c7957c3979826 = cache_frame_dda9d9ffe30a6459cc5c7957c3979826;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dda9d9ffe30a6459cc5c7957c3979826 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dda9d9ffe30a6459cc5c7957c3979826 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_assattr_target_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__openssl_versions );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__openssl_versions );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_openssl_versions" );
            exception_tb = NULL;

            exception_lineno = 390;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_protocol );
        tmp_subscript_name_1 = par_protocol;
        tmp_assattr_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_assattr_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_protocol, tmp_assattr_name_1 );
        Py_DECREF( tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 390;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_2;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_assattr_target_2;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_2 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;

            exception_lineno = 391;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_2;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_SSL );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 391;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Context );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 391;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_protocol );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 391;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_dda9d9ffe30a6459cc5c7957c3979826->m_frame.f_lineno = 391;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_assattr_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_assattr_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 391;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__ctx, tmp_assattr_name_2 );
        Py_DECREF( tmp_assattr_name_2 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 391;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_name_3 = const_int_0;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain__options, tmp_assattr_name_3 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 392;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_name_4;
        PyObject *tmp_assattr_target_4;
        tmp_assattr_name_4 = Py_False;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_check_hostname, tmp_assattr_name_4 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 393;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dda9d9ffe30a6459cc5c7957c3979826 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dda9d9ffe30a6459cc5c7957c3979826 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dda9d9ffe30a6459cc5c7957c3979826, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dda9d9ffe30a6459cc5c7957c3979826->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dda9d9ffe30a6459cc5c7957c3979826, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dda9d9ffe30a6459cc5c7957c3979826,
        type_description_1,
        par_self,
        par_protocol
    );


    // Release cached frame.
    if ( frame_dda9d9ffe30a6459cc5c7957c3979826 == cache_frame_dda9d9ffe30a6459cc5c7957c3979826 )
    {
        Py_DECREF( frame_dda9d9ffe30a6459cc5c7957c3979826 );
    }
    cache_frame_dda9d9ffe30a6459cc5c7957c3979826 = NULL;

    assertFrameObject( frame_dda9d9ffe30a6459cc5c7957c3979826 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_20___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_protocol );
    Py_DECREF( par_protocol );
    par_protocol = NULL;

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

    CHECK_OBJECT( (PyObject *)par_protocol );
    Py_DECREF( par_protocol );
    par_protocol = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_20___init__ );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_21_options( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_1803d6968829f589aa30839d9afe9e2f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1803d6968829f589aa30839d9afe9e2f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_1803d6968829f589aa30839d9afe9e2f, codeobj_1803d6968829f589aa30839d9afe9e2f, module_urllib3$contrib$pyopenssl, sizeof(void *) );
    frame_1803d6968829f589aa30839d9afe9e2f = cache_frame_1803d6968829f589aa30839d9afe9e2f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_1803d6968829f589aa30839d9afe9e2f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_1803d6968829f589aa30839d9afe9e2f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_source_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__options );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 397;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1803d6968829f589aa30839d9afe9e2f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_1803d6968829f589aa30839d9afe9e2f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_1803d6968829f589aa30839d9afe9e2f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_1803d6968829f589aa30839d9afe9e2f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_1803d6968829f589aa30839d9afe9e2f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_1803d6968829f589aa30839d9afe9e2f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_1803d6968829f589aa30839d9afe9e2f,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_1803d6968829f589aa30839d9afe9e2f == cache_frame_1803d6968829f589aa30839d9afe9e2f )
    {
        Py_DECREF( frame_1803d6968829f589aa30839d9afe9e2f );
    }
    cache_frame_1803d6968829f589aa30839d9afe9e2f = NULL;

    assertFrameObject( frame_1803d6968829f589aa30839d9afe9e2f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_21_options );
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
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_21_options );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_22_options( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_c44847664bb26d19ffdf044ebd088962;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_c44847664bb26d19ffdf044ebd088962 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_c44847664bb26d19ffdf044ebd088962, codeobj_c44847664bb26d19ffdf044ebd088962, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *) );
    frame_c44847664bb26d19ffdf044ebd088962 = cache_frame_c44847664bb26d19ffdf044ebd088962;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_c44847664bb26d19ffdf044ebd088962 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_c44847664bb26d19ffdf044ebd088962 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT( par_value );
        tmp_assattr_name_1 = par_value;
        CHECK_OBJECT( par_self );
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__options, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 401;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__ctx );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 402;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_value );
        tmp_args_element_name_1 = par_value;
        frame_c44847664bb26d19ffdf044ebd088962->m_frame.f_lineno = 402;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_set_options, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 402;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c44847664bb26d19ffdf044ebd088962 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_c44847664bb26d19ffdf044ebd088962 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_c44847664bb26d19ffdf044ebd088962, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_c44847664bb26d19ffdf044ebd088962->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_c44847664bb26d19ffdf044ebd088962, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_c44847664bb26d19ffdf044ebd088962,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame.
    if ( frame_c44847664bb26d19ffdf044ebd088962 == cache_frame_c44847664bb26d19ffdf044ebd088962 )
    {
        Py_DECREF( frame_c44847664bb26d19ffdf044ebd088962 );
    }
    cache_frame_c44847664bb26d19ffdf044ebd088962 = NULL;

    assertFrameObject( frame_c44847664bb26d19ffdf044ebd088962 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_22_options );
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
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_22_options );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_23_verify_mode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_77dad20f1e01fd301ab41bcc400e0a5d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_77dad20f1e01fd301ab41bcc400e0a5d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_77dad20f1e01fd301ab41bcc400e0a5d, codeobj_77dad20f1e01fd301ab41bcc400e0a5d, module_urllib3$contrib$pyopenssl, sizeof(void *) );
    frame_77dad20f1e01fd301ab41bcc400e0a5d = cache_frame_77dad20f1e01fd301ab41bcc400e0a5d;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_77dad20f1e01fd301ab41bcc400e0a5d );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_77dad20f1e01fd301ab41bcc400e0a5d ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__openssl_to_stdlib_verify );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__openssl_to_stdlib_verify );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_openssl_to_stdlib_verify" );
            exception_tb = NULL;

            exception_lineno = 406;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__ctx );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_77dad20f1e01fd301ab41bcc400e0a5d->m_frame.f_lineno = 406;
        tmp_subscript_name_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_get_verify_mode );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_subscript_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        Py_DECREF( tmp_subscript_name_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 406;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_77dad20f1e01fd301ab41bcc400e0a5d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_77dad20f1e01fd301ab41bcc400e0a5d );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_77dad20f1e01fd301ab41bcc400e0a5d );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_77dad20f1e01fd301ab41bcc400e0a5d, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_77dad20f1e01fd301ab41bcc400e0a5d->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_77dad20f1e01fd301ab41bcc400e0a5d, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_77dad20f1e01fd301ab41bcc400e0a5d,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_77dad20f1e01fd301ab41bcc400e0a5d == cache_frame_77dad20f1e01fd301ab41bcc400e0a5d )
    {
        Py_DECREF( frame_77dad20f1e01fd301ab41bcc400e0a5d );
    }
    cache_frame_77dad20f1e01fd301ab41bcc400e0a5d = NULL;

    assertFrameObject( frame_77dad20f1e01fd301ab41bcc400e0a5d );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_23_verify_mode );
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
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_23_verify_mode );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_24_verify_mode( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_value = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_e940705c9cd6ba8a8c8fddbc31d83888;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e940705c9cd6ba8a8c8fddbc31d83888 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_e940705c9cd6ba8a8c8fddbc31d83888, codeobj_e940705c9cd6ba8a8c8fddbc31d83888, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *) );
    frame_e940705c9cd6ba8a8c8fddbc31d83888 = cache_frame_e940705c9cd6ba8a8c8fddbc31d83888;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_e940705c9cd6ba8a8c8fddbc31d83888 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_e940705c9cd6ba8a8c8fddbc31d83888 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_subscribed_name_1;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_subscript_name_1;
        PyObject *tmp_args_element_name_2;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__ctx );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 410;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_set_verify );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 410;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__stdlib_to_openssl_verify );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdlib_to_openssl_verify );
        }

        if ( tmp_mvar_value_1 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_stdlib_to_openssl_verify" );
            exception_tb = NULL;

            exception_lineno = 411;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_subscribed_name_1 = tmp_mvar_value_1;
        CHECK_OBJECT( par_value );
        tmp_subscript_name_1 = par_value;
        tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 411;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__verify_callback );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__verify_callback );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "_verify_callback" );
            exception_tb = NULL;

            exception_lineno = 412;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_name_2 = tmp_mvar_value_2;
        frame_e940705c9cd6ba8a8c8fddbc31d83888->m_frame.f_lineno = 410;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 410;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e940705c9cd6ba8a8c8fddbc31d83888 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_e940705c9cd6ba8a8c8fddbc31d83888 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_e940705c9cd6ba8a8c8fddbc31d83888, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_e940705c9cd6ba8a8c8fddbc31d83888->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_e940705c9cd6ba8a8c8fddbc31d83888, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_e940705c9cd6ba8a8c8fddbc31d83888,
        type_description_1,
        par_self,
        par_value
    );


    // Release cached frame.
    if ( frame_e940705c9cd6ba8a8c8fddbc31d83888 == cache_frame_e940705c9cd6ba8a8c8fddbc31d83888 )
    {
        Py_DECREF( frame_e940705c9cd6ba8a8c8fddbc31d83888 );
    }
    cache_frame_e940705c9cd6ba8a8c8fddbc31d83888 = NULL;

    assertFrameObject( frame_e940705c9cd6ba8a8c8fddbc31d83888 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_24_verify_mode );
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
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_24_verify_mode );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_25_set_default_verify_paths( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    struct Nuitka_FrameObject *frame_bc924150e8755483ecf3f2d6d32d3c6b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bc924150e8755483ecf3f2d6d32d3c6b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_bc924150e8755483ecf3f2d6d32d3c6b, codeobj_bc924150e8755483ecf3f2d6d32d3c6b, module_urllib3$contrib$pyopenssl, sizeof(void *) );
    frame_bc924150e8755483ecf3f2d6d32d3c6b = cache_frame_bc924150e8755483ecf3f2d6d32d3c6b;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_bc924150e8755483ecf3f2d6d32d3c6b );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_bc924150e8755483ecf3f2d6d32d3c6b ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__ctx );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_bc924150e8755483ecf3f2d6d32d3c6b->m_frame.f_lineno = 416;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_set_default_verify_paths );
        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 416;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc924150e8755483ecf3f2d6d32d3c6b );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_bc924150e8755483ecf3f2d6d32d3c6b );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_bc924150e8755483ecf3f2d6d32d3c6b, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_bc924150e8755483ecf3f2d6d32d3c6b->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_bc924150e8755483ecf3f2d6d32d3c6b, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_bc924150e8755483ecf3f2d6d32d3c6b,
        type_description_1,
        par_self
    );


    // Release cached frame.
    if ( frame_bc924150e8755483ecf3f2d6d32d3c6b == cache_frame_bc924150e8755483ecf3f2d6d32d3c6b )
    {
        Py_DECREF( frame_bc924150e8755483ecf3f2d6d32d3c6b );
    }
    cache_frame_bc924150e8755483ecf3f2d6d32d3c6b = NULL;

    assertFrameObject( frame_bc924150e8755483ecf3f2d6d32d3c6b );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_25_set_default_verify_paths );
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
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_25_set_default_verify_paths );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_26_set_ciphers( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_ciphers = python_pars[ 1 ];
    struct Nuitka_FrameObject *frame_23d49aef9290e1f6def6c3bd946d5e5e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_23d49aef9290e1f6def6c3bd946d5e5e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_23d49aef9290e1f6def6c3bd946d5e5e, codeobj_23d49aef9290e1f6def6c3bd946d5e5e, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *) );
    frame_23d49aef9290e1f6def6c3bd946d5e5e = cache_frame_23d49aef9290e1f6def6c3bd946d5e5e;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_23d49aef9290e1f6def6c3bd946d5e5e );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_23d49aef9290e1f6def6c3bd946d5e5e ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_mvar_value_1;
        CHECK_OBJECT( par_ciphers );
        tmp_isinstance_inst_1 = par_ciphers;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_six );

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

            exception_lineno = 419;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_1 = tmp_mvar_value_1;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_text_type );
        if ( tmp_isinstance_cls_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 419;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 419;
            type_description_1 = "oo";
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
            CHECK_OBJECT( par_ciphers );
            tmp_called_instance_1 = par_ciphers;
            frame_23d49aef9290e1f6def6c3bd946d5e5e->m_frame.f_lineno = 420;
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 420;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_ciphers;
                assert( old != NULL );
                par_ciphers = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_source_name_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_2 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__ctx );
        if ( tmp_called_instance_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 421;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_ciphers );
        tmp_args_element_name_1 = par_ciphers;
        frame_23d49aef9290e1f6def6c3bd946d5e5e->m_frame.f_lineno = 421;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_set_cipher_list, call_args );
        }

        Py_DECREF( tmp_called_instance_2 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 421;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_23d49aef9290e1f6def6c3bd946d5e5e );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_23d49aef9290e1f6def6c3bd946d5e5e );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_23d49aef9290e1f6def6c3bd946d5e5e, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_23d49aef9290e1f6def6c3bd946d5e5e->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_23d49aef9290e1f6def6c3bd946d5e5e, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_23d49aef9290e1f6def6c3bd946d5e5e,
        type_description_1,
        par_self,
        par_ciphers
    );


    // Release cached frame.
    if ( frame_23d49aef9290e1f6def6c3bd946d5e5e == cache_frame_23d49aef9290e1f6def6c3bd946d5e5e )
    {
        Py_DECREF( frame_23d49aef9290e1f6def6c3bd946d5e5e );
    }
    cache_frame_23d49aef9290e1f6def6c3bd946d5e5e = NULL;

    assertFrameObject( frame_23d49aef9290e1f6def6c3bd946d5e5e );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_26_set_ciphers );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_ciphers );
    Py_DECREF( par_ciphers );
    par_ciphers = NULL;

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

    Py_XDECREF( par_ciphers );
    par_ciphers = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_26_set_ciphers );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_27_load_verify_locations( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_cafile = python_pars[ 1 ];
    PyObject *par_capath = python_pars[ 2 ];
    PyObject *par_cadata = python_pars[ 3 ];
    struct Nuitka_FrameObject *frame_9c77490b16b85fcf03e0727d8e5618c6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9c77490b16b85fcf03e0727d8e5618c6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_9c77490b16b85fcf03e0727d8e5618c6, codeobj_9c77490b16b85fcf03e0727d8e5618c6, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_9c77490b16b85fcf03e0727d8e5618c6 = cache_frame_9c77490b16b85fcf03e0727d8e5618c6;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_9c77490b16b85fcf03e0727d8e5618c6 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_9c77490b16b85fcf03e0727d8e5618c6 ) == 2 ); // Frame stack

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_cafile );
        tmp_compexpr_left_1 = par_cafile;
        tmp_compexpr_right_1 = Py_None;
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
            PyObject *tmp_assign_source_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_cafile );
            tmp_called_instance_1 = par_cafile;
            frame_9c77490b16b85fcf03e0727d8e5618c6->m_frame.f_lineno = 425;
            tmp_assign_source_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

            if ( tmp_assign_source_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 425;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_cafile;
                assert( old != NULL );
                par_cafile = tmp_assign_source_1;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        CHECK_OBJECT( par_capath );
        tmp_compexpr_left_2 = par_capath;
        tmp_compexpr_right_2 = Py_None;
        tmp_condition_result_2 = ( tmp_compexpr_left_2 != tmp_compexpr_right_2 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_called_instance_2;
            CHECK_OBJECT( par_capath );
            tmp_called_instance_2 = par_capath;
            frame_9c77490b16b85fcf03e0727d8e5618c6->m_frame.f_lineno = 427;
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 427;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_capath;
                assert( old != NULL );
                par_capath = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_2:;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_args_element_name_2;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__ctx );
        if ( tmp_called_instance_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 428;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_cafile );
        tmp_args_element_name_1 = par_cafile;
        CHECK_OBJECT( par_capath );
        tmp_args_element_name_2 = par_capath;
        frame_9c77490b16b85fcf03e0727d8e5618c6->m_frame.f_lineno = 428;
        {
            PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2( tmp_called_instance_3, const_str_plain_load_verify_locations, call_args );
        }

        Py_DECREF( tmp_called_instance_3 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 428;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        CHECK_OBJECT( par_cadata );
        tmp_compexpr_left_3 = par_cadata;
        tmp_compexpr_right_3 = Py_None;
        tmp_condition_result_3 = ( tmp_compexpr_left_3 != tmp_compexpr_right_3 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
            PyObject *tmp_source_name_2;
            PyObject *tmp_source_name_3;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_3;
            PyObject *tmp_called_name_2;
            PyObject *tmp_mvar_value_1;
            PyObject *tmp_args_element_name_4;
            CHECK_OBJECT( par_self );
            tmp_source_name_3 = par_self;
            tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__ctx );
            if ( tmp_source_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 430;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_load_verify_locations );
            Py_DECREF( tmp_source_name_2 );
            if ( tmp_called_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 430;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_BytesIO );

            if (unlikely( tmp_mvar_value_1 == NULL ))
            {
                tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_BytesIO );
            }

            if ( tmp_mvar_value_1 == NULL )
            {
                Py_DECREF( tmp_called_name_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "BytesIO" );
                exception_tb = NULL;

                exception_lineno = 430;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }

            tmp_called_name_2 = tmp_mvar_value_1;
            CHECK_OBJECT( par_cadata );
            tmp_args_element_name_4 = par_cadata;
            frame_9c77490b16b85fcf03e0727d8e5618c6->m_frame.f_lineno = 430;
            {
                PyObject *call_args[] = { tmp_args_element_name_4 };
                tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
            }

            if ( tmp_args_element_name_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_1 );

                exception_lineno = 430;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            frame_9c77490b16b85fcf03e0727d8e5618c6->m_frame.f_lineno = 430;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
            }

            Py_DECREF( tmp_called_name_1 );
            Py_DECREF( tmp_args_element_name_3 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 430;
                type_description_1 = "oooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_3:;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9c77490b16b85fcf03e0727d8e5618c6 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_9c77490b16b85fcf03e0727d8e5618c6 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_9c77490b16b85fcf03e0727d8e5618c6, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_9c77490b16b85fcf03e0727d8e5618c6->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_9c77490b16b85fcf03e0727d8e5618c6, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_9c77490b16b85fcf03e0727d8e5618c6,
        type_description_1,
        par_self,
        par_cafile,
        par_capath,
        par_cadata
    );


    // Release cached frame.
    if ( frame_9c77490b16b85fcf03e0727d8e5618c6 == cache_frame_9c77490b16b85fcf03e0727d8e5618c6 )
    {
        Py_DECREF( frame_9c77490b16b85fcf03e0727d8e5618c6 );
    }
    cache_frame_9c77490b16b85fcf03e0727d8e5618c6 = NULL;

    assertFrameObject( frame_9c77490b16b85fcf03e0727d8e5618c6 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_27_load_verify_locations );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_capath );
    Py_DECREF( par_capath );
    par_capath = NULL;

    CHECK_OBJECT( (PyObject *)par_cafile );
    Py_DECREF( par_cafile );
    par_cafile = NULL;

    CHECK_OBJECT( (PyObject *)par_cadata );
    Py_DECREF( par_cadata );
    par_cadata = NULL;

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

    Py_XDECREF( par_capath );
    par_capath = NULL;

    Py_XDECREF( par_cafile );
    par_cafile = NULL;

    CHECK_OBJECT( (PyObject *)par_cadata );
    Py_DECREF( par_cadata );
    par_cadata = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_27_load_verify_locations );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_28_load_cert_chain( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_certfile = python_pars[ 1 ];
    PyObject *par_keyfile = python_pars[ 2 ];
    struct Nuitka_CellObject *par_password = PyCell_NEW1( python_pars[ 3 ] );
    struct Nuitka_FrameObject *frame_d9b679121c717b9f690a97402a914907;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d9b679121c717b9f690a97402a914907 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_d9b679121c717b9f690a97402a914907, codeobj_d9b679121c717b9f690a97402a914907, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_d9b679121c717b9f690a97402a914907 = cache_frame_d9b679121c717b9f690a97402a914907;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_d9b679121c717b9f690a97402a914907 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_d9b679121c717b9f690a97402a914907 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__ctx );
        if ( tmp_called_instance_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 433;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_certfile );
        tmp_args_element_name_1 = par_certfile;
        frame_d9b679121c717b9f690a97402a914907->m_frame.f_lineno = 433;
        {
            PyObject *call_args[] = { tmp_args_element_name_1 };
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_use_certificate_chain_file, call_args );
        }

        Py_DECREF( tmp_called_instance_1 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 433;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( PyCell_GET( par_password ) );
        tmp_compexpr_left_1 = PyCell_GET( par_password );
        tmp_compexpr_right_1 = Py_None;
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_source_name_2;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_name_2;
            CHECK_OBJECT( par_self );
            tmp_source_name_2 = par_self;
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__ctx );
            if ( tmp_called_instance_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 435;
                type_description_1 = "oooc";
                goto frame_exception_exit_1;
            }
            tmp_args_element_name_2 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_28_load_cert_chain$$$function_1_lambda(  );

            ((struct Nuitka_FunctionObject *)tmp_args_element_name_2)->m_closure[0] = par_password;
            Py_INCREF( ((struct Nuitka_FunctionObject *)tmp_args_element_name_2)->m_closure[0] );


            frame_d9b679121c717b9f690a97402a914907->m_frame.f_lineno = 435;
            {
                PyObject *call_args[] = { tmp_args_element_name_2 };
                tmp_call_result_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_set_passwd_cb, call_args );
            }

            Py_DECREF( tmp_called_instance_2 );
            Py_DECREF( tmp_args_element_name_2 );
            if ( tmp_call_result_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 435;
                type_description_1 = "oooc";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_2 );
        }
        branch_no_1:;
    }
    {
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_source_name_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_name_3;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        CHECK_OBJECT( par_self );
        tmp_source_name_4 = par_self;
        tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__ctx );
        if ( tmp_source_name_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 436;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_use_privatekey_file );
        Py_DECREF( tmp_source_name_3 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 436;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_keyfile );
        tmp_or_left_value_1 = par_keyfile;
        tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
        if ( tmp_or_left_truth_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 436;
            type_description_1 = "oooc";
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
        CHECK_OBJECT( par_certfile );
        tmp_or_right_value_1 = par_certfile;
        tmp_args_element_name_3 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_args_element_name_3 = tmp_or_left_value_1;
        or_end_1:;
        frame_d9b679121c717b9f690a97402a914907->m_frame.f_lineno = 436;
        {
            PyObject *call_args[] = { tmp_args_element_name_3 };
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
        }

        Py_DECREF( tmp_called_name_1 );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 436;
            type_description_1 = "oooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_3 );
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9b679121c717b9f690a97402a914907 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_d9b679121c717b9f690a97402a914907 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_d9b679121c717b9f690a97402a914907, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_d9b679121c717b9f690a97402a914907->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_d9b679121c717b9f690a97402a914907, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_d9b679121c717b9f690a97402a914907,
        type_description_1,
        par_self,
        par_certfile,
        par_keyfile,
        par_password
    );


    // Release cached frame.
    if ( frame_d9b679121c717b9f690a97402a914907 == cache_frame_d9b679121c717b9f690a97402a914907 )
    {
        Py_DECREF( frame_d9b679121c717b9f690a97402a914907 );
    }
    cache_frame_d9b679121c717b9f690a97402a914907 = NULL;

    assertFrameObject( frame_d9b679121c717b9f690a97402a914907 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_28_load_cert_chain );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_keyfile );
    Py_DECREF( par_keyfile );
    par_keyfile = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_password );
    Py_DECREF( par_password );
    par_password = NULL;

    CHECK_OBJECT( (PyObject *)par_certfile );
    Py_DECREF( par_certfile );
    par_certfile = NULL;

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

    CHECK_OBJECT( (PyObject *)par_keyfile );
    Py_DECREF( par_keyfile );
    par_keyfile = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_password );
    Py_DECREF( par_password );
    par_password = NULL;

    CHECK_OBJECT( (PyObject *)par_certfile );
    Py_DECREF( par_certfile );
    par_certfile = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_28_load_cert_chain );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_28_load_cert_chain$$$function_1_lambda( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_max_length = python_pars[ 0 ];
    PyObject *par_prompt_twice = python_pars[ 1 ];
    PyObject *par_userdata = python_pars[ 2 ];
    struct Nuitka_FrameObject *frame_90e9c32bbbad2ec3e7ee11d55db50785;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_90e9c32bbbad2ec3e7ee11d55db50785 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_90e9c32bbbad2ec3e7ee11d55db50785, codeobj_90e9c32bbbad2ec3e7ee11d55db50785, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_90e9c32bbbad2ec3e7ee11d55db50785 = cache_frame_90e9c32bbbad2ec3e7ee11d55db50785;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_90e9c32bbbad2ec3e7ee11d55db50785 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_90e9c32bbbad2ec3e7ee11d55db50785 ) == 2 ); // Frame stack

    // Framed code:
    if ( PyCell_GET( self->m_closure[0] ) == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "password" );
        exception_tb = NULL;

        exception_lineno = 435;
        type_description_1 = "oooc";
        goto frame_exception_exit_1;
    }

    tmp_return_value = PyCell_GET( self->m_closure[0] );
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_90e9c32bbbad2ec3e7ee11d55db50785 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_90e9c32bbbad2ec3e7ee11d55db50785 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_90e9c32bbbad2ec3e7ee11d55db50785 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_90e9c32bbbad2ec3e7ee11d55db50785, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_90e9c32bbbad2ec3e7ee11d55db50785->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_90e9c32bbbad2ec3e7ee11d55db50785, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_90e9c32bbbad2ec3e7ee11d55db50785,
        type_description_1,
        par_max_length,
        par_prompt_twice,
        par_userdata,
        self->m_closure[0]
    );


    // Release cached frame.
    if ( frame_90e9c32bbbad2ec3e7ee11d55db50785 == cache_frame_90e9c32bbbad2ec3e7ee11d55db50785 )
    {
        Py_DECREF( frame_90e9c32bbbad2ec3e7ee11d55db50785 );
    }
    cache_frame_90e9c32bbbad2ec3e7ee11d55db50785 = NULL;

    assertFrameObject( frame_90e9c32bbbad2ec3e7ee11d55db50785 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_28_load_cert_chain$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_userdata );
    Py_DECREF( par_userdata );
    par_userdata = NULL;

    CHECK_OBJECT( (PyObject *)par_max_length );
    Py_DECREF( par_max_length );
    par_max_length = NULL;

    CHECK_OBJECT( (PyObject *)par_prompt_twice );
    Py_DECREF( par_prompt_twice );
    par_prompt_twice = NULL;

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

    CHECK_OBJECT( (PyObject *)par_userdata );
    Py_DECREF( par_userdata );
    par_userdata = NULL;

    CHECK_OBJECT( (PyObject *)par_max_length );
    Py_DECREF( par_max_length );
    par_max_length = NULL;

    CHECK_OBJECT( (PyObject *)par_prompt_twice );
    Py_DECREF( par_prompt_twice );
    par_prompt_twice = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_28_load_cert_chain$$$function_1_lambda );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_29_wrap_socket( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_sock = python_pars[ 1 ];
    PyObject *par_server_side = python_pars[ 2 ];
    PyObject *par_do_handshake_on_connect = python_pars[ 3 ];
    PyObject *par_suppress_ragged_eofs = python_pars[ 4 ];
    PyObject *par_server_hostname = python_pars[ 5 ];
    PyObject *var_e = NULL;
    PyObject *var_cnx = NULL;
    struct Nuitka_FrameObject *frame_f9f3bdf997e5d9a62abac2f7b867bae1;
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
    static struct Nuitka_FrameObject *cache_frame_f9f3bdf997e5d9a62abac2f7b867bae1 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_f9f3bdf997e5d9a62abac2f7b867bae1, codeobj_f9f3bdf997e5d9a62abac2f7b867bae1, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_f9f3bdf997e5d9a62abac2f7b867bae1 = cache_frame_f9f3bdf997e5d9a62abac2f7b867bae1;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_f9f3bdf997e5d9a62abac2f7b867bae1 );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_f9f3bdf997e5d9a62abac2f7b867bae1 ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_name_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_args_element_name_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_args_element_name_2;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;

            exception_lineno = 441;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_SSL );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 441;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_Connection );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_called_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 441;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_self );
        tmp_source_name_3 = par_self;
        tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__ctx );
        if ( tmp_args_element_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_1 );

            exception_lineno = 441;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT( par_sock );
        tmp_args_element_name_2 = par_sock;
        frame_f9f3bdf997e5d9a62abac2f7b867bae1->m_frame.f_lineno = 441;
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


            exception_lineno = 441;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert( var_cnx == NULL );
        var_cnx = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_source_name_4;
        PyObject *tmp_mvar_value_2;
        CHECK_OBJECT( par_server_hostname );
        tmp_isinstance_inst_1 = par_server_hostname;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_six );

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

            exception_lineno = 443;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_4 = tmp_mvar_value_2;
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_text_type );
        if ( tmp_isinstance_cls_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 443;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
        Py_DECREF( tmp_isinstance_cls_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 443;
            type_description_1 = "oooooooo";
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
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT( par_server_hostname );
            tmp_called_instance_1 = par_server_hostname;
            frame_f9f3bdf997e5d9a62abac2f7b867bae1->m_frame.f_lineno = 444;
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_1, const_str_plain_encode, &PyTuple_GET_ITEM( const_tuple_str_digest_c075052d723d6707083e869a0e3659bb_tuple, 0 ) );

            if ( tmp_assign_source_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 444;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            {
                PyObject *old = par_server_hostname;
                assert( old != NULL );
                par_server_hostname = tmp_assign_source_2;
                Py_DECREF( old );
            }

        }
        branch_no_1:;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_server_hostname );
        tmp_compexpr_left_1 = par_server_hostname;
        tmp_compexpr_right_1 = Py_None;
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
            PyObject *tmp_called_instance_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( var_cnx );
            tmp_called_instance_2 = var_cnx;
            CHECK_OBJECT( par_server_hostname );
            tmp_args_element_name_3 = par_server_hostname;
            frame_f9f3bdf997e5d9a62abac2f7b867bae1->m_frame.f_lineno = 447;
            {
                PyObject *call_args[] = { tmp_args_element_name_3 };
                tmp_call_result_1 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_set_tlsext_host_name, call_args );
            }

            if ( tmp_call_result_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 447;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            Py_DECREF( tmp_call_result_1 );
        }
        branch_no_2:;
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT( var_cnx );
        tmp_called_instance_3 = var_cnx;
        frame_f9f3bdf997e5d9a62abac2f7b867bae1->m_frame.f_lineno = 449;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS( tmp_called_instance_3, const_str_plain_set_connect_state );
        if ( tmp_call_result_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 449;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF( tmp_call_result_2 );
    }
    loop_start_1:;
    // Tried code:
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT( var_cnx );
        tmp_called_instance_4 = var_cnx;
        frame_f9f3bdf997e5d9a62abac2f7b867bae1->m_frame.f_lineno = 453;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS( tmp_called_instance_4, const_str_plain_do_handshake );
        if ( tmp_call_result_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 453;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF( tmp_call_result_3 );
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
    PRESERVE_FRAME_EXCEPTION( frame_f9f3bdf997e5d9a62abac2f7b867bae1 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_f9f3bdf997e5d9a62abac2f7b867bae1, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_f9f3bdf997e5d9a62abac2f7b867bae1, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        PyObject *tmp_source_name_5;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_3;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_3 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;

            exception_lineno = 454;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_3;
        tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_SSL );
        if ( tmp_source_name_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 454;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_WantReadError );
        Py_DECREF( tmp_source_name_5 );
        if ( tmp_compexpr_right_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 454;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        Py_DECREF( tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 454;
            type_description_1 = "oooooooo";
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
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_operand_name_1;
            PyObject *tmp_called_name_2;
            PyObject *tmp_source_name_7;
            PyObject *tmp_mvar_value_4;
            PyObject *tmp_args_element_name_4;
            PyObject *tmp_args_element_name_5;
            PyObject *tmp_called_instance_5;
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

            if (unlikely( tmp_mvar_value_4 == NULL ))
            {
                tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
            }

            if ( tmp_mvar_value_4 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "util" );
                exception_tb = NULL;

                exception_lineno = 455;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_7 = tmp_mvar_value_4;
            tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_wait_for_read );
            if ( tmp_called_name_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 455;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            CHECK_OBJECT( par_sock );
            tmp_args_element_name_4 = par_sock;
            CHECK_OBJECT( par_sock );
            tmp_called_instance_5 = par_sock;
            frame_f9f3bdf997e5d9a62abac2f7b867bae1->m_frame.f_lineno = 455;
            tmp_args_element_name_5 = CALL_METHOD_NO_ARGS( tmp_called_instance_5, const_str_plain_gettimeout );
            if ( tmp_args_element_name_5 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_called_name_2 );

                exception_lineno = 455;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            frame_f9f3bdf997e5d9a62abac2f7b867bae1->m_frame.f_lineno = 455;
            {
                PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
                tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
            }

            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_5 );
            if ( tmp_operand_name_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 455;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
            Py_DECREF( tmp_operand_name_1 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 455;
                type_description_1 = "oooooooo";
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
                PyObject *tmp_raise_type_1;
                PyObject *tmp_called_name_3;
                PyObject *tmp_mvar_value_5;
                tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_timeout );

                if (unlikely( tmp_mvar_value_5 == NULL ))
                {
                    tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_timeout );
                }

                if ( tmp_mvar_value_5 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "timeout" );
                    exception_tb = NULL;

                    exception_lineno = 456;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_called_name_3 = tmp_mvar_value_5;
                frame_f9f3bdf997e5d9a62abac2f7b867bae1->m_frame.f_lineno = 456;
                tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_digest_22ce283067899ce16a8ff927ff2a141c_tuple, 0 ) );

                if ( tmp_raise_type_1 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 456;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_1;
                exception_lineno = 456;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            branch_no_4:;
        }
        goto loop_start_1;
        goto branch_end_3;
        branch_no_3:;
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_compexpr_left_3;
            PyObject *tmp_compexpr_right_3;
            PyObject *tmp_source_name_8;
            PyObject *tmp_source_name_9;
            PyObject *tmp_mvar_value_6;
            tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

            if (unlikely( tmp_mvar_value_6 == NULL ))
            {
                tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
            }

            if ( tmp_mvar_value_6 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "global name '%s' is not defined", "OpenSSL" );
                exception_tb = NULL;

                exception_lineno = 458;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }

            tmp_source_name_9 = tmp_mvar_value_6;
            tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_SSL );
            if ( tmp_source_name_8 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 458;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_Error );
            Py_DECREF( tmp_source_name_8 );
            if ( tmp_compexpr_right_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 458;
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
            Py_DECREF( tmp_compexpr_right_3 );
            if ( tmp_res == -1 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 458;
                type_description_1 = "oooooooo";
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
                PyObject *tmp_assign_source_3;
                tmp_assign_source_3 = EXC_VALUE(PyThreadState_GET());
                assert( var_e == NULL );
                Py_INCREF( tmp_assign_source_3 );
                var_e = tmp_assign_source_3;
            }
            {
                PyObject *tmp_raise_type_2;
                PyObject *tmp_called_name_4;
                PyObject *tmp_source_name_10;
                PyObject *tmp_mvar_value_7;
                PyObject *tmp_args_element_name_6;
                PyObject *tmp_left_name_1;
                PyObject *tmp_right_name_1;
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_ssl );

                if (unlikely( tmp_mvar_value_7 == NULL ))
                {
                    tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
                }

                if ( tmp_mvar_value_7 == NULL )
                {

                    exception_type = PyExc_NameError;
                    Py_INCREF( exception_type );
                    exception_value = PyString_FromFormat( "global name '%s' is not defined", "ssl" );
                    exception_tb = NULL;

                    exception_lineno = 459;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }

                tmp_source_name_10 = tmp_mvar_value_7;
                tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_SSLError );
                if ( tmp_called_name_4 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 459;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                tmp_left_name_1 = const_str_digest_2ff175dae94b767efe83d915c1b97f5f;
                CHECK_OBJECT( var_e );
                tmp_right_name_1 = var_e;
                tmp_args_element_name_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
                if ( tmp_args_element_name_6 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                    Py_DECREF( tmp_called_name_4 );

                    exception_lineno = 459;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                frame_f9f3bdf997e5d9a62abac2f7b867bae1->m_frame.f_lineno = 459;
                {
                    PyObject *call_args[] = { tmp_args_element_name_6 };
                    tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
                }

                Py_DECREF( tmp_called_name_4 );
                Py_DECREF( tmp_args_element_name_6 );
                if ( tmp_raise_type_2 == NULL )
                {
                    assert( ERROR_OCCURRED() );

                    FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                    exception_lineno = 459;
                    type_description_1 = "oooooooo";
                    goto frame_exception_exit_1;
                }
                exception_type = tmp_raise_type_2;
                exception_lineno = 459;
                RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
                type_description_1 = "oooooooo";
                goto frame_exception_exit_1;
            }
            goto branch_end_5;
            branch_no_5:;
            tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
            if (unlikely( tmp_result == false ))
            {
                exception_lineno = 452;
            }

            if (exception_tb && exception_tb->tb_frame == &frame_f9f3bdf997e5d9a62abac2f7b867bae1->m_frame) frame_f9f3bdf997e5d9a62abac2f7b867bae1->m_frame.f_lineno = exception_tb->tb_lineno;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
            branch_end_5:;
        }
        branch_end_3:;
    }
    // End of try:
    try_end_1:;
    goto loop_end_1;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 451;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    {
        PyObject *tmp_called_name_5;
        PyObject *tmp_mvar_value_8;
        PyObject *tmp_args_element_name_7;
        PyObject *tmp_args_element_name_8;
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_WrappedSocket );

        if (unlikely( tmp_mvar_value_8 == NULL ))
        {
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WrappedSocket );
        }

        if ( tmp_mvar_value_8 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "WrappedSocket" );
            exception_tb = NULL;

            exception_lineno = 462;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_called_name_5 = tmp_mvar_value_8;
        CHECK_OBJECT( var_cnx );
        tmp_args_element_name_7 = var_cnx;
        CHECK_OBJECT( par_sock );
        tmp_args_element_name_8 = par_sock;
        frame_f9f3bdf997e5d9a62abac2f7b867bae1->m_frame.f_lineno = 462;
        {
            PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
        }

        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 462;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 1
    RESTORE_FRAME_EXCEPTION( frame_f9f3bdf997e5d9a62abac2f7b867bae1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_f9f3bdf997e5d9a62abac2f7b867bae1 );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 1
    RESTORE_FRAME_EXCEPTION( frame_f9f3bdf997e5d9a62abac2f7b867bae1 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_f9f3bdf997e5d9a62abac2f7b867bae1, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_f9f3bdf997e5d9a62abac2f7b867bae1->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_f9f3bdf997e5d9a62abac2f7b867bae1, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_f9f3bdf997e5d9a62abac2f7b867bae1,
        type_description_1,
        par_self,
        par_sock,
        par_server_side,
        par_do_handshake_on_connect,
        par_suppress_ragged_eofs,
        par_server_hostname,
        var_e,
        var_cnx
    );


    // Release cached frame.
    if ( frame_f9f3bdf997e5d9a62abac2f7b867bae1 == cache_frame_f9f3bdf997e5d9a62abac2f7b867bae1 )
    {
        Py_DECREF( frame_f9f3bdf997e5d9a62abac2f7b867bae1 );
    }
    cache_frame_f9f3bdf997e5d9a62abac2f7b867bae1 = NULL;

    assertFrameObject( frame_f9f3bdf997e5d9a62abac2f7b867bae1 );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_29_wrap_socket );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_server_hostname );
    Py_DECREF( par_server_hostname );
    par_server_hostname = NULL;

    CHECK_OBJECT( (PyObject *)par_server_side );
    Py_DECREF( par_server_side );
    par_server_side = NULL;

    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_do_handshake_on_connect );
    Py_DECREF( par_do_handshake_on_connect );
    par_do_handshake_on_connect = NULL;

    CHECK_OBJECT( (PyObject *)par_suppress_ragged_eofs );
    Py_DECREF( par_suppress_ragged_eofs );
    par_suppress_ragged_eofs = NULL;

    CHECK_OBJECT( (PyObject *)var_cnx );
    Py_DECREF( var_cnx );
    var_cnx = NULL;

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

    Py_XDECREF( par_server_hostname );
    par_server_hostname = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    CHECK_OBJECT( (PyObject *)par_server_side );
    Py_DECREF( par_server_side );
    par_server_side = NULL;

    CHECK_OBJECT( (PyObject *)par_sock );
    Py_DECREF( par_sock );
    par_sock = NULL;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_do_handshake_on_connect );
    Py_DECREF( par_do_handshake_on_connect );
    par_do_handshake_on_connect = NULL;

    CHECK_OBJECT( (PyObject *)par_suppress_ragged_eofs );
    Py_DECREF( par_suppress_ragged_eofs );
    par_suppress_ragged_eofs = NULL;

    Py_XDECREF( var_cnx );
    var_cnx = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_29_wrap_socket );
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


static PyObject *impl_urllib3$contrib$pyopenssl$$$function_30__verify_callback( struct Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cnx = python_pars[ 0 ];
    PyObject *par_x509 = python_pars[ 1 ];
    PyObject *par_err_no = python_pars[ 2 ];
    PyObject *par_err_depth = python_pars[ 3 ];
    PyObject *par_return_code = python_pars[ 4 ];
    struct Nuitka_FrameObject *frame_dac0d0b81bebb7055c6b91e0d524ba7f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dac0d0b81bebb7055c6b91e0d524ba7f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_dac0d0b81bebb7055c6b91e0d524ba7f, codeobj_dac0d0b81bebb7055c6b91e0d524ba7f, module_urllib3$contrib$pyopenssl, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *) );
    frame_dac0d0b81bebb7055c6b91e0d524ba7f = cache_frame_dac0d0b81bebb7055c6b91e0d524ba7f;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_dac0d0b81bebb7055c6b91e0d524ba7f );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    assert( Py_REFCNT( frame_dac0d0b81bebb7055c6b91e0d524ba7f ) == 2 ); // Frame stack

    // Framed code:
    {
        PyObject *tmp_compexpr_left_1;
        PyObject *tmp_compexpr_right_1;
        CHECK_OBJECT( par_err_no );
        tmp_compexpr_left_1 = par_err_no;
        tmp_compexpr_right_1 = const_int_0;
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
        if ( tmp_return_value == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 466;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dac0d0b81bebb7055c6b91e0d524ba7f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_dac0d0b81bebb7055c6b91e0d524ba7f );
#endif

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;

    frame_exception_exit_1:;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_dac0d0b81bebb7055c6b91e0d524ba7f );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_dac0d0b81bebb7055c6b91e0d524ba7f, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_dac0d0b81bebb7055c6b91e0d524ba7f->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_dac0d0b81bebb7055c6b91e0d524ba7f, exception_lineno );
    }

    // Attachs locals to frame if any.
    Nuitka_Frame_AttachLocals(
        (struct Nuitka_FrameObject *)frame_dac0d0b81bebb7055c6b91e0d524ba7f,
        type_description_1,
        par_cnx,
        par_x509,
        par_err_no,
        par_err_depth,
        par_return_code
    );


    // Release cached frame.
    if ( frame_dac0d0b81bebb7055c6b91e0d524ba7f == cache_frame_dac0d0b81bebb7055c6b91e0d524ba7f )
    {
        Py_DECREF( frame_dac0d0b81bebb7055c6b91e0d524ba7f );
    }
    cache_frame_dac0d0b81bebb7055c6b91e0d524ba7f = NULL;

    assertFrameObject( frame_dac0d0b81bebb7055c6b91e0d524ba7f );

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_30__verify_callback );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x509 );
    Py_DECREF( par_x509 );
    par_x509 = NULL;

    CHECK_OBJECT( (PyObject *)par_err_no );
    Py_DECREF( par_err_no );
    par_err_no = NULL;

    CHECK_OBJECT( (PyObject *)par_err_depth );
    Py_DECREF( par_err_depth );
    par_err_depth = NULL;

    CHECK_OBJECT( (PyObject *)par_cnx );
    Py_DECREF( par_cnx );
    par_cnx = NULL;

    CHECK_OBJECT( (PyObject *)par_return_code );
    Py_DECREF( par_return_code );
    par_return_code = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x509 );
    Py_DECREF( par_x509 );
    par_x509 = NULL;

    CHECK_OBJECT( (PyObject *)par_err_no );
    Py_DECREF( par_err_no );
    par_err_no = NULL;

    CHECK_OBJECT( (PyObject *)par_err_depth );
    Py_DECREF( par_err_depth );
    par_err_depth = NULL;

    CHECK_OBJECT( (PyObject *)par_cnx );
    Py_DECREF( par_cnx );
    par_cnx = NULL;

    CHECK_OBJECT( (PyObject *)par_return_code );
    Py_DECREF( par_return_code );
    par_return_code = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl$$$function_30__verify_callback );
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



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_10_recv_into(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_10_recv_into,
        const_str_plain_recv_into,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9e1e0e3e5f1a00b34156120a41cbad7c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_11_settimeout(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_11_settimeout,
        const_str_plain_settimeout,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_62dcc2c532e0185f3bf04af9af7f4cc2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_12__send_until_done(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_12__send_until_done,
        const_str_plain__send_until_done,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a50bd93ba671fcb71afd591313270100,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_13_sendall(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_13_sendall,
        const_str_plain_sendall,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_ee4abade8c89584dfb2069f1eb025b15,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_14_shutdown(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_14_shutdown,
        const_str_plain_shutdown,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_a894d6e34a45169354f7d4f30d954d2d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_15_close(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_15_close,
        const_str_plain_close,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b5931f052ea4ee31ea48932a53a4cbe7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_16_getpeercert( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_16_getpeercert,
        const_str_plain_getpeercert,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_b3d11a822812571f0e5e19fe35c7fa7b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_17__reuse(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_17__reuse,
        const_str_plain__reuse,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_21c20163c94dc3c8dc94475ee2feab4c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_18__drop(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_18__drop,
        const_str_plain__drop,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_fde9466e947a523f97c62f7d8cdc26d9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_19_makefile( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_19_makefile,
        const_str_plain_makefile,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_00fe3b572cd70d603d7be799d9b26a5e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_1_inject_into_urllib3(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_1_inject_into_urllib3,
        const_str_plain_inject_into_urllib3,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_311ce9cf1262adba6244c81e7c36e69e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        const_str_digest_c2ca9ee709c1d2285dbebbfa7f97f083,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_20___init__(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_20___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_dda9d9ffe30a6459cc5c7957c3979826,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_21_options(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_21_options,
        const_str_plain_options,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_1803d6968829f589aa30839d9afe9e2f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_22_options(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_22_options,
        const_str_plain_options,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_c44847664bb26d19ffdf044ebd088962,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_23_verify_mode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_23_verify_mode,
        const_str_plain_verify_mode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_77dad20f1e01fd301ab41bcc400e0a5d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_24_verify_mode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_24_verify_mode,
        const_str_plain_verify_mode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e940705c9cd6ba8a8c8fddbc31d83888,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_25_set_default_verify_paths(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_25_set_default_verify_paths,
        const_str_plain_set_default_verify_paths,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_bc924150e8755483ecf3f2d6d32d3c6b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_26_set_ciphers(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_26_set_ciphers,
        const_str_plain_set_ciphers,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_23d49aef9290e1f6def6c3bd946d5e5e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_27_load_verify_locations( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_27_load_verify_locations,
        const_str_plain_load_verify_locations,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_9c77490b16b85fcf03e0727d8e5618c6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_28_load_cert_chain( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_28_load_cert_chain,
        const_str_plain_load_cert_chain,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_d9b679121c717b9f690a97402a914907,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_28_load_cert_chain$$$function_1_lambda(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_28_load_cert_chain$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_90e9c32bbbad2ec3e7ee11d55db50785,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        1
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_29_wrap_socket( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_29_wrap_socket,
        const_str_plain_wrap_socket,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f9f3bdf997e5d9a62abac2f7b867bae1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_2_extract_from_urllib3(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_2_extract_from_urllib3,
        const_str_plain_extract_from_urllib3,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_66f177e68906233d576f6b1222496eb7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        const_str_digest_7ac562d65cde2e151e56b218341d4cdd,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_30__verify_callback(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_30__verify_callback,
        const_str_plain__verify_callback,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_dac0d0b81bebb7055c6b91e0d524ba7f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_3__validate_dependencies_met(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_3__validate_dependencies_met,
        const_str_plain__validate_dependencies_met,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_76d8a515232d56932ad684c24e014fb5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        const_str_digest_20c12b8a448bbfc5cd8c17b869421e3c,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib,
        const_str_plain__dnsname_to_stdlib,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_e5f757fc7ddd9567415dbf17c77043e2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        const_str_digest_b0cc3d29be4aca6ee1b850699a83d626,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib$$$function_1_idna_encode(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib$$$function_1_idna_encode,
        const_str_plain_idna_encode,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_56ce4c9caa719767fa1307cbe541bd24,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        const_str_digest_071e6215d1e4e670779a10c8173678ae,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name,
        const_str_plain_get_subj_alt_name,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_eb1e835efc743b7d22b71d7add10966f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        const_str_digest_ea524135603414934edfdf9a140120da,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_6___init__( PyObject *defaults )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_eff9462608e30b6a7ed7fbd35a07f39d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_7_fileno(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_7_fileno,
        const_str_plain_fileno,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_f95dfdddf57f520ec95cbb0c6432a072,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_8__decref_socketios(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_8__decref_socketios,
        const_str_plain__decref_socketios,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_7a3fa89f2aadcad452da25ffbe3520e8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_9_recv(  )
{
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_urllib3$contrib$pyopenssl$$$function_9_recv,
        const_str_plain_recv,
#if PYTHON_VERSION >= 300
        NULL,
#endif
        codeobj_664a3194f205b3d21858002a04f58b5a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        NULL,
#endif
        module_urllib3$contrib$pyopenssl,
        NULL,
        0
    );

    return (PyObject *)result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_urllib3$contrib$pyopenssl =
{
    PyModuleDef_HEAD_INIT,
    "urllib3.contrib.pyopenssl",
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

MOD_INIT_DECL( urllib3$contrib$pyopenssl )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_urllib3$contrib$pyopenssl );
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
    puts("urllib3.contrib.pyopenssl: Calling setupMetaPathBasedLoader().");
#endif
    setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 300
    patchInspectModule();
#endif

#endif

    /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.contrib.pyopenssl: Calling createModuleConstants().");
#endif
    createModuleConstants();

    /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
    puts("urllib3.contrib.pyopenssl: Calling createModuleCodeObjects().");
#endif
    createModuleCodeObjects();

    // puts( "in initurllib3$contrib$pyopenssl" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_urllib3$contrib$pyopenssl = Py_InitModule4(
        "urllib3.contrib.pyopenssl",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No "__doc__" is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else

    module_urllib3$contrib$pyopenssl = PyModule_Create( &mdef_urllib3$contrib$pyopenssl );
#endif

    moduledict_urllib3$contrib$pyopenssl = MODULE_DICT( module_urllib3$contrib$pyopenssl );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain___name__ );

        UPDATE_STRING_DICT1(
            moduledict_urllib3$contrib$pyopenssl,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 300
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain___name__ );
        char const *module_name_cstr = PyString_AS_STRING( module_name );

        char const *last_dot = strrchr( module_name_cstr, '.' );

        if ( last_dot != NULL )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$contrib$pyopenssl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize( module_name_cstr, last_dot - module_name_cstr )
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain___name__ );
        Py_ssize_t dot_index = PyUnicode_Find( module_name, const_str_dot, 0, PyUnicode_GetLength( module_name ), -1 );

        if ( dot_index != -1 )
        {
            UPDATE_STRING_DICT1(
                moduledict_urllib3$contrib$pyopenssl,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring( module_name, 0, dot_index )
            );
        }
#endif
#endif
    }

    CHECK_OBJECT( module_urllib3$contrib$pyopenssl );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PyImport_GetModuleDict(), const_str_digest_9b140d54e682de757186c632bf3beb69, module_urllib3$contrib$pyopenssl );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if ( GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain___builtins__ ) == NULL )
    {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if !defined(_NUITKA_EXE) || !0
        value = PyModule_GetDict( value );
#endif

        UPDATE_STRING_DICT0( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain___builtins__, value );
    }

#if PYTHON_VERSION >= 300
    UPDATE_STRING_DICT0( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type );
#endif

#if PYTHON_VERSION >= 340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain___spec__, Py_None );
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = PyImport_ImportModule("importlib._bootstrap");
        CHECK_OBJECT( bootstrap_module );
        PyObject *module_spec_class = PyObject_GetAttrString( bootstrap_module, "ModuleSpec" );
        Py_DECREF( bootstrap_module );

        PyObject *args[] = {
            GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain___name__ ),
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

        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain___spec__, spec_value );
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
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_locals_urllib3$contrib$pyopenssl_247_key___init__ = NULL;
    PyObject *tmp_locals_urllib3$contrib$pyopenssl_247_key__decref_socketios = NULL;
    PyObject *tmp_locals_urllib3$contrib$pyopenssl_247_key__drop = NULL;
    PyObject *tmp_locals_urllib3$contrib$pyopenssl_247_key__reuse = NULL;
    PyObject *tmp_locals_urllib3$contrib$pyopenssl_247_key__send_until_done = NULL;
    PyObject *tmp_locals_urllib3$contrib$pyopenssl_247_key_close = NULL;
    PyObject *tmp_locals_urllib3$contrib$pyopenssl_247_key_fileno = NULL;
    PyObject *tmp_locals_urllib3$contrib$pyopenssl_247_key_getpeercert = NULL;
    PyObject *tmp_locals_urllib3$contrib$pyopenssl_247_key_recv = NULL;
    PyObject *tmp_locals_urllib3$contrib$pyopenssl_247_key_recv_into = NULL;
    PyObject *tmp_locals_urllib3$contrib$pyopenssl_247_key_sendall = NULL;
    PyObject *tmp_locals_urllib3$contrib$pyopenssl_247_key_settimeout = NULL;
    PyObject *tmp_locals_urllib3$contrib$pyopenssl_247_key_shutdown = NULL;
    struct Nuitka_FrameObject *frame_0a680d72b2ee4e2063e1e0f9f2aa3976;
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
    PyObject *locals_urllib3$contrib$pyopenssl_54 = NULL;
    PyObject *tmp_dictset_value;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_urllib3$contrib$pyopenssl_383 = NULL;
    struct Nuitka_FrameObject *frame_2b2b13d89fc5cfd1809f4b0721181c86_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_2b2b13d89fc5cfd1809f4b0721181c86_2 = NULL;
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
        tmp_assign_source_1 = const_str_digest_2f7e5e6bd20de78d1a826b224bb68950;
        UPDATE_STRING_DICT0( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = const_str_digest_f677804d4d3769d5dce63fb421e9aca2;
        UPDATE_STRING_DICT0( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    }
    // Frame without reuse.
    frame_0a680d72b2ee4e2063e1e0f9f2aa3976 = MAKE_MODULE_FRAME( codeobj_0a680d72b2ee4e2063e1e0f9f2aa3976, module_urllib3$contrib$pyopenssl );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_0a680d72b2ee4e2063e1e0f9f2aa3976 );
    assert( Py_REFCNT( frame_0a680d72b2ee4e2063e1e0f9f2aa3976 ) == 2 );

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_1;
        frame_0a680d72b2ee4e2063e1e0f9f2aa3976->m_frame.f_lineno = 44;
        tmp_import_name_from_1 = PyImport_ImportModule("__future__");
        assert( !(tmp_import_name_from_1 == NULL) );
        tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_absolute_import );
        if ( tmp_assign_source_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_3 );
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_name_1;
        PyObject *tmp_globals_name_1;
        PyObject *tmp_locals_name_1;
        PyObject *tmp_fromlist_name_1;
        PyObject *tmp_level_name_1;
        tmp_name_name_1 = const_str_digest_36dfc40fd76fef32a3245e24bfe74ea9;
        tmp_globals_name_1 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_1 = Py_None;
        tmp_fromlist_name_1 = Py_None;
        tmp_level_name_1 = const_int_0;
        frame_0a680d72b2ee4e2063e1e0f9f2aa3976->m_frame.f_lineno = 46;
        tmp_assign_source_4 = IMPORT_MODULE5( tmp_name_name_1, tmp_globals_name_1, tmp_locals_name_1, tmp_fromlist_name_1, tmp_level_name_1 );
        if ( tmp_assign_source_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL, tmp_assign_source_4 );
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_name_2;
        PyObject *tmp_globals_name_2;
        PyObject *tmp_locals_name_2;
        PyObject *tmp_fromlist_name_2;
        PyObject *tmp_level_name_2;
        tmp_name_name_2 = const_str_plain_cryptography;
        tmp_globals_name_2 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_2 = Py_None;
        tmp_fromlist_name_2 = const_tuple_str_plain_x509_tuple;
        tmp_level_name_2 = const_int_0;
        frame_0a680d72b2ee4e2063e1e0f9f2aa3976->m_frame.f_lineno = 47;
        tmp_import_name_from_2 = IMPORT_MODULE5( tmp_name_name_2, tmp_globals_name_2, tmp_locals_name_2, tmp_fromlist_name_2, tmp_level_name_2 );
        if ( tmp_import_name_from_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_x509 );
        Py_DECREF( tmp_import_name_from_2 );
        if ( tmp_assign_source_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_x509, tmp_assign_source_5 );
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_name_3;
        PyObject *tmp_globals_name_3;
        PyObject *tmp_locals_name_3;
        PyObject *tmp_fromlist_name_3;
        PyObject *tmp_level_name_3;
        tmp_name_name_3 = const_str_digest_ee742e011576d32d1c182b86832e4555;
        tmp_globals_name_3 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_3 = Py_None;
        tmp_fromlist_name_3 = const_tuple_str_plain_backend_tuple;
        tmp_level_name_3 = const_int_0;
        frame_0a680d72b2ee4e2063e1e0f9f2aa3976->m_frame.f_lineno = 48;
        tmp_import_name_from_3 = IMPORT_MODULE5( tmp_name_name_3, tmp_globals_name_3, tmp_locals_name_3, tmp_fromlist_name_3, tmp_level_name_3 );
        if ( tmp_import_name_from_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_backend );
        Py_DECREF( tmp_import_name_from_3 );
        if ( tmp_assign_source_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_openssl_backend, tmp_assign_source_6 );
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_name_4;
        PyObject *tmp_globals_name_4;
        PyObject *tmp_locals_name_4;
        PyObject *tmp_fromlist_name_4;
        PyObject *tmp_level_name_4;
        tmp_name_name_4 = const_str_digest_2b6a6c0099f1f1dd77d2725acd0722df;
        tmp_globals_name_4 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_4 = Py_None;
        tmp_fromlist_name_4 = const_tuple_str_plain__Certificate_tuple;
        tmp_level_name_4 = const_int_0;
        frame_0a680d72b2ee4e2063e1e0f9f2aa3976->m_frame.f_lineno = 49;
        tmp_import_name_from_4 = IMPORT_MODULE5( tmp_name_name_4, tmp_globals_name_4, tmp_locals_name_4, tmp_fromlist_name_4, tmp_level_name_4 );
        if ( tmp_import_name_from_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain__Certificate );
        Py_DECREF( tmp_import_name_from_4 );
        if ( tmp_assign_source_7 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__Certificate, tmp_assign_source_7 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_name_5;
        PyObject *tmp_globals_name_5;
        PyObject *tmp_locals_name_5;
        PyObject *tmp_fromlist_name_5;
        PyObject *tmp_level_name_5;
        tmp_name_name_5 = const_str_digest_60a1bac43ab19e7498cc2fb7d34f5b86;
        tmp_globals_name_5 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_5 = Py_None;
        tmp_fromlist_name_5 = const_tuple_str_plain_UnsupportedExtension_tuple;
        tmp_level_name_5 = const_int_0;
        frame_0a680d72b2ee4e2063e1e0f9f2aa3976->m_frame.f_lineno = 51;
        tmp_import_name_from_5 = IMPORT_MODULE5( tmp_name_name_5, tmp_globals_name_5, tmp_locals_name_5, tmp_fromlist_name_5, tmp_level_name_5 );
        if ( tmp_import_name_from_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;

            goto try_except_handler_1;
        }
        tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_UnsupportedExtension );
        Py_DECREF( tmp_import_name_from_5 );
        if ( tmp_assign_source_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 51;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_UnsupportedExtension, tmp_assign_source_8 );
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
    PRESERVE_FRAME_EXCEPTION( frame_0a680d72b2ee4e2063e1e0f9f2aa3976 );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_0a680d72b2ee4e2063e1e0f9f2aa3976, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != 0 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_0a680d72b2ee4e2063e1e0f9f2aa3976, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
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


            exception_lineno = 52;

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
            PyObject *tmp_assign_source_9;
            {
                PyObject *tmp_set_locals_1;
                tmp_set_locals_1 = PyDict_New();
                locals_urllib3$contrib$pyopenssl_54 = tmp_set_locals_1;
            }
            tmp_dictset_value = const_str_digest_9b140d54e682de757186c632bf3beb69;
            tmp_res = PyDict_SetItem( locals_urllib3$contrib$pyopenssl_54, const_str_plain___module__, tmp_dictset_value );
            assert( !(tmp_res != 0) );
            // Tried code:
            tmp_assign_source_9 = locals_urllib3$contrib$pyopenssl_54;
            Py_INCREF( tmp_assign_source_9 );
            goto try_return_handler_2;
            // tried codes exits in all cases
            NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl );
            return MOD_RETURN_VALUE( NULL );
            // Return handler code:
            try_return_handler_2:;
            Py_DECREF( locals_urllib3$contrib$pyopenssl_54 );
            locals_urllib3$contrib$pyopenssl_54 = NULL;
            goto outline_result_1;
            // End of try:
            // Return statement must have exited already.
            NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl );
            return MOD_RETURN_VALUE( NULL );
            outline_result_1:;
            assert( tmp_class_creation_1__class_dict == NULL );
            tmp_class_creation_1__class_dict = tmp_assign_source_9;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
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


                exception_lineno = 54;

                goto try_except_handler_3;
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
            tmp_assign_source_10 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
            if ( tmp_assign_source_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;

                goto try_except_handler_3;
            }
            goto condexpr_end_1;
            condexpr_false_1:;
            tmp_assign_source_10 = (PyObject *)&PyType_Type;
            Py_INCREF( tmp_assign_source_10 );
            condexpr_end_1:;
            assert( tmp_class_creation_1__metaclass == NULL );
            tmp_class_creation_1__metaclass = tmp_assign_source_10;
        }
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_name_1;
            PyObject *tmp_args_element_name_1;
            PyObject *tmp_args_element_name_2;
            PyObject *tmp_args_element_name_3;
            CHECK_OBJECT( tmp_class_creation_1__metaclass );
            tmp_called_name_1 = tmp_class_creation_1__metaclass;
            tmp_args_element_name_1 = const_str_plain_UnsupportedExtension;
            tmp_args_element_name_2 = const_tuple_type_Exception_tuple;
            CHECK_OBJECT( tmp_class_creation_1__class_dict );
            tmp_args_element_name_3 = tmp_class_creation_1__class_dict;
            frame_0a680d72b2ee4e2063e1e0f9f2aa3976->m_frame.f_lineno = 54;
            {
                PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
                tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
            }

            if ( tmp_assign_source_11 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 54;

                goto try_except_handler_3;
            }
            assert( tmp_class_creation_1__class == NULL );
            tmp_class_creation_1__class = tmp_assign_source_11;
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
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT( tmp_class_creation_1__class );
            tmp_assign_source_12 = tmp_class_creation_1__class;
            UPDATE_STRING_DICT0( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_UnsupportedExtension, tmp_assign_source_12 );
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
            exception_lineno = 50;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_0a680d72b2ee4e2063e1e0f9f2aa3976->m_frame) frame_0a680d72b2ee4e2063e1e0f9f2aa3976->m_frame.f_lineno = exception_tb->tb_lineno;

        goto frame_exception_exit_1;
        branch_end_1:;
    }
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_name_6;
        PyObject *tmp_globals_name_6;
        PyObject *tmp_locals_name_6;
        PyObject *tmp_fromlist_name_6;
        PyObject *tmp_level_name_6;
        tmp_name_name_6 = const_str_plain_socket;
        tmp_globals_name_6 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_6 = Py_None;
        tmp_fromlist_name_6 = const_tuple_str_plain_timeout_str_plain_error_tuple;
        tmp_level_name_6 = const_int_0;
        frame_0a680d72b2ee4e2063e1e0f9f2aa3976->m_frame.f_lineno = 57;
        tmp_assign_source_13 = IMPORT_MODULE5( tmp_name_name_6, tmp_globals_name_6, tmp_locals_name_6, tmp_fromlist_name_6, tmp_level_name_6 );
        if ( tmp_assign_source_13 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        assert( tmp_import_from_1__module == NULL );
        tmp_import_from_1__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_6 = tmp_import_from_1__module;
        tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_timeout );
        if ( tmp_assign_source_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_timeout, tmp_assign_source_14 );
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT( tmp_import_from_1__module );
        tmp_import_name_from_7 = tmp_import_from_1__module;
        tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_error );
        if ( tmp_assign_source_15 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 57;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_SocketError, tmp_assign_source_15 );
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

    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_import_from_1__module );
    Py_DECREF( tmp_import_from_1__module );
    tmp_import_from_1__module = NULL;

    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_name_7;
        PyObject *tmp_globals_name_7;
        PyObject *tmp_locals_name_7;
        PyObject *tmp_fromlist_name_7;
        PyObject *tmp_level_name_7;
        tmp_name_name_7 = const_str_plain_io;
        tmp_globals_name_7 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_7 = Py_None;
        tmp_fromlist_name_7 = const_tuple_str_plain_BytesIO_tuple;
        tmp_level_name_7 = const_int_0;
        frame_0a680d72b2ee4e2063e1e0f9f2aa3976->m_frame.f_lineno = 58;
        tmp_import_name_from_8 = IMPORT_MODULE5( tmp_name_name_7, tmp_globals_name_7, tmp_locals_name_7, tmp_fromlist_name_7, tmp_level_name_7 );
        if ( tmp_import_name_from_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_BytesIO );
        Py_DECREF( tmp_import_name_from_8 );
        if ( tmp_assign_source_16 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_BytesIO, tmp_assign_source_16 );
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_name_8;
        PyObject *tmp_globals_name_8;
        PyObject *tmp_locals_name_8;
        PyObject *tmp_fromlist_name_8;
        PyObject *tmp_level_name_8;
        tmp_name_name_8 = const_str_plain_socket;
        tmp_globals_name_8 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_8 = Py_None;
        tmp_fromlist_name_8 = const_tuple_str_plain__fileobject_tuple;
        tmp_level_name_8 = const_int_0;
        frame_0a680d72b2ee4e2063e1e0f9f2aa3976->m_frame.f_lineno = 61;
        tmp_import_name_from_9 = IMPORT_MODULE5( tmp_name_name_8, tmp_globals_name_8, tmp_locals_name_8, tmp_fromlist_name_8, tmp_level_name_8 );
        if ( tmp_import_name_from_9 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;

            goto try_except_handler_5;
        }
        tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain__fileobject );
        Py_DECREF( tmp_import_name_from_9 );
        if ( tmp_assign_source_17 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 61;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__fileobject, tmp_assign_source_17 );
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
    PRESERVE_FRAME_EXCEPTION( frame_0a680d72b2ee4e2063e1e0f9f2aa3976 );
    if ( exception_keeper_tb_4 == NULL )
    {
        exception_keeper_tb_4 = MAKE_TRACEBACK( frame_0a680d72b2ee4e2063e1e0f9f2aa3976, exception_keeper_lineno_4 );
    }
    else if ( exception_keeper_lineno_4 != 0 )
    {
        exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_0a680d72b2ee4e2063e1e0f9f2aa3976, exception_keeper_lineno_4 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_compexpr_left_2;
        PyObject *tmp_compexpr_right_2;
        tmp_compexpr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_2 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_2, tmp_compexpr_right_2 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 62;

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
            PyObject *tmp_assign_source_18;
            tmp_assign_source_18 = Py_None;
            UPDATE_STRING_DICT0( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__fileobject, tmp_assign_source_18 );
        }
        {
            PyObject *tmp_assign_source_19;
            PyObject *tmp_import_name_from_10;
            PyObject *tmp_name_name_9;
            PyObject *tmp_globals_name_9;
            PyObject *tmp_locals_name_9;
            PyObject *tmp_fromlist_name_9;
            PyObject *tmp_level_name_9;
            tmp_name_name_9 = const_str_digest_f5748acc7624a8d3f9bd48b7312e95e1;
            tmp_globals_name_9 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
            tmp_locals_name_9 = Py_None;
            tmp_fromlist_name_9 = const_tuple_str_plain_backport_makefile_tuple;
            tmp_level_name_9 = const_int_pos_2;
            frame_0a680d72b2ee4e2063e1e0f9f2aa3976->m_frame.f_lineno = 64;
            tmp_import_name_from_10 = IMPORT_MODULE5( tmp_name_name_9, tmp_globals_name_9, tmp_locals_name_9, tmp_fromlist_name_9, tmp_level_name_9 );
            if ( tmp_import_name_from_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;

                goto frame_exception_exit_1;
            }
            tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_backport_makefile );
            Py_DECREF( tmp_import_name_from_10 );
            if ( tmp_assign_source_19 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 64;

                goto frame_exception_exit_1;
            }
            UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_backport_makefile, tmp_assign_source_19 );
        }
        goto branch_end_2;
        branch_no_2:;
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 60;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_0a680d72b2ee4e2063e1e0f9f2aa3976->m_frame) frame_0a680d72b2ee4e2063e1e0f9f2aa3976->m_frame.f_lineno = exception_tb->tb_lineno;

        goto frame_exception_exit_1;
        branch_end_2:;
    }
    goto try_end_4;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_4:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_name_name_10;
        PyObject *tmp_globals_name_10;
        PyObject *tmp_locals_name_10;
        PyObject *tmp_fromlist_name_10;
        PyObject *tmp_level_name_10;
        tmp_name_name_10 = const_str_plain_logging;
        tmp_globals_name_10 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_10 = Py_None;
        tmp_fromlist_name_10 = Py_None;
        tmp_level_name_10 = const_int_0;
        frame_0a680d72b2ee4e2063e1e0f9f2aa3976->m_frame.f_lineno = 66;
        tmp_assign_source_20 = IMPORT_MODULE5( tmp_name_name_10, tmp_globals_name_10, tmp_locals_name_10, tmp_fromlist_name_10, tmp_level_name_10 );
        if ( tmp_assign_source_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_logging, tmp_assign_source_20 );
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_name_name_11;
        PyObject *tmp_globals_name_11;
        PyObject *tmp_locals_name_11;
        PyObject *tmp_fromlist_name_11;
        PyObject *tmp_level_name_11;
        tmp_name_name_11 = const_str_plain_ssl;
        tmp_globals_name_11 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_11 = Py_None;
        tmp_fromlist_name_11 = Py_None;
        tmp_level_name_11 = const_int_0;
        frame_0a680d72b2ee4e2063e1e0f9f2aa3976->m_frame.f_lineno = 67;
        tmp_assign_source_21 = IMPORT_MODULE5( tmp_name_name_11, tmp_globals_name_11, tmp_locals_name_11, tmp_fromlist_name_11, tmp_level_name_11 );
        if ( tmp_assign_source_21 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_ssl, tmp_assign_source_21 );
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_name_name_12;
        PyObject *tmp_globals_name_12;
        PyObject *tmp_locals_name_12;
        PyObject *tmp_fromlist_name_12;
        PyObject *tmp_level_name_12;
        tmp_name_name_12 = const_str_plain_six;
        tmp_globals_name_12 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_12 = Py_None;
        tmp_fromlist_name_12 = Py_None;
        tmp_level_name_12 = const_int_0;
        frame_0a680d72b2ee4e2063e1e0f9f2aa3976->m_frame.f_lineno = 68;
        tmp_assign_source_22 = IMPORT_MODULE5( tmp_name_name_12, tmp_globals_name_12, tmp_locals_name_12, tmp_fromlist_name_12, tmp_level_name_12 );
        if ( tmp_assign_source_22 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_six, tmp_assign_source_22 );
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_name_name_13;
        PyObject *tmp_globals_name_13;
        PyObject *tmp_locals_name_13;
        PyObject *tmp_fromlist_name_13;
        PyObject *tmp_level_name_13;
        tmp_name_name_13 = const_str_plain_sys;
        tmp_globals_name_13 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_13 = Py_None;
        tmp_fromlist_name_13 = Py_None;
        tmp_level_name_13 = const_int_0;
        frame_0a680d72b2ee4e2063e1e0f9f2aa3976->m_frame.f_lineno = 69;
        tmp_assign_source_23 = IMPORT_MODULE5( tmp_name_name_13, tmp_globals_name_13, tmp_locals_name_13, tmp_fromlist_name_13, tmp_level_name_13 );
        assert( !(tmp_assign_source_23 == NULL) );
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_23 );
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_name_14;
        PyObject *tmp_globals_name_14;
        PyObject *tmp_locals_name_14;
        PyObject *tmp_fromlist_name_14;
        PyObject *tmp_level_name_14;
        tmp_name_name_14 = const_str_empty;
        tmp_globals_name_14 = (PyObject *)moduledict_urllib3$contrib$pyopenssl;
        tmp_locals_name_14 = Py_None;
        tmp_fromlist_name_14 = const_tuple_str_plain_util_tuple;
        tmp_level_name_14 = const_int_pos_2;
        frame_0a680d72b2ee4e2063e1e0f9f2aa3976->m_frame.f_lineno = 71;
        tmp_import_name_from_11 = IMPORT_MODULE5( tmp_name_name_14, tmp_globals_name_14, tmp_locals_name_14, tmp_fromlist_name_14, tmp_level_name_14 );
        if ( tmp_import_name_from_11 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_util );
        Py_DECREF( tmp_import_name_from_11 );
        if ( tmp_assign_source_24 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util, tmp_assign_source_24 );
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = LIST_COPY( const_list_str_plain_inject_into_urllib3_str_plain_extract_from_urllib3_list );
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_25 );
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = Py_True;
        UPDATE_STRING_DICT0( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_HAS_SNI, tmp_assign_source_26 );
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_source_name_1;
        PyObject *tmp_source_name_2;
        PyObject *tmp_mvar_value_1;
        PyObject *tmp_source_name_3;
        PyObject *tmp_mvar_value_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_source_name_4;
        PyObject *tmp_source_name_5;
        PyObject *tmp_mvar_value_3;
        PyObject *tmp_source_name_6;
        PyObject *tmp_mvar_value_4;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_1 == NULL ))
        {
            tmp_mvar_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }

        tmp_source_name_2 = tmp_mvar_value_1;
        tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_SSL );
        if ( tmp_source_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_SSLv23_METHOD );
        Py_DECREF( tmp_source_name_1 );
        if ( tmp_dict_value_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_ssl );

        if (unlikely( tmp_mvar_value_2 == NULL ))
        {
            tmp_mvar_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
        }

        if ( tmp_mvar_value_2 == NULL )
        {
            Py_DECREF( tmp_dict_value_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ssl" );
            exception_tb = NULL;

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }

        tmp_source_name_3 = tmp_mvar_value_2;
        tmp_dict_key_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_PROTOCOL_SSLv23 );
        if ( tmp_dict_key_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dict_value_1 );

            exception_lineno = 80;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_27 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem( tmp_assign_source_27, tmp_dict_key_1, tmp_dict_value_1 );
        Py_DECREF( tmp_dict_value_1 );
        Py_DECREF( tmp_dict_key_1 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_27 );

            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_3 == NULL ))
        {
            tmp_mvar_value_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_3 == NULL )
        {
            Py_DECREF( tmp_assign_source_27 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }

        tmp_source_name_5 = tmp_mvar_value_3;
        tmp_source_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_SSL );
        if ( tmp_source_name_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_27 );

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_TLSv1_METHOD );
        Py_DECREF( tmp_source_name_4 );
        if ( tmp_dict_value_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_27 );

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_ssl );

        if (unlikely( tmp_mvar_value_4 == NULL ))
        {
            tmp_mvar_value_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
        }

        if ( tmp_mvar_value_4 == NULL )
        {
            Py_DECREF( tmp_assign_source_27 );
            Py_DECREF( tmp_dict_value_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ssl" );
            exception_tb = NULL;

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }

        tmp_source_name_6 = tmp_mvar_value_4;
        tmp_dict_key_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_PROTOCOL_TLSv1 );
        if ( tmp_dict_key_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_27 );
            Py_DECREF( tmp_dict_value_2 );

            exception_lineno = 81;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_27, tmp_dict_key_2, tmp_dict_value_2 );
        Py_DECREF( tmp_dict_value_2 );
        Py_DECREF( tmp_dict_key_2 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_27 );

            exception_lineno = 79;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__openssl_versions, tmp_assign_source_27 );
    }
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_source_name_7;
        PyObject *tmp_mvar_value_5;
        PyObject *tmp_attribute_name_1;
        PyObject *tmp_source_name_8;
        PyObject *tmp_source_name_9;
        PyObject *tmp_mvar_value_6;
        PyObject *tmp_attribute_name_2;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_ssl );

        if (unlikely( tmp_mvar_value_5 == NULL ))
        {
            tmp_mvar_value_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
        }

        if ( tmp_mvar_value_5 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ssl" );
            exception_tb = NULL;

            exception_lineno = 84;

            goto frame_exception_exit_1;
        }

        tmp_source_name_7 = tmp_mvar_value_5;
        tmp_attribute_name_1 = const_str_plain_PROTOCOL_TLSv1_1;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_7, tmp_attribute_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;

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
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_6 == NULL ))
        {
            tmp_mvar_value_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_6 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;

            exception_lineno = 84;

            goto frame_exception_exit_1;
        }

        tmp_source_name_9 = tmp_mvar_value_6;
        tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_SSL );
        if ( tmp_source_name_8 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;

            goto frame_exception_exit_1;
        }
        tmp_attribute_name_2 = const_str_plain_TLSv1_1_METHOD;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_8, tmp_attribute_name_2 );
        Py_DECREF( tmp_source_name_8 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 84;

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
            goto branch_yes_3;
        }
        else
        {
            goto branch_no_3;
        }
        branch_yes_3:;
        {
            PyObject *tmp_ass_subvalue_1;
            PyObject *tmp_source_name_10;
            PyObject *tmp_source_name_11;
            PyObject *tmp_mvar_value_7;
            PyObject *tmp_ass_subscribed_1;
            PyObject *tmp_mvar_value_8;
            PyObject *tmp_ass_subscript_1;
            PyObject *tmp_source_name_12;
            PyObject *tmp_mvar_value_9;
            tmp_mvar_value_7 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

            if (unlikely( tmp_mvar_value_7 == NULL ))
            {
                tmp_mvar_value_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
            }

            if ( tmp_mvar_value_7 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "OpenSSL" );
                exception_tb = NULL;

                exception_lineno = 85;

                goto frame_exception_exit_1;
            }

            tmp_source_name_11 = tmp_mvar_value_7;
            tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_SSL );
            if ( tmp_source_name_10 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;

                goto frame_exception_exit_1;
            }
            tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_TLSv1_1_METHOD );
            Py_DECREF( tmp_source_name_10 );
            if ( tmp_ass_subvalue_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;

                goto frame_exception_exit_1;
            }
            tmp_mvar_value_8 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__openssl_versions );

            if (unlikely( tmp_mvar_value_8 == NULL ))
            {
                tmp_mvar_value_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__openssl_versions );
            }

            if ( tmp_mvar_value_8 == NULL )
            {
                Py_DECREF( tmp_ass_subvalue_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "_openssl_versions" );
                exception_tb = NULL;

                exception_lineno = 85;

                goto frame_exception_exit_1;
            }

            tmp_ass_subscribed_1 = tmp_mvar_value_8;
            tmp_mvar_value_9 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_ssl );

            if (unlikely( tmp_mvar_value_9 == NULL ))
            {
                tmp_mvar_value_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
            }

            if ( tmp_mvar_value_9 == NULL )
            {
                Py_DECREF( tmp_ass_subvalue_1 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "ssl" );
                exception_tb = NULL;

                exception_lineno = 85;

                goto frame_exception_exit_1;
            }

            tmp_source_name_12 = tmp_mvar_value_9;
            tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_PROTOCOL_TLSv1_1 );
            if ( tmp_ass_subscript_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_1 );

                exception_lineno = 85;

                goto frame_exception_exit_1;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
            Py_DECREF( tmp_ass_subscript_1 );
            Py_DECREF( tmp_ass_subvalue_1 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 85;

                goto frame_exception_exit_1;
            }
        }
        branch_no_3:;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_source_name_13;
        PyObject *tmp_mvar_value_10;
        PyObject *tmp_attribute_name_3;
        PyObject *tmp_source_name_14;
        PyObject *tmp_source_name_15;
        PyObject *tmp_mvar_value_11;
        PyObject *tmp_attribute_name_4;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_ssl );

        if (unlikely( tmp_mvar_value_10 == NULL ))
        {
            tmp_mvar_value_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
        }

        if ( tmp_mvar_value_10 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ssl" );
            exception_tb = NULL;

            exception_lineno = 87;

            goto frame_exception_exit_1;
        }

        tmp_source_name_13 = tmp_mvar_value_10;
        tmp_attribute_name_3 = const_str_plain_PROTOCOL_TLSv1_2;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_13, tmp_attribute_name_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
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
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_11 == NULL ))
        {
            tmp_mvar_value_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_11 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;

            exception_lineno = 87;

            goto frame_exception_exit_1;
        }

        tmp_source_name_15 = tmp_mvar_value_11;
        tmp_source_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_SSL );
        if ( tmp_source_name_14 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_attribute_name_4 = const_str_plain_TLSv1_2_METHOD;
        tmp_res = BUILTIN_HASATTR_BOOL( tmp_source_name_14, tmp_attribute_name_4 );
        Py_DECREF( tmp_source_name_14 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_5 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_5 = tmp_and_left_value_2;
        and_end_2:;
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
            PyObject *tmp_ass_subvalue_2;
            PyObject *tmp_source_name_16;
            PyObject *tmp_source_name_17;
            PyObject *tmp_mvar_value_12;
            PyObject *tmp_ass_subscribed_2;
            PyObject *tmp_mvar_value_13;
            PyObject *tmp_ass_subscript_2;
            PyObject *tmp_source_name_18;
            PyObject *tmp_mvar_value_14;
            tmp_mvar_value_12 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

            if (unlikely( tmp_mvar_value_12 == NULL ))
            {
                tmp_mvar_value_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
            }

            if ( tmp_mvar_value_12 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "OpenSSL" );
                exception_tb = NULL;

                exception_lineno = 88;

                goto frame_exception_exit_1;
            }

            tmp_source_name_17 = tmp_mvar_value_12;
            tmp_source_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_SSL );
            if ( tmp_source_name_16 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;

                goto frame_exception_exit_1;
            }
            tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_TLSv1_2_METHOD );
            Py_DECREF( tmp_source_name_16 );
            if ( tmp_ass_subvalue_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;

                goto frame_exception_exit_1;
            }
            tmp_mvar_value_13 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__openssl_versions );

            if (unlikely( tmp_mvar_value_13 == NULL ))
            {
                tmp_mvar_value_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__openssl_versions );
            }

            if ( tmp_mvar_value_13 == NULL )
            {
                Py_DECREF( tmp_ass_subvalue_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "_openssl_versions" );
                exception_tb = NULL;

                exception_lineno = 88;

                goto frame_exception_exit_1;
            }

            tmp_ass_subscribed_2 = tmp_mvar_value_13;
            tmp_mvar_value_14 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_ssl );

            if (unlikely( tmp_mvar_value_14 == NULL ))
            {
                tmp_mvar_value_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
            }

            if ( tmp_mvar_value_14 == NULL )
            {
                Py_DECREF( tmp_ass_subvalue_2 );
                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "ssl" );
                exception_tb = NULL;

                exception_lineno = 88;

                goto frame_exception_exit_1;
            }

            tmp_source_name_18 = tmp_mvar_value_14;
            tmp_ass_subscript_2 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_PROTOCOL_TLSv1_2 );
            if ( tmp_ass_subscript_2 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
                Py_DECREF( tmp_ass_subvalue_2 );

                exception_lineno = 88;

                goto frame_exception_exit_1;
            }
            tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
            Py_DECREF( tmp_ass_subscript_2 );
            Py_DECREF( tmp_ass_subvalue_2 );
            if ( tmp_result == false )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 88;

                goto frame_exception_exit_1;
            }
        }
        branch_no_4:;
    }
    // Tried code:
    {
        PyObject *tmp_called_name_2;
        PyObject *tmp_source_name_19;
        PyObject *tmp_mvar_value_15;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_name_4;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_source_name_20;
        PyObject *tmp_source_name_21;
        PyObject *tmp_mvar_value_16;
        PyObject *tmp_source_name_22;
        PyObject *tmp_mvar_value_17;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__openssl_versions );

        if (unlikely( tmp_mvar_value_15 == NULL ))
        {
            tmp_mvar_value_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__openssl_versions );
        }

        if ( tmp_mvar_value_15 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_openssl_versions" );
            exception_tb = NULL;

            exception_lineno = 91;

            goto try_except_handler_6;
        }

        tmp_source_name_19 = tmp_mvar_value_15;
        tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_update );
        if ( tmp_called_name_2 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;

            goto try_except_handler_6;
        }
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_16 == NULL ))
        {
            tmp_mvar_value_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_16 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;

            exception_lineno = 91;

            goto try_except_handler_6;
        }

        tmp_source_name_21 = tmp_mvar_value_16;
        tmp_source_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_SSL );
        if ( tmp_source_name_20 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 91;

            goto try_except_handler_6;
        }
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_SSLv3_METHOD );
        Py_DECREF( tmp_source_name_20 );
        if ( tmp_dict_value_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );

            exception_lineno = 91;

            goto try_except_handler_6;
        }
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_ssl );

        if (unlikely( tmp_mvar_value_17 == NULL ))
        {
            tmp_mvar_value_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
        }

        if ( tmp_mvar_value_17 == NULL )
        {
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_dict_value_3 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ssl" );
            exception_tb = NULL;

            exception_lineno = 91;

            goto try_except_handler_6;
        }

        tmp_source_name_22 = tmp_mvar_value_17;
        tmp_dict_key_3 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_PROTOCOL_SSLv3 );
        if ( tmp_dict_key_3 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_dict_value_3 );

            exception_lineno = 91;

            goto try_except_handler_6;
        }
        tmp_args_element_name_4 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem( tmp_args_element_name_4, tmp_dict_key_3, tmp_dict_value_3 );
        Py_DECREF( tmp_dict_value_3 );
        Py_DECREF( tmp_dict_key_3 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_called_name_2 );
            Py_DECREF( tmp_args_element_name_4 );

            exception_lineno = 91;

            goto try_except_handler_6;
        }
        frame_0a680d72b2ee4e2063e1e0f9f2aa3976->m_frame.f_lineno = 91;
        {
            PyObject *call_args[] = { tmp_args_element_name_4 };
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
        }

        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );
        if ( tmp_call_result_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 91;

            goto try_except_handler_6;
        }
        Py_DECREF( tmp_call_result_1 );
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_0a680d72b2ee4e2063e1e0f9f2aa3976 );
    if ( exception_keeper_tb_5 == NULL )
    {
        exception_keeper_tb_5 = MAKE_TRACEBACK( frame_0a680d72b2ee4e2063e1e0f9f2aa3976, exception_keeper_lineno_5 );
    }
    else if ( exception_keeper_lineno_5 != 0 )
    {
        exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_0a680d72b2ee4e2063e1e0f9f2aa3976, exception_keeper_lineno_5 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_operand_name_1;
        PyObject *tmp_compexpr_left_3;
        PyObject *tmp_compexpr_right_3;
        tmp_compexpr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_compexpr_right_3 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL( tmp_compexpr_left_3, tmp_compexpr_right_3 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_operand_name_1 = ( tmp_res != 0 ) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE( tmp_operand_name_1 );
        if ( tmp_res == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 92;

            goto frame_exception_exit_1;
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
        tmp_result = RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
        if (unlikely( tmp_result == false ))
        {
            exception_lineno = 90;
        }

        if (exception_tb && exception_tb->tb_frame == &frame_0a680d72b2ee4e2063e1e0f9f2aa3976->m_frame) frame_0a680d72b2ee4e2063e1e0f9f2aa3976->m_frame.f_lineno = exception_tb->tb_lineno;

        goto frame_exception_exit_1;
        branch_no_5:;
    }
    goto try_end_5;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_5:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_source_name_23;
        PyObject *tmp_source_name_24;
        PyObject *tmp_mvar_value_18;
        PyObject *tmp_source_name_25;
        PyObject *tmp_mvar_value_19;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_source_name_26;
        PyObject *tmp_source_name_27;
        PyObject *tmp_mvar_value_20;
        PyObject *tmp_source_name_28;
        PyObject *tmp_mvar_value_21;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_left_name_1;
        PyObject *tmp_source_name_29;
        PyObject *tmp_source_name_30;
        PyObject *tmp_mvar_value_22;
        PyObject *tmp_right_name_1;
        PyObject *tmp_source_name_31;
        PyObject *tmp_source_name_32;
        PyObject *tmp_mvar_value_23;
        PyObject *tmp_source_name_33;
        PyObject *tmp_mvar_value_24;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_18 == NULL ))
        {
            tmp_mvar_value_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_18 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;

            exception_lineno = 96;

            goto frame_exception_exit_1;
        }

        tmp_source_name_24 = tmp_mvar_value_18;
        tmp_source_name_23 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_SSL );
        if ( tmp_source_name_23 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_VERIFY_NONE );
        Py_DECREF( tmp_source_name_23 );
        if ( tmp_dict_value_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_ssl );

        if (unlikely( tmp_mvar_value_19 == NULL ))
        {
            tmp_mvar_value_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
        }

        if ( tmp_mvar_value_19 == NULL )
        {
            Py_DECREF( tmp_dict_value_4 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ssl" );
            exception_tb = NULL;

            exception_lineno = 96;

            goto frame_exception_exit_1;
        }

        tmp_source_name_25 = tmp_mvar_value_19;
        tmp_dict_key_4 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_CERT_NONE );
        if ( tmp_dict_key_4 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_dict_value_4 );

            exception_lineno = 96;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_28 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem( tmp_assign_source_28, tmp_dict_key_4, tmp_dict_value_4 );
        Py_DECREF( tmp_dict_value_4 );
        Py_DECREF( tmp_dict_key_4 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_28 );

            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_20 == NULL ))
        {
            tmp_mvar_value_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_20 == NULL )
        {
            Py_DECREF( tmp_assign_source_28 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }

        tmp_source_name_27 = tmp_mvar_value_20;
        tmp_source_name_26 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_SSL );
        if ( tmp_source_name_26 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_28 );

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_VERIFY_PEER );
        Py_DECREF( tmp_source_name_26 );
        if ( tmp_dict_value_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_28 );

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_ssl );

        if (unlikely( tmp_mvar_value_21 == NULL ))
        {
            tmp_mvar_value_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
        }

        if ( tmp_mvar_value_21 == NULL )
        {
            Py_DECREF( tmp_assign_source_28 );
            Py_DECREF( tmp_dict_value_5 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ssl" );
            exception_tb = NULL;

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }

        tmp_source_name_28 = tmp_mvar_value_21;
        tmp_dict_key_5 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_CERT_OPTIONAL );
        if ( tmp_dict_key_5 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_28 );
            Py_DECREF( tmp_dict_value_5 );

            exception_lineno = 97;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_28, tmp_dict_key_5, tmp_dict_value_5 );
        Py_DECREF( tmp_dict_value_5 );
        Py_DECREF( tmp_dict_key_5 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_28 );

            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_22 == NULL ))
        {
            tmp_mvar_value_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_22 == NULL )
        {
            Py_DECREF( tmp_assign_source_28 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }

        tmp_source_name_30 = tmp_mvar_value_22;
        tmp_source_name_29 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_SSL );
        if ( tmp_source_name_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_28 );

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_VERIFY_PEER );
        Py_DECREF( tmp_source_name_29 );
        if ( tmp_left_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_28 );

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_OpenSSL );

        if (unlikely( tmp_mvar_value_23 == NULL ))
        {
            tmp_mvar_value_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_OpenSSL );
        }

        if ( tmp_mvar_value_23 == NULL )
        {
            Py_DECREF( tmp_assign_source_28 );
            Py_DECREF( tmp_left_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "OpenSSL" );
            exception_tb = NULL;

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }

        tmp_source_name_32 = tmp_mvar_value_23;
        tmp_source_name_31 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_SSL );
        if ( tmp_source_name_31 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_28 );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_VERIFY_FAIL_IF_NO_PEER_CERT );
        Py_DECREF( tmp_source_name_31 );
        if ( tmp_right_name_1 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_28 );
            Py_DECREF( tmp_left_name_1 );

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT( tmp_left_name_1, tmp_right_name_1 );
        Py_DECREF( tmp_left_name_1 );
        Py_DECREF( tmp_right_name_1 );
        if ( tmp_dict_value_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_28 );

            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_ssl );

        if (unlikely( tmp_mvar_value_24 == NULL ))
        {
            tmp_mvar_value_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ssl );
        }

        if ( tmp_mvar_value_24 == NULL )
        {
            Py_DECREF( tmp_assign_source_28 );
            Py_DECREF( tmp_dict_value_6 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "ssl" );
            exception_tb = NULL;

            exception_lineno = 98;

            goto frame_exception_exit_1;
        }

        tmp_source_name_33 = tmp_mvar_value_24;
        tmp_dict_key_6 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_CERT_REQUIRED );
        if ( tmp_dict_key_6 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_28 );
            Py_DECREF( tmp_dict_value_6 );

            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_res = PyDict_SetItem( tmp_assign_source_28, tmp_dict_key_6, tmp_dict_value_6 );
        Py_DECREF( tmp_dict_value_6 );
        Py_DECREF( tmp_dict_key_6 );
        if ( tmp_res != 0 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            Py_DECREF( tmp_assign_source_28 );

            exception_lineno = 95;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__stdlib_to_openssl_verify, tmp_assign_source_28 );
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_dict_seq_1;
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_mvar_value_25;
            tmp_mvar_value_25 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__stdlib_to_openssl_verify );

            if (unlikely( tmp_mvar_value_25 == NULL ))
            {
                tmp_mvar_value_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__stdlib_to_openssl_verify );
            }

            CHECK_OBJECT( tmp_mvar_value_25 );
            tmp_called_instance_1 = tmp_mvar_value_25;
            frame_0a680d72b2ee4e2063e1e0f9f2aa3976->m_frame.f_lineno = 102;
            tmp_iter_arg_1 = CALL_METHOD_NO_ARGS( tmp_called_instance_1, const_str_plain_items );
            if ( tmp_iter_arg_1 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;

                goto frame_exception_exit_1;
            }
            tmp_assign_source_30 = MAKE_ITERATOR( tmp_iter_arg_1 );
            Py_DECREF( tmp_iter_arg_1 );
            if ( tmp_assign_source_30 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 102;

                goto frame_exception_exit_1;
            }
            assert( tmp_genexpr_1__$0 == NULL );
            tmp_genexpr_1__$0 = tmp_assign_source_30;
        }
        // Tried code:
        tmp_dict_seq_1 = urllib3$contrib$pyopenssl$$$genexpr_1_genexpr_maker();

        ((struct Nuitka_GeneratorObject *)tmp_dict_seq_1)->m_closure[0] = PyCell_NEW0( tmp_genexpr_1__$0 );


        goto try_return_handler_7;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        goto outline_result_2;
        // End of try:
        CHECK_OBJECT( (PyObject *)tmp_genexpr_1__$0 );
        Py_DECREF( tmp_genexpr_1__$0 );
        tmp_genexpr_1__$0 = NULL;

        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl );
        return MOD_RETURN_VALUE( NULL );
        outline_result_2:;
        tmp_assign_source_29 = TO_DICT( tmp_dict_seq_1, NULL );
        Py_DECREF( tmp_dict_seq_1 );
        if ( tmp_assign_source_29 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 101;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__openssl_to_stdlib_verify, tmp_assign_source_29 );
    }
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = const_int_pos_16384;
        UPDATE_STRING_DICT0( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_SSL_WRITE_BLOCKSIZE, tmp_assign_source_31 );
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_source_name_34;
        PyObject *tmp_mvar_value_26;
        tmp_mvar_value_26 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

        if (unlikely( tmp_mvar_value_26 == NULL ))
        {
            tmp_mvar_value_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
        }

        if ( tmp_mvar_value_26 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "util" );
            exception_tb = NULL;

            exception_lineno = 108;

            goto frame_exception_exit_1;
        }

        tmp_source_name_34 = tmp_mvar_value_26;
        tmp_assign_source_32 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_HAS_SNI );
        if ( tmp_assign_source_32 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 108;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_orig_util_HAS_SNI, tmp_assign_source_32 );
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_source_name_35;
        PyObject *tmp_source_name_36;
        PyObject *tmp_mvar_value_27;
        tmp_mvar_value_27 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_util );

        if (unlikely( tmp_mvar_value_27 == NULL ))
        {
            tmp_mvar_value_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_util );
        }

        if ( tmp_mvar_value_27 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "util" );
            exception_tb = NULL;

            exception_lineno = 109;

            goto frame_exception_exit_1;
        }

        tmp_source_name_36 = tmp_mvar_value_27;
        tmp_source_name_35 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_ssl_ );
        if ( tmp_source_name_35 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_33 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_SSLContext );
        Py_DECREF( tmp_source_name_35 );
        if ( tmp_assign_source_33 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 109;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_orig_util_SSLContext, tmp_assign_source_33 );
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_mvar_value_28;
        tmp_mvar_value_28 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_logging );

        if (unlikely( tmp_mvar_value_28 == NULL ))
        {
            tmp_mvar_value_28 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_logging );
        }

        if ( tmp_mvar_value_28 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "logging" );
            exception_tb = NULL;

            exception_lineno = 112;

            goto frame_exception_exit_1;
        }

        tmp_called_instance_2 = tmp_mvar_value_28;
        frame_0a680d72b2ee4e2063e1e0f9f2aa3976->m_frame.f_lineno = 112;
        tmp_assign_source_34 = CALL_METHOD_WITH_ARGS1( tmp_called_instance_2, const_str_plain_getLogger, &PyTuple_GET_ITEM( const_tuple_str_digest_9b140d54e682de757186c632bf3beb69_tuple, 0 ) );

        if ( tmp_assign_source_34 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 112;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_log, tmp_assign_source_34 );
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_1_inject_into_urllib3(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_inject_into_urllib3, tmp_assign_source_35 );
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_2_extract_from_urllib3(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_extract_from_urllib3, tmp_assign_source_36 );
    }
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_3__validate_dependencies_met(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__validate_dependencies_met, tmp_assign_source_37 );
    }
    {
        PyObject *tmp_assign_source_38;
        tmp_assign_source_38 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_4__dnsname_to_stdlib(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__dnsname_to_stdlib, tmp_assign_source_38 );
    }
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_5_get_subj_alt_name(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_get_subj_alt_name, tmp_assign_source_39 );
    }
    {
        PyObject *tmp_assign_source_40;
        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = const_tuple_true_tuple;
            Py_INCREF( tmp_defaults_1 );
            tmp_assign_source_41 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_6___init__( tmp_defaults_1 );



            assert( tmp_locals_urllib3$contrib$pyopenssl_247_key___init__ == NULL );
            tmp_locals_urllib3$contrib$pyopenssl_247_key___init__ = tmp_assign_source_41;
        }
        {
            PyObject *tmp_assign_source_42;
            tmp_assign_source_42 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_7_fileno(  );



            assert( tmp_locals_urllib3$contrib$pyopenssl_247_key_fileno == NULL );
            tmp_locals_urllib3$contrib$pyopenssl_247_key_fileno = tmp_assign_source_42;
        }
        {
            PyObject *tmp_assign_source_43;
            tmp_assign_source_43 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_8__decref_socketios(  );



            assert( tmp_locals_urllib3$contrib$pyopenssl_247_key__decref_socketios == NULL );
            tmp_locals_urllib3$contrib$pyopenssl_247_key__decref_socketios = tmp_assign_source_43;
        }
        {
            PyObject *tmp_assign_source_44;
            tmp_assign_source_44 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_9_recv(  );



            assert( tmp_locals_urllib3$contrib$pyopenssl_247_key_recv == NULL );
            tmp_locals_urllib3$contrib$pyopenssl_247_key_recv = tmp_assign_source_44;
        }
        {
            PyObject *tmp_assign_source_45;
            tmp_assign_source_45 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_10_recv_into(  );



            assert( tmp_locals_urllib3$contrib$pyopenssl_247_key_recv_into == NULL );
            tmp_locals_urllib3$contrib$pyopenssl_247_key_recv_into = tmp_assign_source_45;
        }
        {
            PyObject *tmp_assign_source_46;
            tmp_assign_source_46 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_11_settimeout(  );



            assert( tmp_locals_urllib3$contrib$pyopenssl_247_key_settimeout == NULL );
            tmp_locals_urllib3$contrib$pyopenssl_247_key_settimeout = tmp_assign_source_46;
        }
        {
            PyObject *tmp_assign_source_47;
            tmp_assign_source_47 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_12__send_until_done(  );



            assert( tmp_locals_urllib3$contrib$pyopenssl_247_key__send_until_done == NULL );
            tmp_locals_urllib3$contrib$pyopenssl_247_key__send_until_done = tmp_assign_source_47;
        }
        {
            PyObject *tmp_assign_source_48;
            tmp_assign_source_48 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_13_sendall(  );



            assert( tmp_locals_urllib3$contrib$pyopenssl_247_key_sendall == NULL );
            tmp_locals_urllib3$contrib$pyopenssl_247_key_sendall = tmp_assign_source_48;
        }
        {
            PyObject *tmp_assign_source_49;
            tmp_assign_source_49 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_14_shutdown(  );



            assert( tmp_locals_urllib3$contrib$pyopenssl_247_key_shutdown == NULL );
            tmp_locals_urllib3$contrib$pyopenssl_247_key_shutdown = tmp_assign_source_49;
        }
        {
            PyObject *tmp_assign_source_50;
            tmp_assign_source_50 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_15_close(  );



            assert( tmp_locals_urllib3$contrib$pyopenssl_247_key_close == NULL );
            tmp_locals_urllib3$contrib$pyopenssl_247_key_close = tmp_assign_source_50;
        }
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = const_tuple_false_tuple;
            Py_INCREF( tmp_defaults_2 );
            tmp_assign_source_51 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_16_getpeercert( tmp_defaults_2 );



            assert( tmp_locals_urllib3$contrib$pyopenssl_247_key_getpeercert == NULL );
            tmp_locals_urllib3$contrib$pyopenssl_247_key_getpeercert = tmp_assign_source_51;
        }
        {
            PyObject *tmp_assign_source_52;
            tmp_assign_source_52 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_17__reuse(  );



            assert( tmp_locals_urllib3$contrib$pyopenssl_247_key__reuse == NULL );
            tmp_locals_urllib3$contrib$pyopenssl_247_key__reuse = tmp_assign_source_52;
        }
        {
            PyObject *tmp_assign_source_53;
            tmp_assign_source_53 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_18__drop(  );



            assert( tmp_locals_urllib3$contrib$pyopenssl_247_key__drop == NULL );
            tmp_locals_urllib3$contrib$pyopenssl_247_key__drop = tmp_assign_source_53;
        }
        // Tried code:
        {
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
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
            PyObject *tmp_dict_key_20;
            PyObject *tmp_dict_value_20;
            PyObject *tmp_dict_key_21;
            PyObject *tmp_dict_value_21;
            tmp_dict_value_7 = const_str_digest_9b140d54e682de757186c632bf3beb69;
            tmp_dict_key_7 = const_str_plain___module__;
            tmp_assign_source_40 = _PyDict_NewPresized( 15 );
            tmp_res = PyDict_SetItem( tmp_assign_source_40, tmp_dict_key_7, tmp_dict_value_7 );
            assert( !(tmp_res != 0) );
            tmp_dict_value_8 = const_str_digest_be78399d62208a7b25aea812a1645ac7;
            tmp_dict_key_8 = const_str_plain___doc__;
            tmp_res = PyDict_SetItem( tmp_assign_source_40, tmp_dict_key_8, tmp_dict_value_8 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_urllib3$contrib$pyopenssl_247_key___init__ );
            tmp_dict_value_9 = tmp_locals_urllib3$contrib$pyopenssl_247_key___init__;
            tmp_dict_key_9 = const_str_plain___init__;
            tmp_res = PyDict_SetItem( tmp_assign_source_40, tmp_dict_key_9, tmp_dict_value_9 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_urllib3$contrib$pyopenssl_247_key_fileno );
            tmp_dict_value_10 = tmp_locals_urllib3$contrib$pyopenssl_247_key_fileno;
            tmp_dict_key_10 = const_str_plain_fileno;
            tmp_res = PyDict_SetItem( tmp_assign_source_40, tmp_dict_key_10, tmp_dict_value_10 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_urllib3$contrib$pyopenssl_247_key__decref_socketios );
            tmp_dict_value_11 = tmp_locals_urllib3$contrib$pyopenssl_247_key__decref_socketios;
            tmp_dict_key_11 = const_str_plain__decref_socketios;
            tmp_res = PyDict_SetItem( tmp_assign_source_40, tmp_dict_key_11, tmp_dict_value_11 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_urllib3$contrib$pyopenssl_247_key_recv );
            tmp_dict_value_12 = tmp_locals_urllib3$contrib$pyopenssl_247_key_recv;
            tmp_dict_key_12 = const_str_plain_recv;
            tmp_res = PyDict_SetItem( tmp_assign_source_40, tmp_dict_key_12, tmp_dict_value_12 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_urllib3$contrib$pyopenssl_247_key_recv_into );
            tmp_dict_value_13 = tmp_locals_urllib3$contrib$pyopenssl_247_key_recv_into;
            tmp_dict_key_13 = const_str_plain_recv_into;
            tmp_res = PyDict_SetItem( tmp_assign_source_40, tmp_dict_key_13, tmp_dict_value_13 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_urllib3$contrib$pyopenssl_247_key_settimeout );
            tmp_dict_value_14 = tmp_locals_urllib3$contrib$pyopenssl_247_key_settimeout;
            tmp_dict_key_14 = const_str_plain_settimeout;
            tmp_res = PyDict_SetItem( tmp_assign_source_40, tmp_dict_key_14, tmp_dict_value_14 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_urllib3$contrib$pyopenssl_247_key__send_until_done );
            tmp_dict_value_15 = tmp_locals_urllib3$contrib$pyopenssl_247_key__send_until_done;
            tmp_dict_key_15 = const_str_plain__send_until_done;
            tmp_res = PyDict_SetItem( tmp_assign_source_40, tmp_dict_key_15, tmp_dict_value_15 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_urllib3$contrib$pyopenssl_247_key_sendall );
            tmp_dict_value_16 = tmp_locals_urllib3$contrib$pyopenssl_247_key_sendall;
            tmp_dict_key_16 = const_str_plain_sendall;
            tmp_res = PyDict_SetItem( tmp_assign_source_40, tmp_dict_key_16, tmp_dict_value_16 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_urllib3$contrib$pyopenssl_247_key_shutdown );
            tmp_dict_value_17 = tmp_locals_urllib3$contrib$pyopenssl_247_key_shutdown;
            tmp_dict_key_17 = const_str_plain_shutdown;
            tmp_res = PyDict_SetItem( tmp_assign_source_40, tmp_dict_key_17, tmp_dict_value_17 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_urllib3$contrib$pyopenssl_247_key_close );
            tmp_dict_value_18 = tmp_locals_urllib3$contrib$pyopenssl_247_key_close;
            tmp_dict_key_18 = const_str_plain_close;
            tmp_res = PyDict_SetItem( tmp_assign_source_40, tmp_dict_key_18, tmp_dict_value_18 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_urllib3$contrib$pyopenssl_247_key_getpeercert );
            tmp_dict_value_19 = tmp_locals_urllib3$contrib$pyopenssl_247_key_getpeercert;
            tmp_dict_key_19 = const_str_plain_getpeercert;
            tmp_res = PyDict_SetItem( tmp_assign_source_40, tmp_dict_key_19, tmp_dict_value_19 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_urllib3$contrib$pyopenssl_247_key__reuse );
            tmp_dict_value_20 = tmp_locals_urllib3$contrib$pyopenssl_247_key__reuse;
            tmp_dict_key_20 = const_str_plain__reuse;
            tmp_res = PyDict_SetItem( tmp_assign_source_40, tmp_dict_key_20, tmp_dict_value_20 );
            assert( !(tmp_res != 0) );
            CHECK_OBJECT( tmp_locals_urllib3$contrib$pyopenssl_247_key__drop );
            tmp_dict_value_21 = tmp_locals_urllib3$contrib$pyopenssl_247_key__drop;
            tmp_dict_key_21 = const_str_plain__drop;
            tmp_res = PyDict_SetItem( tmp_assign_source_40, tmp_dict_key_21, tmp_dict_value_21 );
            assert( !(tmp_res != 0) );
            goto try_return_handler_8;
        }
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT( (PyObject *)tmp_locals_urllib3$contrib$pyopenssl_247_key___init__ );
        Py_DECREF( tmp_locals_urllib3$contrib$pyopenssl_247_key___init__ );
        tmp_locals_urllib3$contrib$pyopenssl_247_key___init__ = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_urllib3$contrib$pyopenssl_247_key_fileno );
        Py_DECREF( tmp_locals_urllib3$contrib$pyopenssl_247_key_fileno );
        tmp_locals_urllib3$contrib$pyopenssl_247_key_fileno = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_urllib3$contrib$pyopenssl_247_key__decref_socketios );
        Py_DECREF( tmp_locals_urllib3$contrib$pyopenssl_247_key__decref_socketios );
        tmp_locals_urllib3$contrib$pyopenssl_247_key__decref_socketios = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_urllib3$contrib$pyopenssl_247_key_recv );
        Py_DECREF( tmp_locals_urllib3$contrib$pyopenssl_247_key_recv );
        tmp_locals_urllib3$contrib$pyopenssl_247_key_recv = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_urllib3$contrib$pyopenssl_247_key_recv_into );
        Py_DECREF( tmp_locals_urllib3$contrib$pyopenssl_247_key_recv_into );
        tmp_locals_urllib3$contrib$pyopenssl_247_key_recv_into = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_urllib3$contrib$pyopenssl_247_key_settimeout );
        Py_DECREF( tmp_locals_urllib3$contrib$pyopenssl_247_key_settimeout );
        tmp_locals_urllib3$contrib$pyopenssl_247_key_settimeout = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_urllib3$contrib$pyopenssl_247_key__send_until_done );
        Py_DECREF( tmp_locals_urllib3$contrib$pyopenssl_247_key__send_until_done );
        tmp_locals_urllib3$contrib$pyopenssl_247_key__send_until_done = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_urllib3$contrib$pyopenssl_247_key_sendall );
        Py_DECREF( tmp_locals_urllib3$contrib$pyopenssl_247_key_sendall );
        tmp_locals_urllib3$contrib$pyopenssl_247_key_sendall = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_urllib3$contrib$pyopenssl_247_key_shutdown );
        Py_DECREF( tmp_locals_urllib3$contrib$pyopenssl_247_key_shutdown );
        tmp_locals_urllib3$contrib$pyopenssl_247_key_shutdown = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_urllib3$contrib$pyopenssl_247_key_close );
        Py_DECREF( tmp_locals_urllib3$contrib$pyopenssl_247_key_close );
        tmp_locals_urllib3$contrib$pyopenssl_247_key_close = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_urllib3$contrib$pyopenssl_247_key_getpeercert );
        Py_DECREF( tmp_locals_urllib3$contrib$pyopenssl_247_key_getpeercert );
        tmp_locals_urllib3$contrib$pyopenssl_247_key_getpeercert = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_urllib3$contrib$pyopenssl_247_key__reuse );
        Py_DECREF( tmp_locals_urllib3$contrib$pyopenssl_247_key__reuse );
        tmp_locals_urllib3$contrib$pyopenssl_247_key__reuse = NULL;

        CHECK_OBJECT( (PyObject *)tmp_locals_urllib3$contrib$pyopenssl_247_key__drop );
        Py_DECREF( tmp_locals_urllib3$contrib$pyopenssl_247_key__drop );
        tmp_locals_urllib3$contrib$pyopenssl_247_key__drop = NULL;

        goto outline_result_3;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl );
        return MOD_RETURN_VALUE( NULL );
        outline_result_3:;
        assert( tmp_class_creation_2__class_dict == NULL );
        tmp_class_creation_2__class_dict = tmp_assign_source_40;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_54;
        nuitka_bool tmp_condition_result_7;
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


            exception_lineno = 247;

            goto try_except_handler_9;
        }
        tmp_condition_result_7 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_7 == NUITKA_BOOL_TRUE )
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
        tmp_assign_source_54 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
        if ( tmp_assign_source_54 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;

            goto try_except_handler_9;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_assign_source_54 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_54 );
        condexpr_end_2:;
        assert( tmp_class_creation_2__metaclass == NULL );
        tmp_class_creation_2__metaclass = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_name_3;
        PyObject *tmp_args_element_name_5;
        PyObject *tmp_args_element_name_6;
        PyObject *tmp_args_element_name_7;
        CHECK_OBJECT( tmp_class_creation_2__metaclass );
        tmp_called_name_3 = tmp_class_creation_2__metaclass;
        tmp_args_element_name_5 = const_str_plain_WrappedSocket;
        tmp_args_element_name_6 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_2__class_dict );
        tmp_args_element_name_7 = tmp_class_creation_2__class_dict;
        frame_0a680d72b2ee4e2063e1e0f9f2aa3976->m_frame.f_lineno = 247;
        {
            PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
            tmp_assign_source_55 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
        }

        if ( tmp_assign_source_55 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 247;

            goto try_except_handler_9;
        }
        assert( tmp_class_creation_2__class == NULL );
        tmp_class_creation_2__class = tmp_assign_source_55;
    }
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
    Py_DECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    {
        PyObject *tmp_assign_source_56;
        CHECK_OBJECT( tmp_class_creation_2__class );
        tmp_assign_source_56 = tmp_class_creation_2__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_WrappedSocket, tmp_assign_source_56 );
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

    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_mvar_value_29;
        int tmp_truth_name_1;
        tmp_mvar_value_29 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__fileobject );

        if (unlikely( tmp_mvar_value_29 == NULL ))
        {
            tmp_mvar_value_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__fileobject );
        }

        if ( tmp_mvar_value_29 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "_fileobject" );
            exception_tb = NULL;

            exception_lineno = 373;

            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE( tmp_mvar_value_29 );
        if ( tmp_truth_name_1 == -1 )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 373;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = tmp_truth_name_1 == 1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_8 == NUITKA_BOOL_TRUE )
        {
            goto branch_yes_6;
        }
        else
        {
            goto branch_no_6;
        }
        branch_yes_6:;
        {
            PyObject *tmp_assign_source_57;
            PyObject *tmp_defaults_3;
            tmp_defaults_3 = const_tuple_int_neg_1_tuple;
            Py_INCREF( tmp_defaults_3 );
            tmp_assign_source_57 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_19_makefile( tmp_defaults_3 );



            UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_makefile, tmp_assign_source_57 );
        }
        goto branch_end_6;
        branch_no_6:;
        {
            PyObject *tmp_assign_source_58;
            PyObject *tmp_mvar_value_30;
            tmp_mvar_value_30 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_backport_makefile );

            if (unlikely( tmp_mvar_value_30 == NULL ))
            {
                tmp_mvar_value_30 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_backport_makefile );
            }

            if ( tmp_mvar_value_30 == NULL )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "backport_makefile" );
                exception_tb = NULL;

                exception_lineno = 378;

                goto frame_exception_exit_1;
            }

            tmp_assign_source_58 = tmp_mvar_value_30;
            UPDATE_STRING_DICT0( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_makefile, tmp_assign_source_58 );
        }
        branch_end_6:;
    }
    {
        PyObject *tmp_assattr_name_1;
        PyObject *tmp_mvar_value_31;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_mvar_value_32;
        tmp_mvar_value_31 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_makefile );

        if (unlikely( tmp_mvar_value_31 == NULL ))
        {
            tmp_mvar_value_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_makefile );
        }

        CHECK_OBJECT( tmp_mvar_value_31 );
        tmp_assattr_name_1 = tmp_mvar_value_31;
        tmp_mvar_value_32 = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_WrappedSocket );

        if (unlikely( tmp_mvar_value_32 == NULL ))
        {
            tmp_mvar_value_32 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_WrappedSocket );
        }

        if ( tmp_mvar_value_32 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "name '%s' is not defined", "WrappedSocket" );
            exception_tb = NULL;

            exception_lineno = 380;

            goto frame_exception_exit_1;
        }

        tmp_assattr_target_1 = tmp_mvar_value_32;
        tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_makefile, tmp_assattr_name_1 );
        if ( tmp_result == false )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 380;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_59;
        {
            PyObject *tmp_set_locals_2;
            tmp_set_locals_2 = PyDict_New();
            locals_urllib3$contrib$pyopenssl_383 = tmp_set_locals_2;
        }
        tmp_dictset_value = const_str_digest_9b140d54e682de757186c632bf3beb69;
        tmp_res = PyDict_SetItem( locals_urllib3$contrib$pyopenssl_383, const_str_plain___module__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = const_str_digest_da6b5f185ded68c9e526279026e68fbc;
        tmp_res = PyDict_SetItem( locals_urllib3$contrib$pyopenssl_383, const_str_plain___doc__, tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_20___init__(  );



        tmp_res = PyDict_SetItem( locals_urllib3$contrib$pyopenssl_383, const_str_plain___init__, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        // Tried code:
        MAKE_OR_REUSE_FRAME( cache_frame_2b2b13d89fc5cfd1809f4b0721181c86_2, codeobj_2b2b13d89fc5cfd1809f4b0721181c86, module_urllib3$contrib$pyopenssl, 0 );
        frame_2b2b13d89fc5cfd1809f4b0721181c86_2 = cache_frame_2b2b13d89fc5cfd1809f4b0721181c86_2;

        // Push the new frame as the currently active one.
        pushFrameStack( frame_2b2b13d89fc5cfd1809f4b0721181c86_2 );

        // Mark the frame object as in use, ref count 1 will be up for reuse.
        assert( Py_REFCNT( frame_2b2b13d89fc5cfd1809f4b0721181c86_2 ) == 2 ); // Frame stack

        // Framed code:
        {
            PyObject *tmp_called_name_4;
            PyObject *tmp_args_element_name_8;
            tmp_called_name_4 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_8 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_21_options(  );



            frame_2b2b13d89fc5cfd1809f4b0721181c86_2->m_frame.f_lineno = 395;
            {
                PyObject *call_args[] = { tmp_args_element_name_8 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
            }

            Py_DECREF( tmp_args_element_name_8 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 395;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem( locals_urllib3$contrib$pyopenssl_383, const_str_plain_options, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 395;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_name_9;
            tmp_called_instance_3 = PyDict_GetItem( locals_urllib3$contrib$pyopenssl_383, const_str_plain_options );

            if ( tmp_called_instance_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "options" );
                exception_tb = NULL;

                exception_lineno = 399;

                goto frame_exception_exit_2;
            }

            if ( tmp_called_instance_3 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 399;

                goto frame_exception_exit_2;
            }
            tmp_args_element_name_9 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_22_options(  );



            frame_2b2b13d89fc5cfd1809f4b0721181c86_2->m_frame.f_lineno = 399;
            {
                PyObject *call_args[] = { tmp_args_element_name_9 };
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_3, const_str_plain_setter, call_args );
            }

            Py_DECREF( tmp_args_element_name_9 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 399;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem( locals_urllib3$contrib$pyopenssl_383, const_str_plain_options, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 399;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_name_5;
            PyObject *tmp_args_element_name_10;
            tmp_called_name_5 = (PyObject *)&PyProperty_Type;
            tmp_args_element_name_10 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_23_verify_mode(  );



            frame_2b2b13d89fc5cfd1809f4b0721181c86_2->m_frame.f_lineno = 404;
            {
                PyObject *call_args[] = { tmp_args_element_name_10 };
                tmp_dictset_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
            }

            Py_DECREF( tmp_args_element_name_10 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 404;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem( locals_urllib3$contrib$pyopenssl_383, const_str_plain_verify_mode, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 404;

                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_name_11;
            tmp_called_instance_4 = PyDict_GetItem( locals_urllib3$contrib$pyopenssl_383, const_str_plain_verify_mode );

            if ( tmp_called_instance_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED() )
            {

                exception_type = PyExc_NameError;
                Py_INCREF( exception_type );
                exception_value = PyString_FromFormat( "name '%s' is not defined", "verify_mode" );
                exception_tb = NULL;

                exception_lineno = 408;

                goto frame_exception_exit_2;
            }

            if ( tmp_called_instance_4 == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 408;

                goto frame_exception_exit_2;
            }
            tmp_args_element_name_11 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_24_verify_mode(  );



            frame_2b2b13d89fc5cfd1809f4b0721181c86_2->m_frame.f_lineno = 408;
            {
                PyObject *call_args[] = { tmp_args_element_name_11 };
                tmp_dictset_value = CALL_METHOD_WITH_ARGS1( tmp_called_instance_4, const_str_plain_setter, call_args );
            }

            Py_DECREF( tmp_args_element_name_11 );
            if ( tmp_dictset_value == NULL )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 408;

                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem( locals_urllib3$contrib$pyopenssl_383, const_str_plain_verify_mode, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            if ( tmp_res != 0 )
            {
                assert( ERROR_OCCURRED() );

                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


                exception_lineno = 408;

                goto frame_exception_exit_2;
            }
        }

#if 0
        RESTORE_FRAME_EXCEPTION( frame_2b2b13d89fc5cfd1809f4b0721181c86_2 );
#endif

        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;

        frame_exception_exit_2:;

#if 0
        RESTORE_FRAME_EXCEPTION( frame_2b2b13d89fc5cfd1809f4b0721181c86_2 );
#endif

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_2b2b13d89fc5cfd1809f4b0721181c86_2, exception_lineno );
        }
        else if ( exception_tb->tb_frame != &frame_2b2b13d89fc5cfd1809f4b0721181c86_2->m_frame )
        {
            exception_tb = ADD_TRACEBACK( exception_tb, frame_2b2b13d89fc5cfd1809f4b0721181c86_2, exception_lineno );
        }

        // Attachs locals to frame if any.
        Nuitka_Frame_AttachLocals(
            (struct Nuitka_FrameObject *)frame_2b2b13d89fc5cfd1809f4b0721181c86_2,
            type_description_2
        );


        // Release cached frame.
        if ( frame_2b2b13d89fc5cfd1809f4b0721181c86_2 == cache_frame_2b2b13d89fc5cfd1809f4b0721181c86_2 )
        {
            Py_DECREF( frame_2b2b13d89fc5cfd1809f4b0721181c86_2 );
        }
        cache_frame_2b2b13d89fc5cfd1809f4b0721181c86_2 = NULL;

        assertFrameObject( frame_2b2b13d89fc5cfd1809f4b0721181c86_2 );

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;

        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_11;
        skip_nested_handling_1:;
        tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_25_set_default_verify_paths(  );



        tmp_res = PyDict_SetItem( locals_urllib3$contrib$pyopenssl_383, const_str_plain_set_default_verify_paths, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_26_set_ciphers(  );



        tmp_res = PyDict_SetItem( locals_urllib3$contrib$pyopenssl_383, const_str_plain_set_ciphers, tmp_dictset_value );
        Py_DECREF( tmp_dictset_value );
        assert( !(tmp_res != 0) );
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = const_tuple_none_none_none_tuple;
            Py_INCREF( tmp_defaults_4 );
            tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_27_load_verify_locations( tmp_defaults_4 );



            tmp_res = PyDict_SetItem( locals_urllib3$contrib$pyopenssl_383, const_str_plain_load_verify_locations, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = const_tuple_none_none_tuple;
            Py_INCREF( tmp_defaults_5 );
            tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_28_load_cert_chain( tmp_defaults_5 );



            tmp_res = PyDict_SetItem( locals_urllib3$contrib$pyopenssl_383, const_str_plain_load_cert_chain, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        {
            PyObject *tmp_defaults_6;
            tmp_defaults_6 = const_tuple_false_true_true_none_tuple;
            Py_INCREF( tmp_defaults_6 );
            tmp_dictset_value = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_29_wrap_socket( tmp_defaults_6 );



            tmp_res = PyDict_SetItem( locals_urllib3$contrib$pyopenssl_383, const_str_plain_wrap_socket, tmp_dictset_value );
            Py_DECREF( tmp_dictset_value );
            assert( !(tmp_res != 0) );
        }
        tmp_assign_source_59 = locals_urllib3$contrib$pyopenssl_383;
        Py_INCREF( tmp_assign_source_59 );
        goto try_return_handler_11;
        // tried codes exits in all cases
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl );
        return MOD_RETURN_VALUE( NULL );
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF( locals_urllib3$contrib$pyopenssl_383 );
        locals_urllib3$contrib$pyopenssl_383 = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_7 = exception_type;
        exception_keeper_value_7 = exception_value;
        exception_keeper_tb_7 = exception_tb;
        exception_keeper_lineno_7 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF( locals_urllib3$contrib$pyopenssl_383 );
        locals_urllib3$contrib$pyopenssl_383 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_1;
        // End of try:
        // Return statement must have exited already.
        NUITKA_CANNOT_GET_HERE( urllib3$contrib$pyopenssl );
        return MOD_RETURN_VALUE( NULL );
        outline_exception_1:;
        exception_lineno = 383;
        goto try_except_handler_10;
        outline_result_4:;
        assert( tmp_class_creation_3__class_dict == NULL );
        tmp_class_creation_3__class_dict = tmp_assign_source_59;
    }
    {
        PyObject *tmp_assign_source_60;
        nuitka_bool tmp_condition_result_9;
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


            exception_lineno = 383;

            goto try_except_handler_10;
        }
        tmp_condition_result_9 = ( tmp_res != 0 ) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if ( tmp_condition_result_9 == NUITKA_BOOL_TRUE )
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
        tmp_assign_source_60 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
        if ( tmp_assign_source_60 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 383;

            goto try_except_handler_10;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_assign_source_60 = (PyObject *)&PyType_Type;
        Py_INCREF( tmp_assign_source_60 );
        condexpr_end_3:;
        assert( tmp_class_creation_3__metaclass == NULL );
        tmp_class_creation_3__metaclass = tmp_assign_source_60;
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_name_6;
        PyObject *tmp_args_element_name_12;
        PyObject *tmp_args_element_name_13;
        PyObject *tmp_args_element_name_14;
        CHECK_OBJECT( tmp_class_creation_3__metaclass );
        tmp_called_name_6 = tmp_class_creation_3__metaclass;
        tmp_args_element_name_12 = const_str_plain_PyOpenSSLContext;
        tmp_args_element_name_13 = const_tuple_type_object_tuple;
        CHECK_OBJECT( tmp_class_creation_3__class_dict );
        tmp_args_element_name_14 = tmp_class_creation_3__class_dict;
        frame_0a680d72b2ee4e2063e1e0f9f2aa3976->m_frame.f_lineno = 383;
        {
            PyObject *call_args[] = { tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
            tmp_assign_source_61 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
        }

        if ( tmp_assign_source_61 == NULL )
        {
            assert( ERROR_OCCURRED() );

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


            exception_lineno = 383;

            goto try_except_handler_10;
        }
        assert( tmp_class_creation_3__class == NULL );
        tmp_class_creation_3__class = tmp_assign_source_61;
    }
    goto try_end_7;
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

    Py_XDECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_0a680d72b2ee4e2063e1e0f9f2aa3976 );
#endif
    popFrameStack();

    assertFrameObject( frame_0a680d72b2ee4e2063e1e0f9f2aa3976 );

    goto frame_no_exception_2;

    frame_exception_exit_1:;
#if 1
    RESTORE_FRAME_EXCEPTION( frame_0a680d72b2ee4e2063e1e0f9f2aa3976 );
#endif

    if ( exception_tb == NULL )
    {
        exception_tb = MAKE_TRACEBACK( frame_0a680d72b2ee4e2063e1e0f9f2aa3976, exception_lineno );
    }
    else if ( exception_tb->tb_frame != &frame_0a680d72b2ee4e2063e1e0f9f2aa3976->m_frame )
    {
        exception_tb = ADD_TRACEBACK( exception_tb, frame_0a680d72b2ee4e2063e1e0f9f2aa3976, exception_lineno );
    }

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;

    frame_no_exception_2:;
    {
        PyObject *tmp_assign_source_62;
        CHECK_OBJECT( tmp_class_creation_3__class );
        tmp_assign_source_62 = tmp_class_creation_3__class;
        UPDATE_STRING_DICT0( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain_PyOpenSSLContext, tmp_assign_source_62 );
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

    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = MAKE_FUNCTION_urllib3$contrib$pyopenssl$$$function_30__verify_callback(  );



        UPDATE_STRING_DICT1( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain__verify_callback, tmp_assign_source_63 );
    }

#if _NUITKA_EXPERIMENTAL_PKGUTIL_ITERMODULES
#if 0 && 0
    {
        PyObject *path_value = GET_STRING_DICT_VALUE( moduledict_urllib3$contrib$pyopenssl, (Nuitka_StringObject *)const_str_plain___path__ );

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

    return MOD_RETURN_VALUE( module_urllib3$contrib$pyopenssl );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
